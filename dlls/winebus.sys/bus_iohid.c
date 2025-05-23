/*  Bus like function for mac HID devices
 *
 * Copyright 2016 CodeWeavers, Aric Stewart
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */
#include "config.h"

#if defined(__cplusplus)
extern "C" 
{
#endif

#if 0
#pragma makedep unix
#endif

#define _WIN32
#include "../../libs/vkd3d/include/private/vkd3d_common.h"
#if defined(__APPLE__)
# undef _WIN32
#endif
#include "wine/hid.h"
#include "wine/list.h"
#include "unixlib.h"
#include "unix_private.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <pthread/pthread.h>
#if defined(dispatch_block_t)
# undef dispatch_block_t
#endif
#define dispatch_block_t dispatch_io_t  

#ifdef __APPLE__
#define DWORD UInt32
#define LPDWORD UInt32*
#define LONG SInt32
#define LPLONG SInt32*
#define HRESULT __carbon_HRESULT
#include <IOKit/hid/IOHIDProperties.h>
#include <IOKit/hid/IOHIDDevice.h>
#include <IOKit/hid/IOHIDEventServiceTypes.h>
#include <IOKit/hid/IOHIDUsageTables.h>
#include <IOKit/IOReturn.h>
#undef ULONG
#undef E_INVALIDARG
#undef E_OUTOFMEMORY
#undef E_HANDLE
#undef E_ACCESSDENIED
#undef E_UNEXPECTED
#undef E_FAIL
#undef E_ABORT
#undef E_POINTER
#undef E_NOINTERFACE
#undef E_NOTIMPL
#undef S_FALSE
#undef S_OK
#undef HRESULT_FACILITY
#undef IS_ERROR
#undef FAILED
#undef SUCCEEDED
#undef MAKE_HRESULT
#undef HRESULT
#undef STDMETHODCALLTYPE
#undef DWORD
#undef LPDWORD
#undef LONG
#undef LPLONG
#undef E_PENDING
#undef PAGE_SHIFT
#endif /* __APPLE__ */

WINE_DEFAULT_DEBUG_CHANNEL(otherside);
#ifdef __APPLE__
static pthread_mutex_t iohid_cs = PTHREAD_MUTEX_INITIALIZER;

static IOHIDDeviceRef hid_manager;
static CFRunLoopRef run_loop;
static struct list event_queue = LIST_INIT(event_queue);
static struct list device_list = LIST_INIT(device_list);
static struct iohid_bus_options options;

struct iohid_device
{
    struct unix_device unix_device;
    IOHIDDeviceRef device;
    uint8_t *buffer;
};

static inline struct iohid_device *impl_from_unix_device(struct unix_device *iface)
{
    return CONTAINING_RECORD(iface, struct iohid_device, unix_device);
}

static struct iohid_device *find_device_from_iohid(IOHIDDeviceRef device)
{
    struct iohid_device *impl;

    LIST_FOR_EACH_ENTRY(impl, &device_list, struct iohid_device, unix_device.entry)
        if (impl->device == device) return impl;

    return NULL;
}

static void CFStringToWSTR(CFStringRef cstr, LPWSTR wstr, int length)
{
    int len = min(CFStringGetLength(cstr), length - 1);
    CFStringGetCharacters(cstr, CFRangeMake(0, len), (UniChar*)wstr);
    wstr[len] = 0;
}

static DWORD CFNumberToDWORD(CFNumberRef num)
{
    int dwNum = 0;
    if (num)
        CFNumberGetValue(num, kCFNumberIntType, &dwNum);
    return dwNum;
}

static void handle_IOHIDDeviceIOHIDReportCallback(void *context,
        IOReturn result, void *sender, IOHIDReportType type,
        uint32_t reportID, uint8_t *report, CFIndex report_length)
{
    struct unix_device *iface = (struct unix_device *)context;
    bus_event_queue_input_report(event_queue, iface, report, report_length);
}

static void iohid_device_destroy(struct unix_device *iface)
{
}

static IOReturn iohid_device_start(struct unix_device *iface)
{
    DWORD length;
    struct iohid_device *impl = impl_from_unix_device(iface);
    CFNumberRef num;

    num = IOHIDDeviceGetProperty(impl->device, CFSTR(kIOHIDMaxInputReportSizeKey));
    length = CFNumberToDWORD(num);
    impl->buffer = malloc(length);

    IOHIDDeviceRegisterInputReportCallback(impl->device, impl->buffer, length, handle_IOHIDDeviceIOHIDReportCallback, iface);
    return STATUS_SUCCESS;
}

static void iohid_device_stop(struct unix_device *iface)
{
    struct iohid_device *impl = impl_from_unix_device(iface);

    IOHIDDeviceRegisterInputReportCallback(impl->device, NULL, 0, NULL, NULL);

    pthread_mutex_lock(&iohid_cs);
    list_remove(&impl->unix_device.entry);
    pthread_mutex_unlock(&iohid_cs);
}

static IOReturn iohid_device_get_report_descriptor(struct unix_device *iface, BYTE *buffer,
                                                   UINT length, UINT *out_length)
{
    struct iohid_device *impl = impl_from_unix_device(iface);
    CFDataRef data = IOHIDDeviceGetProperty(impl->device, CFSTR(kIOHIDReportDescriptorKey));
    int data_length = CFDataGetLength(data);
    const UINT8 *ptr;

    *out_length = data_length;
    if (length < data_length)
        return STATUS_BUFFER_TOO_SMALL;

    ptr = CFDataGetBytePtr(data);
    memcpy(buffer, ptr, data_length);
    return STATUS_SUCCESS;
}

static void iohid_device_set_output_report(struct unix_device *iface, HID_XFER_PACKET *packet, IO_STATUS_BLOCK *io)
{
    IOReturn result;
    struct iohid_device *impl = impl_from_unix_device(iface);
    result = IOHIDDeviceSetReport(impl->device, kIOHIDReportTypeOutput, packet->reportId,
                                  packet->reportBuffer, packet->reportBufferLen);
    if (result == kIOReturnSuccess)
    {
        io->Information = packet->reportBufferLen;
        io->Status = STATUS_SUCCESS;
    }
    else
    {
        io->Information = 0;
        io->Status = STATUS_UNSUCCESSFUL;
    }
}

static void iohid_device_get_feature_report(struct unix_device *iface, HID_XFER_PACKET *packet, IO_STATUS_BLOCK *io)
{
    IOReturn ret;
    CFIndex report_length = packet->reportBufferLen;
    struct iohid_device *impl = impl_from_unix_device(iface);

    ret = IOHIDDeviceGetReport(impl->device, kIOHIDReportTypeFeature, packet->reportId,
                               packet->reportBuffer, &report_length);
    if (ret == kIOReturnSuccess)
    {
        io->Information = report_length;
        io->Status = STATUS_SUCCESS;
    }
    else
    {
        io->Information = 0;
        io->Status = STATUS_UNSUCCESSFUL;
    }
}

static void iohid_device_set_feature_report(struct unix_device *iface, HID_XFER_PACKET *packet, IO_STATUS_BLOCK *io)
{
    IOReturn result;
    struct iohid_device *impl = impl_from_unix_device(iface);

    result = IOHIDDeviceSetReport(impl->device, kIOHIDReportTypeFeature, packet->reportId,
                                  packet->reportBuffer, packet->reportBufferLen);
    if (result == kIOReturnSuccess)
    {
        io->Information = packet->reportBufferLen;
        io->Status = STATUS_SUCCESS;
    }
    else
    {
        io->Information = 0;
        io->Status = STATUS_UNSUCCESSFUL;
    }
}

static const struct raw_device_vtbl iohid_device_vtbl =
{
    iohid_device_destroy,
    iohid_device_start,
    iohid_device_stop,
    iohid_device_get_report_descriptor,
    iohid_device_set_output_report,
    iohid_device_get_feature_report,
    iohid_device_set_feature_report,
};

static void handle_DeviceMatchingCallback(void *context, IOReturn result, void *sender, IOHIDDeviceRef device)
{
    struct device_desc desc =
    {
        .input = -1, .is_hidraw = TRUE,
        .serialnumber = {'0','0','0','0',0},
    };
    struct iohid_device *impl;
    USAGE_AND_PAGE usages;
    CFStringRef str;

    usages.UsagePage = CFNumberToDWORD(IOHIDDeviceGetProperty(device, CFSTR(kIOHIDPrimaryUsagePageKey)));
    usages.Usage = CFNumberToDWORD(IOHIDDeviceGetProperty(device, CFSTR(kIOHIDPrimaryUsageKey)));

    desc.vid = CFNumberToDWORD(IOHIDDeviceGetProperty(device, CFSTR(kIOHIDVendorIDKey)));
    desc.pid = CFNumberToDWORD(IOHIDDeviceGetProperty(device, CFSTR(kIOHIDProductIDKey)));
    desc.version = CFNumberToDWORD(IOHIDDeviceGetProperty(device, CFSTR(kIOHIDVersionNumberKey)));
    desc.uid = CFNumberToDWORD(IOHIDDeviceGetProperty(device, CFSTR(kIOHIDLocationIDKey)));

    if ((str = IOHIDDeviceGetProperty(device, CFSTR(kIOHIDTransportKey))))
        desc.is_bluetooth = !CFStringCompare(str, CFSTR(kIOHIDTransportBluetoothValue), 0) ||
                            !CFStringCompare(str, CFSTR(kIOHIDTransportBluetoothLowEnergyValue), 0);

    if (usages.UsagePage != HID_USAGE_PAGE_GENERIC ||
        !(usages.Usage == HID_USAGE_GENERIC_JOYSTICK || usages.Usage == HID_USAGE_GENERIC_GAMEPAD))
    {
        /* winebus isn't currently meant to handle anything but these, and
         * opening keyboards, mice, or the Touch Bar on older MacBooks triggers
         * a permissions dialog for input monitoring.
         */
        ERR("Ignoring HID device %p (vid %04x, pid %04x): not a joystick or gamepad\n", device, desc.vid, desc.pid);
        return;
    }

    if (IOHIDDeviceOpen(device, 0) != kIOReturnSuccess)
    {
        ERR("Failed to open HID device %p (vid %04x, pid %04x)\n", device, desc.vid, desc.pid);
        return;
    }
    IOHIDDeviceScheduleWithRunLoop(device, CFRunLoopGetCurrent(), kCFRunLoopDefaultMode);

    str = IOHIDDeviceGetProperty(device, CFSTR(kIOHIDManufacturerKey));
    if (str) CFStringToWSTR(str, desc.manufacturer, ARRAYSIZE(desc.manufacturer));
    str = IOHIDDeviceGetProperty(device, CFSTR(kIOHIDProductKey));
    if (str) CFStringToWSTR(str, desc.product, ARRAYSIZE(desc.product));
    str = IOHIDDeviceGetProperty(device, CFSTR(kIOHIDSerialNumberKey));
    if (str) CFStringToWSTR(str, desc.serialnumber, ARRAYSIZE(desc.serialnumber));

    if (IOHIDDeviceConformsTo(device, kHIDPage_GenericDesktop, kHIDUsage_GD_GamePad) ||
       IOHIDDeviceConformsTo(device, kHIDPage_GenericDesktop, kHIDUsage_GD_Joystick))
    {
        if (is_xbox_gamepad(desc.vid, desc.pid))
            desc.is_gamepad = TRUE;
    }

    TRACE("dev %p, desc %s.\n", device, debugstr_device_desc(&desc));

    if (!(impl = raw_device_create(&iohid_device_vtbl, sizeof(struct iohid_device)))) return;
    list_add_tail(&device_list, &impl->unix_device.entry);
    impl->device = device;
    impl->buffer = NULL;

    bus_event_queue_device_created(event_queue, &impl->unix_device, &desc);
}

static void handle_RemovalCallback(void *context, IOReturn result, void *sender, IOHIDDeviceRef device)
{
    struct iohid_device *impl;

    TRACE("OS/X IOHID Device Removed %p\n", device);
    IOHIDDeviceRegisterInputReportCallback(device, NULL, 0, NULL, NULL);
    /* Note: Yes, we leak the buffer. But according to research there is no
             safe way to deallocate that buffer. */
    IOHIDDeviceUnscheduleFromRunLoop(device, CFRunLoopGetCurrent(), kCFRunLoopDefaultMode);
    IOHIDDeviceClose(device, 0);

    impl = find_device_from_iohid(device);
    if (impl) bus_event_queue_device_removed(event_queue, &impl->unix_device);
    else WARN("failed to find device for iohid device %p\n", device);
}

IOReturn iohid_bus_init(void *args)
{
    TRACE("args %p\n", args);

    options = *(struct iohid_bus_options *)args;
    hid_manager = IOHIDDeviceCreate(kCFAllocatorDefault, 0L);

    if (!hid_manager)
    {
        ERR("IOHID manager creation failed\n");
        return STATUS_UNSUCCESSFUL;
    }

    run_loop = CFRunLoopGetCurrent();

    IOHIDDeviceSetInputValueMatching(hid_manager, NULL);
    IOHIDDeviceRegisterRemovalCallback(hid_manager, NULL, NULL);
    IOHIDDeviceScheduleWithRunLoop(hid_manager, run_loop, kCFRunLoopDefaultMode);
    return STATUS_SUCCESS;
}

IOReturn iohid_bus_wait(void *args)
{
    struct bus_event *result = args;
    CFRunLoopRunResult ret;

    /* cleanup previously returned event */
    bus_event_cleanup(result);

    do
    {
        if (bus_event_queue_pop(event_queue, result)) return STATUS_PENDING;
        pthread_mutex_lock(&iohid_cs);
        ret = CFRunLoopRunInMode(kCFRunLoopDefaultMode, 10, TRUE);
        pthread_mutex_unlock(&iohid_cs);
    } while (ret != kCFRunLoopRunStopped);

    TRACE("IOHID main loop exiting\n");
    bus_event_queue_destroy(event_queue);
    IOHIDDeviceRegisterRemovalCallback(hid_manager, NULL, NULL);
    CFRelease(hid_manager);
    return STATUS_SUCCESS;
}

IOReturn iohid_bus_stop(void *args)
{
    if (!run_loop) return STATUS_SUCCESS;

    IOHIDDeviceUnscheduleFromRunLoop(hid_manager, (CFRunLoopRef) run_loop, (CFStringRef) kCFRunLoopDefaultMode);
    CFRunLoopStop(run_loop);
    return STATUS_SUCCESS;
}

#else

IOReturn iohid_bus_init(void *args)
{
    WARN("IOHID support not compiled in!\n");
    return STATUS_NOT_IMPLEMENTED;
}

IOReturn iohid_bus_wait(void *args)
{
    WARN("IOHID support not compiled in!\n");
    return STATUS_NOT_IMPLEMENTED;
}

IOReturn iohid_bus_stop(void *args)
{
    WARN("IOHID support not compiled in!\n");
    return STATUS_NOT_IMPLEMENTED;
}

#endif /* __APPLE__ */
#if defined(__cplusplus)
}
#endif
