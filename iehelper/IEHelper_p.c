/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.01.75 */
/* at Sat Nov 25 09:47:29 2000
 */
/* Compiler settings for IEHelper.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "IEHelper.h"

#define TYPE_FORMAT_STRING_SIZE   1                                 
#define PROC_FORMAT_STRING_SIZE   1                                 

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IIEHlprObj, ver. 0.0,
   GUID={0xCE7C3CEF,0x4B15,0x11D1,{0xAB,0xED,0x70,0x95,0x49,0xC1,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x301004b, /* MIDL Version 3.1.75 */
    0,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

CINTERFACE_PROXY_VTABLE(7) _IIEHlprObjProxyVtbl = 
{
    0,
    &IID_IIEHlprObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IIEHlprObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IIEHlprObjStubVtbl =
{
    &IID_IIEHlprObj,
    0,
    7,
    &IIEHlprObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#pragma data_seg(".rdata")

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {

			0x0
        }
    };

const CInterfaceProxyVtbl * _IEHelper_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IIEHlprObjProxyVtbl,
    0
};

const CInterfaceStubVtbl * _IEHelper_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IIEHlprObjStubVtbl,
    0
};

PCInterfaceName const _IEHelper_InterfaceNamesList[] = 
{
    "IIEHlprObj",
    0
};

const IID *  _IEHelper_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _IEHelper_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _IEHelper, pIID, n)

int __stdcall _IEHelper_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_IEHelper_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo IEHelper_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _IEHelper_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _IEHelper_StubVtblList,
    (const PCInterfaceName * ) & _IEHelper_InterfaceNamesList,
    (const IID ** ) & _IEHelper_BaseIIDList,
    & _IEHelper_IID_Lookup, 
    1,
    2
};
