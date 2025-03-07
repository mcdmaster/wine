/*** Autogenerated by WIDL 10.0-rc2 from dlls/actxprxy/actxprxy_htiframe.idl - Do not edit ***/

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

#include "actxprxy_htiframe.h"

#define TYPE_FORMAT_STRING_SIZE 227
#define PROC_FORMAT_STRING_SIZE 683

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
 * ITargetNotify interface
 */
static const unsigned short ITargetNotify_FormatStringOffsetTable[] =
{
    0,  /* ITargetNotify::OnCreate */
    44,  /* ITargetNotify::OnReuse */
};

static const MIDL_STUBLESS_PROXY_INFO ITargetNotify_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITargetNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(5) _ITargetNotifyProxyVtbl =
{
    {
        &ITargetNotify_ProxyInfo,
        &IID_ITargetNotify,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* ITargetNotify::OnCreate */
        (void *)-1,  /* ITargetNotify::OnReuse */
    }
};

static const MIDL_SERVER_INFO ITargetNotify_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITargetNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _ITargetNotifyStubVtbl =
{
    {
        &IID_ITargetNotify,
        &ITargetNotify_ServerInfo,
        5,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

/*****************************************************************************
 * ITargetNotify2 interface
 */
static const unsigned short ITargetNotify2_FormatStringOffsetTable[] =
{
    0,  /* ITargetNotify::OnCreate */
    44,  /* ITargetNotify::OnReuse */
    82,  /* ITargetNotify2::GetOptionString */
};

static const MIDL_STUBLESS_PROXY_INFO ITargetNotify2_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITargetNotify2_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(6) _ITargetNotify2ProxyVtbl =
{
    {
        &ITargetNotify2_ProxyInfo,
        &IID_ITargetNotify2,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* ITargetNotify::OnCreate */
        (void *)-1,  /* ITargetNotify::OnReuse */
        (void *)-1,  /* ITargetNotify2::GetOptionString */
    }
};

static const MIDL_SERVER_INFO ITargetNotify2_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITargetNotify2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _ITargetNotify2StubVtbl =
{
    {
        &IID_ITargetNotify2,
        &ITargetNotify2_ServerInfo,
        6,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

/*****************************************************************************
 * ITargetFrame2 interface
 */
static const unsigned short ITargetFrame2_FormatStringOffsetTable[] =
{
    120,  /* ITargetFrame2::SetFrameName */
    158,  /* ITargetFrame2::GetFrameName */
    196,  /* ITargetFrame2::GetParentFrame */
    234,  /* ITargetFrame2::SetFrameSrc */
    272,  /* ITargetFrame2::GetFrameSrc */
    310,  /* ITargetFrame2::GetFramesContainer */
    348,  /* ITargetFrame2::SetFrameOptions */
    386,  /* ITargetFrame2::GetFrameOptions */
    424,  /* ITargetFrame2::SetFrameMargins */
    468,  /* ITargetFrame2::GetFrameMargins */
    512,  /* ITargetFrame2::FindFrame */
    562,  /* ITargetFrame2::GetTargetAlias */
};

static const MIDL_STUBLESS_PROXY_INFO ITargetFrame2_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITargetFrame2_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(15) _ITargetFrame2ProxyVtbl =
{
    {
        &ITargetFrame2_ProxyInfo,
        &IID_ITargetFrame2,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* ITargetFrame2::SetFrameName */
        (void *)-1,  /* ITargetFrame2::GetFrameName */
        (void *)-1,  /* ITargetFrame2::GetParentFrame */
        (void *)-1,  /* ITargetFrame2::SetFrameSrc */
        (void *)-1,  /* ITargetFrame2::GetFrameSrc */
        (void *)-1,  /* ITargetFrame2::GetFramesContainer */
        (void *)-1,  /* ITargetFrame2::SetFrameOptions */
        (void *)-1,  /* ITargetFrame2::GetFrameOptions */
        (void *)-1,  /* ITargetFrame2::SetFrameMargins */
        (void *)-1,  /* ITargetFrame2::GetFrameMargins */
        (void *)-1,  /* ITargetFrame2::FindFrame */
        (void *)-1,  /* ITargetFrame2::GetTargetAlias */
    }
};

static const MIDL_SERVER_INFO ITargetFrame2_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITargetFrame2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _ITargetFrame2StubVtbl =
{
    {
        &IID_ITargetFrame2,
        &ITargetFrame2_ServerInfo,
        15,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

/*****************************************************************************
 * ITargetContainer interface
 */
static const unsigned short ITargetContainer_FormatStringOffsetTable[] =
{
    606,  /* ITargetContainer::GetFrameUrl */
    644,  /* ITargetContainer::GetFramesContainer */
};

static const MIDL_STUBLESS_PROXY_INFO ITargetContainer_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITargetContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(5) _ITargetContainerProxyVtbl =
{
    {
        &ITargetContainer_ProxyInfo,
        &IID_ITargetContainer,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* ITargetContainer::GetFrameUrl */
        (void *)-1,  /* ITargetContainer::GetFramesContainer */
    }
};

static const MIDL_SERVER_INFO ITargetContainer_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITargetContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _ITargetContainerStubVtbl =
{
    {
        &IID_ITargetContainer,
        &ITargetContainer_ServerInfo,
        5,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[] =
{
    {
        (USER_MARSHAL_SIZING_ROUTINE)BSTR_UserSize,
        (USER_MARSHAL_MARSHALLING_ROUTINE)BSTR_UserMarshal,
        (USER_MARSHAL_UNMARSHALLING_ROUTINE)BSTR_UserUnmarshal,
        (USER_MARSHAL_FREEING_ROUTINE)BSTR_UserFree
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
    UserMarshalRoutines,
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
/* 0 (procedure ITargetNotify::OnCreate) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x20),	/* stack size = 32 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x03,	/* 3 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 26 (parameter pUnkDestination) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x2),	/* type offset = 2 */
/* 32 (parameter cbCookie) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 38 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x18),	/* stack offset = 24 */
        0x08,	/* FC_LONG */
        0x0,
/* 44 (procedure ITargetNotify::OnReuse) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 70 (parameter pUnkDestination) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x14),	/* type offset = 20 */
/* 76 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 82 (procedure ITargetNotify2::GetOptionString) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x5),	/* method 5 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x47,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 108 (parameter pbstrOptions) */
        NdrFcShort(0x11b),	/* flags: must size, must free, in, out, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x40),	/* type offset = 64 */
/* 114 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 120 (procedure ITargetFrame2::SetFrameName) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 146 (parameter pszFrameName) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x50),	/* type offset = 80 */
/* 152 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 158 (procedure ITargetFrame2::GetFrameName) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 184 (parameter ppszFrameName) */
        NdrFcShort(0x2013),	/* flags: must size, must free, out, srv size=8 */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x56),	/* type offset = 86 */
/* 190 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 196 (procedure ITargetFrame2::GetParentFrame) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x5),	/* method 5 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 222 (parameter ppunkParent) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x6c),	/* type offset = 108 */
/* 228 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 234 (procedure ITargetFrame2::SetFrameSrc) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x6),	/* method 6 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 260 (parameter pszFrameSrc) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x72),	/* type offset = 114 */
/* 266 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 272 (procedure ITargetFrame2::GetFrameSrc) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x7),	/* method 7 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 298 (parameter ppszFrameSrc) */
        NdrFcShort(0x2013),	/* flags: must size, must free, out, srv size=8 */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x78),	/* type offset = 120 */
/* 304 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 310 (procedure ITargetFrame2::GetFramesContainer) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x8),	/* method 8 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 336 (parameter ppContainer) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x8e),	/* type offset = 142 */
/* 342 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 348 (procedure ITargetFrame2::SetFrameOptions) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x9),	/* method 9 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x44,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 374 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 380 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 386 (procedure ITargetFrame2::GetFrameOptions) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xa),	/* method 10 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x10),	/* server buffer = 16 */
        0x44,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 412 (parameter pdwFlags) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x09,	/* FC_ULONG */
        0x0,
/* 418 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 424 (procedure ITargetFrame2::SetFrameMargins) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xb),	/* method 11 */
        NdrFcShort(0x20),	/* stack size = 32 */
        NdrFcShort(0x10),	/* client buffer = 16 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x44,
        0x03,	/* 3 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 450 (parameter dwWidth) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 456 (parameter dwHeight) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 462 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x18),	/* stack offset = 24 */
        0x08,	/* FC_LONG */
        0x0,
/* 468 (procedure ITargetFrame2::GetFrameMargins) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xc),	/* method 12 */
        NdrFcShort(0x20),	/* stack size = 32 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x18),	/* server buffer = 24 */
        0x44,
        0x03,	/* 3 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 494 (parameter pdwWidth) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x09,	/* FC_ULONG */
        0x0,
/* 500 (parameter pdwHeight) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x09,	/* FC_ULONG */
        0x0,
/* 506 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x18),	/* stack offset = 24 */
        0x08,	/* FC_LONG */
        0x0,
/* 512 (procedure ITargetFrame2::FindFrame) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xd),	/* method 13 */
        NdrFcShort(0x28),	/* stack size = 40 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x47,
        0x04,	/* 4 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 538 (parameter pszTargetName) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x9e),	/* type offset = 158 */
/* 544 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 550 (parameter ppunkTargetFrame) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x18),	/* stack offset = 24 */
        NdrFcShort(0xb4),	/* type offset = 180 */
/* 556 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x20),	/* stack offset = 32 */
        0x08,	/* FC_LONG */
        0x0,
/* 562 (procedure ITargetFrame2::GetTargetAlias) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xe),	/* method 14 */
        NdrFcShort(0x20),	/* stack size = 32 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x47,
        0x03,	/* 3 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 588 (parameter pszTargetName) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0xb8),	/* type offset = 184 */
/* 594 (parameter ppszTargetAlias) */
        NdrFcShort(0x2013),	/* flags: must size, must free, out, srv size=8 */
        NdrFcShort(0x10),	/* stack offset = 16 */
        NdrFcShort(0xc0),	/* type offset = 192 */
/* 600 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x18),	/* stack offset = 24 */
        0x08,	/* FC_LONG */
        0x0,
/* 606 (procedure ITargetContainer::GetFrameUrl) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 632 (parameter ppszFrameSrc) */
        NdrFcShort(0x2013),	/* flags: must size, must free, out, srv size=8 */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0xc8),	/* type offset = 200 */
/* 638 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 644 (procedure ITargetContainer::GetFramesContainer) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x0a,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 670 (parameter ppContainer) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0xde),	/* type offset = 222 */
/* 676 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
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
/* 2 (IUnknown *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x00000000),
        NdrFcShort(0x0000),
        NdrFcShort(0x0000),
        0xc0,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x46,

/* 20 (IUnknown *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x00000000),
        NdrFcShort(0x0000),
        NdrFcShort(0x0000),
        0xc0,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x46,

/* 38 (unsigned short[]) */
        0x1b,	/* FC_CARRAY */
        0x1,	/* 1 */
        NdrFcShort(0x2),	/* 2 */
        0x9,	/* Corr desc: field clSize, FC_ULONG */
        0x0,	/* no operators */
        NdrFcShort(0xfffc),	/* offset = -4 */
        NdrFcShort(0x1),
        0x06,	/* FC_SHORT */
        0x5b,	/* FC_END */
/* 50 (FLAGGED_WORD_BLOB) */
        0x17,	/* FC_CSTRUCT */
        0x3,	/* 3 */
        NdrFcShort(0x8),	/* 8 */
        NdrFcShort(0xfff0),	/* Offset= -16 (38) */
        0x08,	/* FC_LONG */
        0x08,	/* FC_LONG */
        0x5c,	/* FC_PAD */
        0x5b,	/* FC_END */
/* 60 (wireBSTR) */
        0x12, 0x0,		/* FC_UP */
        NdrFcShort(0xfff4),	/* Offset= -12 (50) */
/* 64 (BSTR) */
        0xb4,	/* FC_USER_MARSHAL */
        0x83,	/* Alignment= 3, Flags= 80 */
        NdrFcShort(0x0),	/* Function offset= 0 */
        NdrFcShort(0x8),	/* 8 */
        NdrFcShort(0x0),	/* 0 */
        NdrFcShort(0xfff4),	/* Offset= -12 (60) */
/* 74 (BSTR *) */
        0x11, 0x0,		/* FC_RP */
        NdrFcShort(0xfff4),	/* Offset= -12 (64) */
/* 78 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 80 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 82 (LPWSTR) */
        0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 84 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 86 (LPWSTR *) */
        0x11, 0x14,		/* FC_RP [allocated_on_stack] [pointer_deref] */
        NdrFcShort(0xfffa),	/* Offset= -6 (82) */
/* 90 (IUnknown *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x00000000),
        NdrFcShort(0x0000),
        NdrFcShort(0x0000),
        0xc0,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x46,

/* 108 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (90) */
/* 112 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 114 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 116 (LPWSTR) */
        0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 118 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 120 (LPWSTR *) */
        0x11, 0x14,		/* FC_RP [allocated_on_stack] [pointer_deref] */
        NdrFcShort(0xfffa),	/* Offset= -6 (116) */
/* 124 (IOleContainer *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x0000011b),
        NdrFcShort(0x0000),
        NdrFcShort(0x0000),
        0xc0,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x46,

/* 142 (IOleContainer **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (124) */
/* 146 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 150 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 154 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 158 (LPCWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 160 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 162 (IUnknown *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x00000000),
        NdrFcShort(0x0000),
        NdrFcShort(0x0000),
        0xc0,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x46,

/* 180 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (162) */
/* 184 (LPCWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 186 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 188 (LPWSTR) */
        0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 190 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 192 (LPWSTR *) */
        0x11, 0x14,		/* FC_RP [allocated_on_stack] [pointer_deref] */
        NdrFcShort(0xfffa),	/* Offset= -6 (188) */
/* 196 (LPWSTR) */
        0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 198 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 200 (LPWSTR *) */
        0x11, 0x14,		/* FC_RP [allocated_on_stack] [pointer_deref] */
        NdrFcShort(0xfffa),	/* Offset= -6 (196) */
/* 204 (IOleContainer *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x0000011b),
        NdrFcShort(0x0000),
        NdrFcShort(0x0000),
        0xc0,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x00,
        0x46,

/* 222 (IOleContainer **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (204) */
        0x0
    }
};

static const CInterfaceProxyVtbl* const _actxprxy_htiframe_ProxyVtblList[] =
{
    (const CInterfaceProxyVtbl*)&_ITargetContainerProxyVtbl,
    (const CInterfaceProxyVtbl*)&_ITargetFrame2ProxyVtbl,
    (const CInterfaceProxyVtbl*)&_ITargetNotifyProxyVtbl,
    (const CInterfaceProxyVtbl*)&_ITargetNotify2ProxyVtbl,
    0
};

static const CInterfaceStubVtbl* const _actxprxy_htiframe_StubVtblList[] =
{
    &_ITargetContainerStubVtbl,
    &_ITargetFrame2StubVtbl,
    &_ITargetNotifyStubVtbl,
    &_ITargetNotify2StubVtbl,
    0
};

static PCInterfaceName const _actxprxy_htiframe_InterfaceNamesList[] =
{
    "ITargetContainer",
    "ITargetFrame2",
    "ITargetNotify",
    "ITargetNotify2",
    0
};

static int __stdcall _actxprxy_htiframe_IID_Lookup(const IID* pIID, int* pIndex)
{
    int low = 0, high = 3;

    while (low <= high)
    {
        int pos = (low + high) / 2;
        int res = IID_GENERIC_CHECK_IID(_actxprxy_htiframe, pIID, pos);
        if (!res) { *pIndex = pos; return 1; }
        if (res > 0) low = pos + 1;
        else high = pos - 1;
    }
    return 0;
}

const ExtendedProxyFileInfo actxprxy_htiframe_ProxyFileInfo =
{
    (const PCInterfaceProxyVtblList*)_actxprxy_htiframe_ProxyVtblList,
    (const PCInterfaceStubVtblList*)_actxprxy_htiframe_StubVtblList,
    _actxprxy_htiframe_InterfaceNamesList,
    0,
    _actxprxy_htiframe_IID_Lookup,
    4,
    2,
    0,
    0,
    0,
    0
};
