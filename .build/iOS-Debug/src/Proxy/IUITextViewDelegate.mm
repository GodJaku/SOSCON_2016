#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextViewDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextViewDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (BOOL) textViewShouldBeginEditing:(UITextView *)textView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextViewDelegate::textViewShouldBeginEditing(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()));
    return (BOOL)__return;
}



- (BOOL) textViewShouldEndEditing:(UITextView *)textView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextViewDelegate::textViewShouldEndEditing(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()));
    return (BOOL)__return;
}



- (void) textViewDidBeginEditing:(UITextView *)textView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::textViewDidBeginEditing(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()));
}



- (void) textViewDidEndEditing:(UITextView *)textView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::textViewDidEndEditing(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()));
}



- (BOOL) textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextViewDelegate::textViewShouldChangeTextInRangeReplacementText(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()), uObjC::Struct::ToUno__NSRange(range, ::app::iOS::Foundation::_NSRange()), uObjC::UnoString(text));
    return (BOOL)__return;
}



- (void) textViewDidChange:(UITextView *)textView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::textViewDidChange(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()));
}



- (void) textViewDidChangeSelection:(UITextView *)textView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::textViewDidChangeSelection(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()));
}



- (BOOL) textView:(UITextView *)textView shouldInteractWithURL:(NSURL *)URL inRange:(NSRange)characterRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextViewDelegate::textViewShouldInteractWithURLInRange(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()), (::app::iOS::Foundation::NSURL*)uObjC::Lifetime::GetUnoObject(URL, ::app::iOS::Foundation::NSURL__typeof()), uObjC::Struct::ToUno__NSRange(characterRange, ::app::iOS::Foundation::_NSRange()));
    return (BOOL)__return;
}



- (BOOL) textView:(UITextView *)textView shouldInteractWithTextAttachment:(NSTextAttachment *)textAttachment inRange:(NSRange)characterRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextViewDelegate::textViewShouldInteractWithTextAttachmentInRange(__this, (::app::iOS::UIKit::UITextView*)uObjC::Lifetime::GetUnoObject(textView, ::app::iOS::UIKit::UITextView__typeof()), (::app::iOS::UIKit::NSTextAttachment*)uObjC::Lifetime::GetUnoObject(textAttachment, ::app::iOS::UIKit::NSTextAttachment__typeof()), uObjC::Struct::ToUno__NSRange(characterRange, ::app::iOS::Foundation::_NSRange()));
    return (BOOL)__return;
}



- (void) scrollViewDidScroll:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewDidScroll(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidZoom:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewDidZoom(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewWillBeginDragging(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewDidEndDraggingWillDecelerate(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()), (bool)decelerate);
}



- (void) scrollViewWillBeginDecelerating:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewWillBeginDecelerating(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidEndDecelerating:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewDidEndDecelerating(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (void) scrollViewDidEndScrollingAnimation:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewDidEndScrollingAnimation(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}



- (UIView *) viewForZoomingInScrollView:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIView* __return = ::app::iOS::UIKit::IUITextViewDelegate::viewForZoomingInScrollView(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) scrollViewWillBeginZooming:(UIScrollView *)scrollView withView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewWillBeginZoomingWithView(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()), (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()));
}



- (void) scrollViewDidEndZooming:(UIScrollView *)scrollView withView:(UIView *)view atScale:(CGFloat)scale
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewDidEndZoomingWithViewAtScale(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()), (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()), (double)scale);
}



- (BOOL) scrollViewShouldScrollToTop:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextViewDelegate::scrollViewShouldScrollToTop(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
    return (BOOL)__return;
}



- (void) scrollViewDidScrollToTop:(UIScrollView *)scrollView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextViewDelegate::scrollViewDidScrollToTop(__this, (::app::iOS::UIKit::UIScrollView*)uObjC::Lifetime::GetUnoObject(scrollView, ::app::iOS::UIKit::UIScrollView__typeof()));
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
