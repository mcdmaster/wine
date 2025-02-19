/*** Autogenerated by WIDL 10.0-rc2 from dlls/actxprxy/actxprxy_urlhist.idl - Do not edit ***/

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

#include "actxprxy_urlhist.h"

#define TYPE_FORMAT_STRING_SIZE 221
#define PROC_FORMAT_STRING_SIZE 511

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
 * IEnumSTATURL interface
 */
static const unsigned short IEnumSTATURL_FormatStringOffsetTable[] =
{
    0,  /* IEnumSTATURL::Next */
    48,  /* IEnumSTATURL::Skip */
    84,  /* IEnumSTATURL::Reset */
    114,  /* IEnumSTATURL::Clone */
    150,  /* IEnumSTATURL::SetFilter */
};

static const MIDL_STUBLESS_PROXY_INFO IEnumSTATURL_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATURL_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(8) _IEnumSTATURLProxyVtbl =
{
    {
        &IEnumSTATURL_ProxyInfo,
        &IID_IEnumSTATURL,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* IEnumSTATURL::Next */
        (void *)-1,  /* IEnumSTATURL::Skip */
        (void *)-1,  /* IEnumSTATURL::Reset */
        (void *)-1,  /* IEnumSTATURL::Clone */
        (void *)-1,  /* IEnumSTATURL::SetFilter */
    }
};

static const MIDL_SERVER_INFO IEnumSTATURL_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATURL_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _IEnumSTATURLStubVtbl =
{
    {
        &IID_IEnumSTATURL,
        &IEnumSTATURL_ServerInfo,
        8,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

/*****************************************************************************
 * IUrlHistoryStg interface
 */
static const unsigned short IUrlHistoryStg_FormatStringOffsetTable[] =
{
    192,  /* IUrlHistoryStg::AddUrl */
    240,  /* IUrlHistoryStg::DeleteUrl */
    282,  /* IUrlHistoryStg::QueryUrl */
    330,  /* IUrlHistoryStg::BindToObject */
    378,  /* IUrlHistoryStg::EnumUrls */
};

static const MIDL_STUBLESS_PROXY_INFO IUrlHistoryStg_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IUrlHistoryStg_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(8) _IUrlHistoryStgProxyVtbl =
{
    {
        &IUrlHistoryStg_ProxyInfo,
        &IID_IUrlHistoryStg,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* IUrlHistoryStg::AddUrl */
        (void *)-1,  /* IUrlHistoryStg::DeleteUrl */
        (void *)-1,  /* IUrlHistoryStg::QueryUrl */
        (void *)-1,  /* IUrlHistoryStg::BindToObject */
        (void *)-1,  /* IUrlHistoryStg::EnumUrls */
    }
};

static const MIDL_SERVER_INFO IUrlHistoryStg_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IUrlHistoryStg_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _IUrlHistoryStgStubVtbl =
{
    {
        &IID_IUrlHistoryStg,
        &IUrlHistoryStg_ServerInfo,
        8,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

/*****************************************************************************
 * IUrlHistoryStg2 interface
 */
static const unsigned short IUrlHistoryStg2_FormatStringOffsetTable[] =
{
    192,  /* IUrlHistoryStg::AddUrl */
    240,  /* IUrlHistoryStg::DeleteUrl */
    282,  /* IUrlHistoryStg::QueryUrl */
    330,  /* IUrlHistoryStg::BindToObject */
    378,  /* IUrlHistoryStg::EnumUrls */
    414,  /* IUrlHistoryStg2::AddUrlAndNotify */
    480,  /* IUrlHistoryStg2::ClearHistory */
};

static const MIDL_STUBLESS_PROXY_INFO IUrlHistoryStg2_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IUrlHistoryStg2_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(10) _IUrlHistoryStg2ProxyVtbl =
{
    {
        &IUrlHistoryStg2_ProxyInfo,
        &IID_IUrlHistoryStg2,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        (void *)-1,  /* IUrlHistoryStg::AddUrl */
        (void *)-1,  /* IUrlHistoryStg::DeleteUrl */
        (void *)-1,  /* IUrlHistoryStg::QueryUrl */
        (void *)-1,  /* IUrlHistoryStg::BindToObject */
        (void *)-1,  /* IUrlHistoryStg::EnumUrls */
        (void *)-1,  /* IUrlHistoryStg2::AddUrlAndNotify */
        (void *)-1,  /* IUrlHistoryStg2::ClearHistory */
    }
};

static const MIDL_SERVER_INFO IUrlHistoryStg2_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IUrlHistoryStg2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const CInterfaceStubVtbl _IUrlHistoryStg2StubVtbl =
{
    {
        &IID_IUrlHistoryStg2,
        &IUrlHistoryStg2_ServerInfo,
        10,
        0
    },
    {
        CStdStubBuffer_METHODS
    }
};

static const unsigned short IUrlHistoryNotify_FormatStringOffsetTable[] =
{
    (unsigned short)-1,  /* IOleCommandTarget::QueryStatus */
    (unsigned short)-1,  /* IOleCommandTarget::Exec */
};

static const MIDL_STUBLESS_PROXY_INFO IUrlHistoryNotify_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IUrlHistoryNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(5) _IUrlHistoryNotifyProxyVtbl =
{
    {
        &IUrlHistoryNotify_ProxyInfo,
        &IID_IUrlHistoryNotify,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        0,  /* IOleCommandTarget::QueryStatus */
        0,  /* IOleCommandTarget::Exec */
    }
};

static const MIDL_SERVER_INFO IUrlHistoryNotify_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IUrlHistoryNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
};

static const PRPC_STUB_FUNCTION IUrlHistoryNotify_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

static CInterfaceStubVtbl _IUrlHistoryNotifyStubVtbl =
{
    {
        &IID_IUrlHistoryNotify,
        &IUrlHistoryNotify_ServerInfo,
        5,
        &IUrlHistoryNotify_table[-3]
    },
    {
        CStdStubBuffer_DELEGATING_METHODS
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
/* 0 (procedure IEnumSTATURL::Next) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x14),	/* stack size = 20 */
        NdrFcShort(0x10),	/* client buffer = 16 */
        NdrFcShort(0x10),	/* server buffer = 16 */
        0x47,
        0x04,	/* 4 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 24 (parameter celt) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 30 (parameter rgelt) */
        NdrFcShort(0x11b),	/* flags: must size, must free, in, out, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x12),	/* type offset = 18 */
/* 36 (parameter pceltFetched) */
        NdrFcShort(0x158),	/* flags: in, out, base type, simple ref */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x09,	/* FC_ULONG */
        0x0,
/* 42 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 48 (procedure IEnumSTATURL::Skip) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
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
/* 72 (parameter celt) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 78 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 84 (procedure IEnumSTATURL::Reset) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x5),	/* method 5 */
        NdrFcShort(0x8),	/* stack size = 8 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x44,
        0x01,	/* 1 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 108 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
        0x08,	/* FC_LONG */
        0x0,
/* 114 (procedure IEnumSTATURL::Clone) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x6),	/* method 6 */
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
/* 138 (parameter ppenum) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x58),	/* type offset = 88 */
/* 144 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 150 (procedure IEnumSTATURL::SetFilter) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x7),	/* method 7 */
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
/* 174 (parameter poszFilter) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x5e),	/* type offset = 94 */
/* 180 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 186 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 192 (procedure IUrlHistoryStg::AddUrl) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x14),	/* stack size = 20 */
        NdrFcShort(0x8),	/* client buffer = 8 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x04,	/* 4 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 216 (parameter pocsUrl) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x62),	/* type offset = 98 */
/* 222 (parameter pocsTitle) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x64),	/* type offset = 100 */
/* 228 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 234 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 240 (procedure IUrlHistoryStg::DeleteUrl) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x4),	/* method 4 */
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
/* 264 (parameter pocsUrl) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x6a),	/* type offset = 106 */
/* 270 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 276 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 282 (procedure IUrlHistoryStg::QueryUrl) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x5),	/* method 5 */
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
/* 306 (parameter pocsUrl) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x6e),	/* type offset = 110 */
/* 312 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 318 (parameter lpSTATURL) */
        NdrFcShort(0x1b),	/* flags: must size, must free, in, out */
        NdrFcShort(0xc),	/* stack offset = 12 */
        NdrFcShort(0x70),	/* type offset = 112 */
/* 324 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 330 (procedure IUrlHistoryStg::BindToObject) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x6),	/* method 6 */
        NdrFcShort(0x14),	/* stack size = 20 */
        NdrFcShort(0x14),	/* client buffer = 20 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x47,
        0x04,	/* 4 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 354 (parameter pocsUrl) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x76),	/* type offset = 118 */
/* 360 (parameter riid) */
        NdrFcShort(0x10a),	/* flags: must free, in, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x7e),	/* type offset = 126 */
/* 366 (parameter ppvOut) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0xc),	/* stack offset = 12 */
        NdrFcShort(0x96),	/* type offset = 150 */
/* 372 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 378 (procedure IUrlHistoryStg::EnumUrls) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x7),	/* method 7 */
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
/* 402 (parameter ppEnum) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0xac),	/* type offset = 172 */
/* 408 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x8),	/* stack offset = 8 */
        0x08,	/* FC_LONG */
        0x0,
/* 414 (procedure IUrlHistoryStg2::AddUrlAndNotify) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x8),	/* method 8 */
        NdrFcShort(0x20),	/* stack size = 32 */
        NdrFcShort(0x10),	/* client buffer = 16 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x46,
        0x07,	/* 7 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 438 (parameter pocsUrl) */
        NdrFcShort(0x10b),	/* flags: must size, must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0xb2),	/* type offset = 178 */
/* 444 (parameter pocsTitle) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0xb4),	/* type offset = 180 */
/* 450 (parameter dwFlags) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0xc),	/* stack offset = 12 */
        0x08,	/* FC_LONG */
        0x0,
/* 456 (parameter fWriteHistory) */
        NdrFcShort(0x48),	/* flags: in, base type */
        NdrFcShort(0x10),	/* stack offset = 16 */
        0x08,	/* FC_LONG */
        0x0,
/* 462 (parameter poctNotify) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x14),	/* stack offset = 20 */
        NdrFcShort(0xb8),	/* type offset = 184 */
/* 468 (parameter punkISFolder) */
        NdrFcShort(0xb),	/* flags: must size, must free, in */
        NdrFcShort(0x18),	/* stack offset = 24 */
        NdrFcShort(0xca),	/* type offset = 202 */
/* 474 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x1c),	/* stack offset = 28 */
        0x08,	/* FC_LONG */
        0x0,
/* 480 (procedure IUrlHistoryStg2::ClearHistory) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x9),	/* method 9 */
        NdrFcShort(0x8),	/* stack size = 8 */
        NdrFcShort(0x0),	/* client buffer = 0 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x44,
        0x01,	/* 1 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 504 (return value) */
        NdrFcShort(0x70),	/* flags: out, return, base type */
        NdrFcShort(0x4),	/* stack offset = 4 */
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
/* 2 (LPWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 6 (LPWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  8 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 10 (FILETIME) */
        0x15,	/* FC_STRUCT */
        0x3,	/* 3 */
        NdrFcShort(0x8),	/* 8 */
        0x08,	/* FC_LONG */
        0x08,	/* FC_LONG */
        0x5c,	/* FC_PAD */
        0x5b,	/* FC_END */
/* 18 (struct _STATURL) */
        0x16,	/* FC_PSTRUCT */
        0x3,	/* 3 */
        NdrFcShort(0x28),	/* 40 */
        0x4b,	/* FC_PP */
        0x5c,	/* FC_PAD */
        0x46, /* FC_NO_REPEAT */
        0x5c, /* FC_PAD */
        NdrFcShort(0x4),	/* Memory offset = 4 */
        NdrFcShort(0x4),	/* Buffer offset = 4 */
/* 30 (LPWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 32 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
        0x46, /* FC_NO_REPEAT */
        0x5c, /* FC_PAD */
        NdrFcShort(0x8),	/* Memory offset = 8 */
        NdrFcShort(0x8),	/* Buffer offset = 8 */
/* 40 (LPWSTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 42 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
        0x5b,	/* FC_END */
        0x08,	/* FC_LONG */
        0x8,	/* FC_LONG */
        0x8,	/* FC_LONG */
        0x4c,	/* FC_EMBEDDED_COMPLEX */
        0x0,
        NdrFcShort(0xffd8),	/* Offset= -40 (10) */
        0x4c,	/* FC_EMBEDDED_COMPLEX */
        0x0,
        NdrFcShort(0xffd4),	/* Offset= -44 (10) */
        0x4c,	/* FC_EMBEDDED_COMPLEX */
        0x0,
        NdrFcShort(0xffd0),	/* Offset= -48 (10) */
        0x08,	/* FC_LONG */
        0x5b,	/* FC_END */
/* 62 (LPSTATURL) */
        0x11, 0x0,		/* FC_RP */
        NdrFcShort(0xffd2),	/* Offset= -46 (18) */
/* 66 (ULONG *) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
        0x09,	/* FC_ULONG */
        0x5c,	/* FC_PAD */
/* 70 (IEnumSTATURL *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x3c374a42),
        NdrFcShort(0xbae4),
        NdrFcShort(0x11cf),
        0xbf,
        0x7d,
        0x00,
        0xaa,
        0x00,
        0x69,
        0x46,
        0xee,

/* 88 (IEnumSTATURL **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (70) */
/* 92 (LPCOLESTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 94 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 96 (LPCOLESTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 98 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 100 (LPCOLESTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 102 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 104 (LPCOLESTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 106 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 108 (LPCOLESTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 110 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 112 (LPSTATURL) */
        0x12, 0x0,		/* FC_UP */
        NdrFcShort(0xffa0),	/* Offset= -96 (18) */
/* 116 (LPCOLESTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 118 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 120 (byte[8]) */
        0x1d,	/* FC_SMFARRAY */
        0x0,	/* 0 */
        NdrFcShort(0x8),	/* 8 */
        0x01,	/* FC_BYTE */
        0x5b,	/* FC_END */
/* 126 (IID) */
        0x15,	/* FC_STRUCT */
        0x3,	/* 3 */
        NdrFcShort(0x10),	/* 16 */
        0x08,	/* FC_LONG */
        0x06,	/* FC_SHORT */
        0x06,	/* FC_SHORT */
        0x4c,	/* FC_EMBEDDED_COMPLEX */
        0x0,
        NdrFcShort(0xfff1),	/* Offset= -15 (120) */
        0x5b,	/* FC_END */
/* 138 (REFIID) */
        0x11, 0x0,		/* FC_RP */
        NdrFcShort(0xfff2),	/* Offset= -14 (126) */
/* 142 (void *) */
        0x2f,  /* FC_IP */
        0x5c,  /* FC_PAD */
        0x28,	/* Corr desc: parameter riid, FC_LONG */
        0x0,	/* no operators */
        NdrFcShort(0x8),	/* offset = 8 */
        NdrFcShort(0x5),
/* 150 (void **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xfff6),	/* Offset= -10 (142) */
/* 154 (IEnumSTATURL *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0x3c374a42),
        NdrFcShort(0xbae4),
        NdrFcShort(0x11cf),
        0xbf,
        0x7d,
        0x00,
        0xaa,
        0x00,
        0x69,
        0x46,
        0xee,

/* 172 (IEnumSTATURL **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xffec),	/* Offset= -20 (154) */
/* 176 (LPCOLESTR) */
        0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 178 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 180 (LPCOLESTR) */
        0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 182 */
        0x25,	/* FC_C_WSTRING */
        0x5c,	/* FC_PAD */
/* 184 (IOleCommandTarget *) */
        0x2f,	/* FC_IP */
        0x5a,	/* FC_CONSTANT_IID */
        NdrFcLong(0xb722bccb),
        NdrFcShort(0x4e68),
        NdrFcShort(0x101b),
        0xa2,
        0xbc,
        0x00,
        0xaa,
        0x00,
        0x40,
        0x47,
        0x70,

/* 202 (IUnknown *) */
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

        0x0
    }
};

static const CInterfaceProxyVtbl* const _actxprxy_urlhist_ProxyVtblList[] =
{
    (const CInterfaceProxyVtbl*)&_IUrlHistoryStg2ProxyVtbl,
    (const CInterfaceProxyVtbl*)&_IUrlHistoryStgProxyVtbl,
    (const CInterfaceProxyVtbl*)&_IEnumSTATURLProxyVtbl,
    (const CInterfaceProxyVtbl*)&_IUrlHistoryNotifyProxyVtbl,
    0
};

static const CInterfaceStubVtbl* const _actxprxy_urlhist_StubVtblList[] =
{
    &_IUrlHistoryStg2StubVtbl,
    &_IUrlHistoryStgStubVtbl,
    &_IEnumSTATURLStubVtbl,
    &_IUrlHistoryNotifyStubVtbl,
    0
};

static PCInterfaceName const _actxprxy_urlhist_InterfaceNamesList[] =
{
    "IUrlHistoryStg2",
    "IUrlHistoryStg",
    "IEnumSTATURL",
    "IUrlHistoryNotify",
    0
};

static const IID * _actxprxy_urlhist_BaseIIDList[] =
{
    0,
    0,
    0,
    &IID_IOleCommandTarget,  /* IUrlHistoryNotify */
    0
};

static int __stdcall _actxprxy_urlhist_IID_Lookup(const IID* pIID, int* pIndex)
{
    int low = 0, high = 3;

    while (low <= high)
    {
        int pos = (low + high) / 2;
        int res = IID_GENERIC_CHECK_IID(_actxprxy_urlhist, pIID, pos);
        if (!res) { *pIndex = pos; return 1; }
        if (res > 0) low = pos + 1;
        else high = pos - 1;
    }
    return 0;
}

const ExtendedProxyFileInfo actxprxy_urlhist_ProxyFileInfo =
{
    (const PCInterfaceProxyVtblList*)_actxprxy_urlhist_ProxyVtblList,
    (const PCInterfaceStubVtblList*)_actxprxy_urlhist_StubVtblList,
    _actxprxy_urlhist_InterfaceNamesList,
    _actxprxy_urlhist_BaseIIDList,
    _actxprxy_urlhist_IID_Lookup,
    4,
    2,
    0,
    0,
    0,
    0
};
