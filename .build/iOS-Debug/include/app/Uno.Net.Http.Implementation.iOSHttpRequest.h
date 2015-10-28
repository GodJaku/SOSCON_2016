// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.13.2/Implementation/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_IMPLEMENTATION_I_O_S_HTTP_REQUEST_H__
#define __APP_UNO_NET_HTTP_IMPLEMENTATION_I_O_S_HTTP_REQUEST_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Net.Http.Implementation.IHttpRequest.h>
#include <app/Uno.Object.h>
#include <HttpRequest.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {
namespace Implementation {

struct iOSHttpRequest;

struct iOSHttpRequest__uType : ::uClassType
{
    ::app::Uno::Net::Http::Implementation::IHttpRequest __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

iOSHttpRequest__uType* iOSHttpRequest__typeof();

void iOSHttpRequest___ObjInit(iOSHttpRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url);
void iOSHttpRequest__Dispose(iOSHttpRequest* __this);
::uArray* iOSHttpRequest__GetResponseContentByteArray(iOSHttpRequest* __this);
::uString* iOSHttpRequest__GetResponseContentString(iOSHttpRequest* __this);
::uString* iOSHttpRequest__GetResponseHeaders(iOSHttpRequest* __this);
int iOSHttpRequest__GetResponseStatus(iOSHttpRequest* __this);
iOSHttpRequest* iOSHttpRequest__New_1(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url);
void iOSHttpRequest__SendAsync_1(iOSHttpRequest* __this, ::uString* data);
void iOSHttpRequest__SendAsync_2(iOSHttpRequest* __this);
void iOSHttpRequest__SetHeader(iOSHttpRequest* __this, ::uString* name, ::uString* value);

struct iOSHttpRequest : ::uObject
{
    ::Uno::Net::Http::iOS::HttpRequest* _requestHandle;

    void _ObjInit(::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url) { iOSHttpRequest___ObjInit(this, request, method, url); }
    void Dispose() { iOSHttpRequest__Dispose(this); }
    ::uArray* GetResponseContentByteArray() { return iOSHttpRequest__GetResponseContentByteArray(this); }
    ::uString* GetResponseContentString() { return iOSHttpRequest__GetResponseContentString(this); }
    ::uString* GetResponseHeaders() { return iOSHttpRequest__GetResponseHeaders(this); }
    int GetResponseStatus() { return iOSHttpRequest__GetResponseStatus(this); }
    void SendAsync_1(::uString* data) { iOSHttpRequest__SendAsync_1(this, data); }
    void SendAsync_2() { iOSHttpRequest__SendAsync_2(this); }
    void SetHeader(::uString* name, ::uString* value) { iOSHttpRequest__SetHeader(this, name, value); }
};

}}}}}


#endif
