// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UITextField
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UITextField*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UITextField__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSComparisonResult.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.UIKit.IUITextInputDelegate.h>
#include <app/iOS.UIKit.IUITextInputTokenizer.h>
#include <app/iOS.UIKit.NSTextAlignment.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIFont.h>
#include <app/iOS.UIKit.UIKeyboardAppearance.h>
#include <app/iOS.UIKit.UIKeyboardType.h>
#include <app/iOS.UIKit.UIReturnKeyType.h>
#include <app/iOS.UIKit.UITextAutocapitalizationType.h>
#include <app/iOS.UIKit.UITextAutocorrectionType.h>
#include <app/iOS.UIKit.UITextBorderStyle.h>
#include <app/iOS.UIKit.UITextField.h>
#include <app/iOS.UIKit.UITextLayoutDirection.h>
#include <app/iOS.UIKit.UITextPosition.h>
#include <app/iOS.UIKit.UITextRange.h>
#include <app/iOS.UIKit.UITextSpellCheckingType.h>
#include <app/iOS.UIKit.UITextStorageDirection.h>
#include <app/iOS.UIKit.UITextWritingDirection.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

UITextField__uType* UITextField__typeof()
{
    static ::uStaticStrong<UITextField__uType*> type;
    if (type != NULL) return type;

    type = (UITextField__uType*)::uAllocClassType(sizeof(UITextField__uType), "iOS.UIKit.UITextField", false, 3, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIControl__typeof());
    type->__interface_0.__fp_textInRange = (::uString*(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextField__iOS_UIKit_IUITextInput_textInRange;
    type->__interface_0.__fp_replaceRangeWithText = (void(*)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*))UITextField__iOS_UIKit_IUITextInput_replaceRangeWithText;
    type->__interface_0.__fp_setMarkedTextSelectedRange = (void(*)(void*, ::uString*, ::app::iOS::Foundation::_NSRange))UITextField__iOS_UIKit_IUITextInput_setMarkedTextSelectedRange;
    type->__interface_0.__fp_unmarkText = (void(*)(void*))UITextField__iOS_UIKit_IUITextInput_unmarkText;
    type->__interface_0.__fp_textRangeFromPositionToPosition = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))UITextField__iOS_UIKit_IUITextInput_textRangeFromPositionToPosition;
    type->__interface_0.__fp_positionFromPositionOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextField__iOS_UIKit_IUITextInput_positionFromPositionOffset;
    type->__interface_0.__fp_positionFromPositionInDirectionOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int, int))UITextField__iOS_UIKit_IUITextInput_positionFromPositionInDirectionOffset;
    type->__interface_0.__fp_comparePositionToPosition = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))UITextField__iOS_UIKit_IUITextInput_comparePositionToPosition;
    type->__interface_0.__fp_offsetFromPositionToPosition = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))UITextField__iOS_UIKit_IUITextInput_offsetFromPositionToPosition;
    type->__interface_0.__fp_positionWithinRangeFarthestInDirection = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextRange*, int))UITextField__iOS_UIKit_IUITextInput_positionWithinRangeFarthestInDirection;
    type->__interface_0.__fp_characterRangeByExtendingPositionInDirection = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextField__iOS_UIKit_IUITextInput_characterRangeByExtendingPositionInDirection;
    type->__interface_0.__fp_baseWritingDirectionForPositionInDirection = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextField__iOS_UIKit_IUITextInput_baseWritingDirectionForPositionInDirection;
    type->__interface_0.__fp_setBaseWritingDirectionForRange = (void(*)(void*, int, ::app::iOS::UIKit::UITextRange*))UITextField__iOS_UIKit_IUITextInput_setBaseWritingDirectionForRange;
    type->__interface_0.__fp_firstRectForRange = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextField__iOS_UIKit_IUITextInput_firstRectForRange;
    type->__interface_0.__fp_caretRectForPosition = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::app::iOS::UIKit::UITextPosition*))UITextField__iOS_UIKit_IUITextInput_caretRectForPosition;
    type->__interface_0.__fp_selectionRectsForRange = (::app::iOS::Foundation::NSArray*(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextField__iOS_UIKit_IUITextInput_selectionRectsForRange;
    type->__interface_0.__fp_closestPositionToPoint = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::CoreGraphics::CGPoint))UITextField__iOS_UIKit_IUITextInput_closestPositionToPoint;
    type->__interface_0.__fp_closestPositionToPointWithinRange = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::CoreGraphics::CGPoint, ::app::iOS::UIKit::UITextRange*))UITextField__iOS_UIKit_IUITextInput_closestPositionToPointWithinRange;
    type->__interface_0.__fp_characterRangeAtPoint = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::CoreGraphics::CGPoint))UITextField__iOS_UIKit_IUITextInput_characterRangeAtPoint;
    type->__interface_0.__fp_shouldChangeTextInRangeReplacementText = (bool(*)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*))UITextField__iOS_UIKit_IUITextInput_shouldChangeTextInRangeReplacementText;
    type->__interface_0.__fp_textStylingAtPositionInDirection = (::app::iOS::Foundation::NSDictionary*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextField__iOS_UIKit_IUITextInput_textStylingAtPositionInDirection;
    type->__interface_0.__fp_positionWithinRangeAtCharacterOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextRange*, int))UITextField__iOS_UIKit_IUITextInput_positionWithinRangeAtCharacterOffset;
    type->__interface_0.__fp_characterOffsetOfPositionWithinRange = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextRange*))UITextField__iOS_UIKit_IUITextInput_characterOffsetOfPositionWithinRange;
    type->__interface_0.__fp_insertDictationResult = (void(*)(void*, ::app::iOS::Foundation::NSArray*))UITextField__iOS_UIKit_IUITextInput_insertDictationResult;
    type->__interface_0.__fp_dictationRecordingDidEnd = (void(*)(void*))UITextField__iOS_UIKit_IUITextInput_dictationRecordingDidEnd;
    type->__interface_0.__fp_dictationRecognitionFailed = (void(*)(void*))UITextField__iOS_UIKit_IUITextInput_dictationRecognitionFailed;
    type->__interface_0.__fp_insertDictationResultPlaceholder = (::id(*)(void*))UITextField__iOS_UIKit_IUITextInput_insertDictationResultPlaceholder;
    type->__interface_0.__fp_frameForDictationResultPlaceholder = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::id))UITextField__iOS_UIKit_IUITextInput_frameForDictationResultPlaceholder;
    type->__interface_0.__fp_removeDictationResultPlaceholderWillInsertResult = (void(*)(void*, ::id, bool))UITextField__iOS_UIKit_IUITextInput_removeDictationResultPlaceholderWillInsertResult;
    type->__interface_1.__fp_hasText = (bool(*)(void*))UITextField__iOS_UIKit_IUIKeyInput_hasText;
    type->__interface_1.__fp_insertText = (void(*)(void*, ::uString*))UITextField__iOS_UIKit_IUIKeyInput_insertText;
    type->__interface_1.__fp_deleteBackward = (void(*)(void*))UITextField__iOS_UIKit_IUIKeyInput_deleteBackward;
    type->__interface_0.__fp_selectedTextRange = (::app::iOS::UIKit::UITextRange*(*)(void*))UITextField__selectedTextRange;
    type->__interface_0.__fp_setSelectedTextRange = (void(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextField__setSelectedTextRange;
    type->__interface_0.__fp_markedTextRange = (::app::iOS::UIKit::UITextRange*(*)(void*))UITextField__markedTextRange;
    type->__interface_0.__fp_markedTextStyle = (::app::iOS::Foundation::NSDictionary*(*)(void*))UITextField__markedTextStyle;
    type->__interface_0.__fp_setMarkedTextStyle = (void(*)(void*, ::app::iOS::Foundation::NSDictionary*))UITextField__setMarkedTextStyle;
    type->__interface_0.__fp_beginningOfDocument = (::app::iOS::UIKit::UITextPosition*(*)(void*))UITextField__beginningOfDocument;
    type->__interface_0.__fp_endOfDocument = (::app::iOS::UIKit::UITextPosition*(*)(void*))UITextField__endOfDocument;
    type->__interface_0.__fp_inputDelegate = (::uObject*(*)(void*))UITextField__inputDelegate;
    type->__interface_0.__fp_setInputDelegate = (void(*)(void*, ::uObject*))UITextField__setInputDelegate;
    type->__interface_0.__fp_tokenizer = (::uObject*(*)(void*))UITextField__tokenizer;
    type->__interface_0.__fp_textInputView = (::app::iOS::UIKit::UIView*(*)(void*))UITextField__textInputView;
    type->__interface_0.__fp_selectionAffinity = (int(*)(void*))UITextField__selectionAffinity;
    type->__interface_0.__fp_setSelectionAffinity = (void(*)(void*, int))UITextField__setSelectionAffinity;
    type->__interface_0.__fp_hasText = (bool(*)(void*))UITextField__hasText;
    type->__interface_0.__fp_insertText = (void(*)(void*, ::uString*))UITextField__insertText;
    type->__interface_0.__fp_deleteBackward = (void(*)(void*))UITextField__deleteBackward;
    type->__interface_0.__fp_autocapitalizationType = (int(*)(void*))UITextField__autocapitalizationType;
    type->__interface_0.__fp_setAutocapitalizationType = (void(*)(void*, int))UITextField__setAutocapitalizationType;
    type->__interface_0.__fp_autocorrectionType = (int(*)(void*))UITextField__autocorrectionType;
    type->__interface_0.__fp_setAutocorrectionType = (void(*)(void*, int))UITextField__setAutocorrectionType;
    type->__interface_0.__fp_spellCheckingType = (int(*)(void*))UITextField__spellCheckingType;
    type->__interface_0.__fp_setSpellCheckingType = (void(*)(void*, int))UITextField__setSpellCheckingType;
    type->__interface_0.__fp_keyboardType = (int(*)(void*))UITextField__keyboardType;
    type->__interface_0.__fp_setKeyboardType = (void(*)(void*, int))UITextField__setKeyboardType;
    type->__interface_0.__fp_keyboardAppearance = (int(*)(void*))UITextField__keyboardAppearance;
    type->__interface_0.__fp_setKeyboardAppearance = (void(*)(void*, int))UITextField__setKeyboardAppearance;
    type->__interface_0.__fp_returnKeyType = (int(*)(void*))UITextField__returnKeyType;
    type->__interface_0.__fp_setReturnKeyType = (void(*)(void*, int))UITextField__setReturnKeyType;
    type->__interface_0.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))UITextField__enablesReturnKeyAutomatically;
    type->__interface_0.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))UITextField__setEnablesReturnKeyAutomatically;
    type->__interface_0.__fp_isSecureTextEntry = (bool(*)(void*))UITextField__isSecureTextEntry;
    type->__interface_0.__fp_setSecureTextEntry = (void(*)(void*, bool))UITextField__setSecureTextEntry;
    type->__interface_0.__fp_get_KeyboardType = (int(*)(void*))UITextField__get_KeyboardType;
    type->__interface_0.__fp_set_KeyboardType = (void(*)(void*, int))UITextField__set_KeyboardType;
    type->__interface_1.__fp_autocapitalizationType = (int(*)(void*))UITextField__autocapitalizationType;
    type->__interface_1.__fp_setAutocapitalizationType = (void(*)(void*, int))UITextField__setAutocapitalizationType;
    type->__interface_1.__fp_autocorrectionType = (int(*)(void*))UITextField__autocorrectionType;
    type->__interface_1.__fp_setAutocorrectionType = (void(*)(void*, int))UITextField__setAutocorrectionType;
    type->__interface_1.__fp_spellCheckingType = (int(*)(void*))UITextField__spellCheckingType;
    type->__interface_1.__fp_setSpellCheckingType = (void(*)(void*, int))UITextField__setSpellCheckingType;
    type->__interface_1.__fp_keyboardType = (int(*)(void*))UITextField__keyboardType;
    type->__interface_1.__fp_setKeyboardType = (void(*)(void*, int))UITextField__setKeyboardType;
    type->__interface_1.__fp_keyboardAppearance = (int(*)(void*))UITextField__keyboardAppearance;
    type->__interface_1.__fp_setKeyboardAppearance = (void(*)(void*, int))UITextField__setKeyboardAppearance;
    type->__interface_1.__fp_returnKeyType = (int(*)(void*))UITextField__returnKeyType;
    type->__interface_1.__fp_setReturnKeyType = (void(*)(void*, int))UITextField__setReturnKeyType;
    type->__interface_1.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))UITextField__enablesReturnKeyAutomatically;
    type->__interface_1.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))UITextField__setEnablesReturnKeyAutomatically;
    type->__interface_1.__fp_isSecureTextEntry = (bool(*)(void*))UITextField__isSecureTextEntry;
    type->__interface_1.__fp_setSecureTextEntry = (void(*)(void*, bool))UITextField__setSecureTextEntry;
    type->__interface_2.__fp_autocapitalizationType = (int(*)(void*))UITextField__autocapitalizationType;
    type->__interface_2.__fp_setAutocapitalizationType = (void(*)(void*, int))UITextField__setAutocapitalizationType;
    type->__interface_2.__fp_autocorrectionType = (int(*)(void*))UITextField__autocorrectionType;
    type->__interface_2.__fp_setAutocorrectionType = (void(*)(void*, int))UITextField__setAutocorrectionType;
    type->__interface_2.__fp_spellCheckingType = (int(*)(void*))UITextField__spellCheckingType;
    type->__interface_2.__fp_setSpellCheckingType = (void(*)(void*, int))UITextField__setSpellCheckingType;
    type->__interface_2.__fp_keyboardType = (int(*)(void*))UITextField__keyboardType;
    type->__interface_2.__fp_setKeyboardType = (void(*)(void*, int))UITextField__setKeyboardType;
    type->__interface_2.__fp_keyboardAppearance = (int(*)(void*))UITextField__keyboardAppearance;
    type->__interface_2.__fp_setKeyboardAppearance = (void(*)(void*, int))UITextField__setKeyboardAppearance;
    type->__interface_2.__fp_returnKeyType = (int(*)(void*))UITextField__returnKeyType;
    type->__interface_2.__fp_setReturnKeyType = (void(*)(void*, int))UITextField__setReturnKeyType;
    type->__interface_2.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))UITextField__enablesReturnKeyAutomatically;
    type->__interface_2.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))UITextField__setEnablesReturnKeyAutomatically;
    type->__interface_2.__fp_isSecureTextEntry = (bool(*)(void*))UITextField__isSecureTextEntry;
    type->__interface_2.__fp_setSecureTextEntry = (void(*)(void*, bool))UITextField__setSecureTextEntry;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUITextInput__typeof(), offsetof(UITextField__uType, __interface_0),
        ::app::iOS::UIKit::IUIKeyInput__typeof(), offsetof(UITextField__uType, __interface_1),
        ::app::iOS::UIKit::IUITextInputTraits__typeof(), offsetof(UITextField__uType, __interface_2));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UITextField___ObjInit_11(UITextField* __this)
{
    ::app::iOS::UIKit::UIControl___ObjInit_9(__this);
}

int UITextField__autocapitalizationType(UITextField* __this)
{
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

int UITextField__autocorrectionType(UITextField* __this)
{
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

int UITextField__baseWritingDirectionForPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::UITextWritingDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextWritingDirection, @selector(baseWritingDirectionForPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction_));
    return int(__return);
}

::app::iOS::UIKit::UITextPosition* UITextField__beginningOfDocument(UITextField* __this)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(beginningOfDocument));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

int UITextField__borderStyle(UITextField* __this)
{
    ::UITextBorderStyle __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextBorderStyle, @selector(borderStyle));
    return int(__return);
}

::app::iOS::CoreGraphics::CGRect UITextField__caretRectForPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(caretRectForPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

int UITextField__characterOffsetOfPositionWithinRange(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(characterOffsetOfPosition:withinRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (int)__return;
}

::app::iOS::UIKit::UITextRange* UITextField__characterRangeAtPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(characterRangeAtPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::UIKit::UITextRange* UITextField__characterRangeByExtendingPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(characterRangeByExtendingPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction_));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextField__closestPositionToPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(closestPositionToPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextField__closestPositionToPointWithinRange(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(closestPositionToPoint:withinRange:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

int UITextField__comparePositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_)
{
    ::NSComparisonResult __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSComparisonResult, @selector(comparePosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)other_));
    return int(__return);
}

void UITextField__deleteBackward(UITextField* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(deleteBackward));
}

void UITextField__dictationRecognitionFailed(UITextField* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(dictationRecognitionFailed));
}

void UITextField__dictationRecordingDidEnd(UITextField* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(dictationRecordingDidEnd));
}

bool UITextField__enablesReturnKeyAutomatically(UITextField* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

::app::iOS::UIKit::UITextPosition* UITextField__endOfDocument(UITextField* __this)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(endOfDocument));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::CoreGraphics::CGRect UITextField__firstRectForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(firstRectForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

::app::iOS::UIKit::UIFont* UITextField__font(UITextField* __this)
{
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIFont*, @selector(font));
    return (::app::iOS::UIKit::UIFont*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIFont__typeof());
}

::app::iOS::CoreGraphics::CGRect UITextField__frameForDictationResultPlaceholder(UITextField* __this, ::id placeholder_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(frameForDictationResultPlaceholder:),
        (::id)placeholder_);
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

int UITextField__get_BorderStyle(UITextField* __this)
{
    return __this->borderStyle();
}

::app::iOS::UIKit::UIFont* UITextField__get_Font(UITextField* __this)
{
    return __this->font();
}

int UITextField__get_KeyboardType(UITextField* __this)
{
    return __this->keyboardType();
}

::uString* UITextField__get_Text(UITextField* __this)
{
    return __this->text();
}

int UITextField__get_TextAlignment(UITextField* __this)
{
    return __this->textAlignment();
}

::app::iOS::UIKit::UIColor* UITextField__get_TextColor(UITextField* __this)
{
    return __this->textColor();
}

bool UITextField__hasText(UITextField* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(hasText));
    return (bool)__return;
}

::uObject* UITextField__inputDelegate(UITextField* __this)
{
    id<UITextInputDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UITextInputDelegate>, @selector(inputDelegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUITextInputDelegate__typeof());
}

void UITextField__insertDictationResult(UITextField* __this, ::app::iOS::Foundation::NSArray* dictationResult_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(insertDictationResult:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)dictationResult_));
}

::id UITextField__insertDictationResultPlaceholder(UITextField* __this)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::id, @selector(insertDictationResultPlaceholder));
    return (::id)__return;
}

void UITextField__insertText(UITextField* __this, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(insertText:),
        uObjC::NativeString(text_));
}

void UITextField__iOS_UIKit_IUIKeyInput_deleteBackward(UITextField* __this)
{
    __this->deleteBackward();
}

bool UITextField__iOS_UIKit_IUIKeyInput_hasText(UITextField* __this)
{
    return __this->hasText();
}

void UITextField__iOS_UIKit_IUIKeyInput_insertText(UITextField* __this, ::uString* text)
{
    __this->insertText(text);
}

int UITextField__iOS_UIKit_IUITextInput_baseWritingDirectionForPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction)
{
    return __this->baseWritingDirectionForPositionInDirection(position, direction);
}

::app::iOS::CoreGraphics::CGRect UITextField__iOS_UIKit_IUITextInput_caretRectForPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position)
{
    return __this->caretRectForPosition(position);
}

int UITextField__iOS_UIKit_IUITextInput_characterOffsetOfPositionWithinRange(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->characterOffsetOfPositionWithinRange(position, range);
}

::app::iOS::UIKit::UITextRange* UITextField__iOS_UIKit_IUITextInput_characterRangeAtPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point)
{
    return __this->characterRangeAtPoint(point);
}

::app::iOS::UIKit::UITextRange* UITextField__iOS_UIKit_IUITextInput_characterRangeByExtendingPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction)
{
    return __this->characterRangeByExtendingPositionInDirection(position, direction);
}

::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_closestPositionToPoint(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point)
{
    return __this->closestPositionToPoint(point);
}

::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_closestPositionToPointWithinRange(UITextField* __this, ::app::iOS::CoreGraphics::CGPoint point, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->closestPositionToPointWithinRange(point, range);
}

int UITextField__iOS_UIKit_IUITextInput_comparePositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextPosition* other)
{
    return __this->comparePositionToPosition(position, other);
}

void UITextField__iOS_UIKit_IUITextInput_dictationRecognitionFailed(UITextField* __this)
{
    __this->dictationRecognitionFailed();
}

void UITextField__iOS_UIKit_IUITextInput_dictationRecordingDidEnd(UITextField* __this)
{
    __this->dictationRecordingDidEnd();
}

::app::iOS::CoreGraphics::CGRect UITextField__iOS_UIKit_IUITextInput_firstRectForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->firstRectForRange(range);
}

::app::iOS::CoreGraphics::CGRect UITextField__iOS_UIKit_IUITextInput_frameForDictationResultPlaceholder(UITextField* __this, ::id placeholder)
{
    return __this->frameForDictationResultPlaceholder(placeholder);
}

void UITextField__iOS_UIKit_IUITextInput_insertDictationResult(UITextField* __this, ::app::iOS::Foundation::NSArray* dictationResult)
{
    __this->insertDictationResult(dictationResult);
}

::id UITextField__iOS_UIKit_IUITextInput_insertDictationResultPlaceholder(UITextField* __this)
{
    return __this->insertDictationResultPlaceholder();
}

int UITextField__iOS_UIKit_IUITextInput_offsetFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* from, ::app::iOS::UIKit::UITextPosition* toPosition)
{
    return __this->offsetFromPositionToPosition(from, toPosition);
}

::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionFromPositionInDirectionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction, int offset)
{
    return __this->positionFromPositionInDirectionOffset(position, direction, offset);
}

::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionFromPositionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int offset)
{
    return __this->positionFromPositionOffset(position, offset);
}

::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionWithinRangeAtCharacterOffset(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, int offset)
{
    return __this->positionWithinRangeAtCharacterOffset(range, offset);
}

::app::iOS::UIKit::UITextPosition* UITextField__iOS_UIKit_IUITextInput_positionWithinRangeFarthestInDirection(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, int direction)
{
    return __this->positionWithinRangeFarthestInDirection(range, direction);
}

void UITextField__iOS_UIKit_IUITextInput_removeDictationResultPlaceholderWillInsertResult(UITextField* __this, ::id placeholder, bool willInsertResult)
{
    __this->removeDictationResultPlaceholderWillInsertResult(placeholder, willInsertResult);
}

void UITextField__iOS_UIKit_IUITextInput_replaceRangeWithText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text)
{
    __this->replaceRangeWithText(range, text);
}

::app::iOS::Foundation::NSArray* UITextField__iOS_UIKit_IUITextInput_selectionRectsForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->selectionRectsForRange(range);
}

void UITextField__iOS_UIKit_IUITextInput_setBaseWritingDirectionForRange(UITextField* __this, int writingDirection, ::app::iOS::UIKit::UITextRange* range)
{
    __this->setBaseWritingDirectionForRange(writingDirection, range);
}

void UITextField__iOS_UIKit_IUITextInput_setMarkedTextSelectedRange(UITextField* __this, ::uString* markedText, ::app::iOS::Foundation::_NSRange selectedRange)
{
    __this->setMarkedTextSelectedRange(markedText, selectedRange);
}

bool UITextField__iOS_UIKit_IUITextInput_shouldChangeTextInRangeReplacementText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text)
{
    return __this->shouldChangeTextInRangeReplacementText(range, text);
}

::uString* UITextField__iOS_UIKit_IUITextInput_textInRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->textInRange(range);
}

::app::iOS::UIKit::UITextRange* UITextField__iOS_UIKit_IUITextInput_textRangeFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* fromPosition, ::app::iOS::UIKit::UITextPosition* toPosition)
{
    return __this->textRangeFromPositionToPosition(fromPosition, toPosition);
}

::app::iOS::Foundation::NSDictionary* UITextField__iOS_UIKit_IUITextInput_textStylingAtPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position, int direction)
{
    return __this->textStylingAtPositionInDirection(position, direction);
}

void UITextField__iOS_UIKit_IUITextInput_unmarkText(UITextField* __this)
{
    __this->unmarkText();
}

bool UITextField__isSecureTextEntry(UITextField* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

int UITextField__keyboardAppearance(UITextField* __this)
{
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

int UITextField__keyboardType(UITextField* __this)
{
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

::app::iOS::UIKit::UITextRange* UITextField__markedTextRange(UITextField* __this)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(markedTextRange));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::Foundation::NSDictionary* UITextField__markedTextStyle(UITextField* __this)
{
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSDictionary*, @selector(markedTextStyle));
    return (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSDictionary__typeof());
}

UITextField* UITextField__New_11(::uStatic* __this)
{
    UITextField* inst = (UITextField*)::uAllocObject(sizeof(UITextField), UITextField__typeof());
    inst->_ObjInit_11();
    return inst;
}

int UITextField__offsetFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(offsetFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)from_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (int)__return;
}

::app::iOS::UIKit::UITextPosition* UITextField__positionFromPositionInDirectionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionFromPosition:inDirection:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextField__positionFromPositionOffset(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionFromPosition:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextField__positionWithinRangeAtCharacterOffset(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionWithinRange:atCharacterOffset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextField__positionWithinRangeFarthestInDirection(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, int direction_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionWithinRange:farthestInDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        ::UITextLayoutDirection(direction_));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

void UITextField__removeDictationResultPlaceholderWillInsertResult(UITextField* __this, ::id placeholder_, bool willInsertResult_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeDictationResultPlaceholder:willInsertResult:),
        (::id)placeholder_,
        (BOOL)willInsertResult_);
}

void UITextField__replaceRangeWithText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(replaceRange:withText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
}

int UITextField__returnKeyType(UITextField* __this)
{
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

::app::iOS::UIKit::UITextRange* UITextField__selectedTextRange(UITextField* __this)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(selectedTextRange));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

int UITextField__selectionAffinity(UITextField* __this)
{
    ::UITextStorageDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextStorageDirection, @selector(selectionAffinity));
    return int(__return);
}

::app::iOS::Foundation::NSArray* UITextField__selectionRectsForRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(selectionRectsForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

void UITextField__set_BorderStyle(UITextField* __this, int value)
{
    __this->setBorderStyle(value);
}

void UITextField__set_Font(UITextField* __this, ::app::iOS::UIKit::UIFont* value)
{
    __this->setFont(value);
}

void UITextField__set_KeyboardType(UITextField* __this, int value)
{
    __this->setKeyboardType(value);
}

void UITextField__set_Text(UITextField* __this, ::uString* value)
{
    __this->setText(value);
}

void UITextField__set_TextAlignment(UITextField* __this, int value)
{
    __this->setTextAlignment(value);
}

void UITextField__set_TextColor(UITextField* __this, ::app::iOS::UIKit::UIColor* value)
{
    __this->setTextColor(value);
}

void UITextField__setAutocapitalizationType(UITextField* __this, int autocapitalizationType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType_));
}

void UITextField__setAutocorrectionType(UITextField* __this, int autocorrectionType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType_));
}

void UITextField__setBaseWritingDirectionForRange(UITextField* __this, int writingDirection_, ::app::iOS::UIKit::UITextRange* range_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setBaseWritingDirection:forRange:),
        ::UITextWritingDirection(writingDirection_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
}

void UITextField__setBorderStyle(UITextField* __this, int borderStyle_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setBorderStyle:),
        ::UITextBorderStyle(borderStyle_));
}

void UITextField__setEnablesReturnKeyAutomatically(UITextField* __this, bool enablesReturnKeyAutomatically_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically_);
}

void UITextField__setFont(UITextField* __this, ::app::iOS::UIKit::UIFont* font_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setFont:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)font_));
}

void UITextField__setInputDelegate(UITextField* __this, ::uObject* inputDelegate_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setInputDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)inputDelegate_, ::app::iOS::UIKit::IUITextInputDelegate__typeof()));
}

void UITextField__setKeyboardAppearance(UITextField* __this, int keyboardAppearance_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance_));
}

void UITextField__setKeyboardType(UITextField* __this, int keyboardType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType_));
}

void UITextField__setMarkedTextSelectedRange(UITextField* __this, ::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMarkedText:selectedRange:),
        uObjC::NativeString(markedText_),
        uObjC::Struct::FromUno__NSRange(selectedRange_, ::_NSRange()));
}

void UITextField__setMarkedTextStyle(UITextField* __this, ::app::iOS::Foundation::NSDictionary* markedTextStyle_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMarkedTextStyle:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)markedTextStyle_));
}

void UITextField__setReturnKeyType(UITextField* __this, int returnKeyType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType_));
}

void UITextField__setSecureTextEntry(UITextField* __this, bool secureTextEntry_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry_);
}

void UITextField__setSelectedTextRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* selectedTextRange_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSelectedTextRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)selectedTextRange_));
}

void UITextField__setSelectionAffinity(UITextField* __this, int selectionAffinity_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSelectionAffinity:),
        ::UITextStorageDirection(selectionAffinity_));
}

void UITextField__setSpellCheckingType(UITextField* __this, int spellCheckingType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType_));
}

void UITextField__setText(UITextField* __this, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setText:),
        uObjC::NativeString(text_));
}

void UITextField__setTextAlignment(UITextField* __this, int textAlignment_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextAlignment:),
        ::NSTextAlignment(textAlignment_));
}

void UITextField__setTextColor(UITextField* __this, ::app::iOS::UIKit::UIColor* textColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textColor_));
}

bool UITextField__shouldChangeTextInRangeReplacementText(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(shouldChangeTextInRange:replacementText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
    return (bool)__return;
}

int UITextField__spellCheckingType(UITextField* __this)
{
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}

::uString* UITextField__text(UITextField* __this)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(text));
    return uObjC::UnoString(__return);
}

int UITextField__textAlignment(UITextField* __this)
{
    ::NSTextAlignment __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSTextAlignment, @selector(textAlignment));
    return int(__return);
}

::app::iOS::UIKit::UIColor* UITextField__textColor(UITextField* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(textColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

::app::iOS::UIKit::UIView* UITextField__textInputView(UITextField* __this)
{
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIView*, @selector(textInputView));
    return (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIView__typeof());
}

::uString* UITextField__textInRange(UITextField* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(textInRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::UnoString(__return);
}

::app::iOS::UIKit::UITextRange* UITextField__textRangeFromPositionToPosition(UITextField* __this, ::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(textRangeFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)fromPosition_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::Foundation::NSDictionary* UITextField__textStylingAtPositionInDirection(UITextField* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSDictionary*, @selector(textStylingAtPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction_));
    return (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSDictionary__typeof());
}

::uObject* UITextField__tokenizer(UITextField* __this)
{
    id<UITextInputTokenizer> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UITextInputTokenizer>, @selector(tokenizer));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUITextInputTokenizer__typeof());
}

void UITextField__unmarkText(UITextField* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(unmarkText));
}

}}}
