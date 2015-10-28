#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIScrollViewDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIScrollViewDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (void) scrollViewDidScroll:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewDidScroll(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidZoom:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewDidZoom(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewWillBeginDragging(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewDidEndDraggingWillDecelerate(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()), (bool)decelerate);
}



- (void) scrollViewWillBeginDecelerating:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewWillBeginDecelerating(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidEndDecelerating:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewDidEndDecelerating(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidEndScrollingAnimation:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewDidEndScrollingAnimation(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (UIView *) viewForZoomingInScrollView:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIView* __return = ::app::iOS::UIKit::IUIScrollViewDelegate::viewForZoomingInScrollView(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) scrollViewWillBeginZooming:(UIScrollView *)scrollView withView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewWillBeginZoomingWithView(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()), (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()));
}



- (void) scrollViewDidEndZooming:(UIScrollView *)scrollView withView:(UIView *)view atScale:(CGFloat)scale
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewDidEndZoomingWithViewAtScale(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()), (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()), (double)scale);
}



- (BOOL) scrollViewShouldScrollToTop:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewShouldScrollToTop(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
    return (BOOL)__return;
}



- (void) scrollViewDidScrollToTop:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIScrollViewDelegate::scrollViewDidScrollToTop(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
