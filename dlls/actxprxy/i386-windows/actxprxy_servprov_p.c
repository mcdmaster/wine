/*** Autogenerated by WIDL 10.0-rc2 from dlls/actxprxy/actxprxy_servprov.idl - Do not edit ***/

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

#include "actxprxy_servprov.h"

#define TYPE_FORMAT_STRING_SIZE 59
#define PROC_FORMAT_STRING_SIZE 49

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
 * IServiceProvider interface
 */
HRESULT STDMETHODCALLTYPE IServiceProvider_RemoteQueryService_Proxy(
    IServiceProvider* This,
    REFGUID guidService,
    REFIID riid,
    IUnknown **ppvObject)
{
    CLIENT_CALL_RETURN _RetVal;
    struct _PARAM_STRUCT
    {
        IServiceProvider *This;
        REFGUID guidService;
        REFIID riid;
        IUnknown **ppvObject;
    } __params;

    __params.This = This;
    __params.guidService = guidService;
    __params.riid = riid;
    __params.ppvObject = ppvObject;
    _RetVal = NdrClientCall2( &Object_StubDesc,
                              &__MIDL_ProcFormatString.Format[0],
                              &__params );
    return (HRESULT)*(LONG_PTR *)&_RetVal;
}

void __RPC_API IServiceProvider_RemoteQueryService_Thunk( PMIDL_STUB_MESSAGE pStubMsg )
{
    struct _PARAM_STRUCT
    {
        IServiceProvider *This;
        REFGUID guidService;
        REFIID riid;
        IUnknown **ppvObject;
        HRESULT _RetVal;
    } *pParamStruct = (struct _PARAM_STRUCT *)pStubMsg->StackTop;

    pParamStruct->_RetVal = IServiceProvider_QueryService_Stub( pParamStruct->This,
        pParamStruct->guidService,
        pParamStruct->riid,
        pParamStruct->ppvObject );
}

static const unsigned short IServiceProvider_FormatStringOffsetTable[] =
{
    0,  /* IServiceProvider::RemoteQueryService */
};

static const MIDL_STUBLESS_PROXY_INFO IServiceProvider_ProxyInfo =
{
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IServiceProvider_FormatStringOffsetTable[-3],
    0,
    0,
    0
};

static CINTERFACE_PROXY_VTABLE(4) _IServiceProviderProxyVtbl =
{
    {
        &IServiceProvider_ProxyInfo,
        &IID_IServiceProvider,
    },
    {
        IUnknown_QueryInterface_Proxy,
        IUnknown_AddRef_Proxy,
        IUnknown_Release_Proxy,
        IServiceProvider_QueryService_Proxy,
    }
};

static const STUB_THUNK IServiceProvider_StubThunkTable[] =
{
    IServiceProvider_RemoteQueryService_Thunk,
};

static const MIDL_SERVER_INFO IServiceProvider_ServerInfo =
{
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IServiceProvider_FormatStringOffsetTable[-3],
    &IServiceProvider_StubThunkTable[-3],
    0,
    0,
    0
};

static const CInterfaceStubVtbl _IServiceProviderStubVtbl =
{
    {
        &IID_IServiceProvider,
        &IServiceProvider_ServerInfo,
        4,
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
/* 0 (procedure IServiceProvider::RemoteQueryService) */
        0x33,	/* FC_AUTO_HANDLE */
        0x6c,
        NdrFcLong(0x0),
        NdrFcShort(0x3),	/* method 3 */
        NdrFcShort(0x14),	/* stack size = 20 */
        NdrFcShort(0x28),	/* client buffer = 40 */
        NdrFcShort(0x8),	/* server buffer = 8 */
        0x45,
        0x04,	/* 4 params */
        0x08,
        0x01,
        NdrFcShort(0x0),
        NdrFcShort(0x0),
        NdrFcShort(0x0),
/* 24 (parameter guidService) */
        NdrFcShort(0x10a),	/* flags: must free, in, simple ref */
        NdrFcShort(0x4),	/* stack offset = 4 */
        NdrFcShort(0x8),	/* type offset = 8 */
/* 30 (parameter riid) */
        NdrFcShort(0x10a),	/* flags: must free, in, simple ref */
        NdrFcShort(0x8),	/* stack offset = 8 */
        NdrFcShort(0x1e),	/* type offset = 30 */
/* 36 (parameter ppvObject) */
        NdrFcShort(0x13),	/* flags: must size, must free, out */
        NdrFcShort(0xc),	/* stack offset = 12 */
        NdrFcShort(0x36),	/* type offset = 54 */
/* 42 (return value) */
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
/* 2 (byte[8]) */
        0x1d,	/* FC_SMFARRAY */
        0x0,	/* 0 */
        NdrFcShort(0x8),	/* 8 */
        0x01,	/* FC_BYTE */
        0x5b,	/* FC_END */
/* 8 (GUID) */
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
/* 20 (REFGUID) */
        0x11, 0x0,		/* FC_RP */
        NdrFcShort(0xfff2),	/* Offset= -14 (8) */
/* 24 (byte[8]) */
        0x1d,	/* FC_SMFARRAY */
        0x0,	/* 0 */
        NdrFcShort(0x8),	/* 8 */
        0x01,	/* FC_BYTE */
        0x5b,	/* FC_END */
/* 30 (IID) */
        0x15,	/* FC_STRUCT */
        0x3,	/* 3 */
        NdrFcShort(0x10),	/* 16 */
        0x08,	/* FC_LONG */
        0x06,	/* FC_SHORT */
        0x06,	/* FC_SHORT */
        0x4c,	/* FC_EMBEDDED_COMPLEX */
        0x0,
        NdrFcShort(0xfff1),	/* Offset= -15 (24) */
        0x5b,	/* FC_END */
/* 42 (REFIID) */
        0x11, 0x0,		/* FC_RP */
        NdrFcShort(0xfff2),	/* Offset= -14 (30) */
/* 46 (IUnknown *) */
        0x2f,  /* FC_IP */
        0x5c,  /* FC_PAD */
        0x28,	/* Corr desc: parameter riid, FC_LONG */
        0x0,	/* no operators */
        NdrFcShort(0x8),	/* offset = 8 */
        NdrFcShort(0x5),
/* 54 (IUnknown **) */
        0x11, 0x10,		/* FC_RP [pointer_deref] */
        NdrFcShort(0xfff6),	/* Offset= -10 (46) */
        0x0
    }
};

static const CInterfaceProxyVtbl* const _actxprxy_servprov_ProxyVtblList[] =
{
    (const CInterfaceProxyVtbl*)&_IServiceProviderProxyVtbl,
    0
};

static const CInterfaceStubVtbl* const _actxprxy_servprov_StubVtblList[] =
{
    &_IServiceProviderStubVtbl,
    0
};

static PCInterfaceName const _actxprxy_servprov_InterfaceNamesList[] =
{
    "IServiceProvider",
    0
};

static int __stdcall _actxprxy_servprov_IID_Lookup(const IID* pIID, int* pIndex)
{
    int low = 0, high = 0;

    while (low <= high)
    {
        int pos = (low + high) / 2;
        int res = IID_GENERIC_CHECK_IID(_actxprxy_servprov, pIID, pos);
        if (!res) { *pIndex = pos; return 1; }
        if (res > 0) low = pos + 1;
        else high = pos - 1;
    }
    return 0;
}

const ExtendedProxyFileInfo actxprxy_servprov_ProxyFileInfo =
{
    (const PCInterfaceProxyVtblList*)_actxprxy_servprov_ProxyVtblList,
    (const PCInterfaceStubVtblList*)_actxprxy_servprov_StubVtblList,
    _actxprxy_servprov_InterfaceNamesList,
    0,
    _actxprxy_servprov_IID_Lookup,
    1,
    2,
    0,
    0,
    0,
    0
};
