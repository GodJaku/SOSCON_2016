// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_TEXT_FIELD_H__
#define __APP_I_O_S_U_I_KIT_U_I_TEXT_FIELD_H__

#include <app/iOS.UIKit.IUIKeyInput.h>
#include <app/iOS.UIKit.IUITextInput.h>
#include <app/iOS.UIKit.IUITextInputTraits.h>
#include <app/iOS.UIKit.UIControl.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace Foundation { struct _NSRange; } } }
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextPosition; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextRange; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UITextField;

struct UITextField__uType : ::app::iOS::UIKit::UIControl__uType
{
    ::app::iOS::UIKit::IUITextInput __interface_0;
    ::app::iOS::UIKit::IUIKeyInput __interface_1;
    ::app::iOS::UIKit::IUITextInputTraits __interface_2;
};

UITextField__uType* UITextField__typeof();

void UITextField___ObjInit_11(UITextField* __this);
int UITextField__autocapitalizationType(UITextField* __this);
int UITextField__autocorrectionType(UITextField* __this);
int UITextField__baseWritingDirectionForPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::app::iOS::UIKit::UITextPosition* UITextField__beginningOfDocument(UITextField* __this);
int UITextField__borderStyle(UITextField* __this);
::app::iOS::CoreGraphics::CGRect UITextField__caretRectForPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_);
int UITextField__characterOffsetOfPositionWithinRange(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UITextRange* UITextField__characterRangeAtPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point_);
::app::iOS::UIKit::UITextRange* UITextField__characterRangeByExtendingPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::app::iOS::UIKit::UITextPosition* UITextField__closestPositionToPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point_);
::app::iOS::UIKit::UITextPosition* UITextField__closestPositionToPointWithinRange(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_);
int UITextField__comparePositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_);
void UITextField__deleteBackward(UITextField* __this);
void UITextField__dictationRecognitionFailed(UITextField* __this);
void UITextField__dictationRecordingDidEnd(UITextField* __this);
bool UITextField__enablesReturnKeyAutomatically(UITextField* __this);
::app::iOS::UIKit::UITextPosition* UITextField__endOfDocument(UITextField* __this);
::app::iOS::CoreGraphics::CGRect UITextField__firstRectForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UIFont* UITextField__font(UITextField* __this);
::app::iOS::CoreGraphics::CGRect UITextField__frameForDictationResultPlaceholder(UITextField* __this, ::id placeholder_);
int UITextField__get_BorderStyle(UITextField* __this);
::app::iOS::UIKit::UIFont* UITextField__get_Font(UITextField* __this);
int UITextField__get_KeyboardType(UITextField* __this);
::uString* UITextField__get_Text(UITextField* __this);
int UITextField__get_TextAlignment(UITextField* __this);
::app::iOS::UIKit::UIColor* UITextField__get_TextColor(UITextField* __this);
bool UITextField__hasText(UITextField* __this);
::uObject* UITextField__inputDelegate(UITextField* __this);
void UITextField__insertDictationResult(UITextField* __this, ::app::iOS::Foundation::NSArray* dictationResult_);
::id UITextField__insertDictationResultPlaceholder(UITextField* __this);
void UITextField__insertText(UITextField* __this, ::uString* text_);
void UITextField__iOS_UIKit_IUIKeyInput_deleteBackward(UITextField* __this);
bool UITextField__iOS_UIKit_IUIKeyInput_hasText(UITextField* __this);
void UITextField__iOS_UIKit_IUIKeyInput_insertText(UITextField* __this, ::uString* text);
int UITextField__iOS_UIKit_IUITextInput_baseWritingDirectionForPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction);
::app::iOS::CoreGraphics::CGRect UITextField__iOS_UIKit_IUITextInput_caretRectForPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position);
int UITextField__iOS_UIKit_IUITextInput_characterOffsetOfPositionWithinRange(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextRange* range);
::app::iOS::UIKit::UITextRange* UITextField__iOS_UIKit_IUITextInput_characterRangeAtPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point);
::app::iOS::UIKit::UITextRange* UITextField__iOS_UIKit_IUITextInput_characterRangeByExtendingPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction);
::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_closestPositionToPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point);
::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_closestPositionToPointWithinRange(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point, ::app::iOS::UIKit::UITextRange* range);
int UITextField__iOS_UIKit_IUITextInput_comparePositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextPosition* other);
void UITextField__iOS_UIKit_IUITextInput_dictationRecognitionFailed(UITextField* __this);
void UITextField__iOS_UIKit_IUITextInput_dictationRecordingDidEnd(UITextField* __this);
::app::iOS::CoreGraphics::CGRect UITextField__iOS_UIKit_IUITextInput_firstRectForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range);
::app::iOS::CoreGraphics::CGRect UITextField__iOS_UIKit_IUITextInput_frameForDictationResultPlaceholder(UITextField* __this, ::id placeholder);
void UITextField__iOS_UIKit_IUITextInput_insertDictationResult(UITextField* __this, ::app::iOS::Foundation::NSArray* dictationResult);
::id UITextField__iOS_UIKit_IUITextInput_insertDictationResultPlaceholder(UITextField* __this);
int UITextField__iOS_UIKit_IUITextInput_offsetFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* from, ::app::iOS::UIKit::UITextPosition* toPosition);
::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionFromPositionInDirectionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction, int offset);
::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionFromPositionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int offset);
::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionWithinRangeAtCharacterOffset(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, int offset);
::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionWithinRangeFarthestInDirection(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, int direction);
void UITextField__iOS_UIKit_IUITextInput_removeDictationResultPlaceholderWillInsertResult(UITextField* __this, ::id placeholder, bool willInsertResult);
void UITextField__iOS_UIKit_IUITextInput_replaceRangeWithText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text);
::app::iOS::Foundation::NSArray* UITextField__iOS_UIKit_IUITextInput_selectionRectsForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range);
void UITextField__iOS_UIKit_IUITextInput_setBaseWritingDirectionForRange(UITextField* __this, int writingDirection, ::app::iOS::UIKit::UITextRange* range);
void UITextField__iOS_UIKit_IUITextInput_setMarkedTextSelectedRange(UITextField* __this, ::uString* markedText, ::app::iOS::Foundation::_NSRange selectedRange);
bool UITextField__iOS_UIKit_IUITextInput_shouldChangeTextInRangeReplacementText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text);
::uString* UITextField__iOS_UIKit_IUITextInput_textInRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range);
::app::iOS::UIKit::UITextRange* UITextField__iOS_UIKit_IUITextInput_textRangeFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* fromPosition, ::app::iOS::UIKit::UITextPosition* toPosition);
::app::iOS::Foundation::NSDictionary* UITextField__iOS_UIKit_IUITextInput_textStylingAtPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction);
void UITextField__iOS_UIKit_IUITextInput_unmarkText(UITextField* __this);
bool UITextField__isSecureTextEntry(UITextField* __this);
int UITextField__keyboardAppearance(UITextField* __this);
int UITextField__keyboardType(UITextField* __this);
::app::iOS::UIKit::UITextRange* UITextField__markedTextRange(UITextField* __this);
::app::iOS::Foundation::NSDictionary* UITextField__markedTextStyle(UITextField* __this);
UITextField* UITextField__New_11(::uStatic* __this);
int UITextField__offsetFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_);
::app::iOS::UIKit::UITextPosition* UITextField__positionFromPositionInDirectionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_);
::app::iOS::UIKit::UITextPosition* UITextField__positionFromPositionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int offset_);
::app::iOS::UIKit::UITextPosition* UITextField__positionWithinRangeAtCharacterOffset(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, int offset_);
::app::iOS::UIKit::UITextPosition* UITextField__positionWithinRangeFarthestInDirection(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, int direction_);
void UITextField__removeDictationResultPlaceholderWillInsertResult(UITextField* __this, ::id placeholder_, bool willInsertResult_);
void UITextField__replaceRangeWithText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_);
int UITextField__returnKeyType(UITextField* __this);
::app::iOS::UIKit::UITextRange* UITextField__selectedTextRange(UITextField* __this);
int UITextField__selectionAffinity(UITextField* __this);
::app::iOS::Foundation::NSArray* UITextField__selectionRectsForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_);
void UITextField__set_BorderStyle(UITextField* __this, int value);
void UITextField__set_Font(UITextField* __this, ::app::iOS::UIKit::UIFont* value);
void UITextField__set_KeyboardType(UITextField* __this, int value);
void UITextField__set_Text(UITextField* __this, ::uString* value);
void UITextField__set_TextAlignment(UITextField* __this, int value);
void UITextField__set_TextColor(UITextField* __this, ::app::iOS::UIKit::UIColor* value);
void UITextField__setAutocapitalizationType(UITextField* __this, int autocapitalizationType_);
void UITextField__setAutocorrectionType(UITextField* __this, int autocorrectionType_);
void UITextField__setBaseWritingDirectionForRange(UITextField* __this, int writingDirection_, ::app::iOS::UIKit::UITextRange* range_);
void UITextField__setBorderStyle(UITextField* __this, int borderStyle_);
void UITextField__setEnablesReturnKeyAutomatically(UITextField* __this, bool enablesReturnKeyAutomatically_);
void UITextField__setFont(UITextField* __this, ::app::iOS::UIKit::UIFont* font_);
void UITextField__setInputDelegate(UITextField* __this, ::uObject* inputDelegate_);
void UITextField__setKeyboardAppearance(UITextField* __this, int keyboardAppearance_);
void UITextField__setKeyboardType(UITextField* __this, int keyboardType_);
void UITextField__setMarkedTextSelectedRange(UITextField* __this, ::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_);
void UITextField__setMarkedTextStyle(UITextField* __this, ::app::iOS::Foundation::NSDictionary* markedTextStyle_);
void UITextField__setReturnKeyType(UITextField* __this, int returnKeyType_);
void UITextField__setSecureTextEntry(UITextField* __this, bool secureTextEntry_);
void UITextField__setSelectedTextRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* selectedTextRange_);
void UITextField__setSelectionAffinity(UITextField* __this, int selectionAffinity_);
void UITextField__setSpellCheckingType(UITextField* __this, int spellCheckingType_);
void UITextField__setText(UITextField* __this, ::uString* text_);
void UITextField__setTextAlignment(UITextField* __this, int textAlignment_);
void UITextField__setTextColor(UITextField* __this, ::app::iOS::UIKit::UIColor* textColor_);
bool UITextField__shouldChangeTextInRangeReplacementText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_);
int UITextField__spellCheckingType(UITextField* __this);
::uString* UITextField__text(UITextField* __this);
int UITextField__textAlignment(UITextField* __this);
::app::iOS::UIKit::UIColor* UITextField__textColor(UITextField* __this);
::app::iOS::UIKit::UIView* UITextField__textInputView(UITextField* __this);
::uString* UITextField__textInRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UITextRange* UITextField__textRangeFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_);
::app::iOS::Foundation::NSDictionary* UITextField__textStylingAtPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::uObject* UITextField__tokenizer(UITextField* __this);
void UITextField__unmarkText(UITextField* __this);

struct UITextField : ::app::iOS::UIKit::UIControl
{
    void _ObjInit_11() { UITextField___ObjInit_11(this); }
    int autocapitalizationType() { return UITextField__autocapitalizationType(this); }
    int autocorrectionType() { return UITextField__autocorrectionType(this); }
    int baseWritingDirectionForPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return UITextField__baseWritingDirectionForPositionInDirection(this, position_, direction_); }
    ::app::iOS::UIKit::UITextPosition* beginningOfDocument() { return UITextField__beginningOfDocument(this); }
    int borderStyle() { return UITextField__borderStyle(this); }
    ::app::iOS::CoreGraphics::CGRect caretRectForPosition(::app::iOS::UIKit::UITextPosition* position_);
    int characterOffsetOfPositionWithinRange(::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_) { return UITextField__characterOffsetOfPositionWithinRange(this, position_, range_); }
    ::app::iOS::UIKit::UITextRange* characterRangeAtPoint(::app::iOS::CoreGraphics::CGPoint point_);
    ::app::iOS::UIKit::UITextRange* characterRangeByExtendingPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return UITextField__characterRangeByExtendingPositionInDirection(this, position_, direction_); }
    ::app::iOS::UIKit::UITextPosition* closestPositionToPoint(::app::iOS::CoreGraphics::CGPoint point_);
    ::app::iOS::UIKit::UITextPosition* closestPositionToPointWithinRange(::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_);
    int comparePositionToPosition(::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_) { return UITextField__comparePositionToPosition(this, position_, other_); }
    void deleteBackward() { UITextField__deleteBackward(this); }
    void dictationRecognitionFailed() { UITextField__dictationRecognitionFailed(this); }
    void dictationRecordingDidEnd() { UITextField__dictationRecordingDidEnd(this); }
    bool enablesReturnKeyAutomatically() { return UITextField__enablesReturnKeyAutomatically(this); }
    ::app::iOS::UIKit::UITextPosition* endOfDocument() { return UITextField__endOfDocument(this); }
    ::app::iOS::CoreGraphics::CGRect firstRectForRange(::app::iOS::UIKit::UITextRange* range_);
    ::app::iOS::UIKit::UIFont* font() { return UITextField__font(this); }
    ::app::iOS::CoreGraphics::CGRect frameForDictationResultPlaceholder(::id placeholder_);
    int BorderStyle() { return UITextField__get_BorderStyle(this); }
    ::app::iOS::UIKit::UIFont* Font() { return UITextField__get_Font(this); }
    int KeyboardType() { return UITextField__get_KeyboardType(this); }
    ::uString* Text() { return UITextField__get_Text(this); }
    int TextAlignment() { return UITextField__get_TextAlignment(this); }
    ::app::iOS::UIKit::UIColor* TextColor() { return UITextField__get_TextColor(this); }
    bool hasText() { return UITextField__hasText(this); }
    ::uObject* inputDelegate() { return UITextField__inputDelegate(this); }
    void insertDictationResult(::app::iOS::Foundation::NSArray* dictationResult_) { UITextField__insertDictationResult(this, dictationResult_); }
    ::id insertDictationResultPlaceholder() { return UITextField__insertDictationResultPlaceholder(this); }
    void insertText(::uString* text_) { UITextField__insertText(this, text_); }
    bool isSecureTextEntry() { return UITextField__isSecureTextEntry(this); }
    int keyboardAppearance() { return UITextField__keyboardAppearance(this); }
    int keyboardType() { return UITextField__keyboardType(this); }
    ::app::iOS::UIKit::UITextRange* markedTextRange() { return UITextField__markedTextRange(this); }
    ::app::iOS::Foundation::NSDictionary* markedTextStyle() { return UITextField__markedTextStyle(this); }
    int offsetFromPositionToPosition(::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_) { return UITextField__offsetFromPositionToPosition(this, from_, toPosition_); }
    ::app::iOS::UIKit::UITextPosition* positionFromPositionInDirectionOffset(::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_) { return UITextField__positionFromPositionInDirectionOffset(this, position_, direction_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionFromPositionOffset(::app::iOS::UIKit::UITextPosition* position_, int offset_) { return UITextField__positionFromPositionOffset(this, position_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionWithinRangeAtCharacterOffset(::app::iOS::UIKit::UITextRange* range_, int offset_) { return UITextField__positionWithinRangeAtCharacterOffset(this, range_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionWithinRangeFarthestInDirection(::app::iOS::UIKit::UITextRange* range_, int direction_) { return UITextField__positionWithinRangeFarthestInDirection(this, range_, direction_); }
    void removeDictationResultPlaceholderWillInsertResult(::id placeholder_, bool willInsertResult_) { UITextField__removeDictationResultPlaceholderWillInsertResult(this, placeholder_, willInsertResult_); }
    void replaceRangeWithText(::app::iOS::UIKit::UITextRange* range_, ::uString* text_) { UITextField__replaceRangeWithText(this, range_, text_); }
    int returnKeyType() { return UITextField__returnKeyType(this); }
    ::app::iOS::UIKit::UITextRange* selectedTextRange() { return UITextField__selectedTextRange(this); }
    int selectionAffinity() { return UITextField__selectionAffinity(this); }
    ::app::iOS::Foundation::NSArray* selectionRectsForRange(::app::iOS::UIKit::UITextRange* range_) { return UITextField__selectionRectsForRange(this, range_); }
    void BorderStyle(int value) { UITextField__set_BorderStyle(this, value); }
    void Font(::app::iOS::UIKit::UIFont* value) { UITextField__set_Font(this, value); }
    void KeyboardType(int value) { UITextField__set_KeyboardType(this, value); }
    void Text(::uString* value) { UITextField__set_Text(this, value); }
    void TextAlignment(int value) { UITextField__set_TextAlignment(this, value); }
    void TextColor(::app::iOS::UIKit::UIColor* value) { UITextField__set_TextColor(this, value); }
    void setAutocapitalizationType(int autocapitalizationType_) { UITextField__setAutocapitalizationType(this, autocapitalizationType_); }
    void setAutocorrectionType(int autocorrectionType_) { UITextField__setAutocorrectionType(this, autocorrectionType_); }
    void setBaseWritingDirectionForRange(int writingDirection_, ::app::iOS::UIKit::UITextRange* range_) { UITextField__setBaseWritingDirectionForRange(this, writingDirection_, range_); }
    void setBorderStyle(int borderStyle_) { UITextField__setBorderStyle(this, borderStyle_); }
    void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_) { UITextField__setEnablesReturnKeyAutomatically(this, enablesReturnKeyAutomatically_); }
    void setFont(::app::iOS::UIKit::UIFont* font_) { UITextField__setFont(this, font_); }
    void setInputDelegate(::uObject* inputDelegate_) { UITextField__setInputDelegate(this, inputDelegate_); }
    void setKeyboardAppearance(int keyboardAppearance_) { UITextField__setKeyboardAppearance(this, keyboardAppearance_); }
    void setKeyboardType(int keyboardType_) { UITextField__setKeyboardType(this, keyboardType_); }
    void setMarkedTextSelectedRange(::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_);
    void setMarkedTextStyle(::app::iOS::Foundation::NSDictionary* markedTextStyle_) { UITextField__setMarkedTextStyle(this, markedTextStyle_); }
    void setReturnKeyType(int returnKeyType_) { UITextField__setReturnKeyType(this, returnKeyType_); }
    void setSecureTextEntry(bool secureTextEntry_) { UITextField__setSecureTextEntry(this, secureTextEntry_); }
    void setSelectedTextRange(::app::iOS::UIKit::UITextRange* selectedTextRange_) { UITextField__setSelectedTextRange(this, selectedTextRange_); }
    void setSelectionAffinity(int selectionAffinity_) { UITextField__setSelectionAffinity(this, selectionAffinity_); }
    void setSpellCheckingType(int spellCheckingType_) { UITextField__setSpellCheckingType(this, spellCheckingType_); }
    void setText(::uString* text_) { UITextField__setText(this, text_); }
    void setTextAlignment(int textAlignment_) { UITextField__setTextAlignment(this, textAlignment_); }
    void setTextColor(::app::iOS::UIKit::UIColor* textColor_) { UITextField__setTextColor(this, textColor_); }
    bool shouldChangeTextInRangeReplacementText(::app::iOS::UIKit::UITextRange* range_, ::uString* text_) { return UITextField__shouldChangeTextInRangeReplacementText(this, range_, text_); }
    int spellCheckingType() { return UITextField__spellCheckingType(this); }
    ::uString* text() { return UITextField__text(this); }
    int textAlignment() { return UITextField__textAlignment(this); }
    ::app::iOS::UIKit::UIColor* textColor() { return UITextField__textColor(this); }
    ::app::iOS::UIKit::UIView* textInputView() { return UITextField__textInputView(this); }
    ::uString* textInRange(::app::iOS::UIKit::UITextRange* range_) { return UITextField__textInRange(this, range_); }
    ::app::iOS::UIKit::UITextRange* textRangeFromPositionToPosition(::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_) { return UITextField__textRangeFromPositionToPosition(this, fromPosition_, toPosition_); }
    ::app::iOS::Foundation::NSDictionary* textStylingAtPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return UITextField__textStylingAtPositionInDirection(this, position_, direction_); }
    ::uObject* tokenizer() { return UITextField__tokenizer(this); }
    void unmarkText() { UITextField__unmarkText(this); }
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.Foundation._NSRange.h>

namespace app {
namespace iOS {
namespace UIKit {

inline ::app::iOS::CoreGraphics::CGRect UITextField::caretRectForPosition(::app::iOS::UIKit::UITextPosition* position_) { return UITextField__caretRectForPosition(this, position_); }
inline ::app::iOS::UIKit::UITextRange* UITextField::characterRangeAtPoint(::app::iOS::CoreGraphics::CGPoint point_) { return UITextField__characterRangeAtPoint(this, point_); }
inline ::app::iOS::UIKit::UITextPosition* UITextField::closestPositionToPoint(::app::iOS::CoreGraphics::CGPoint point_) { return UITextField__closestPositionToPoint(this, point_); }
inline ::app::iOS::UIKit::UITextPosition* UITextField::closestPositionToPointWithinRange(::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_) { return UITextField__closestPositionToPointWithinRange(this, point_, range_); }
inline ::app::iOS::CoreGraphics::CGRect UITextField::firstRectForRange(::app::iOS::UIKit::UITextRange* range_) { return UITextField__firstRectForRange(this, range_); }
inline ::app::iOS::CoreGraphics::CGRect UITextField::frameForDictationResultPlaceholder(::id placeholder_) { return UITextField__frameForDictationResultPlaceholder(this, placeholder_); }
inline void UITextField::setMarkedTextSelectedRange(::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_) { UITextField__setMarkedTextSelectedRange(this, markedText_, selectedRange_); }

}}}


#endif
