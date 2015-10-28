// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInput
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInput__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSComparisonResult.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.UIKit.Interop.IUITextInput.h>
#include <app/iOS.UIKit.IUITextInputDelegate.h>
#include <app/iOS.UIKit.IUITextInputTokenizer.h>
#include <app/iOS.UIKit.UIKeyboardAppearance.h>
#include <app/iOS.UIKit.UIKeyboardType.h>
#include <app/iOS.UIKit.UIReturnKeyType.h>
#include <app/iOS.UIKit.UITextAutocapitalizationType.h>
#include <app/iOS.UIKit.UITextAutocorrectionType.h>
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
namespace Interop {

IUITextInput__uType* IUITextInput__typeof()
{
    static ::uStaticStrong<IUITextInput__uType*> type;
    if (type != NULL) return type;

    type = (IUITextInput__uType*)::uAllocClassType(sizeof(IUITextInput__uType), "iOS.UIKit.Interop.IUITextInput", false, 3, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_textInRange = (::uString*(*)(void*, ::app::iOS::UIKit::UITextRange*))IUITextInput__textInRange;
    type->__interface_0.__fp_replaceRangeWithText = (void(*)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*))IUITextInput__replaceRangeWithText;
    type->__interface_0.__fp_setMarkedTextSelectedRange = (void(*)(void*, ::uString*, ::app::iOS::Foundation::_NSRange))IUITextInput__setMarkedTextSelectedRange;
    type->__interface_0.__fp_unmarkText = (void(*)(void*))IUITextInput__unmarkText;
    type->__interface_0.__fp_textRangeFromPositionToPosition = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))IUITextInput__textRangeFromPositionToPosition;
    type->__interface_0.__fp_positionFromPositionOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))IUITextInput__positionFromPositionOffset;
    type->__interface_0.__fp_positionFromPositionInDirectionOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int, int))IUITextInput__positionFromPositionInDirectionOffset;
    type->__interface_0.__fp_comparePositionToPosition = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))IUITextInput__comparePositionToPosition;
    type->__interface_0.__fp_offsetFromPositionToPosition = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))IUITextInput__offsetFromPositionToPosition;
    type->__interface_0.__fp_positionWithinRangeFarthestInDirection = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextRange*, int))IUITextInput__positionWithinRangeFarthestInDirection;
    type->__interface_0.__fp_characterRangeByExtendingPositionInDirection = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))IUITextInput__characterRangeByExtendingPositionInDirection;
    type->__interface_0.__fp_baseWritingDirectionForPositionInDirection = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))IUITextInput__baseWritingDirectionForPositionInDirection;
    type->__interface_0.__fp_setBaseWritingDirectionForRange = (void(*)(void*, int, ::app::iOS::UIKit::UITextRange*))IUITextInput__setBaseWritingDirectionForRange;
    type->__interface_0.__fp_firstRectForRange = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::app::iOS::UIKit::UITextRange*))IUITextInput__firstRectForRange;
    type->__interface_0.__fp_caretRectForPosition = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::app::iOS::UIKit::UITextPosition*))IUITextInput__caretRectForPosition;
    type->__interface_0.__fp_selectionRectsForRange = (::app::iOS::Foundation::NSArray*(*)(void*, ::app::iOS::UIKit::UITextRange*))IUITextInput__selectionRectsForRange;
    type->__interface_0.__fp_closestPositionToPoint = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::CoreGraphics::CGPoint))IUITextInput__closestPositionToPoint;
    type->__interface_0.__fp_closestPositionToPointWithinRange = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::CoreGraphics::CGPoint, ::app::iOS::UIKit::UITextRange*))IUITextInput__closestPositionToPointWithinRange;
    type->__interface_0.__fp_characterRangeAtPoint = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::CoreGraphics::CGPoint))IUITextInput__characterRangeAtPoint;
    type->__interface_0.__fp_shouldChangeTextInRangeReplacementText = (bool(*)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*))IUITextInput__shouldChangeTextInRangeReplacementText;
    type->__interface_0.__fp_textStylingAtPositionInDirection = (::app::iOS::Foundation::NSDictionary*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))IUITextInput__textStylingAtPositionInDirection;
    type->__interface_0.__fp_positionWithinRangeAtCharacterOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextRange*, int))IUITextInput__positionWithinRangeAtCharacterOffset;
    type->__interface_0.__fp_characterOffsetOfPositionWithinRange = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextRange*))IUITextInput__characterOffsetOfPositionWithinRange;
    type->__interface_0.__fp_insertDictationResult = (void(*)(void*, ::app::iOS::Foundation::NSArray*))IUITextInput__insertDictationResult;
    type->__interface_0.__fp_dictationRecordingDidEnd = (void(*)(void*))IUITextInput__dictationRecordingDidEnd;
    type->__interface_0.__fp_dictationRecognitionFailed = (void(*)(void*))IUITextInput__dictationRecognitionFailed;
    type->__interface_0.__fp_insertDictationResultPlaceholder = (::id(*)(void*))IUITextInput__insertDictationResultPlaceholder;
    type->__interface_0.__fp_frameForDictationResultPlaceholder = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::id))IUITextInput__frameForDictationResultPlaceholder;
    type->__interface_0.__fp_removeDictationResultPlaceholderWillInsertResult = (void(*)(void*, ::id, bool))IUITextInput__removeDictationResultPlaceholderWillInsertResult;
    type->__interface_0.__fp_selectedTextRange = (::app::iOS::UIKit::UITextRange*(*)(void*))IUITextInput__selectedTextRange;
    type->__interface_0.__fp_setSelectedTextRange = (void(*)(void*, ::app::iOS::UIKit::UITextRange*))IUITextInput__setSelectedTextRange;
    type->__interface_0.__fp_markedTextRange = (::app::iOS::UIKit::UITextRange*(*)(void*))IUITextInput__markedTextRange;
    type->__interface_0.__fp_markedTextStyle = (::app::iOS::Foundation::NSDictionary*(*)(void*))IUITextInput__markedTextStyle;
    type->__interface_0.__fp_setMarkedTextStyle = (void(*)(void*, ::app::iOS::Foundation::NSDictionary*))IUITextInput__setMarkedTextStyle;
    type->__interface_0.__fp_beginningOfDocument = (::app::iOS::UIKit::UITextPosition*(*)(void*))IUITextInput__beginningOfDocument;
    type->__interface_0.__fp_endOfDocument = (::app::iOS::UIKit::UITextPosition*(*)(void*))IUITextInput__endOfDocument;
    type->__interface_0.__fp_inputDelegate = (::uObject*(*)(void*))IUITextInput__inputDelegate;
    type->__interface_0.__fp_setInputDelegate = (void(*)(void*, ::uObject*))IUITextInput__setInputDelegate;
    type->__interface_0.__fp_tokenizer = (::uObject*(*)(void*))IUITextInput__tokenizer;
    type->__interface_0.__fp_textInputView = (::app::iOS::UIKit::UIView*(*)(void*))IUITextInput__textInputView;
    type->__interface_0.__fp_selectionAffinity = (int(*)(void*))IUITextInput__selectionAffinity;
    type->__interface_0.__fp_setSelectionAffinity = (void(*)(void*, int))IUITextInput__setSelectionAffinity;
    type->__interface_0.__fp_hasText = (bool(*)(void*))IUITextInput__hasText;
    type->__interface_0.__fp_insertText = (void(*)(void*, ::uString*))IUITextInput__insertText;
    type->__interface_0.__fp_deleteBackward = (void(*)(void*))IUITextInput__deleteBackward;
    type->__interface_0.__fp_autocapitalizationType = (int(*)(void*))IUITextInput__autocapitalizationType;
    type->__interface_0.__fp_setAutocapitalizationType = (void(*)(void*, int))IUITextInput__setAutocapitalizationType;
    type->__interface_0.__fp_autocorrectionType = (int(*)(void*))IUITextInput__autocorrectionType;
    type->__interface_0.__fp_setAutocorrectionType = (void(*)(void*, int))IUITextInput__setAutocorrectionType;
    type->__interface_0.__fp_spellCheckingType = (int(*)(void*))IUITextInput__spellCheckingType;
    type->__interface_0.__fp_setSpellCheckingType = (void(*)(void*, int))IUITextInput__setSpellCheckingType;
    type->__interface_0.__fp_keyboardType = (int(*)(void*))IUITextInput__keyboardType;
    type->__interface_0.__fp_setKeyboardType = (void(*)(void*, int))IUITextInput__setKeyboardType;
    type->__interface_0.__fp_keyboardAppearance = (int(*)(void*))IUITextInput__keyboardAppearance;
    type->__interface_0.__fp_setKeyboardAppearance = (void(*)(void*, int))IUITextInput__setKeyboardAppearance;
    type->__interface_0.__fp_returnKeyType = (int(*)(void*))IUITextInput__returnKeyType;
    type->__interface_0.__fp_setReturnKeyType = (void(*)(void*, int))IUITextInput__setReturnKeyType;
    type->__interface_0.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))IUITextInput__enablesReturnKeyAutomatically;
    type->__interface_0.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))IUITextInput__setEnablesReturnKeyAutomatically;
    type->__interface_0.__fp_isSecureTextEntry = (bool(*)(void*))IUITextInput__isSecureTextEntry;
    type->__interface_0.__fp_setSecureTextEntry = (void(*)(void*, bool))IUITextInput__setSecureTextEntry;
    type->__interface_0.__fp_get_KeyboardType = (int(*)(void*))IUITextInput__get_KeyboardType;
    type->__interface_0.__fp_set_KeyboardType = (void(*)(void*, int))IUITextInput__set_KeyboardType;
    type->__interface_1.__fp_hasText = (bool(*)(void*))IUITextInput__hasText;
    type->__interface_1.__fp_insertText = (void(*)(void*, ::uString*))IUITextInput__insertText;
    type->__interface_1.__fp_deleteBackward = (void(*)(void*))IUITextInput__deleteBackward;
    type->__interface_1.__fp_autocapitalizationType = (int(*)(void*))IUITextInput__autocapitalizationType;
    type->__interface_1.__fp_setAutocapitalizationType = (void(*)(void*, int))IUITextInput__setAutocapitalizationType;
    type->__interface_1.__fp_autocorrectionType = (int(*)(void*))IUITextInput__autocorrectionType;
    type->__interface_1.__fp_setAutocorrectionType = (void(*)(void*, int))IUITextInput__setAutocorrectionType;
    type->__interface_1.__fp_spellCheckingType = (int(*)(void*))IUITextInput__spellCheckingType;
    type->__interface_1.__fp_setSpellCheckingType = (void(*)(void*, int))IUITextInput__setSpellCheckingType;
    type->__interface_1.__fp_keyboardType = (int(*)(void*))IUITextInput__keyboardType;
    type->__interface_1.__fp_setKeyboardType = (void(*)(void*, int))IUITextInput__setKeyboardType;
    type->__interface_1.__fp_keyboardAppearance = (int(*)(void*))IUITextInput__keyboardAppearance;
    type->__interface_1.__fp_setKeyboardAppearance = (void(*)(void*, int))IUITextInput__setKeyboardAppearance;
    type->__interface_1.__fp_returnKeyType = (int(*)(void*))IUITextInput__returnKeyType;
    type->__interface_1.__fp_setReturnKeyType = (void(*)(void*, int))IUITextInput__setReturnKeyType;
    type->__interface_1.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))IUITextInput__enablesReturnKeyAutomatically;
    type->__interface_1.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))IUITextInput__setEnablesReturnKeyAutomatically;
    type->__interface_1.__fp_isSecureTextEntry = (bool(*)(void*))IUITextInput__isSecureTextEntry;
    type->__interface_1.__fp_setSecureTextEntry = (void(*)(void*, bool))IUITextInput__setSecureTextEntry;
    type->__interface_2.__fp_autocapitalizationType = (int(*)(void*))IUITextInput__autocapitalizationType;
    type->__interface_2.__fp_setAutocapitalizationType = (void(*)(void*, int))IUITextInput__setAutocapitalizationType;
    type->__interface_2.__fp_autocorrectionType = (int(*)(void*))IUITextInput__autocorrectionType;
    type->__interface_2.__fp_setAutocorrectionType = (void(*)(void*, int))IUITextInput__setAutocorrectionType;
    type->__interface_2.__fp_spellCheckingType = (int(*)(void*))IUITextInput__spellCheckingType;
    type->__interface_2.__fp_setSpellCheckingType = (void(*)(void*, int))IUITextInput__setSpellCheckingType;
    type->__interface_2.__fp_keyboardType = (int(*)(void*))IUITextInput__keyboardType;
    type->__interface_2.__fp_setKeyboardType = (void(*)(void*, int))IUITextInput__setKeyboardType;
    type->__interface_2.__fp_keyboardAppearance = (int(*)(void*))IUITextInput__keyboardAppearance;
    type->__interface_2.__fp_setKeyboardAppearance = (void(*)(void*, int))IUITextInput__setKeyboardAppearance;
    type->__interface_2.__fp_returnKeyType = (int(*)(void*))IUITextInput__returnKeyType;
    type->__interface_2.__fp_setReturnKeyType = (void(*)(void*, int))IUITextInput__setReturnKeyType;
    type->__interface_2.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))IUITextInput__enablesReturnKeyAutomatically;
    type->__interface_2.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))IUITextInput__setEnablesReturnKeyAutomatically;
    type->__interface_2.__fp_isSecureTextEntry = (bool(*)(void*))IUITextInput__isSecureTextEntry;
    type->__interface_2.__fp_setSecureTextEntry = (void(*)(void*, bool))IUITextInput__setSecureTextEntry;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUITextInput__typeof(), offsetof(IUITextInput__uType, __interface_0),
        ::app::iOS::UIKit::IUIKeyInput__typeof(), offsetof(IUITextInput__uType, __interface_1),
        ::app::iOS::UIKit::IUITextInputTraits__typeof(), offsetof(IUITextInput__uType, __interface_2));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

int IUITextInput__autocapitalizationType(IUITextInput* __this)
{
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

int IUITextInput__autocorrectionType(IUITextInput* __this)
{
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

int IUITextInput__baseWritingDirectionForPositionInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::UITextWritingDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextWritingDirection, @selector(baseWritingDirectionForPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction_));
    return int(__return);
}

::app::iOS::UIKit::UITextPosition* IUITextInput__beginningOfDocument(IUITextInput* __this)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(beginningOfDocument));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::CoreGraphics::CGRect IUITextInput__caretRectForPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(caretRectForPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

int IUITextInput__characterOffsetOfPositionWithinRange(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(characterOffsetOfPosition:withinRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (int)__return;
}

::app::iOS::UIKit::UITextRange* IUITextInput__characterRangeAtPoint(IUITextInput* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(characterRangeAtPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::UIKit::UITextRange* IUITextInput__characterRangeByExtendingPositionInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(characterRangeByExtendingPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction_));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::UIKit::UITextPosition* IUITextInput__closestPositionToPoint(IUITextInput* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(closestPositionToPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* IUITextInput__closestPositionToPointWithinRange(IUITextInput* __this, ::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(closestPositionToPoint:withinRange:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

int IUITextInput__comparePositionToPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_)
{
    ::NSComparisonResult __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSComparisonResult, @selector(comparePosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)other_));
    return int(__return);
}

void IUITextInput__deleteBackward(IUITextInput* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(deleteBackward));
}

void IUITextInput__dictationRecognitionFailed(IUITextInput* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(dictationRecognitionFailed));
}

void IUITextInput__dictationRecordingDidEnd(IUITextInput* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(dictationRecordingDidEnd));
}

bool IUITextInput__enablesReturnKeyAutomatically(IUITextInput* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

::app::iOS::UIKit::UITextPosition* IUITextInput__endOfDocument(IUITextInput* __this)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(endOfDocument));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::CoreGraphics::CGRect IUITextInput__firstRectForRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(firstRectForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

::app::iOS::CoreGraphics::CGRect IUITextInput__frameForDictationResultPlaceholder(IUITextInput* __this, ::id placeholder_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(frameForDictationResultPlaceholder:),
        (::id)placeholder_);
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

int IUITextInput__get_KeyboardType(IUITextInput* __this)
{
    return __this->keyboardType();
}

bool IUITextInput__hasText(IUITextInput* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(hasText));
    return (bool)__return;
}

::uObject* IUITextInput__inputDelegate(IUITextInput* __this)
{
    id<UITextInputDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UITextInputDelegate>, @selector(inputDelegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUITextInputDelegate__typeof());
}

void IUITextInput__insertDictationResult(IUITextInput* __this, ::app::iOS::Foundation::NSArray* dictationResult_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(insertDictationResult:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)dictationResult_));
}

::id IUITextInput__insertDictationResultPlaceholder(IUITextInput* __this)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::id, @selector(insertDictationResultPlaceholder));
    return (::id)__return;
}

void IUITextInput__insertText(IUITextInput* __this, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(insertText:),
        uObjC::NativeString(text_));
}

bool IUITextInput__isSecureTextEntry(IUITextInput* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

int IUITextInput__keyboardAppearance(IUITextInput* __this)
{
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

int IUITextInput__keyboardType(IUITextInput* __this)
{
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

::app::iOS::UIKit::UITextRange* IUITextInput__markedTextRange(IUITextInput* __this)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(markedTextRange));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::Foundation::NSDictionary* IUITextInput__markedTextStyle(IUITextInput* __this)
{
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSDictionary*, @selector(markedTextStyle));
    return (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSDictionary__typeof());
}

int IUITextInput__offsetFromPositionToPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(offsetFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)from_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (int)__return;
}

::app::iOS::UIKit::UITextPosition* IUITextInput__positionFromPositionInDirectionOffset(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionFromPosition:inDirection:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* IUITextInput__positionFromPositionOffset(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionFromPosition:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* IUITextInput__positionWithinRangeAtCharacterOffset(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionWithinRange:atCharacterOffset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* IUITextInput__positionWithinRangeFarthestInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, int direction_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionWithinRange:farthestInDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        ::UITextLayoutDirection(direction_));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

void IUITextInput__removeDictationResultPlaceholderWillInsertResult(IUITextInput* __this, ::id placeholder_, bool willInsertResult_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeDictationResultPlaceholder:willInsertResult:),
        (::id)placeholder_,
        (BOOL)willInsertResult_);
}

void IUITextInput__replaceRangeWithText(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(replaceRange:withText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
}

int IUITextInput__returnKeyType(IUITextInput* __this)
{
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

::app::iOS::UIKit::UITextRange* IUITextInput__selectedTextRange(IUITextInput* __this)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(selectedTextRange));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

int IUITextInput__selectionAffinity(IUITextInput* __this)
{
    ::UITextStorageDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextStorageDirection, @selector(selectionAffinity));
    return int(__return);
}

::app::iOS::Foundation::NSArray* IUITextInput__selectionRectsForRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(selectionRectsForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

void IUITextInput__set_KeyboardType(IUITextInput* __this, int value)
{
    __this->setKeyboardType(value);
}

void IUITextInput__setAutocapitalizationType(IUITextInput* __this, int autocapitalizationType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType_));
}

void IUITextInput__setAutocorrectionType(IUITextInput* __this, int autocorrectionType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType_));
}

void IUITextInput__setBaseWritingDirectionForRange(IUITextInput* __this, int writingDirection_, ::app::iOS::UIKit::UITextRange* range_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setBaseWritingDirection:forRange:),
        ::UITextWritingDirection(writingDirection_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
}

void IUITextInput__setEnablesReturnKeyAutomatically(IUITextInput* __this, bool enablesReturnKeyAutomatically_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically_);
}

void IUITextInput__setInputDelegate(IUITextInput* __this, ::uObject* inputDelegate_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setInputDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)inputDelegate_, ::app::iOS::UIKit::IUITextInputDelegate__typeof()));
}

void IUITextInput__setKeyboardAppearance(IUITextInput* __this, int keyboardAppearance_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance_));
}

void IUITextInput__setKeyboardType(IUITextInput* __this, int keyboardType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType_));
}

void IUITextInput__setMarkedTextSelectedRange(IUITextInput* __this, ::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMarkedText:selectedRange:),
        uObjC::NativeString(markedText_),
        uObjC::Struct::FromUno__NSRange(selectedRange_, ::_NSRange()));
}

void IUITextInput__setMarkedTextStyle(IUITextInput* __this, ::app::iOS::Foundation::NSDictionary* markedTextStyle_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMarkedTextStyle:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)markedTextStyle_));
}

void IUITextInput__setReturnKeyType(IUITextInput* __this, int returnKeyType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType_));
}

void IUITextInput__setSecureTextEntry(IUITextInput* __this, bool secureTextEntry_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry_);
}

void IUITextInput__setSelectedTextRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* selectedTextRange_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSelectedTextRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)selectedTextRange_));
}

void IUITextInput__setSelectionAffinity(IUITextInput* __this, int selectionAffinity_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSelectionAffinity:),
        ::UITextStorageDirection(selectionAffinity_));
}

void IUITextInput__setSpellCheckingType(IUITextInput* __this, int spellCheckingType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType_));
}

bool IUITextInput__shouldChangeTextInRangeReplacementText(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(shouldChangeTextInRange:replacementText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
    return (bool)__return;
}

int IUITextInput__spellCheckingType(IUITextInput* __this)
{
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}

::app::iOS::UIKit::UIView* IUITextInput__textInputView(IUITextInput* __this)
{
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIView*, @selector(textInputView));
    return (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIView__typeof());
}

::uString* IUITextInput__textInRange(IUITextInput* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(textInRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::UnoString(__return);
}

::app::iOS::UIKit::UITextRange* IUITextInput__textRangeFromPositionToPosition(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(textRangeFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)fromPosition_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::Foundation::NSDictionary* IUITextInput__textStylingAtPositionInDirection(IUITextInput* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSDictionary*, @selector(textStylingAtPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction_));
    return (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSDictionary__typeof());
}

::uObject* IUITextInput__tokenizer(IUITextInput* __this)
{
    id<UITextInputTokenizer> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UITextInputTokenizer>, @selector(tokenizer));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUITextInputTokenizer__typeof());
}

void IUITextInput__unmarkText(IUITextInput* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(unmarkText));
}

}}}}
