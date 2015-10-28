// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_TEXT_VIEW_H__
#define __APP_I_O_S_U_I_KIT_U_I_TEXT_VIEW_H__

#include <app/iOS.UIKit.IUIKeyInput.h>
#include <app/iOS.UIKit.IUITextInput.h>
#include <app/iOS.UIKit.IUITextInputTraits.h>
#include <app/iOS.UIKit.UIScrollView.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace Foundation { struct _NSRange; } } }
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIEdgeInsets; } } }
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextPosition; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextRange; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UITextView;

struct UITextView__uType : ::app::iOS::UIKit::UIScrollView__uType
{
    ::app::iOS::UIKit::IUITextInput __interface_0;
    ::app::iOS::UIKit::IUIKeyInput __interface_1;
    ::app::iOS::UIKit::IUITextInputTraits __interface_2;
};

UITextView__uType* UITextView__typeof();

void UITextView___ObjInit_11(UITextView* __this);
int UITextView__autocapitalizationType(UITextView* __this);
int UITextView__autocorrectionType(UITextView* __this);
int UITextView__baseWritingDirectionForPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::app::iOS::UIKit::UITextPosition* UITextView__beginningOfDocument(UITextView* __this);
::app::iOS::CoreGraphics::CGRect UITextView__caretRectForPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_);
int UITextView__characterOffsetOfPositionWithinRange(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UITextRange* UITextView__characterRangeAtPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point_);
::app::iOS::UIKit::UITextRange* UITextView__characterRangeByExtendingPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::app::iOS::UIKit::UITextPosition* UITextView__closestPositionToPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point_);
::app::iOS::UIKit::UITextPosition* UITextView__closestPositionToPointWithinRange(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_);
int UITextView__comparePositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_);
::uObject* UITextView__delegate__1(UITextView* __this);
void UITextView__deleteBackward(UITextView* __this);
void UITextView__dictationRecognitionFailed(UITextView* __this);
void UITextView__dictationRecordingDidEnd(UITextView* __this);
bool UITextView__enablesReturnKeyAutomatically(UITextView* __this);
::app::iOS::UIKit::UITextPosition* UITextView__endOfDocument(UITextView* __this);
::app::iOS::CoreGraphics::CGRect UITextView__firstRectForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UIFont* UITextView__font(UITextView* __this);
::app::iOS::CoreGraphics::CGRect UITextView__frameForDictationResultPlaceholder(UITextView* __this, ::id placeholder_);
::uObject* UITextView__get_Delegate_1(UITextView* __this);
::app::iOS::UIKit::UIFont* UITextView__get_Font(UITextView* __this);
int UITextView__get_KeyboardType(UITextView* __this);
::uString* UITextView__get_Text(UITextView* __this);
int UITextView__get_TextAlignment(UITextView* __this);
::app::iOS::UIKit::UIColor* UITextView__get_TextColor(UITextView* __this);
::app::iOS::UIKit::UIEdgeInsets UITextView__get_TextContainerInset(UITextView* __this);
bool UITextView__hasText(UITextView* __this);
::uObject* UITextView__inputDelegate(UITextView* __this);
void UITextView__insertDictationResult(UITextView* __this, ::app::iOS::Foundation::NSArray* dictationResult_);
::id UITextView__insertDictationResultPlaceholder(UITextView* __this);
void UITextView__insertText(UITextView* __this, ::uString* text_);
void UITextView__iOS_UIKit_IUIKeyInput_deleteBackward(UITextView* __this);
bool UITextView__iOS_UIKit_IUIKeyInput_hasText(UITextView* __this);
void UITextView__iOS_UIKit_IUIKeyInput_insertText(UITextView* __this, ::uString* text);
int UITextView__iOS_UIKit_IUITextInput_baseWritingDirectionForPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction);
::app::iOS::CoreGraphics::CGRect UITextView__iOS_UIKit_IUITextInput_caretRectForPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position);
int UITextView__iOS_UIKit_IUITextInput_characterOffsetOfPositionWithinRange(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextRange* range);
::app::iOS::UIKit::UITextRange* UITextView__iOS_UIKit_IUITextInput_characterRangeAtPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point);
::app::iOS::UIKit::UITextRange* UITextView__iOS_UIKit_IUITextInput_characterRangeByExtendingPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction);
::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_closestPositionToPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point);
::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_closestPositionToPointWithinRange(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point, ::app::iOS::UIKit::UITextRange* range);
int UITextView__iOS_UIKit_IUITextInput_comparePositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextPosition* other);
void UITextView__iOS_UIKit_IUITextInput_dictationRecognitionFailed(UITextView* __this);
void UITextView__iOS_UIKit_IUITextInput_dictationRecordingDidEnd(UITextView* __this);
::app::iOS::CoreGraphics::CGRect UITextView__iOS_UIKit_IUITextInput_firstRectForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range);
::app::iOS::CoreGraphics::CGRect UITextView__iOS_UIKit_IUITextInput_frameForDictationResultPlaceholder(UITextView* __this, ::id placeholder);
void UITextView__iOS_UIKit_IUITextInput_insertDictationResult(UITextView* __this, ::app::iOS::Foundation::NSArray* dictationResult);
::id UITextView__iOS_UIKit_IUITextInput_insertDictationResultPlaceholder(UITextView* __this);
int UITextView__iOS_UIKit_IUITextInput_offsetFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* from, ::app::iOS::UIKit::UITextPosition* toPosition);
::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionFromPositionInDirectionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction, int offset);
::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionFromPositionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int offset);
::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionWithinRangeAtCharacterOffset(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, int offset);
::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionWithinRangeFarthestInDirection(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, int direction);
void UITextView__iOS_UIKit_IUITextInput_removeDictationResultPlaceholderWillInsertResult(UITextView* __this, ::id placeholder, bool willInsertResult);
void UITextView__iOS_UIKit_IUITextInput_replaceRangeWithText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text);
::app::iOS::Foundation::NSArray* UITextView__iOS_UIKit_IUITextInput_selectionRectsForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range);
void UITextView__iOS_UIKit_IUITextInput_setBaseWritingDirectionForRange(UITextView* __this, int writingDirection, ::app::iOS::UIKit::UITextRange* range);
void UITextView__iOS_UIKit_IUITextInput_setMarkedTextSelectedRange(UITextView* __this, ::uString* markedText, ::app::iOS::Foundation::_NSRange selectedRange);
bool UITextView__iOS_UIKit_IUITextInput_shouldChangeTextInRangeReplacementText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text);
::uString* UITextView__iOS_UIKit_IUITextInput_textInRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range);
::app::iOS::UIKit::UITextRange* UITextView__iOS_UIKit_IUITextInput_textRangeFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* fromPosition, ::app::iOS::UIKit::UITextPosition* toPosition);
::app::iOS::Foundation::NSDictionary* UITextView__iOS_UIKit_IUITextInput_textStylingAtPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction);
void UITextView__iOS_UIKit_IUITextInput_unmarkText(UITextView* __this);
bool UITextView__isSecureTextEntry(UITextView* __this);
int UITextView__keyboardAppearance(UITextView* __this);
int UITextView__keyboardType(UITextView* __this);
::app::iOS::UIKit::UITextRange* UITextView__markedTextRange(UITextView* __this);
::app::iOS::Foundation::NSDictionary* UITextView__markedTextStyle(UITextView* __this);
UITextView* UITextView__New_11(::uStatic* __this);
int UITextView__offsetFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_);
::app::iOS::UIKit::UITextPosition* UITextView__positionFromPositionInDirectionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_);
::app::iOS::UIKit::UITextPosition* UITextView__positionFromPositionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int offset_);
::app::iOS::UIKit::UITextPosition* UITextView__positionWithinRangeAtCharacterOffset(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, int offset_);
::app::iOS::UIKit::UITextPosition* UITextView__positionWithinRangeFarthestInDirection(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, int direction_);
void UITextView__removeDictationResultPlaceholderWillInsertResult(UITextView* __this, ::id placeholder_, bool willInsertResult_);
void UITextView__replaceRangeWithText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_);
int UITextView__returnKeyType(UITextView* __this);
::app::iOS::UIKit::UITextRange* UITextView__selectedTextRange(UITextView* __this);
int UITextView__selectionAffinity(UITextView* __this);
::app::iOS::Foundation::NSArray* UITextView__selectionRectsForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_);
void UITextView__set_Delegate_1(UITextView* __this, ::uObject* value);
void UITextView__set_Font(UITextView* __this, ::app::iOS::UIKit::UIFont* value);
void UITextView__set_KeyboardType(UITextView* __this, int value);
void UITextView__set_Text(UITextView* __this, ::uString* value);
void UITextView__set_TextAlignment(UITextView* __this, int value);
void UITextView__set_TextColor(UITextView* __this, ::app::iOS::UIKit::UIColor* value);
void UITextView__set_TextContainerInset(UITextView* __this, ::app::iOS::UIKit::UIEdgeInsets value);
void UITextView__setAutocapitalizationType(UITextView* __this, int autocapitalizationType_);
void UITextView__setAutocorrectionType(UITextView* __this, int autocorrectionType_);
void UITextView__setBaseWritingDirectionForRange(UITextView* __this, int writingDirection_, ::app::iOS::UIKit::UITextRange* range_);
void UITextView__setDelegate_1(UITextView* __this, ::uObject* delegate__);
void UITextView__setEnablesReturnKeyAutomatically(UITextView* __this, bool enablesReturnKeyAutomatically_);
void UITextView__setFont(UITextView* __this, ::app::iOS::UIKit::UIFont* font_);
void UITextView__setInputDelegate(UITextView* __this, ::uObject* inputDelegate_);
void UITextView__setKeyboardAppearance(UITextView* __this, int keyboardAppearance_);
void UITextView__setKeyboardType(UITextView* __this, int keyboardType_);
void UITextView__setMarkedTextSelectedRange(UITextView* __this, ::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_);
void UITextView__setMarkedTextStyle(UITextView* __this, ::app::iOS::Foundation::NSDictionary* markedTextStyle_);
void UITextView__setReturnKeyType(UITextView* __this, int returnKeyType_);
void UITextView__setSecureTextEntry(UITextView* __this, bool secureTextEntry_);
void UITextView__setSelectedTextRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* selectedTextRange_);
void UITextView__setSelectionAffinity(UITextView* __this, int selectionAffinity_);
void UITextView__setSpellCheckingType(UITextView* __this, int spellCheckingType_);
void UITextView__setText(UITextView* __this, ::uString* text_);
void UITextView__setTextAlignment(UITextView* __this, int textAlignment_);
void UITextView__setTextColor(UITextView* __this, ::app::iOS::UIKit::UIColor* textColor_);
void UITextView__setTextContainerInset(UITextView* __this, ::app::iOS::UIKit::UIEdgeInsets textContainerInset_);
bool UITextView__shouldChangeTextInRangeReplacementText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_);
int UITextView__spellCheckingType(UITextView* __this);
::uString* UITextView__text(UITextView* __this);
int UITextView__textAlignment(UITextView* __this);
::app::iOS::UIKit::UIColor* UITextView__textColor(UITextView* __this);
::app::iOS::UIKit::UIEdgeInsets UITextView__textContainerInset(UITextView* __this);
::app::iOS::UIKit::UIView* UITextView__textInputView(UITextView* __this);
::uString* UITextView__textInRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UITextRange* UITextView__textRangeFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_);
::app::iOS::Foundation::NSDictionary* UITextView__textStylingAtPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::uObject* UITextView__tokenizer(UITextView* __this);
void UITextView__unmarkText(UITextView* __this);

struct UITextView : ::app::iOS::UIKit::UIScrollView
{
    void _ObjInit_11() { UITextView___ObjInit_11(this); }
    int autocapitalizationType() { return UITextView__autocapitalizationType(this); }
    int autocorrectionType() { return UITextView__autocorrectionType(this); }
    int baseWritingDirectionForPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return UITextView__baseWritingDirectionForPositionInDirection(this, position_, direction_); }
    ::app::iOS::UIKit::UITextPosition* beginningOfDocument() { return UITextView__beginningOfDocument(this); }
    ::app::iOS::CoreGraphics::CGRect caretRectForPosition(::app::iOS::UIKit::UITextPosition* position_);
    int characterOffsetOfPositionWithinRange(::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_) { return UITextView__characterOffsetOfPositionWithinRange(this, position_, range_); }
    ::app::iOS::UIKit::UITextRange* characterRangeAtPoint(::app::iOS::CoreGraphics::CGPoint point_);
    ::app::iOS::UIKit::UITextRange* characterRangeByExtendingPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return UITextView__characterRangeByExtendingPositionInDirection(this, position_, direction_); }
    ::app::iOS::UIKit::UITextPosition* closestPositionToPoint(::app::iOS::CoreGraphics::CGPoint point_);
    ::app::iOS::UIKit::UITextPosition* closestPositionToPointWithinRange(::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_);
    int comparePositionToPosition(::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_) { return UITextView__comparePositionToPosition(this, position_, other_); }
    ::uObject* delegate__1() { return UITextView__delegate__1(this); }
    void deleteBackward() { UITextView__deleteBackward(this); }
    void dictationRecognitionFailed() { UITextView__dictationRecognitionFailed(this); }
    void dictationRecordingDidEnd() { UITextView__dictationRecordingDidEnd(this); }
    bool enablesReturnKeyAutomatically() { return UITextView__enablesReturnKeyAutomatically(this); }
    ::app::iOS::UIKit::UITextPosition* endOfDocument() { return UITextView__endOfDocument(this); }
    ::app::iOS::CoreGraphics::CGRect firstRectForRange(::app::iOS::UIKit::UITextRange* range_);
    ::app::iOS::UIKit::UIFont* font() { return UITextView__font(this); }
    ::app::iOS::CoreGraphics::CGRect frameForDictationResultPlaceholder(::id placeholder_);
    ::uObject* Delegate_1() { return UITextView__get_Delegate_1(this); }
    ::app::iOS::UIKit::UIFont* Font() { return UITextView__get_Font(this); }
    int KeyboardType() { return UITextView__get_KeyboardType(this); }
    ::uString* Text() { return UITextView__get_Text(this); }
    int TextAlignment() { return UITextView__get_TextAlignment(this); }
    ::app::iOS::UIKit::UIColor* TextColor() { return UITextView__get_TextColor(this); }
    ::app::iOS::UIKit::UIEdgeInsets TextContainerInset();
    bool hasText() { return UITextView__hasText(this); }
    ::uObject* inputDelegate() { return UITextView__inputDelegate(this); }
    void insertDictationResult(::app::iOS::Foundation::NSArray* dictationResult_) { UITextView__insertDictationResult(this, dictationResult_); }
    ::id insertDictationResultPlaceholder() { return UITextView__insertDictationResultPlaceholder(this); }
    void insertText(::uString* text_) { UITextView__insertText(this, text_); }
    bool isSecureTextEntry() { return UITextView__isSecureTextEntry(this); }
    int keyboardAppearance() { return UITextView__keyboardAppearance(this); }
    int keyboardType() { return UITextView__keyboardType(this); }
    ::app::iOS::UIKit::UITextRange* markedTextRange() { return UITextView__markedTextRange(this); }
    ::app::iOS::Foundation::NSDictionary* markedTextStyle() { return UITextView__markedTextStyle(this); }
    int offsetFromPositionToPosition(::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_) { return UITextView__offsetFromPositionToPosition(this, from_, toPosition_); }
    ::app::iOS::UIKit::UITextPosition* positionFromPositionInDirectionOffset(::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_) { return UITextView__positionFromPositionInDirectionOffset(this, position_, direction_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionFromPositionOffset(::app::iOS::UIKit::UITextPosition* position_, int offset_) { return UITextView__positionFromPositionOffset(this, position_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionWithinRangeAtCharacterOffset(::app::iOS::UIKit::UITextRange* range_, int offset_) { return UITextView__positionWithinRangeAtCharacterOffset(this, range_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionWithinRangeFarthestInDirection(::app::iOS::UIKit::UITextRange* range_, int direction_) { return UITextView__positionWithinRangeFarthestInDirection(this, range_, direction_); }
    void removeDictationResultPlaceholderWillInsertResult(::id placeholder_, bool willInsertResult_) { UITextView__removeDictationResultPlaceholderWillInsertResult(this, placeholder_, willInsertResult_); }
    void replaceRangeWithText(::app::iOS::UIKit::UITextRange* range_, ::uString* text_) { UITextView__replaceRangeWithText(this, range_, text_); }
    int returnKeyType() { return UITextView__returnKeyType(this); }
    ::app::iOS::UIKit::UITextRange* selectedTextRange() { return UITextView__selectedTextRange(this); }
    int selectionAffinity() { return UITextView__selectionAffinity(this); }
    ::app::iOS::Foundation::NSArray* selectionRectsForRange(::app::iOS::UIKit::UITextRange* range_) { return UITextView__selectionRectsForRange(this, range_); }
    void Delegate_1(::uObject* value) { UITextView__set_Delegate_1(this, value); }
    void Font(::app::iOS::UIKit::UIFont* value) { UITextView__set_Font(this, value); }
    void KeyboardType(int value) { UITextView__set_KeyboardType(this, value); }
    void Text(::uString* value) { UITextView__set_Text(this, value); }
    void TextAlignment(int value) { UITextView__set_TextAlignment(this, value); }
    void TextColor(::app::iOS::UIKit::UIColor* value) { UITextView__set_TextColor(this, value); }
    void TextContainerInset(::app::iOS::UIKit::UIEdgeInsets value);
    void setAutocapitalizationType(int autocapitalizationType_) { UITextView__setAutocapitalizationType(this, autocapitalizationType_); }
    void setAutocorrectionType(int autocorrectionType_) { UITextView__setAutocorrectionType(this, autocorrectionType_); }
    void setBaseWritingDirectionForRange(int writingDirection_, ::app::iOS::UIKit::UITextRange* range_) { UITextView__setBaseWritingDirectionForRange(this, writingDirection_, range_); }
    void setDelegate_1(::uObject* delegate__) { UITextView__setDelegate_1(this, delegate__); }
    void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_) { UITextView__setEnablesReturnKeyAutomatically(this, enablesReturnKeyAutomatically_); }
    void setFont(::app::iOS::UIKit::UIFont* font_) { UITextView__setFont(this, font_); }
    void setInputDelegate(::uObject* inputDelegate_) { UITextView__setInputDelegate(this, inputDelegate_); }
    void setKeyboardAppearance(int keyboardAppearance_) { UITextView__setKeyboardAppearance(this, keyboardAppearance_); }
    void setKeyboardType(int keyboardType_) { UITextView__setKeyboardType(this, keyboardType_); }
    void setMarkedTextSelectedRange(::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_);
    void setMarkedTextStyle(::app::iOS::Foundation::NSDictionary* markedTextStyle_) { UITextView__setMarkedTextStyle(this, markedTextStyle_); }
    void setReturnKeyType(int returnKeyType_) { UITextView__setReturnKeyType(this, returnKeyType_); }
    void setSecureTextEntry(bool secureTextEntry_) { UITextView__setSecureTextEntry(this, secureTextEntry_); }
    void setSelectedTextRange(::app::iOS::UIKit::UITextRange* selectedTextRange_) { UITextView__setSelectedTextRange(this, selectedTextRange_); }
    void setSelectionAffinity(int selectionAffinity_) { UITextView__setSelectionAffinity(this, selectionAffinity_); }
    void setSpellCheckingType(int spellCheckingType_) { UITextView__setSpellCheckingType(this, spellCheckingType_); }
    void setText(::uString* text_) { UITextView__setText(this, text_); }
    void setTextAlignment(int textAlignment_) { UITextView__setTextAlignment(this, textAlignment_); }
    void setTextColor(::app::iOS::UIKit::UIColor* textColor_) { UITextView__setTextColor(this, textColor_); }
    void setTextContainerInset(::app::iOS::UIKit::UIEdgeInsets textContainerInset_);
    bool shouldChangeTextInRangeReplacementText(::app::iOS::UIKit::UITextRange* range_, ::uString* text_) { return UITextView__shouldChangeTextInRangeReplacementText(this, range_, text_); }
    int spellCheckingType() { return UITextView__spellCheckingType(this); }
    ::uString* text() { return UITextView__text(this); }
    int textAlignment() { return UITextView__textAlignment(this); }
    ::app::iOS::UIKit::UIColor* textColor() { return UITextView__textColor(this); }
    ::app::iOS::UIKit::UIEdgeInsets textContainerInset();
    ::app::iOS::UIKit::UIView* textInputView() { return UITextView__textInputView(this); }
    ::uString* textInRange(::app::iOS::UIKit::UITextRange* range_) { return UITextView__textInRange(this, range_); }
    ::app::iOS::UIKit::UITextRange* textRangeFromPositionToPosition(::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_) { return UITextView__textRangeFromPositionToPosition(this, fromPosition_, toPosition_); }
    ::app::iOS::Foundation::NSDictionary* textStylingAtPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return UITextView__textStylingAtPositionInDirection(this, position_, direction_); }
    ::uObject* tokenizer() { return UITextView__tokenizer(this); }
    void unmarkText() { UITextView__unmarkText(this); }
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.Foundation._NSRange.h>
#include <app/iOS.UIKit.UIEdgeInsets.h>

namespace app {
namespace iOS {
namespace UIKit {

inline ::app::iOS::CoreGraphics::CGRect UITextView::caretRectForPosition(::app::iOS::UIKit::UITextPosition* position_) { return UITextView__caretRectForPosition(this, position_); }
inline ::app::iOS::UIKit::UITextRange* UITextView::characterRangeAtPoint(::app::iOS::CoreGraphics::CGPoint point_) { return UITextView__characterRangeAtPoint(this, point_); }
inline ::app::iOS::UIKit::UITextPosition* UITextView::closestPositionToPoint(::app::iOS::CoreGraphics::CGPoint point_) { return UITextView__closestPositionToPoint(this, point_); }
inline ::app::iOS::UIKit::UITextPosition* UITextView::closestPositionToPointWithinRange(::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_) { return UITextView__closestPositionToPointWithinRange(this, point_, range_); }
inline ::app::iOS::CoreGraphics::CGRect UITextView::firstRectForRange(::app::iOS::UIKit::UITextRange* range_) { return UITextView__firstRectForRange(this, range_); }
inline ::app::iOS::CoreGraphics::CGRect UITextView::frameForDictationResultPlaceholder(::id placeholder_) { return UITextView__frameForDictationResultPlaceholder(this, placeholder_); }
inline ::app::iOS::UIKit::UIEdgeInsets UITextView::TextContainerInset() { return UITextView__get_TextContainerInset(this); }
inline void UITextView::TextContainerInset(::app::iOS::UIKit::UIEdgeInsets value) { UITextView__set_TextContainerInset(this, value); }
inline void UITextView::setMarkedTextSelectedRange(::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_) { UITextView__setMarkedTextSelectedRange(this, markedText_, selectedRange_); }
inline void UITextView::setTextContainerInset(::app::iOS::UIKit::UIEdgeInsets textContainerInset_) { UITextView__setTextContainerInset(this, textContainerInset_); }
inline ::app::iOS::UIKit::UIEdgeInsets UITextView::textContainerInset() { return UITextView__textContainerInset(this); }

}}}


#endif
