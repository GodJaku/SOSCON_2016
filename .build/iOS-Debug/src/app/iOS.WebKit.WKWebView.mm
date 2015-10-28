// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE WKWebView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::WebKit::WKWebView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::WebKit::WKWebView__typeof()

#include <WebKit/WebKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.Foundation.NSURLRequest.h>
#include <app/iOS.WebKit.WKNavigation.h>
#include <app/iOS.WebKit.WKWebView.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace WebKit {

WKWebView__uType* WKWebView__typeof()
{
    static ::uStaticStrong<WKWebView__uType*> type;
    if (type != NULL) return type;

    type = (WKWebView__uType*)::uAllocClassType(sizeof(WKWebView__uType), "iOS.WebKit.WKWebView", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void WKWebView___ObjInit_9(WKWebView* __this)
{
    ::app::iOS::UIKit::UIView___ObjInit_7(__this);
}

bool WKWebView__canGoBack(WKWebView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(canGoBack));
    return (bool)__return;
}

bool WKWebView__canGoForward(WKWebView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(canGoForward));
    return (bool)__return;
}

double WKWebView__estimatedProgress(WKWebView* __this)
{
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(double, @selector(estimatedProgress));
    return __return;
}

bool WKWebView__get_CanGoBack(WKWebView* __this)
{
    return __this->canGoBack();
}

bool WKWebView__get_CanGoForward(WKWebView* __this)
{
    return __this->canGoForward();
}

double WKWebView__get_EstimatedProgress(WKWebView* __this)
{
    return __this->estimatedProgress();
}

bool WKWebView__get_Loading(WKWebView* __this)
{
    return __this->isLoading();
}

::app::iOS::Foundation::NSURL* WKWebView__get_URL(WKWebView* __this)
{
    return __this->url();
}

::app::iOS::WebKit::WKNavigation* WKWebView__goBack(WKWebView* __this)
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::WKNavigation*, @selector(goBack));
    return (::app::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::WebKit::WKNavigation__typeof());
}

::app::iOS::WebKit::WKNavigation* WKWebView__goForward(WKWebView* __this)
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::WKNavigation*, @selector(goForward));
    return (::app::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::WebKit::WKNavigation__typeof());
}

bool WKWebView__isLoading(WKWebView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isLoading));
    return (bool)__return;
}

::app::iOS::WebKit::WKNavigation* WKWebView__loadHTMLStringBaseURL(WKWebView* __this, ::uString* string__, ::app::iOS::Foundation::NSURL* baseURL_)
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::WKNavigation*, @selector(loadHTMLString:baseURL:),
        uObjC::NativeString(string__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)baseURL_));
    return (::app::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::WebKit::WKNavigation__typeof());
}

::app::iOS::WebKit::WKNavigation* WKWebView__loadRequest(WKWebView* __this, ::app::iOS::Foundation::NSURLRequest* request_)
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::WKNavigation*, @selector(loadRequest:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)request_));
    return (::app::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::WebKit::WKNavigation__typeof());
}

WKWebView* WKWebView__New_9(::uStatic* __this)
{
    WKWebView* inst = (WKWebView*)::uAllocObject(sizeof(WKWebView), WKWebView__typeof());
    inst->_ObjInit_9();
    return inst;
}

::app::iOS::WebKit::WKNavigation* WKWebView__reload(WKWebView* __this)
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::WKNavigation*, @selector(reload));
    return (::app::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::WebKit::WKNavigation__typeof());
}

void WKWebView__stopLoading(WKWebView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(stopLoading));
}

::app::iOS::Foundation::NSURL* WKWebView__url(WKWebView* __this)
{
    ::NSURL* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSURL*, @selector(URL));
    return (::app::iOS::Foundation::NSURL*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSURL__typeof());
}

}}}
