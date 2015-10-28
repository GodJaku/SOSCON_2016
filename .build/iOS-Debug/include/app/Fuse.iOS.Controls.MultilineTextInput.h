// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_MULTILINE_TEXT_INPUT_H__
#define __APP_FUSE_I_O_S_CONTROLS_MULTILINE_TEXT_INPUT_H__

#include <app/Fuse.iOS.Controls.ITextInputImpl.h>
#include <app/iOS.UIKit.IUIScrollViewDelegate.h>
#include <app/iOS.UIKit.IUITextViewDelegate.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct _NSRange; } } }
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }
namespace app { namespace iOS { namespace UIKit { struct NSTextAttachment; } } }
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }
namespace app { namespace iOS { namespace UIKit { struct UIScrollView; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct MultilineTextInput;

struct MultilineTextInput__uType : ::uClassType
{
    ::app::Fuse::iOS::Controls::ITextInputImpl __interface_0;
    ::app::iOS::UIKit::IUITextViewDelegate __interface_1;
    ::app::iOS::UIKit::IUIScrollViewDelegate __interface_2;
};

MultilineTextInput__uType* MultilineTextInput__typeof();

void MultilineTextInput___ObjInit(MultilineTextInput* __this);
void MultilineTextInput__add_TextChanged(MultilineTextInput* __this, ::uDelegate* value);
::app::iOS::UIKit::UIFont* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Font(MultilineTextInput* __this);
::uObject* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_IUITextInput(MultilineTextInput* __this);
int MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_LineCount(MultilineTextInput* __this);
::uString* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Text(MultilineTextInput* __this);
::app::iOS::UIKit::UIView* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_View(MultilineTextInput* __this);
void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_CaretColor(MultilineTextInput* __this, ::app::iOS::UIKit::UIColor* value);
void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Font(MultilineTextInput* __this, ::app::iOS::UIKit::UIFont* value);
void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Text(MultilineTextInput* __this, ::uString* value);
void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextAlignment(MultilineTextInput* __this, int value);
void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextColor(MultilineTextInput* __this, ::app::iOS::UIKit::UIColor* value);
::app::iOS::UIKit::UITextView* MultilineTextInput__get_TextView(MultilineTextInput* __this);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndDecelerating(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndDraggingWillDecelerate(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView, bool decelerate);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndScrollingAnimation(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndZoomingWithViewAtScale(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view, double scale);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidScroll(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidScrollToTop(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidZoom(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewShouldScrollToTop(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginDecelerating(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginDragging(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginZoomingWithView(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidBeginEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidChange(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidChangeSelection(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView);
void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidEndEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView);
bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldBeginEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView);
bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldChangeTextInRangeReplacementText(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::_NSRange range, ::uString* text);
bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldEndEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView);
bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldInteractWithTextAttachmentInRange(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::UIKit::NSTextAttachment* textAttachment, ::app::iOS::Foundation::_NSRange characterRange);
bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldInteractWithURLInRange(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::NSURL* URL, ::app::iOS::Foundation::_NSRange characterRange);
::app::iOS::UIKit::UIView* MultilineTextInput__iOS_UIKit_IUITextViewDelegate_viewForZoomingInScrollView(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
MultilineTextInput* MultilineTextInput__New_1(::uStatic* __this);
void MultilineTextInput__remove_TextChanged(MultilineTextInput* __this, ::uDelegate* value);

struct MultilineTextInput : ::uObject
{
    ::uStrong< ::app::iOS::UIKit::UITextView*> _textView;
    ::uStrong< ::uDelegate*> TextChanged;

    void _ObjInit() { MultilineTextInput___ObjInit(this); }
    void add_TextChanged(::uDelegate* value) { MultilineTextInput__add_TextChanged(this, value); }
    ::app::iOS::UIKit::UITextView* TextView() { return MultilineTextInput__get_TextView(this); }
    void remove_TextChanged(::uDelegate* value) { MultilineTextInput__remove_TextChanged(this, value); }
};

}}}}


#endif
