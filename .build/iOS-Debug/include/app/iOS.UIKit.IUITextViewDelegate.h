// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_I_U_I_TEXT_VIEW_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_I_U_I_TEXT_VIEW_DELEGATE_H__

#include <app/iOS.UIKit.IUIScrollViewDelegate.h>
#include <app/Uno.Object.h>
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

::uInterfaceType* IUITextViewDelegate__typeof();

struct IUITextViewDelegate
{
    void(*__fp_scrollViewDidEndDecelerating)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidEndDraggingWillDecelerate)(void*, ::app::iOS::UIKit::UIScrollView*, bool);
    void(*__fp_scrollViewDidEndScrollingAnimation)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidEndZoomingWithViewAtScale)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*, double);
    void(*__fp_scrollViewDidScroll)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidScrollToTop)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidZoom)(void*, ::app::iOS::UIKit::UIScrollView*);
    bool(*__fp_scrollViewShouldScrollToTop)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewWillBeginDecelerating)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewWillBeginDragging)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewWillBeginZoomingWithView)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*);
    void(*__fp_textViewDidBeginEditing)(void*, ::app::iOS::UIKit::UITextView*);
    void(*__fp_textViewDidChange)(void*, ::app::iOS::UIKit::UITextView*);
    void(*__fp_textViewDidChangeSelection)(void*, ::app::iOS::UIKit::UITextView*);
    void(*__fp_textViewDidEndEditing)(void*, ::app::iOS::UIKit::UITextView*);
    bool(*__fp_textViewShouldBeginEditing)(void*, ::app::iOS::UIKit::UITextView*);
    bool(*__fp_textViewShouldChangeTextInRangeReplacementText)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::Foundation::_NSRange, ::uString*);
    bool(*__fp_textViewShouldEndEditing)(void*, ::app::iOS::UIKit::UITextView*);
    bool(*__fp_textViewShouldInteractWithTextAttachmentInRange)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::UIKit::NSTextAttachment*, ::app::iOS::Foundation::_NSRange);
    bool(*__fp_textViewShouldInteractWithURLInRange)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::Foundation::NSURL*, ::app::iOS::Foundation::_NSRange);
    ::app::iOS::UIKit::UIView*(*__fp_viewForZoomingInScrollView)(void*, ::app::iOS::UIKit::UIScrollView*);

    static void scrollViewDidEndDecelerating(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewDidEndDecelerating((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidEndDraggingWillDecelerate(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView, bool decelerate) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewDidEndDraggingWillDecelerate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView, decelerate); }
    static void scrollViewDidEndScrollingAnimation(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewDidEndScrollingAnimation((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidEndZoomingWithViewAtScale(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view, double scale) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewDidEndZoomingWithViewAtScale((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView, view, scale); }
    static void scrollViewDidScroll(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewDidScroll((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidScrollToTop(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewDidScrollToTop((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidZoom(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewDidZoom((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static bool scrollViewShouldScrollToTop(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { return ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewShouldScrollToTop((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewWillBeginDecelerating(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewWillBeginDecelerating((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewWillBeginDragging(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewWillBeginDragging((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewWillBeginZoomingWithView(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_scrollViewWillBeginZoomingWithView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView, view); }
    static void textViewDidBeginEditing(::uObject* __this, ::app::iOS::UIKit::UITextView* textView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewDidBeginEditing((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView); }
    static void textViewDidChange(::uObject* __this, ::app::iOS::UIKit::UITextView* textView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewDidChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView); }
    static void textViewDidChangeSelection(::uObject* __this, ::app::iOS::UIKit::UITextView* textView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewDidChangeSelection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView); }
    static void textViewDidEndEditing(::uObject* __this, ::app::iOS::UIKit::UITextView* textView) { ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewDidEndEditing((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView); }
    static bool textViewShouldBeginEditing(::uObject* __this, ::app::iOS::UIKit::UITextView* textView) { return ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewShouldBeginEditing((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView); }
    static bool textViewShouldChangeTextInRangeReplacementText(::uObject* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::_NSRange range, ::uString* text);
    static bool textViewShouldEndEditing(::uObject* __this, ::app::iOS::UIKit::UITextView* textView) { return ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewShouldEndEditing((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView); }
    static bool textViewShouldInteractWithTextAttachmentInRange(::uObject* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::UIKit::NSTextAttachment* textAttachment, ::app::iOS::Foundation::_NSRange characterRange);
    static bool textViewShouldInteractWithURLInRange(::uObject* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::NSURL* URL, ::app::iOS::Foundation::_NSRange characterRange);
    static ::app::iOS::UIKit::UIView* viewForZoomingInScrollView(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { return ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_viewForZoomingInScrollView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
};

}}}

#include <app/iOS.Foundation._NSRange.h>

namespace app {
namespace iOS {
namespace UIKit {

inline bool IUITextViewDelegate::textViewShouldChangeTextInRangeReplacementText(::uObject* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::_NSRange range, ::uString* text) { return ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewShouldChangeTextInRangeReplacementText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView, range, text); }
inline bool IUITextViewDelegate::textViewShouldInteractWithTextAttachmentInRange(::uObject* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::UIKit::NSTextAttachment* textAttachment, ::app::iOS::Foundation::_NSRange characterRange) { return ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewShouldInteractWithTextAttachmentInRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView, textAttachment, characterRange); }
inline bool IUITextViewDelegate::textViewShouldInteractWithURLInRange(::uObject* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::NSURL* URL, ::app::iOS::Foundation::_NSRange characterRange) { return ((IUITextViewDelegate*)uGetInterfacePtr(__this, IUITextViewDelegate__typeof()))->__fp_textViewShouldInteractWithURLInRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textView, URL, characterRange); }

}}}


#endif
