/*** Autogenerated by WIDL 10.0-rc2 from include/wine/plugplay.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __plugplay_h__
#define __plugplay_h__

/* Forward declarations */

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#if 0
typedef void *HDEVNOTIFY;
typedef struct _DEV_BROADCAST_HDR DEV_BROADCAST_HDR;
#else
#include "dbt.h"
#endif
typedef DWORD (__stdcall *device_notify_callback)(HANDLE handle,DWORD flags,DEV_BROADCAST_HDR *header);
HDEVNOTIFY __stdcall  I_ScRegisterDeviceNotification(HANDLE handle,DEV_BROADCAST_HDR *filter,device_notify_callback callback);

BOOL __stdcall  I_ScUnregisterDeviceNotification(HDEVNOTIFY handle);

/*****************************************************************************
 * plugplay interface (v0.0)
 */
#ifndef __plugplay_INTERFACE_DEFINED__
#define __plugplay_INTERFACE_DEFINED__

extern handle_t plugplay_binding_handle;
extern RPC_IF_HANDLE plugplay_v0_0_c_ifspec;
extern RPC_IF_HANDLE plugplay_v0_0_s_ifspec;
typedef void *plugplay_rpc_handle;
plugplay_rpc_handle __cdecl plugplay_register_listener(
    void);

DWORD __cdecl plugplay_get_event(
    plugplay_rpc_handle handle,
    WCHAR **path,
    BYTE **data,
    unsigned int *size);

void __cdecl plugplay_unregister_listener(
    plugplay_rpc_handle handle);

void __cdecl plugplay_send_event(
    const WCHAR *path,
    DWORD event_code,
    const BYTE *data,
    unsigned int size);


#endif  /* __plugplay_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

void __RPC_USER plugplay_rpc_handle_rundown(plugplay_rpc_handle);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __plugplay_h__ */
