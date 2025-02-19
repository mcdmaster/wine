/*** Autogenerated by WIDL 10.0-rc2 from dlls/actxprxy/actxprxy_htiface.idl - Do not edit ***/

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

#include "actxprxy_htiface.h"

#define TYPE_FORMAT_STRING_SIZE 399
#define PROC_FORMAT_STRING_SIZE 889

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
 * ITargetFrame interface
 */
static const unsigned short ITargetFrame_FormatStringOffsetTable[] =
{
    0,  /* ITargetFrame::SetFrameName */
    36,  /* ITargetFrame::GetFrameName */
    72,  /* ITargetFrame::GetParentFrame */
    108,  /* ITargetFrame::FindFrame */
    162,  /* ITargetFrame::SetFrameSrc */
    198,  /* ITargetFrame::GetFrameSrc */
    234,  /* ITargetFrame::GetFramesContainer */
    270,  /* ITargetFrame::SetFrameOptions */
    306,  /* ITargetFrame::GetFrameOptions */
    342,  /* ITargetFrame::SetFrameMargins */
    384,  /* ITargetFrame::GetFrameMargins */
    426,  /* ITargetFrame::RemoteNavigate */
    468,  /* ITargetFrame::OnChildFrameActivate */
    504,  /* ITargetFrame::OnChildFrameDeactivate */
};

static const MIDL_STUBLESS_PROXY_INFO ITargetFrame_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITargetFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(17) _ITargetFrameProxyVtbl =
{
    {
        &ITargetFrame_ProxyInfo,
        &IID_ITargetFrame,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* ITargetFrame::SetFrameName */
        (void *)-1,  /* ITargetFrame::GetFrameName */
        (void *)-1,  /* ITargetFrame::GetParentFrame */
        (void *)-1,  /* ITargetFrame::FindFrame */
        (void *)-1,  /* ITargetFrame::SetFrameSrc */
        (void *)-1,  /* ITargetFrame::GetFrameSrc */
        (void *)-1,  /* ITargetFrame::GetFramesContainer */
        (void *)-1,  /* ITargetFrame::SetFrameOptions */
        (void *)-1,  /* ITargetFrame::GetFrameOptions */
        (void *)-1,  /* ITargetFrame::SetFrameMargins */
        (void *)-1,  /* ITargetFrame::GetFrameMargins */
        (void *)-1,  /* ITargetFrame::RemoteNavigate */
        (void *)-1,  /* ITargetFrame::OnChildFrameActivate */
        (void *)-1,  /* ITargetFrame::OnChildFrameDeactivate */
    }
};

static const MIDL_SERVER_INFO ITargetFrame_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITargetFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _ITargetFrameStubVtbl =
{
    {
        &IID_ITargetFrame,
        &ITargetFrame_ServerInfo,
        17,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

/*****************************************************************************
 * ITargetFramePriv interface
 */
static const unsigned short ITargetFramePriv_FormatStringOffsetTable[] =
{
    540,  /* ITargetFramePriv::FindFrameDownwards */
    588,  /* ITargetFramePriv::FindFrameInContext */
    642,  /* ITargetFramePriv::OnChildFrameActivate */
    678,  /* ITargetFramePriv::OnChildFrameDeactivate */
    714,  /* ITargetFramePriv::NavigateHack */
    780,  /* ITargetFramePriv::FindBrowserByIndex */
};

static const MIDL_STUBLESS_PROXY_INFO ITargetFramePriv_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITargetFramePriv_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(9) _ITargetFramePrivProxyVtbl =
{
    {
        &ITargetFramePriv_ProxyInfo,
        &IID_ITargetFramePriv,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* ITargetFramePriv::FindFrameDownwards */
        (void *)-1,  /* ITargetFramePriv::FindFrameInContext */
        (void *)-1,  /* ITargetFramePriv::OnChildFrameActivate */
        (void *)-1,  /* ITargetFramePriv::OnChildFrameDeactivate */
        (void *)-1,  /* ITargetFramePriv::NavigateHack */
        (void *)-1,  /* ITargetFramePriv::FindBrowserByIndex */
    }
};

static const MIDL_SERVER_INFO ITargetFramePriv_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITargetFramePriv_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _ITargetFramePrivStubVtbl =
{
    {
        &IID_ITargetFramePriv,
        &ITargetFramePriv_ServerInfo,
        9,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

/*****************************************************************************
 * ITargetFramePriv2 interface
 */
static const unsigned short ITargetFramePriv2_FormatStringOffsetTable[] =
{
    540,  /* ITargetFramePriv::FindFrameDownwards */
    588,  /* ITargetFramePriv::FindFrameInContext */
    642,  /* ITargetFramePriv::OnChildFrameActivate */
    678,  /* ITargetFramePriv::OnChildFrameDeactivate */
    714,  /* ITargetFramePriv::NavigateHack */
    780,  /* ITargetFramePriv::FindBrowserByIndex */
    822,  /* ITargetFramePriv2::AggregatedNavigation2 */
};

static const MIDL_STUBLESS_PROXY_INFO ITargetFramePriv2_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITargetFramePriv2_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(10) _ITargetFramePriv2ProxyVtbl =
{
    {
        &ITargetFramePriv2_ProxyInfo,
        &IID_ITargetFramePriv2,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* ITargetFramePriv::FindFrameDownwards */
        (void *)-1,  /* ITargetFramePriv::FindFrameInContext */
        (void *)-1,  /* ITargetFramePriv::OnChildFrameActivate */
        (void *)-1,  /* ITargetFramePriv::OnChildFrameDeactivate */
        (void *)-1,  /* ITargetFramePriv::NavigateHack */
        (void *)-1,  /* ITargetFramePriv::FindBrowserByIndex */
        (void *)-1,  /* ITargetFramePriv2::AggregatedNavigation2 */
    }
};

static const MIDL_SERVER_INFO ITargetFramePriv2_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITargetFramePriv2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _ITargetFramePriv2StubVtbl =
{
    {
        &IID_ITargetFramePriv2,
        &ITargetFramePriv2_ServerInfo,
        10,
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

#if !defined(__RPC_WIN32__)
#error Invalid build platform for this proxy.
#endif

static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
{
    0,
    {
/* 0 (procedure ITargetFrame::SetFrameName) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 24 (parameter pszFrameName) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x4),	/* type offset = 4 */
/* 30 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 36 (procedure ITargetFrame::GetFrameName) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 60 (parameter ppszFrameName) */
        NdrFcShort(0x2013),	/* flags: must size, must free, out, srv size=8 */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0xa),	/* type offset = 10 */
/* 66 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 72 (procedure ITargetFrame::GetParentFrame) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x5),	/* method 5 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 96 (parameter ppunkParent) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x20),	/* type offset = 32 */
/* 102 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 108 (procedure ITargetFrame::FindFrame) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x6),	/* method 6 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x47,
        0x05,	/* 5 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 132 (parameter pszTargetName) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x26),	/* type offset = 38 */
/* 138 (parameter ppunkContextFrame) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x28),	/* type offset = 40 */
/* 144 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 150 (parameter ppunkTargetFrame) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x10),	/* stack offset = 16 */
        NdrFcShort(0x4c),	/* type offset = 76 */
/* 156 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x14),	/* stack offset = 20 */
        0x08,	/* FC_LONG */
        0x0,
/* 162 (procedure ITargetFrame::SetFrameSrc) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x7),	/* method 7 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 186 (parameter pszFrameSrc) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x52),	/* type offset = 82 */
/* 192 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 198 (procedure ITargetFrame::GetFrameSrc) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x8),	/* method 8 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 222 (parameter ppszFrameSrc) */
        NdrFcShort(0x2013),	/* flags: must size, must free, out, srv size=8 */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x58),	/* type offset = 88 */
/* 228 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 234 (procedure ITargetFrame::GetFramesContainer) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x9),	/* method 9 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 258 (parameter ppContainer) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x6e),	/* type offset = 110 */
/* 264 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 270 (procedure ITargetFrame::SetFrameOptions) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xa),	/* method 10 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x44,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 294 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 300 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 306 (procedure ITargetFrame::GetFrameOptions) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xb),	/* method 11 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x10),	/* server buffer = 16 */
        0x44,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 330 (parameter pdwFlags) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x09,	/* FC_ULONG */
        0x0,
/* 336 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 342 (procedure ITargetFrame::SetFrameMargins) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xc),	/* method 12 */
        NdrFcShort(0x10),	/* stack size = 16 */
        NdrFcShort(0x10),	/* client buffer = 16 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x44,
        0x03,	/* 3 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 366 (parameter dwWidth) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 372 (parameter dwHeight) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 378 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 384 (procedure ITargetFrame::GetFrameMargins) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xd),	/* method 13 */
        NdrFcShort(0x10),	/* stack size = 16 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x18),	/* server buffer = 24 */
        0x44,
        0x03,	/* 3 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 408 (parameter pdwWidth) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x09,	/* FC_ULONG */
        0x0,
/* 414 (parameter pdwHeight) */
        NdrFcShort(0x2150),	/* flags: out, base type, simple ref, srv size=8 */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x09,	/* FC_ULONG */
        0x0,
/* 420 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 426 (procedure ITargetFrame::RemoteNavigate) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xe),	/* method 14 */
        NdrFcShort(0x10),	/* stack size = 16 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x03,	/* 3 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 450 (parameter cLength) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 456 (parameter pulData) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x7e),	/* type offset = 126 */
/* 462 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 468 (procedure ITargetFrame::OnChildFrameActivate) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0xf),	/* method 15 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 492 (parameter pUnkChildFrame) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x8e),	/* type offset = 142 */
/* 498 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 504 (procedure ITargetFrame::OnChildFrameDeactivate) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x10),	/* method 16 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 528 (parameter pUnkChildFrame) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0xa0),	/* type offset = 160 */
/* 534 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 540 (procedure ITargetFramePriv::FindFrameDownwards) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x14),	/* stack size = 20 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x47,
        0x04,	/* 4 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 564 (parameter pszTargetName) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0xb4),	/* type offset = 180 */
/* 570 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 576 (parameter ppunkTargetFrame) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0xc),	/* stack offset = 12 */
        NdrFcShort(0xc8),	/* type offset = 200 */
/* 582 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 588 (procedure ITargetFramePriv::FindFrameInContext) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
        NdrFcShort(0x18),	/* stack size = 24 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x47,
        0x05,	/* 5 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 612 (parameter pszTargetName) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0xce),	/* type offset = 206 */
/* 618 (parameter punkContextFrame) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0xd0),	/* type offset = 208 */
/* 624 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 630 (parameter ppunkTargetFrame) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x10),	/* stack offset = 16 */
        NdrFcShort(0xf4),	/* type offset = 244 */
/* 636 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x14),	/* stack offset = 20 */
        0x08,	/* FC_LONG */
        0x0,
/* 642 (procedure ITargetFramePriv::OnChildFrameActivate) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x5),	/* method 5 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 666 (parameter pUnkChildFrame) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0xf8),	/* type offset = 248 */
/* 672 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 678 (procedure ITargetFramePriv::OnChildFrameDeactivate) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x6),	/* method 6 */
        NdrFcShort(0xc),	/* stack size = 12 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x02,	/* 2 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 702 (parameter pUnkChildFrame) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x10a),	/* type offset = 266 */
/* 708 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 714 (procedure ITargetFramePriv::NavigateHack) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x7),	/* method 7 */
        NdrFcShort(0x20),	/* stack size = 32 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x07,	/* 7 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 738 (parameter grfHLNF) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 744 (parameter pbc) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x11c),	/* type offset = 284 */
/* 750 (parameter pibsc) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0xc),	/* stack offset = 12 */
        NdrFcShort(0x12e),	/* type offset = 302 */
/* 756 (parameter pszTargetName) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x10),	/* stack offset = 16 */
        NdrFcShort(0x140),	/* type offset = 320 */
/* 762 (parameter pszUrl) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x14),	/* stack offset = 20 */
        NdrFcShort(0x146),	/* type offset = 326 */
/* 768 (parameter pszLocation) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x18),	/* stack offset = 24 */
        NdrFcShort(0x148),	/* type offset = 328 */
/* 774 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x1c),	/* stack offset = 28 */
        0x08,	/* FC_LONG */
        0x0,
/* 780 (procedure ITargetFramePriv::FindBrowserByIndex) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x8),	/* method 8 */
        NdrFcShort(0x10),	/* stack size = 16 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x03,	/* 3 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 804 (parameter dwID) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 810 (parameter ppunkBrowser) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x15e),	/* type offset = 350 */
/* 816 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 822 (procedure ITargetFramePriv2::AggregatedNavigation2) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x9),	/* method 9 */
        NdrFcShort(0x20),	/* stack size = 32 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x07,	/* 7 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 846 (parameter grfHLNF) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 852 (parameter pbc) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x11c),	/* type offset = 284 */
/* 858 (parameter pibsc) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0xc),	/* stack offset = 12 */
        NdrFcShort(0x162),	/* type offset = 354 */
/* 864 (parameter pszTargetName) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x10),	/* stack offset = 16 */
        NdrFcShort(0x174),	/* type offset = 372 */
/* 870 (parameter pUri) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x14),	/* stack offset = 20 */
        NdrFcShort(0x178),	/* type offset = 376 */
/* 876 (parameter pszLocation) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x18),	/* stack offset = 24 */
        NdrFcShort(0x18a),	/* type offset = 394 */
/* 882 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x1c),	/* stack offset = 28 */
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
/* 2 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 6 (LPWSTR) */
        0x13, 0x8,	/* FC_OP [simple_pointer] */
/*  8 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 10 (LPWSTR *) */
        0x11, 0x14,		/* FC_RP [allocated_on_stack] [pointer_deref] */
        NdrFcShort(0xfffa),	/* Offset= -6 (6) */
/* 14 (IUnknown *) */
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

/* 32 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (14) */
/* 36 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 38 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 40 (IUnknown *) */
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

/* 58 (IUnknown *) */
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

/* 76 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (58) */
/* 80 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 82 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 84 (LPWSTR) */
        0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 86 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 88 (LPWSTR *) */
        0x11, 0x14,		/* FC_RP [allocated_on_stack] [pointer_deref] */
        NdrFcShort(0xfffa),	/* Offset= -6 (84) */
/* 92 (IOleContainer *) */
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

/* 110 (IOleContainer **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (92) */
/* 114 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 118 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 122 (DWORD *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 126 (ULONG *) */
        0x1b,	/* FC_CARRAY */
        0x3,	/* 3 */
        NdrFcShort(0x4),	/* 4 */
        0x29,	/* Corr desc: parameter cLength, FC_ULONG */
        0x0,	/* no operators */
        NdrFcShort(0x4),	/* offset = 4 */
        NdrFcShort(0x1),
        0x08,	/* FC_LONG */
        0x5b,	/* FC_END */
/* 138 */
        0x11, 0x0,	/* FC_RP */
        NdrFcShort(0xfff2),	/* Offset= -14 (126) */
/* 142 (IUnknown *) */
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

/* 160 (IUnknown *) */
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

/* 178 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 180 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 182 (IUnknown *) */
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

/* 200 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (182) */
/* 204 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 206 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 208 (IUnknown *) */
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

/* 226 (IUnknown *) */
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

/* 244 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (226) */
/* 248 (IUnknown *) */
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

/* 266 (IUnknown *) */
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

/* 284 (LPBC) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x0000000e),
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

/* 302 (IBindStatusCallback *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x79eac9c1),
        NdrFcShort(0xbaf9),
        NdrFcShort(0x11ce),
        0x8c,
        0x82,
        0x00,
        0xaa,
        0x00,
        0x4b,
        0xa9,
        0x0b,

/* 320 (LPCWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 322 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 324 (LPCWSTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 326 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 328 (LPCWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 330 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 332 (IUnknown *) */
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

/* 350 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (332) */
/* 354 (IBindStatusCallback *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x79eac9c1),
        NdrFcShort(0xbaf9),
        NdrFcShort(0x11ce),
        0x8c,
        0x82,
        0x00,
        0xaa,
        0x00,
        0x4b,
        0xa9,
        0x0b,

/* 372 (LPCWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 374 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 376 (IUri *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0xa39ee748),
        NdrFcShort(0x6a27),
        NdrFcShort(0x4817),
        0xa6,
        0xf2,
        0x13,
        0x91,
        0x4b,
        0xef,
        0x58,
        0x90,

/* 394 (LPCWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 396 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
        0x0
    }
};

static const CInterfaceProxyVtbl* const _actxprxy_htiface_ProxyVtblList[] =
{
    (const CInterfaceProxyVtbl*)&_ITargetFramePrivProxyVtbl,
    (const CInterfaceProxyVtbl*)&_ITargetFrameProxyVtbl,
    (const CInterfaceProxyVtbl*)&_ITargetFramePriv2ProxyVtbl,
    0
};

static const CInterfaceStubVtbl* const _actxprxy_htiface_StubVtblList[] =
{
    &_ITargetFramePrivStubVtbl,
    &_ITargetFrameStubVtbl,
    &_ITargetFramePriv2StubVtbl,
    0
};

static PCInterfaceName const _actxprxy_htiface_InterfaceNamesList[] =
{
    "ITargetFramePriv",
    "ITargetFrame",
    "ITargetFramePriv2",
    0
};

static int __stdcall _actxprxy_htiface_IID_Lookup(const IID* pIID, int* pIndex)
{
    int low = 0, high = 2;

    while (low <= high)
    {
        int pos = (low + high) / 2;
        int res = IID_GENERIC_CHECK_IID(_actxprxy_htiface, pIID, pos);
        if (!res) { *pIndex = pos; return 1; }
        if (res > 0) low = pos + 1;
        else high = pos - 1;
    }
    return 0;
}

const ExtendedProxyFileInfo actxprxy_htiface_ProxyFileInfo =
{
    (const PCInterfaceProxyVtblList*)_actxprxy_htiface_ProxyVtblList,
    (const PCInterfaceStubVtblList*)_actxprxy_htiface_StubVtblList,
    _actxprxy_htiface_InterfaceNamesList,
    0,
    _actxprxy_htiface_IID_Lookup,
    3,
    2,
    0,
    0,
    0,
    0
};
