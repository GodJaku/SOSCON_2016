// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextViewDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextViewDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.UIKit.Interop.IUITextViewDelegate.h>
#include <app/iOS.UIKit.NSTextAttachment.h>
#include <app/iOS.UIKit.UIScrollView.h>
#include <app/iOS.UIKit.UITextView.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

IUITextViewDelegate__uType* IUITextViewDelegate__typeof()
{
    static ::uStaticStrong<IUITextViewDelegate__uType*> type;
    if (type != NULL) return type;

    type = (IUITextViewDelegate__uType*)::uAllocClassType(sizeof(IUITextViewDelegate__uType), "iOS.UIKit.Interop.IUITextViewDelegate", false, 2, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_textViewShouldBeginEditing = (bool(*)(void*, ::app::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewShouldBeginEditing;
    type->__interface_0.__fp_textViewShouldEndEditing = (bool(*)(void*, ::app::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewShouldEndEditing;
    type->__interface_0.__fp_textViewDidBeginEditing = (void(*)(void*, ::app::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidBeginEditing;
    type->__interface_0.__fp_textViewDidEndEditing = (void(*)(void*, ::app::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidEndEditing;
    type->__interface_0.__fp_textViewShouldChangeTextInRangeReplacementText = (bool(*)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::Foundation::_NSRange, ::uString*))IUITextViewDelegate__textViewShouldChangeTextInRangeReplacementText;
    type->__interface_0.__fp_textViewDidChange = (void(*)(void*, ::app::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidChange;
    type->__interface_0.__fp_textViewDidChangeSelection = (void(*)(void*, ::app::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidChangeSelection;
    type->__interface_0.__fp_textViewShouldInteractWithURLInRange = (bool(*)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::Foundation::NSURL*, ::app::iOS::Foundation::_NSRange))IUITextViewDelegate__textViewShouldInteractWithURLInRange;
    type->__interface_0.__fp_textViewShouldInteractWithTextAttachmentInRange = (bool(*)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::UIKit::NSTextAttachment*, ::app::iOS::Foundation::_NSRange))IUITextViewDelegate__textViewShouldInteractWithTextAttachmentInRange;
    type->__interface_0.__fp_scrollViewDidScroll = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScroll;
    type->__interface_0.__fp_scrollViewDidZoom = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidZoom;
    type->__interface_0.__fp_scrollViewWillBeginDragging = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDragging;
    type->__interface_0.__fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, bool))IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate;
    type->__interface_0.__fp_scrollViewWillBeginDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDecelerating;
    type->__interface_0.__fp_scrollViewDidEndDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndDecelerating;
    type->__interface_0.__fp_scrollViewDidEndScrollingAnimation = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndScrollingAnimation;
    type->__interface_0.__fp_viewForZoomingInScrollView = (::app::iOS::UIKit::UIView*(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__viewForZoomingInScrollView;
    type->__interface_0.__fp_scrollViewWillBeginZoomingWithView = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*))IUITextViewDelegate__scrollViewWillBeginZoomingWithView;
    type->__interface_0.__fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*, double))IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale;
    type->__interface_0.__fp_scrollViewShouldScrollToTop = (bool(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewShouldScrollToTop;
    type->__interface_0.__fp_scrollViewDidScrollToTop = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScrollToTop;
    type->__interface_1.__fp_scrollViewDidScroll = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScroll;
    type->__interface_1.__fp_scrollViewDidZoom = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidZoom;
    type->__interface_1.__fp_scrollViewWillBeginDragging = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDragging;
    type->__interface_1.__fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, bool))IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate;
    type->__interface_1.__fp_scrollViewWillBeginDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDecelerating;
    type->__interface_1.__fp_scrollViewDidEndDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndDecelerating;
    type->__interface_1.__fp_scrollViewDidEndScrollingAnimation = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndScrollingAnimation;
    type->__interface_1.__fp_viewForZoomingInScrollView = (::app::iOS::UIKit::UIView*(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__viewForZoomingInScrollView;
    type->__interface_1.__fp_scrollViewWillBeginZoomingWithView = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*))IUITextViewDelegate__scrollViewWillBeginZoomingWithView;
    type->__interface_1.__fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*, double))IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale;
    type->__interface_1.__fp_scrollViewShouldScrollToTop = (bool(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewShouldScrollToTop;
    type->__interface_1.__fp_scrollViewDidScrollToTop = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScrollToTop;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUITextViewDelegate__typeof(), offsetof(IUITextViewDelegate__uType, __interface_0),
        ::app::iOS::UIKit::IUIScrollViewDelegate__typeof(), offsetof(IUITextViewDelegate__uType, __interface_1));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void IUITextViewDelegate__scrollViewDidEndDecelerating(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndDragging:willDecelerate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        (BOOL)decelerate_);
}

void IUITextViewDelegate__scrollViewDidEndScrollingAnimation(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndScrollingAnimation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_, double scale_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndZooming:withView:atScale:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        (CGFloat)scale_);
}

void IUITextViewDelegate__scrollViewDidScroll(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidScroll:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUITextViewDelegate__scrollViewDidScrollToTop(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUITextViewDelegate__scrollViewDidZoom(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidZoom:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

bool IUITextViewDelegate__scrollViewShouldScrollToTop(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(scrollViewShouldScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (bool)__return;
}

void IUITextViewDelegate__scrollViewWillBeginDecelerating(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewWillBeginDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUITextViewDelegate__scrollViewWillBeginDragging(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewWillBeginDragging:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUITextViewDelegate__scrollViewWillBeginZoomingWithView(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewWillBeginZooming:withView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

void IUITextViewDelegate__textViewDidBeginEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(textViewDidBeginEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

void IUITextViewDelegate__textViewDidChange(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(textViewDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

void IUITextViewDelegate__textViewDidChangeSelection(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(textViewDidChangeSelection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

void IUITextViewDelegate__textViewDidEndEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(textViewDidEndEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

bool IUITextViewDelegate__textViewShouldBeginEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(textViewShouldBeginEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
    return (bool)__return;
}

bool IUITextViewDelegate__textViewShouldChangeTextInRangeReplacementText(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::_NSRange range_, ::uString* text_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(textView:shouldChangeTextInRange:replacementText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_),
        uObjC::Struct::FromUno__NSRange(range_, ::_NSRange()),
        uObjC::NativeString(text_));
    return (bool)__return;
}

bool IUITextViewDelegate__textViewShouldEndEditing(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(textViewShouldEndEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
    return (bool)__return;
}

bool IUITextViewDelegate__textViewShouldInteractWithTextAttachmentInRange(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_, ::app::iOS::UIKit::NSTextAttachment* textAttachment_, ::app::iOS::Foundation::_NSRange characterRange_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(textView:shouldInteractWithTextAttachment:inRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textAttachment_),
        uObjC::Struct::FromUno__NSRange(characterRange_, ::_NSRange()));
    return (bool)__return;
}

bool IUITextViewDelegate__textViewShouldInteractWithURLInRange(IUITextViewDelegate* __this, ::app::iOS::UIKit::UITextView* textView_, ::app::iOS::Foundation::NSURL* URL_, ::app::iOS::Foundation::_NSRange characterRange_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(textView:shouldInteractWithURL:inRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)URL_),
        uObjC::Struct::FromUno__NSRange(characterRange_, ::_NSRange()));
    return (bool)__return;
}

::app::iOS::UIKit::UIView* IUITextViewDelegate__viewForZoomingInScrollView(IUITextViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIView*, @selector(viewForZoomingInScrollView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIView__typeof());
}

}}}}
