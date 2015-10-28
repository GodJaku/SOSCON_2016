// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_VIEW_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_VIEW_DELEGATE_H__

#include <app/iOS.UIKit.IUIScrollViewDelegate.h>
#include <app/iOS.UIKit.IUITextViewDelegate.h>
#include <app/ObjC.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct _NSRange; } } }
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }
namespace app { namespace iOS { namespace UIKit { struct NSTextAttachment; } } }
namespace app { namespace iOS { namespace UIKit { struct UIScrollView; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUITextViewDelegate;

struct IUITextViewDelegate__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUITextViewDelegate __interface_0;
    ::app::iOS::UIKit::IUIScrollViewDelegate __interface_1;
};

IUITextViewDelegate__uType* IUITextViewDelegate__typeof();

void IUITextViewDelegate__scrollViewDidEndDecelerating(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_);
void IUITextViewDelegate__scrollViewDidEndScrollingAnimation(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_, double scale_);
void IUITextViewDelegate__scrollViewDidScroll(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUITextViewDelegate__scrollViewDidScrollToTop(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUITextViewDelegate__scrollViewDidZoom(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
bool IUITextViewDelegate__scrollViewShouldScrollToTop(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUITextViewDelegate__scrollViewWillBeginDecelerating(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUITextViewDelegate__scrollViewWillBeginDragging(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUITextViewDelegate__scrollViewWillBeginZoomingWithView(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_);
void IUITextViewDelegate__textViewDidBeginEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_);
void IUITextViewDelegate__textViewDidChange(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_);
void IUITextViewDelegate__textViewDidChangeSelection(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_);
void IUITextViewDelegate__textViewDidEndEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_);
bool IUITextViewDelegate__textViewShouldBeginEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_);
bool IUITextViewDelegate__textViewShouldChangeTextInRangeReplacementText(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::_NSRange range_, ::uString* text_);
bool IUITextViewDelegate__textViewShouldEndEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_);
bool IUITextViewDelegate__textViewShouldInteractWithTextAttachmentInRange(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_, ::app::iOS::UIKit::NSTextAttachment* textAttachment_, ::app::iOS::Foundation::_NSRange characterRange_);
bool IUITextViewDelegate__textViewShouldInteractWithURLInRange(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::NSURL* URL_, ::app::iOS::Foundation::_NSRange characterRange_);
::app::iOS::UIKit::UIView* IUITextViewDelegate__viewForZoomingInScrollView(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);

struct IUITextViewDelegate : ::app::ObjC::Object
{
    void scrollViewDidEndDecelerating(::app::iOS::UIKit::UIScrollView* scrollView_) { IUITextViewDelegate__scrollViewDidEndDecelerating(this, scrollView_); }
    void scrollViewDidEndDraggingWillDecelerate(::app::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_) { IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate(this, scrollView_, decelerate_); }
    void scrollViewDidEndScrollingAnimation(::app::iOS::UIKit::UIScrollView* scrollView_) { IUITextViewDelegate__scrollViewDidEndScrollingAnimation(this, scrollView_); }
    void scrollViewDidEndZoomingWithViewAtScale(::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_, double scale_) { IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale(this, scrollView_, view_, scale_); }
    void scrollViewDidScroll(::app::iOS::UIKit::UIScrollView* scrollView_) { IUITextViewDelegate__scrollViewDidScroll(this, scrollView_); }
    void scrollViewDidScrollToTop(::app::iOS::UIKit::UIScrollView* scrollView_) { IUITextViewDelegate__scrollViewDidScrollToTop(this, scrollView_); }
    void scrollViewDidZoom(::app::iOS::UIKit::UIScrollView* scrollView_) { IUITextViewDelegate__scrollViewDidZoom(this, scrollView_); }
    bool scrollViewShouldScrollToTop(::app::iOS::UIKit::UIScrollView* scrollView_) { return IUITextViewDelegate__scrollViewShouldScrollToTop(this, scrollView_); }
    void scrollViewWillBeginDecelerating(::app::iOS::UIKit::UIScrollView* scrollView_) { IUITextViewDelegate__scrollViewWillBeginDecelerating(this, scrollView_); }
    void scrollViewWillBeginDragging(::app::iOS::UIKit::UIScrollView* scrollView_) { IUITextViewDelegate__scrollViewWillBeginDragging(this, scrollView_); }
    void scrollViewWillBeginZoomingWithView(::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_) { IUITextViewDelegate__scrollViewWillBeginZoomingWithView(this, scrollView_, view_); }
    void textViewDidBeginEditing(::app::iOS::UIKit::UITextView* textView_) { IUITextViewDelegate__textViewDidBeginEditing(this, textView_); }
    void textViewDidChange(::app::iOS::UIKit::UITextView* textView_) { IUITextViewDelegate__textViewDidChange(this, textView_); }
    void textViewDidChangeSelection(::app::iOS::UIKit::UITextView* textView_) { IUITextViewDelegate__textViewDidChangeSelection(this, textView_); }
    void textViewDidEndEditing(::app::iOS::UIKit::UITextView* textView_) { IUITextViewDelegate__textViewDidEndEditing(this, textView_); }
    bool textViewShouldBeginEditing(::app::iOS::UIKit::UITextView* textView_) { return IUITextViewDelegate__textViewShouldBeginEditing(this, textView_); }
    bool textViewShouldChangeTextInRangeReplacementText(::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::_NSRange range_, ::uString* text_);
    bool textViewShouldEndEditing(::app::iOS::UIKit::UITextView* textView_) { return IUITextViewDelegate__textViewShouldEndEditing(this, textView_); }
    bool textViewShouldInteractWithTextAttachmentInRange(::app::iOS::UIKit::UITextView* textView_, ::app::iOS::UIKit::NSTextAttachment* textAttachment_, ::app::iOS::Foundation::_NSRange characterRange_);
    bool textViewShouldInteractWithURLInRange(::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::NSURL* URL_, ::app::iOS::Foundation::_NSRange characterRange_);
    ::app::iOS::UIKit::UIView* viewForZoomingInScrollView(::app::iOS::UIKit::UIScrollView* scrollView_) { return IUITextViewDelegate__viewForZoomingInScrollView(this, scrollView_); }
};

}}}}

#include <app/iOS.Foundation._NSRange.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

inline bool IUITextViewDelegate::textViewShouldChangeTextInRangeReplacementText(::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::_NSRange range_, ::uString* text_) { return IUITextViewDelegate__textViewShouldChangeTextInRangeReplacementText(this, textView_, range_, text_); }
inline bool IUITextViewDelegate::textViewShouldInteractWithTextAttachmentInRange(::app::iOS::UIKit::UITextView* textView_, ::app::iOS::UIKit::NSTextAttachment* textAttachment_, ::app::iOS::Foundation::_NSRange characterRange_) { return IUITextViewDelegate__textViewShouldInteractWithTextAttachmentInRange(this, textView_, textAttachment_, characterRange_); }
inline bool IUITextViewDelegate::textViewShouldInteractWithURLInRange(::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::NSURL* URL_, ::app::iOS::Foundation::_NSRange characterRange_) { return IUITextViewDelegate__textViewShouldInteractWithURLInRange(this, textView_, URL_, characterRange_); }

}}}}


#endif
