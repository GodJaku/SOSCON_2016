// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_WEB_KIT_W_K_WEB_VIEW_H__
#define __APP_I_O_S_WEB_KIT_W_K_WEB_VIEW_H__

#include <app/iOS.UIKit.UIView.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }
namespace app { namespace iOS { namespace Foundation { struct NSURLRequest; } } }
namespace app { namespace iOS { namespace WebKit { struct WKNavigation; } } }

namespace app {
namespace iOS {
namespace WebKit {

struct WKWebView;

struct WKWebView__uType : ::app::iOS::UIKit::UIView__uType
{
};

WKWebView__uType* WKWebView__typeof();

void WKWebView___ObjInit_9(WKWebView* __this);
bool WKWebView__canGoBack(WKWebView* __this);
bool WKWebView__canGoForward(WKWebView* __this);
double WKWebView__estimatedProgress(WKWebView* __this);
bool WKWebView__get_CanGoBack(WKWebView* __this);
bool WKWebView__get_CanGoForward(WKWebView* __this);
double WKWebView__get_EstimatedProgress(WKWebView* __this);
bool WKWebView__get_Loading(WKWebView* __this);
::app::iOS::Foundation::NSURL* WKWebView__get_URL(WKWebView* __this);
::app::iOS::WebKit::WKNavigation* WKWebView__goBack(WKWebView* __this);
::app::iOS::WebKit::WKNavigation* WKWebView__goForward(WKWebView* __this);
bool WKWebView__isLoading(WKWebView* __this);
::app::iOS::WebKit::WKNavigation* WKWebView__loadHTMLStringBaseURL(WKWebView* __this, ::uString* string__, ::app::iOS::Foundation::NSURL* baseURL_);
::app::iOS::WebKit::WKNavigation* WKWebView__loadRequest(WKWebView* __this, ::app::iOS::Foundation::NSURLRequest* request_);
WKWebView* WKWebView__New_9(::uStatic* __this);
::app::iOS::WebKit::WKNavigation* WKWebView__reload(WKWebView* __this);
void WKWebView__stopLoading(WKWebView* __this);
::app::iOS::Foundation::NSURL* WKWebView__url(WKWebView* __this);

struct WKWebView : ::app::iOS::UIKit::UIView
{
    void _ObjInit_9() { WKWebView___ObjInit_9(this); }
    bool canGoBack() { return WKWebView__canGoBack(this); }
    bool canGoForward() { return WKWebView__canGoForward(this); }
    double estimatedProgress() { return WKWebView__estimatedProgress(this); }
    bool CanGoBack() { return WKWebView__get_CanGoBack(this); }
    bool CanGoForward() { return WKWebView__get_CanGoForward(this); }
    double EstimatedProgress() { return WKWebView__get_EstimatedProgress(this); }
    bool Loading() { return WKWebView__get_Loading(this); }
    ::app::iOS::Foundation::NSURL* URL() { return WKWebView__get_URL(this); }
    ::app::iOS::WebKit::WKNavigation* goBack() { return WKWebView__goBack(this); }
    ::app::iOS::WebKit::WKNavigation* goForward() { return WKWebView__goForward(this); }
    bool isLoading() { return WKWebView__isLoading(this); }
    ::app::iOS::WebKit::WKNavigation* loadHTMLStringBaseURL(::uString* string__, ::app::iOS::Foundation::NSURL* baseURL_) { return WKWebView__loadHTMLStringBaseURL(this, string__, baseURL_); }
    ::app::iOS::WebKit::WKNavigation* loadRequest(::app::iOS::Foundation::NSURLRequest* request_) { return WKWebView__loadRequest(this, request_); }
    ::app::iOS::WebKit::WKNavigation* reload() { return WKWebView__reload(this); }
    void stopLoading() { WKWebView__stopLoading(this); }
    ::app::iOS::Foundation::NSURL* url() { return WKWebView__url(this); }
};

}}}


#endif
