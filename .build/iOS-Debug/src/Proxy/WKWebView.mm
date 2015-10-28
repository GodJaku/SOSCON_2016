#define uObjC_NATIVE_TYPE WKWebView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::WebKit::WKWebView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::WebKit::WKWebView__typeof()

#include <WebKit/WebKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




















- (WKNavigation *) loadRequest:(NSURLRequest *)request
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::WebKit::WKNavigation* __return = __this->loadRequest((::app::iOS::Foundation::NSURLRequest*)uObjC::Lifetime::GetUnoObject(request, ::app::iOS::Foundation::NSURLRequest__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (WKNavigation *) loadHTMLString:(NSString *)string baseURL:(NSURL *)baseURL
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::WebKit::WKNavigation* __return = __this->loadHTMLStringBaseURL(uObjC::UnoString(string), (::app::iOS::Foundation::NSURL*)uObjC::Lifetime::GetUnoObject(baseURL, ::app::iOS::Foundation::NSURL__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}












- (WKNavigation *) goBack
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::WebKit::WKNavigation* __return = __this->goBack();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (WKNavigation *) goForward
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::WebKit::WKNavigation* __return = __this->goForward();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (WKNavigation *) reload
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::WebKit::WKNavigation* __return = __this->reload();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}












- (void) stopLoading
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->stopLoading();
}
































































- (NSURL *) URL
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSURL* __return = __this->url();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (BOOL) isLoading
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isLoading();
    return (BOOL)__return;
}



- (double) estimatedProgress
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->estimatedProgress();
    return __return;
}












- (BOOL) canGoBack
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->canGoBack();
    return (BOOL)__return;
}



- (BOOL) canGoForward
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->canGoForward();
    return (BOOL)__return;
}




























@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
