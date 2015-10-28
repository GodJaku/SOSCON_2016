// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_H__

#include <app/iOS.UIKit.IUIKeyInput.h>
#include <app/iOS.UIKit.IUITextInput.h>
#include <app/iOS.UIKit.IUITextInputTraits.h>
#include <app/ObjC.Object.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace Foundation { struct _NSRange; } } }
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextPosition; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextRange; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUITextInput;

struct IUITextInput__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUITextInput __interface_0;
    ::app::iOS::UIKit::IUIKeyInput __interface_1;
    ::app::iOS::UIKit::IUITextInputTraits __interface_2;
};

IUITextInput__uType* IUITextInput__typeof();

int IUITextInput__autocapitalizationType(IUITextInput* __this);
int IUITextInput__autocorrectionType(IUITextInput* __this);
int IUITextInput__baseWritingDirectionForPositionInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::app::iOS::UIKit::UITextPosition* IUITextInput__beginningOfDocument(IUITextInput* __this);
::app::iOS::CoreGraphics::CGRect IUITextInput__caretRectForPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_);
int IUITextInput__characterOffsetOfPositionWithinRange(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UITextRange* IUITextInput__characterRangeAtPoint(IUITextInput* __this, ::app::iOS::CoreGraphics::CGPoint point_);
::app::iOS::UIKit::UITextRange* IUITextInput__characterRangeByExtendingPositionInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::app::iOS::UIKit::UITextPosition* IUITextInput__closestPositionToPoint(IUITextInput* __this, ::app::iOS::CoreGraphics::CGPoint point_);
::app::iOS::UIKit::UITextPosition* IUITextInput__closestPositionToPointWithinRange(IUITextInput* __this, ::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_);
int IUITextInput__comparePositionToPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_);
void IUITextInput__deleteBackward(IUITextInput* __this);
void IUITextInput__dictationRecognitionFailed(IUITextInput* __this);
void IUITextInput__dictationRecordingDidEnd(IUITextInput* __this);
bool IUITextInput__enablesReturnKeyAutomatically(IUITextInput* __this);
::app::iOS::UIKit::UITextPosition* IUITextInput__endOfDocument(IUITextInput* __this);
::app::iOS::CoreGraphics::CGRect IUITextInput__firstRectForRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::CoreGraphics::CGRect IUITextInput__frameForDictationResultPlaceholder(IUITextInput* __this, ::id placeholder_);
int IUITextInput__get_KeyboardType(IUITextInput* __this);
bool IUITextInput__hasText(IUITextInput* __this);
::uObject* IUITextInput__inputDelegate(IUITextInput* __this);
void IUITextInput__insertDictationResult(IUITextInput* __this, ::app::iOS::Foundation::NSArray* dictationResult_);
::id IUITextInput__insertDictationResultPlaceholder(IUITextInput* __this);
void IUITextInput__insertText(IUITextInput* __this, ::uString* text_);
bool IUITextInput__isSecureTextEntry(IUITextInput* __this);
int IUITextInput__keyboardAppearance(IUITextInput* __this);
int IUITextInput__keyboardType(IUITextInput* __this);
::app::iOS::UIKit::UITextRange* IUITextInput__markedTextRange(IUITextInput* __this);
::app::iOS::Foundation::NSDictionary* IUITextInput__markedTextStyle(IUITextInput* __this);
int IUITextInput__offsetFromPositionToPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_);
::app::iOS::UIKit::UITextPosition* IUITextInput__positionFromPositionInDirectionOffset(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_);
::app::iOS::UIKit::UITextPosition* IUITextInput__positionFromPositionOffset(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int offset_);
::app::iOS::UIKit::UITextPosition* IUITextInput__positionWithinRangeAtCharacterOffset(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, int offset_);
::app::iOS::UIKit::UITextPosition* IUITextInput__positionWithinRangeFarthestInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, int direction_);
void IUITextInput__removeDictationResultPlaceholderWillInsertResult(IUITextInput* __this, ::id placeholder_, bool willInsertResult_);
void IUITextInput__replaceRangeWithText(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_);
int IUITextInput__returnKeyType(IUITextInput* __this);
::app::iOS::UIKit::UITextRange* IUITextInput__selectedTextRange(IUITextInput* __this);
int IUITextInput__selectionAffinity(IUITextInput* __this);
::app::iOS::Foundation::NSArray* IUITextInput__selectionRectsForRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_);
void IUITextInput__set_KeyboardType(IUITextInput* __this, int value);
void IUITextInput__setAutocapitalizationType(IUITextInput* __this, int autocapitalizationType_);
void IUITextInput__setAutocorrectionType(IUITextInput* __this, int autocorrectionType_);
void IUITextInput__setBaseWritingDirectionForRange(IUITextInput* __this, int writingDirection_, ::app::iOS::UIKit::UITextRange* range_);
void IUITextInput__setEnablesReturnKeyAutomatically(IUITextInput* __this, bool enablesReturnKeyAutomatically_);
void IUITextInput__setInputDelegate(IUITextInput* __this, ::uObject* inputDelegate_);
void IUITextInput__setKeyboardAppearance(IUITextInput* __this, int keyboardAppearance_);
void IUITextInput__setKeyboardType(IUITextInput* __this, int keyboardType_);
void IUITextInput__setMarkedTextSelectedRange(IUITextInput* __this, ::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_);
void IUITextInput__setMarkedTextStyle(IUITextInput* __this, ::app::iOS::Foundation::NSDictionary* markedTextStyle_);
void IUITextInput__setReturnKeyType(IUITextInput* __this, int returnKeyType_);
void IUITextInput__setSecureTextEntry(IUITextInput* __this, bool secureTextEntry_);
void IUITextInput__setSelectedTextRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* selectedTextRange_);
void IUITextInput__setSelectionAffinity(IUITextInput* __this, int selectionAffinity_);
void IUITextInput__setSpellCheckingType(IUITextInput* __this, int spellCheckingType_);
bool IUITextInput__shouldChangeTextInRangeReplacementText(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_);
int IUITextInput__spellCheckingType(IUITextInput* __this);
::app::iOS::UIKit::UIView* IUITextInput__textInputView(IUITextInput* __this);
::uString* IUITextInput__textInRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_);
::app::iOS::UIKit::UITextRange* IUITextInput__textRangeFromPositionToPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_);
::app::iOS::Foundation::NSDictionary* IUITextInput__textStylingAtPositionInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_);
::uObject* IUITextInput__tokenizer(IUITextInput* __this);
void IUITextInput__unmarkText(IUITextInput* __this);

struct IUITextInput : ::app::ObjC::Object
{
    int autocapitalizationType() { return IUITextInput__autocapitalizationType(this); }
    int autocorrectionType() { return IUITextInput__autocorrectionType(this); }
    int baseWritingDirectionForPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return IUITextInput__baseWritingDirectionForPositionInDirection(this, position_, direction_); }
    ::app::iOS::UIKit::UITextPosition* beginningOfDocument() { return IUITextInput__beginningOfDocument(this); }
    ::app::iOS::CoreGraphics::CGRect caretRectForPosition(::app::iOS::UIKit::UITextPosition* position_);
    int characterOffsetOfPositionWithinRange(::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_) { return IUITextInput__characterOffsetOfPositionWithinRange(this, position_, range_); }
    ::app::iOS::UIKit::UITextRange* characterRangeAtPoint(::app::iOS::CoreGraphics::CGPoint point_);
    ::app::iOS::UIKit::UITextRange* characterRangeByExtendingPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return IUITextInput__characterRangeByExtendingPositionInDirection(this, position_, direction_); }
    ::app::iOS::UIKit::UITextPosition* closestPositionToPoint(::app::iOS::CoreGraphics::CGPoint point_);
    ::app::iOS::UIKit::UITextPosition* closestPositionToPointWithinRange(::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_);
    int comparePositionToPosition(::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_) { return IUITextInput__comparePositionToPosition(this, position_, other_); }
    void deleteBackward() { IUITextInput__deleteBackward(this); }
    void dictationRecognitionFailed() { IUITextInput__dictationRecognitionFailed(this); }
    void dictationRecordingDidEnd() { IUITextInput__dictationRecordingDidEnd(this); }
    bool enablesReturnKeyAutomatically() { return IUITextInput__enablesReturnKeyAutomatically(this); }
    ::app::iOS::UIKit::UITextPosition* endOfDocument() { return IUITextInput__endOfDocument(this); }
    ::app::iOS::CoreGraphics::CGRect firstRectForRange(::app::iOS::UIKit::UITextRange* range_);
    ::app::iOS::CoreGraphics::CGRect frameForDictationResultPlaceholder(::id placeholder_);
    int KeyboardType() { return IUITextInput__get_KeyboardType(this); }
    bool hasText() { return IUITextInput__hasText(this); }
    ::uObject* inputDelegate() { return IUITextInput__inputDelegate(this); }
    void insertDictationResult(::app::iOS::Foundation::NSArray* dictationResult_) { IUITextInput__insertDictationResult(this, dictationResult_); }
    ::id insertDictationResultPlaceholder() { return IUITextInput__insertDictationResultPlaceholder(this); }
    void insertText(::uString* text_) { IUITextInput__insertText(this, text_); }
    bool isSecureTextEntry() { return IUITextInput__isSecureTextEntry(this); }
    int keyboardAppearance() { return IUITextInput__keyboardAppearance(this); }
    int keyboardType() { return IUITextInput__keyboardType(this); }
    ::app::iOS::UIKit::UITextRange* markedTextRange() { return IUITextInput__markedTextRange(this); }
    ::app::iOS::Foundation::NSDictionary* markedTextStyle() { return IUITextInput__markedTextStyle(this); }
    int offsetFromPositionToPosition(::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_) { return IUITextInput__offsetFromPositionToPosition(this, from_, toPosition_); }
    ::app::iOS::UIKit::UITextPosition* positionFromPositionInDirectionOffset(::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_) { return IUITextInput__positionFromPositionInDirectionOffset(this, position_, direction_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionFromPositionOffset(::app::iOS::UIKit::UITextPosition* position_, int offset_) { return IUITextInput__positionFromPositionOffset(this, position_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionWithinRangeAtCharacterOffset(::app::iOS::UIKit::UITextRange* range_, int offset_) { return IUITextInput__positionWithinRangeAtCharacterOffset(this, range_, offset_); }
    ::app::iOS::UIKit::UITextPosition* positionWithinRangeFarthestInDirection(::app::iOS::UIKit::UITextRange* range_, int direction_) { return IUITextInput__positionWithinRangeFarthestInDirection(this, range_, direction_); }
    void removeDictationResultPlaceholderWillInsertResult(::id placeholder_, bool willInsertResult_) { IUITextInput__removeDictationResultPlaceholderWillInsertResult(this, placeholder_, willInsertResult_); }
    void replaceRangeWithText(::app::iOS::UIKit::UITextRange* range_, ::uString* text_) { IUITextInput__replaceRangeWithText(this, range_, text_); }
    int returnKeyType() { return IUITextInput__returnKeyType(this); }
    ::app::iOS::UIKit::UITextRange* selectedTextRange() { return IUITextInput__selectedTextRange(this); }
    int selectionAffinity() { return IUITextInput__selectionAffinity(this); }
    ::app::iOS::Foundation::NSArray* selectionRectsForRange(::app::iOS::UIKit::UITextRange* range_) { return IUITextInput__selectionRectsForRange(this, range_); }
    void KeyboardType(int value) { IUITextInput__set_KeyboardType(this, value); }
    void setAutocapitalizationType(int autocapitalizationType_) { IUITextInput__setAutocapitalizationType(this, autocapitalizationType_); }
    void setAutocorrectionType(int autocorrectionType_) { IUITextInput__setAutocorrectionType(this, autocorrectionType_); }
    void setBaseWritingDirectionForRange(int writingDirection_, ::app::iOS::UIKit::UITextRange* range_) { IUITextInput__setBaseWritingDirectionForRange(this, writingDirection_, range_); }
    void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_) { IUITextInput__setEnablesReturnKeyAutomatically(this, enablesReturnKeyAutomatically_); }
    void setInputDelegate(::uObject* inputDelegate_) { IUITextInput__setInputDelegate(this, inputDelegate_); }
    void setKeyboardAppearance(int keyboardAppearance_) { IUITextInput__setKeyboardAppearance(this, keyboardAppearance_); }
    void setKeyboardType(int keyboardType_) { IUITextInput__setKeyboardType(this, keyboardType_); }
    void setMarkedTextSelectedRange(::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_);
    void setMarkedTextStyle(::app::iOS::Foundation::NSDictionary* markedTextStyle_) { IUITextInput__setMarkedTextStyle(this, markedTextStyle_); }
    void setReturnKeyType(int returnKeyType_) { IUITextInput__setReturnKeyType(this, returnKeyType_); }
    void setSecureTextEntry(bool secureTextEntry_) { IUITextInput__setSecureTextEntry(this, secureTextEntry_); }
    void setSelectedTextRange(::app::iOS::UIKit::UITextRange* selectedTextRange_) { IUITextInput__setSelectedTextRange(this, selectedTextRange_); }
    void setSelectionAffinity(int selectionAffinity_) { IUITextInput__setSelectionAffinity(this, selectionAffinity_); }
    void setSpellCheckingType(int spellCheckingType_) { IUITextInput__setSpellCheckingType(this, spellCheckingType_); }
    bool shouldChangeTextInRangeReplacementText(::app::iOS::UIKit::UITextRange* range_, ::uString* text_) { return IUITextInput__shouldChangeTextInRangeReplacementText(this, range_, text_); }
    int spellCheckingType() { return IUITextInput__spellCheckingType(this); }
    ::app::iOS::UIKit::UIView* textInputView() { return IUITextInput__textInputView(this); }
    ::uString* textInRange(::app::iOS::UIKit::UITextRange* range_) { return IUITextInput__textInRange(this, range_); }
    ::app::iOS::UIKit::UITextRange* textRangeFromPositionToPosition(::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_) { return IUITextInput__textRangeFromPositionToPosition(this, fromPosition_, toPosition_); }
    ::app::iOS::Foundation::NSDictionary* textStylingAtPositionInDirection(::app::iOS::UIKit::UITextPosition* position_, int direction_) { return IUITextInput__textStylingAtPositionInDirection(this, position_, direction_); }
    ::uObject* tokenizer() { return IUITextInput__tokenizer(this); }
    void unmarkText() { IUITextInput__unmarkText(this); }
};

}}}}

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.Foundation._NSRange.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

inline ::app::iOS::CoreGraphics::CGRect IUITextInput::caretRectForPosition(::app::iOS::UIKit::UITextPosition* position_) { return IUITextInput__caretRectForPosition(this, position_); }
inline ::app::iOS::UIKit::UITextRange* IUITextInput::characterRangeAtPoint(::app::iOS::CoreGraphics::CGPoint point_) { return IUITextInput__characterRangeAtPoint(this, point_); }
inline ::app::iOS::UIKit::UITextPosition* IUITextInput::closestPositionToPoint(::app::iOS::CoreGraphics::CGPoint point_) { return IUITextInput__closestPositionToPoint(this, point_); }
inline ::app::iOS::UIKit::UITextPosition* IUITextInput::closestPositionToPointWithinRange(::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_) { return IUITextInput__closestPositionToPointWithinRange(this, point_, range_); }
inline ::app::iOS::CoreGraphics::CGRect IUITextInput::firstRectForRange(::app::iOS::UIKit::UITextRange* range_) { return IUITextInput__firstRectForRange(this, range_); }
inline ::app::iOS::CoreGraphics::CGRect IUITextInput::frameForDictationResultPlaceholder(::id placeholder_) { return IUITextInput__frameForDictationResultPlaceholder(this, placeholder_); }
inline void IUITextInput::setMarkedTextSelectedRange(::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_) { IUITextInput__setMarkedTextSelectedRange(this, markedText_, selectedRange_); }

}}}}


#endif
