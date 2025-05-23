/*** Autogenerated by WIDL 10.0-rc2 from dlls/actxprxy/actxprxy_objsafe.idl - Do not edit ***/

#define __midl_proxy
#include "objbase.h"

#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif

#define USE_STUBLESS_PROXY
#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error This code needs a newer version of rpcproxy.h
#endif /* __RPCPROXY_H_VERSION__ */

#include "actxprxy_objsafe.h"

#define TYPE_FORMAT_STRING_SIZE 37
#define PROC_FORMAT_STRING_SIZE 101

typedef struct _MIDL_TYPE_FORMAT_STRING
{
    short Pad;
    unsigned char Format[TYPE_FORMAT_STRING_SIZE];
} MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
{
    short Pad;
    unsigned char Format[PROC_FORMAT_STRING_SIZE];
} MIDL_PROC_FORMAT_STRING;


static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;

static const MIDL_STUB_DESC Object_StubDesc;

/*****************************************************************************
 * IObjectSafety interface
 */
static const unsigned short IObjectSafety_FormatStringOffsetTable[] =
{
    0,  /* IObjectSafety::GetInterfaceSafetyOptions */
    50,  /* IObjectSafety::SetInterfaceSafetyOptions */
};

static const MIDL_STUBLESS_PROXY_INFO IObjectSafety_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IObjectSafety_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(5) _IObjectSafetyProxyVtbl =
{
    {
        &IObjectSafety_ProxyInfo,
        &IID_IObjectSafety,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* IObjectSafety::GetInterfaceSafetyOptions */
        (void *)-1,  /* IObjectSafety::SetInterfaceSafetyOptions */
    }
};

static const MIDL_SERVER_INFO IObjectSafety_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IObjectSafety_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _IObjectSafetyStubVtbl =
{
    {
        &IID_IObjectSafety,
        &IObjectSafety_ServerInfo,
        5,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

static const MIDL_STUB_DESC Object_StubDesc =
{
    0,
    NdrOleAllocate,
    NdrOleFree,
    {0}, 0, 0, 0, 0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x50200ca, /* MIDL Version 5.2.202 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    1,  /* Flags */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
};

#if !defined(__RPC_WIN64__)
#error Invalid build platform for this proxy.
#endif

static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
{
    0,
    {
/* 0 (procedure IObjectSafety::GetInterfaceSafetyOptions) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x28),	/* stack size = 40 */
        NdrFcShort(0x14),	/* client buffer = 20 */
        NdrFcShort(0x18),	/* server buffer = 24 */
        0x44,
        0x04,	/* 4 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 26 (parameter riid) */
        NdrFcShort(0x10a),	/* flags: must free, in, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x8),	/* type offset = 8 */
/* 32 (parameter pdwSupportedOptions) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x09,	/* FC_ULONG */
        0x0,
/* 38 (parameter pdwEnabledOptions) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x18),	/* stack offset = 24 */
        0x09,	/* FC_ULONG */
        0x0,
/* 44 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x20),	/* stack offset = 32 */
        0x08,	/* FC_LONG */
        0x0,
/* 50 (procedure IObjectSafety::SetInterfaceSafetyOptions) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
        NdrFcShort(0x28),	/* stack size = 40 */
        NdrFcShort(0x24),	/* client buffer = 36 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x44,
        0x04,	/* 4 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 76 (parameter riid) */
        NdrFcShort(0x10a),	/* flags: must free, in, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x8),	/* type offset = 8 */
/* 82 (parameter dwOptionSetMask) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 88 (parameter dwEnabledOptions) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x18),	/* stack offset = 24 */
        0x08,	/* FC_LONG */
        0x0,
/* 94 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x20),	/* stack offset = 32 */
        0x08,	/* FC_LONG */
        0x0,
        0x0
    }
};

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
{
    0,
    {
        NdrFcShort(0x0),
/* 2 (byte[8]) */
        0x1d,	/* FC_SMFARRAY */
        0x0,	/* 0 */
        NdrFcShort(0x8),	/* 8 */
        0x01,	/* FC_BYTE */
        0x5b,	/* FC_END */
/* 8 (IID) */
        0x15,	/* FC_STRUCT */
        0x3,	/* 3 */
        NdrFcShort(0x10),	/* 16 */
        0x08,	/* FC_LONG */
        0x06,	/* FC_SHORT */
        0x06,	/* FC_SHORT */
        0x4c,	/* FC_EMBEDDED_COMPLEX */
        0x0,
        NdrFcShort(0xfff1),	/* Offset= -15 (2) */
        0x5b,	/* FC_END */
/* 20 (REFIID) */
        0x11, 0x0,		/* FC_RP */
        NdrFcShort(0xfff2),	/* Offset= -14 (8) */
/* 24 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 28 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 32 (REFIID) */
        0x11, 0x0,		/* FC_RP */
        NdrFcShort(0xffe6),	/* Offset= -26 (8) */
        0x0
    }
};

static const CInterfaceProxyVtbl* const _actxprxy_objsafe_ProxyVtblList[] =
{
    (const CInterfaceProxyVtbl*)&_IObjectSafetyProxyVtbl,
    0
};

static const CInterfaceStubVtbl* const _actxprxy_objsafe_StubVtblList[] =
{
    &_IObjectSafetyStubVtbl,
    0
};

static PCInterfaceName const _actxprxy_objsafe_InterfaceNamesList[] =
{
    "IObjectSafety",
    0
};

static int __stdcall _actxprxy_objsafe_IID_Lookup(const IID* pIID, int* pIndex)
{
    int low = 0, high = 0;

    while (low <= high)
    {
        int pos = (low + high) / 2;
        int res = IID_GENERIC_CHECK_IID(_actxprxy_objsafe, pIID, pos);
        if (!res) { *pIndex = pos; return 1; }
        if (res > 0) low = pos + 1;
        else high = pos - 1;
    }
    return 0;
}

const ExtendedProxyFileInfo actxprxy_objsafe_ProxyFileInfo =
{
    (const PCInterfaceProxyVtblList*)_actxprxy_objsafe_ProxyVtblList,
    (const PCInterfaceStubVtblList*)_actxprxy_objsafe_StubVtblList,
    _actxprxy_objsafe_InterfaceNamesList,
    0,
    _actxprxy_objsafe_IID_Lookup,
    1,
    2,
    0,
    0,
    0,
    0
};
