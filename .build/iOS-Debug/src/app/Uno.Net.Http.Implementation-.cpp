#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.Implementation.IHttpRequest.h>
#include <app/Uno.Net.Http.Implementation.iOSHttpRequest.h>
#include <app/Uno.Net.Http.Implementation.iOSHttpRequestHandle.h>
#include <app/Uno.Net.Http.Implementation.iOSHttpSharedCache.h>
#include <app/Uno.String.h>
#include <HttpRequest.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {
namespace Implementation {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.13.2/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IHttpRequest__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Net.Http.Implementation.IHttpRequest");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.13.2/Implementation/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

iOSHttpRequest__uType* iOSHttpRequest__typeof()
{
    static ::uStaticStrong<iOSHttpRequest__uType*> type;
    if (type != NULL) return type;

    type = (iOSHttpRequest__uType*)::uAllocClassType(sizeof(iOSHttpRequest__uType), "Uno.Net.Http.Implementation.iOSHttpRequest", false, 2, 0, 0);

    type->__interface_0.__fp_SetHeader = (void(*)(void*, ::uString*, ::uString*))iOSHttpRequest__SetHeader;
    type->__interface_0.__fp_SendAsync_1 = (void(*)(void*, ::uString*))iOSHttpRequest__SendAsync_1;
    type->__interface_0.__fp_SendAsync = (void(*)(void*))iOSHttpRequest__SendAsync_2;
    type->__interface_0.__fp_GetResponseStatus = (int(*)(void*))iOSHttpRequest__GetResponseStatus;
    type->__interface_0.__fp_GetResponseHeaders = (::uString*(*)(void*))iOSHttpRequest__GetResponseHeaders;
    type->__interface_0.__fp_GetResponseContentString = (::uString*(*)(void*))iOSHttpRequest__GetResponseContentString;
    type->__interface_0.__fp_GetResponseContentByteArray = (::uArray*(*)(void*))iOSHttpRequest__GetResponseContentByteArray;
    type->__interface_1.__fp_Dispose = (void(*)(void*))iOSHttpRequest__Dispose;

    type->SetInterfaces(
        ::app::Uno::Net::Http::Implementation::IHttpRequest__typeof(), offsetof(iOSHttpRequest__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(iOSHttpRequest__uType, __interface_1));

    return type;
}

void iOSHttpRequest___ObjInit(iOSHttpRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url)
{
    __this->_requestHandle = new ::Uno::Net::Http::iOS::HttpRequest(request, method, url);
}

void iOSHttpRequest__Dispose(iOSHttpRequest* __this)
{
    delete __this->_requestHandle;
    __this->_requestHandle = NULL;
}

::uArray* iOSHttpRequest__GetResponseContentByteArray(iOSHttpRequest* __this)
{
    return __this->_requestHandle->GetResponseContentByteArray();
}

::uString* iOSHttpRequest__GetResponseContentString(iOSHttpRequest* __this)
{
    return __this->_requestHandle->GetResponseContentString();
}

::uString* iOSHttpRequest__GetResponseHeaders(iOSHttpRequest* __this)
{
    return __this->_requestHandle->GetResponseHeaders();
}

int iOSHttpRequest__GetResponseStatus(iOSHttpRequest* __this)
{
    return __this->_requestHandle->GetResponseStatus();
}

iOSHttpRequest* iOSHttpRequest__New_1(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url)
{
    iOSHttpRequest* inst = (iOSHttpRequest*)::uAllocObject(sizeof(iOSHttpRequest), iOSHttpRequest__typeof());
    inst->_ObjInit(request, method, url);
    return inst;
}

void iOSHttpRequest__SendAsync_1(iOSHttpRequest* __this, ::uString* data)
{
    __this->_requestHandle->SendAsync(data);
}

void iOSHttpRequest__SendAsync_2(iOSHttpRequest* __this)
{
    __this->_requestHandle->SendAsync(NULL, 0);
}

void iOSHttpRequest__SetHeader(iOSHttpRequest* __this, ::uString* name, ::uString* value)
{
    __this->_requestHandle->SetHeader(name, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.13.2/Implementation/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

iOSHttpRequestHandle__uType* iOSHttpRequestHandle__typeof()
{
    static ::uStaticStrong<iOSHttpRequestHandle__uType*> type;
    if (type != NULL) return type;

    type = (iOSHttpRequestHandle__uType*)::uAllocStructType(sizeof(iOSHttpRequestHandle__uType), "Uno.Net.Http.Implementation.iOSHttpRequestHandle", sizeof(::Uno::Net::Http::iOS::HttpRequest*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.13.2/Implementation/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

iOSHttpSharedCache__uType* iOSHttpSharedCache__typeof()
{
    static ::uStaticStrong<iOSHttpSharedCache__uType*> type;
    if (type != NULL) return type;

    type = (iOSHttpSharedCache__uType*)::uAllocClassType(sizeof(iOSHttpSharedCache__uType), "Uno.Net.Http.Implementation.iOSHttpSharedCache");

    return type;
}

void iOSHttpSharedCache__SetupSharedCache(::uStatic* __this, bool isCacheEnabled_, ::uLong sizeInBytes_)
{
    ::Uno::Net::Http::iOS::SetupSharedCache(isCacheEnabled_, size_t(sizeInBytes_));
}

}}}}}
