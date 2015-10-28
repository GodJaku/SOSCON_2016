// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UITextView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UITextView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UITextView__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSComparisonResult.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.UIKit.IUITextInputDelegate.h>
#include <app/iOS.UIKit.IUITextInputTokenizer.h>
#include <app/iOS.UIKit.IUITextViewDelegate.h>
#include <app/iOS.UIKit.NSTextAlignment.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIFont.h>
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
#include <app/iOS.UIKit.UITextView.h>
#include <app/iOS.UIKit.UITextWritingDirection.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

UITextView__uType* UITextView__typeof()
{
    static ::uStaticStrong<UITextView__uType*> type;
    if (type != NULL) return type;

    type = (UITextView__uType*)::uAllocClassType(sizeof(UITextView__uType), "iOS.UIKit.UITextView", false, 3, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIScrollView__typeof());
    type->__interface_0.__fp_textInRange = (::uString*(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextView__iOS_UIKit_IUITextInput_textInRange;
    type->__interface_0.__fp_replaceRangeWithText = (void(*)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*))UITextView__iOS_UIKit_IUITextInput_replaceRangeWithText;
    type->__interface_0.__fp_setMarkedTextSelectedRange = (void(*)(void*, ::uString*, ::app::iOS::Foundation::_NSRange))UITextView__iOS_UIKit_IUITextInput_setMarkedTextSelectedRange;
    type->__interface_0.__fp_unmarkText = (void(*)(void*))UITextView__iOS_UIKit_IUITextInput_unmarkText;
    type->__interface_0.__fp_textRangeFromPositionToPosition = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))UITextView__iOS_UIKit_IUITextInput_textRangeFromPositionToPosition;
    type->__interface_0.__fp_positionFromPositionOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextView__iOS_UIKit_IUITextInput_positionFromPositionOffset;
    type->__interface_0.__fp_positionFromPositionInDirectionOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int, int))UITextView__iOS_UIKit_IUITextInput_positionFromPositionInDirectionOffset;
    type->__interface_0.__fp_comparePositionToPosition = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))UITextView__iOS_UIKit_IUITextInput_comparePositionToPosition;
    type->__interface_0.__fp_offsetFromPositionToPosition = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*))UITextView__iOS_UIKit_IUITextInput_offsetFromPositionToPosition;
    type->__interface_0.__fp_positionWithinRangeFarthestInDirection = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextRange*, int))UITextView__iOS_UIKit_IUITextInput_positionWithinRangeFarthestInDirection;
    type->__interface_0.__fp_characterRangeByExtendingPositionInDirection = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextView__iOS_UIKit_IUITextInput_characterRangeByExtendingPositionInDirection;
    type->__interface_0.__fp_baseWritingDirectionForPositionInDirection = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextView__iOS_UIKit_IUITextInput_baseWritingDirectionForPositionInDirection;
    type->__interface_0.__fp_setBaseWritingDirectionForRange = (void(*)(void*, int, ::app::iOS::UIKit::UITextRange*))UITextView__iOS_UIKit_IUITextInput_setBaseWritingDirectionForRange;
    type->__interface_0.__fp_firstRectForRange = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextView__iOS_UIKit_IUITextInput_firstRectForRange;
    type->__interface_0.__fp_caretRectForPosition = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::app::iOS::UIKit::UITextPosition*))UITextView__iOS_UIKit_IUITextInput_caretRectForPosition;
    type->__interface_0.__fp_selectionRectsForRange = (::app::iOS::Foundation::NSArray*(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextView__iOS_UIKit_IUITextInput_selectionRectsForRange;
    type->__interface_0.__fp_closestPositionToPoint = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::CoreGraphics::CGPoint))UITextView__iOS_UIKit_IUITextInput_closestPositionToPoint;
    type->__interface_0.__fp_closestPositionToPointWithinRange = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::CoreGraphics::CGPoint, ::app::iOS::UIKit::UITextRange*))UITextView__iOS_UIKit_IUITextInput_closestPositionToPointWithinRange;
    type->__interface_0.__fp_characterRangeAtPoint = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::CoreGraphics::CGPoint))UITextView__iOS_UIKit_IUITextInput_characterRangeAtPoint;
    type->__interface_0.__fp_shouldChangeTextInRangeReplacementText = (bool(*)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*))UITextView__iOS_UIKit_IUITextInput_shouldChangeTextInRangeReplacementText;
    type->__interface_0.__fp_textStylingAtPositionInDirection = (::app::iOS::Foundation::NSDictionary*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int))UITextView__iOS_UIKit_IUITextInput_textStylingAtPositionInDirection;
    type->__interface_0.__fp_positionWithinRangeAtCharacterOffset = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextRange*, int))UITextView__iOS_UIKit_IUITextInput_positionWithinRangeAtCharacterOffset;
    type->__interface_0.__fp_characterOffsetOfPositionWithinRange = (int(*)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextRange*))UITextView__iOS_UIKit_IUITextInput_characterOffsetOfPositionWithinRange;
    type->__interface_0.__fp_insertDictationResult = (void(*)(void*, ::app::iOS::Foundation::NSArray*))UITextView__iOS_UIKit_IUITextInput_insertDictationResult;
    type->__interface_0.__fp_dictationRecordingDidEnd = (void(*)(void*))UITextView__iOS_UIKit_IUITextInput_dictationRecordingDidEnd;
    type->__interface_0.__fp_dictationRecognitionFailed = (void(*)(void*))UITextView__iOS_UIKit_IUITextInput_dictationRecognitionFailed;
    type->__interface_0.__fp_insertDictationResultPlaceholder = (::id(*)(void*))UITextView__iOS_UIKit_IUITextInput_insertDictationResultPlaceholder;
    type->__interface_0.__fp_frameForDictationResultPlaceholder = (::app::iOS::CoreGraphics::CGRect(*)(void*, ::id))UITextView__iOS_UIKit_IUITextInput_frameForDictationResultPlaceholder;
    type->__interface_0.__fp_removeDictationResultPlaceholderWillInsertResult = (void(*)(void*, ::id, bool))UITextView__iOS_UIKit_IUITextInput_removeDictationResultPlaceholderWillInsertResult;
    type->__interface_1.__fp_hasText = (bool(*)(void*))UITextView__iOS_UIKit_IUIKeyInput_hasText;
    type->__interface_1.__fp_insertText = (void(*)(void*, ::uString*))UITextView__iOS_UIKit_IUIKeyInput_insertText;
    type->__interface_1.__fp_deleteBackward = (void(*)(void*))UITextView__iOS_UIKit_IUIKeyInput_deleteBackward;
    type->__interface_0.__fp_selectedTextRange = (::app::iOS::UIKit::UITextRange*(*)(void*))UITextView__selectedTextRange;
    type->__interface_0.__fp_setSelectedTextRange = (void(*)(void*, ::app::iOS::UIKit::UITextRange*))UITextView__setSelectedTextRange;
    type->__interface_0.__fp_markedTextRange = (::app::iOS::UIKit::UITextRange*(*)(void*))UITextView__markedTextRange;
    type->__interface_0.__fp_markedTextStyle = (::app::iOS::Foundation::NSDictionary*(*)(void*))UITextView__markedTextStyle;
    type->__interface_0.__fp_setMarkedTextStyle = (void(*)(void*, ::app::iOS::Foundation::NSDictionary*))UITextView__setMarkedTextStyle;
    type->__interface_0.__fp_beginningOfDocument = (::app::iOS::UIKit::UITextPosition*(*)(void*))UITextView__beginningOfDocument;
    type->__interface_0.__fp_endOfDocument = (::app::iOS::UIKit::UITextPosition*(*)(void*))UITextView__endOfDocument;
    type->__interface_0.__fp_inputDelegate = (::uObject*(*)(void*))UITextView__inputDelegate;
    type->__interface_0.__fp_setInputDelegate = (void(*)(void*, ::uObject*))UITextView__setInputDelegate;
    type->__interface_0.__fp_tokenizer = (::uObject*(*)(void*))UITextView__tokenizer;
    type->__interface_0.__fp_textInputView = (::app::iOS::UIKit::UIView*(*)(void*))UITextView__textInputView;
    type->__interface_0.__fp_selectionAffinity = (int(*)(void*))UITextView__selectionAffinity;
    type->__interface_0.__fp_setSelectionAffinity = (void(*)(void*, int))UITextView__setSelectionAffinity;
    type->__interface_0.__fp_hasText = (bool(*)(void*))UITextView__hasText;
    type->__interface_0.__fp_insertText = (void(*)(void*, ::uString*))UITextView__insertText;
    type->__interface_0.__fp_deleteBackward = (void(*)(void*))UITextView__deleteBackward;
    type->__interface_0.__fp_autocapitalizationType = (int(*)(void*))UITextView__autocapitalizationType;
    type->__interface_0.__fp_setAutocapitalizationType = (void(*)(void*, int))UITextView__setAutocapitalizationType;
    type->__interface_0.__fp_autocorrectionType = (int(*)(void*))UITextView__autocorrectionType;
    type->__interface_0.__fp_setAutocorrectionType = (void(*)(void*, int))UITextView__setAutocorrectionType;
    type->__interface_0.__fp_spellCheckingType = (int(*)(void*))UITextView__spellCheckingType;
    type->__interface_0.__fp_setSpellCheckingType = (void(*)(void*, int))UITextView__setSpellCheckingType;
    type->__interface_0.__fp_keyboardType = (int(*)(void*))UITextView__keyboardType;
    type->__interface_0.__fp_setKeyboardType = (void(*)(void*, int))UITextView__setKeyboardType;
    type->__interface_0.__fp_keyboardAppearance = (int(*)(void*))UITextView__keyboardAppearance;
    type->__interface_0.__fp_setKeyboardAppearance = (void(*)(void*, int))UITextView__setKeyboardAppearance;
    type->__interface_0.__fp_returnKeyType = (int(*)(void*))UITextView__returnKeyType;
    type->__interface_0.__fp_setReturnKeyType = (void(*)(void*, int))UITextView__setReturnKeyType;
    type->__interface_0.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))UITextView__enablesReturnKeyAutomatically;
    type->__interface_0.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))UITextView__setEnablesReturnKeyAutomatically;
    type->__interface_0.__fp_isSecureTextEntry = (bool(*)(void*))UITextView__isSecureTextEntry;
    type->__interface_0.__fp_setSecureTextEntry = (void(*)(void*, bool))UITextView__setSecureTextEntry;
    type->__interface_0.__fp_get_KeyboardType = (int(*)(void*))UITextView__get_KeyboardType;
    type->__interface_0.__fp_set_KeyboardType = (void(*)(void*, int))UITextView__set_KeyboardType;
    type->__interface_1.__fp_autocapitalizationType = (int(*)(void*))UITextView__autocapitalizationType;
    type->__interface_1.__fp_setAutocapitalizationType = (void(*)(void*, int))UITextView__setAutocapitalizationType;
    type->__interface_1.__fp_autocorrectionType = (int(*)(void*))UITextView__autocorrectionType;
    type->__interface_1.__fp_setAutocorrectionType = (void(*)(void*, int))UITextView__setAutocorrectionType;
    type->__interface_1.__fp_spellCheckingType = (int(*)(void*))UITextView__spellCheckingType;
    type->__interface_1.__fp_setSpellCheckingType = (void(*)(void*, int))UITextView__setSpellCheckingType;
    type->__interface_1.__fp_keyboardType = (int(*)(void*))UITextView__keyboardType;
    type->__interface_1.__fp_setKeyboardType = (void(*)(void*, int))UITextView__setKeyboardType;
    type->__interface_1.__fp_keyboardAppearance = (int(*)(void*))UITextView__keyboardAppearance;
    type->__interface_1.__fp_setKeyboardAppearance = (void(*)(void*, int))UITextView__setKeyboardAppearance;
    type->__interface_1.__fp_returnKeyType = (int(*)(void*))UITextView__returnKeyType;
    type->__interface_1.__fp_setReturnKeyType = (void(*)(void*, int))UITextView__setReturnKeyType;
    type->__interface_1.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))UITextView__enablesReturnKeyAutomatically;
    type->__interface_1.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))UITextView__setEnablesReturnKeyAutomatically;
    type->__interface_1.__fp_isSecureTextEntry = (bool(*)(void*))UITextView__isSecureTextEntry;
    type->__interface_1.__fp_setSecureTextEntry = (void(*)(void*, bool))UITextView__setSecureTextEntry;
    type->__interface_2.__fp_autocapitalizationType = (int(*)(void*))UITextView__autocapitalizationType;
    type->__interface_2.__fp_setAutocapitalizationType = (void(*)(void*, int))UITextView__setAutocapitalizationType;
    type->__interface_2.__fp_autocorrectionType = (int(*)(void*))UITextView__autocorrectionType;
    type->__interface_2.__fp_setAutocorrectionType = (void(*)(void*, int))UITextView__setAutocorrectionType;
    type->__interface_2.__fp_spellCheckingType = (int(*)(void*))UITextView__spellCheckingType;
    type->__interface_2.__fp_setSpellCheckingType = (void(*)(void*, int))UITextView__setSpellCheckingType;
    type->__interface_2.__fp_keyboardType = (int(*)(void*))UITextView__keyboardType;
    type->__interface_2.__fp_setKeyboardType = (void(*)(void*, int))UITextView__setKeyboardType;
    type->__interface_2.__fp_keyboardAppearance = (int(*)(void*))UITextView__keyboardAppearance;
    type->__interface_2.__fp_setKeyboardAppearance = (void(*)(void*, int))UITextView__setKeyboardAppearance;
    type->__interface_2.__fp_returnKeyType = (int(*)(void*))UITextView__returnKeyType;
    type->__interface_2.__fp_setReturnKeyType = (void(*)(void*, int))UITextView__setReturnKeyType;
    type->__interface_2.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))UITextView__enablesReturnKeyAutomatically;
    type->__interface_2.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))UITextView__setEnablesReturnKeyAutomatically;
    type->__interface_2.__fp_isSecureTextEntry = (bool(*)(void*))UITextView__isSecureTextEntry;
    type->__interface_2.__fp_setSecureTextEntry = (void(*)(void*, bool))UITextView__setSecureTextEntry;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUITextInput__typeof(), offsetof(UITextView__uType, __interface_0),
        ::app::iOS::UIKit::IUIKeyInput__typeof(), offsetof(UITextView__uType, __interface_1),
        ::app::iOS::UIKit::IUITextInputTraits__typeof(), offsetof(UITextView__uType, __interface_2));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UITextView___ObjInit_11(UITextView* __this)
{
    ::app::iOS::UIKit::UIScrollView___ObjInit_8(__this);
}

int UITextView__autocapitalizationType(UITextView* __this)
{
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

int UITextView__autocorrectionType(UITextView* __this)
{
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

int UITextView__baseWritingDirectionForPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::UITextWritingDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextWritingDirection, @selector(baseWritingDirectionForPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction_));
    return int(__return);
}

::app::iOS::UIKit::UITextPosition* UITextView__beginningOfDocument(UITextView* __this)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(beginningOfDocument));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::CoreGraphics::CGRect UITextView__caretRectForPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(caretRectForPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

int UITextView__characterOffsetOfPositionWithinRange(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextRange* range_)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(characterOffsetOfPosition:withinRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (int)__return;
}

::app::iOS::UIKit::UITextRange* UITextView__characterRangeAtPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(characterRangeAtPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::UIKit::UITextRange* UITextView__characterRangeByExtendingPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(characterRangeByExtendingPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction_));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextView__closestPositionToPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(closestPositionToPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextView__closestPositionToPointWithinRange(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point_, ::app::iOS::UIKit::UITextRange* range_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(closestPositionToPoint:withinRange:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

int UITextView__comparePositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, ::app::iOS::UIKit::UITextPosition* other_)
{
    ::NSComparisonResult __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSComparisonResult, @selector(comparePosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)other_));
    return int(__return);
}

::uObject* UITextView__delegate__1(UITextView* __this)
{
    id<UITextViewDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UITextViewDelegate>, @selector(delegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUITextViewDelegate__typeof());
}

void UITextView__deleteBackward(UITextView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(deleteBackward));
}

void UITextView__dictationRecognitionFailed(UITextView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(dictationRecognitionFailed));
}

void UITextView__dictationRecordingDidEnd(UITextView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(dictationRecordingDidEnd));
}

bool UITextView__enablesReturnKeyAutomatically(UITextView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

::app::iOS::UIKit::UITextPosition* UITextView__endOfDocument(UITextView* __this)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(endOfDocument));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::CoreGraphics::CGRect UITextView__firstRectForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(firstRectForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

::app::iOS::UIKit::UIFont* UITextView__font(UITextView* __this)
{
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIFont*, @selector(font));
    return (::app::iOS::UIKit::UIFont*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIFont__typeof());
}

::app::iOS::CoreGraphics::CGRect UITextView__frameForDictationResultPlaceholder(UITextView* __this, ::id placeholder_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(frameForDictationResultPlaceholder:),
        (::id)placeholder_);
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

::uObject* UITextView__get_Delegate_1(UITextView* __this)
{
    return __this->delegate__1();
}

::app::iOS::UIKit::UIFont* UITextView__get_Font(UITextView* __this)
{
    return __this->font();
}

int UITextView__get_KeyboardType(UITextView* __this)
{
    return __this->keyboardType();
}

::uString* UITextView__get_Text(UITextView* __this)
{
    return __this->text();
}

int UITextView__get_TextAlignment(UITextView* __this)
{
    return __this->textAlignment();
}

::app::iOS::UIKit::UIColor* UITextView__get_TextColor(UITextView* __this)
{
    return __this->textColor();
}

::app::iOS::UIKit::UIEdgeInsets UITextView__get_TextContainerInset(UITextView* __this)
{
    return __this->textContainerInset();
}

bool UITextView__hasText(UITextView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(hasText));
    return (bool)__return;
}

::uObject* UITextView__inputDelegate(UITextView* __this)
{
    id<UITextInputDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UITextInputDelegate>, @selector(inputDelegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUITextInputDelegate__typeof());
}

void UITextView__insertDictationResult(UITextView* __this, ::app::iOS::Foundation::NSArray* dictationResult_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(insertDictationResult:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)dictationResult_));
}

::id UITextView__insertDictationResultPlaceholder(UITextView* __this)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::id, @selector(insertDictationResultPlaceholder));
    return (::id)__return;
}

void UITextView__insertText(UITextView* __this, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(insertText:),
        uObjC::NativeString(text_));
}

void UITextView__iOS_UIKit_IUIKeyInput_deleteBackward(UITextView* __this)
{
    __this->deleteBackward();
}

bool UITextView__iOS_UIKit_IUIKeyInput_hasText(UITextView* __this)
{
    return __this->hasText();
}

void UITextView__iOS_UIKit_IUIKeyInput_insertText(UITextView* __this, ::uString* text)
{
    __this->insertText(text);
}

int UITextView__iOS_UIKit_IUITextInput_baseWritingDirectionForPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction)
{
    return __this->baseWritingDirectionForPositionInDirection(position, direction);
}

::app::iOS::CoreGraphics::CGRect UITextView__iOS_UIKit_IUITextInput_caretRectForPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position)
{
    return __this->caretRectForPosition(position);
}

int UITextView__iOS_UIKit_IUITextInput_characterOffsetOfPositionWithinRange(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->characterOffsetOfPositionWithinRange(position, range);
}

::app::iOS::UIKit::UITextRange* UITextView__iOS_UIKit_IUITextInput_characterRangeAtPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point)
{
    return __this->characterRangeAtPoint(point);
}

::app::iOS::UIKit::UITextRange* UITextView__iOS_UIKit_IUITextInput_characterRangeByExtendingPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction)
{
    return __this->characterRangeByExtendingPositionInDirection(position, direction);
}

::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_closestPositionToPoint(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point)
{
    return __this->closestPositionToPoint(point);
}

::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_closestPositionToPointWithinRange(UITextView* __this, ::app::iOS::CoreGraphics::CGPoint point, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->closestPositionToPointWithinRange(point, range);
}

int UITextView__iOS_UIKit_IUITextInput_comparePositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextPosition* other)
{
    return __this->comparePositionToPosition(position, other);
}

void UITextView__iOS_UIKit_IUITextInput_dictationRecognitionFailed(UITextView* __this)
{
    __this->dictationRecognitionFailed();
}

void UITextView__iOS_UIKit_IUITextInput_dictationRecordingDidEnd(UITextView* __this)
{
    __this->dictationRecordingDidEnd();
}

::app::iOS::CoreGraphics::CGRect UITextView__iOS_UIKit_IUITextInput_firstRectForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->firstRectForRange(range);
}

::app::iOS::CoreGraphics::CGRect UITextView__iOS_UIKit_IUITextInput_frameForDictationResultPlaceholder(UITextView* __this, ::id placeholder)
{
    return __this->frameForDictationResultPlaceholder(placeholder);
}

void UITextView__iOS_UIKit_IUITextInput_insertDictationResult(UITextView* __this, ::app::iOS::Foundation::NSArray* dictationResult)
{
    __this->insertDictationResult(dictationResult);
}

::id UITextView__iOS_UIKit_IUITextInput_insertDictationResultPlaceholder(UITextView* __this)
{
    return __this->insertDictationResultPlaceholder();
}

int UITextView__iOS_UIKit_IUITextInput_offsetFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* from, ::app::iOS::UIKit::UITextPosition* toPosition)
{
    return __this->offsetFromPositionToPosition(from, toPosition);
}

::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionFromPositionInDirectionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction, int offset)
{
    return __this->positionFromPositionInDirectionOffset(position, direction, offset);
}

::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionFromPositionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int offset)
{
    return __this->positionFromPositionOffset(position, offset);
}

::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionWithinRangeAtCharacterOffset(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, int offset)
{
    return __this->positionWithinRangeAtCharacterOffset(range, offset);
}

::app::iOS::UIKit::UITextPosition* UITextView__iOS_UIKit_IUITextInput_positionWithinRangeFarthestInDirection(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, int direction)
{
    return __this->positionWithinRangeFarthestInDirection(range, direction);
}

void UITextView__iOS_UIKit_IUITextInput_removeDictationResultPlaceholderWillInsertResult(UITextView* __this, ::id placeholder, bool willInsertResult)
{
    __this->removeDictationResultPlaceholderWillInsertResult(placeholder, willInsertResult);
}

void UITextView__iOS_UIKit_IUITextInput_replaceRangeWithText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text)
{
    __this->replaceRangeWithText(range, text);
}

::app::iOS::Foundation::NSArray* UITextView__iOS_UIKit_IUITextInput_selectionRectsForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->selectionRectsForRange(range);
}

void UITextView__iOS_UIKit_IUITextInput_setBaseWritingDirectionForRange(UITextView* __this, int writingDirection, ::app::iOS::UIKit::UITextRange* range)
{
    __this->setBaseWritingDirectionForRange(writingDirection, range);
}

void UITextView__iOS_UIKit_IUITextInput_setMarkedTextSelectedRange(UITextView* __this, ::uString* markedText, ::app::iOS::Foundation::_NSRange selectedRange)
{
    __this->setMarkedTextSelectedRange(markedText, selectedRange);
}

bool UITextView__iOS_UIKit_IUITextInput_shouldChangeTextInRangeReplacementText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text)
{
    return __this->shouldChangeTextInRangeReplacementText(range, text);
}

::uString* UITextView__iOS_UIKit_IUITextInput_textInRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range)
{
    return __this->textInRange(range);
}

::app::iOS::UIKit::UITextRange* UITextView__iOS_UIKit_IUITextInput_textRangeFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* fromPosition, ::app::iOS::UIKit::UITextPosition* toPosition)
{
    return __this->textRangeFromPositionToPosition(fromPosition, toPosition);
}

::app::iOS::Foundation::NSDictionary* UITextView__iOS_UIKit_IUITextInput_textStylingAtPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position, int direction)
{
    return __this->textStylingAtPositionInDirection(position, direction);
}

void UITextView__iOS_UIKit_IUITextInput_unmarkText(UITextView* __this)
{
    __this->unmarkText();
}

bool UITextView__isSecureTextEntry(UITextView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

int UITextView__keyboardAppearance(UITextView* __this)
{
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

int UITextView__keyboardType(UITextView* __this)
{
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

::app::iOS::UIKit::UITextRange* UITextView__markedTextRange(UITextView* __this)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(markedTextRange));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::Foundation::NSDictionary* UITextView__markedTextStyle(UITextView* __this)
{
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSDictionary*, @selector(markedTextStyle));
    return (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSDictionary__typeof());
}

UITextView* UITextView__New_11(::uStatic* __this)
{
    UITextView* inst = (UITextView*)::uAllocObject(sizeof(UITextView), UITextView__typeof());
    inst->_ObjInit_11();
    return inst;
}

int UITextView__offsetFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* from_, ::app::iOS::UIKit::UITextPosition* toPosition_)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(offsetFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)from_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (int)__return;
}

::app::iOS::UIKit::UITextPosition* UITextView__positionFromPositionInDirectionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionFromPosition:inDirection:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextView__positionFromPositionOffset(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionFromPosition:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextView__positionWithinRangeAtCharacterOffset(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, int offset_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionWithinRange:atCharacterOffset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        (long)offset_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextPosition* UITextView__positionWithinRangeFarthestInDirection(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, int direction_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionWithinRange:farthestInDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        ::UITextLayoutDirection(direction_));
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

void UITextView__removeDictationResultPlaceholderWillInsertResult(UITextView* __this, ::id placeholder_, bool willInsertResult_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeDictationResultPlaceholder:willInsertResult:),
        (::id)placeholder_,
        (BOOL)willInsertResult_);
}

void UITextView__replaceRangeWithText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(replaceRange:withText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
}

int UITextView__returnKeyType(UITextView* __this)
{
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

::app::iOS::UIKit::UITextRange* UITextView__selectedTextRange(UITextView* __this)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(selectedTextRange));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

int UITextView__selectionAffinity(UITextView* __this)
{
    ::UITextStorageDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextStorageDirection, @selector(selectionAffinity));
    return int(__return);
}

::app::iOS::Foundation::NSArray* UITextView__selectionRectsForRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(selectionRectsForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

void UITextView__set_Delegate_1(UITextView* __this, ::uObject* value)
{
    __this->setDelegate_1(value);
}

void UITextView__set_Font(UITextView* __this, ::app::iOS::UIKit::UIFont* value)
{
    __this->setFont(value);
}

void UITextView__set_KeyboardType(UITextView* __this, int value)
{
    __this->setKeyboardType(value);
}

void UITextView__set_Text(UITextView* __this, ::uString* value)
{
    __this->setText(value);
}

void UITextView__set_TextAlignment(UITextView* __this, int value)
{
    __this->setTextAlignment(value);
}

void UITextView__set_TextColor(UITextView* __this, ::app::iOS::UIKit::UIColor* value)
{
    __this->setTextColor(value);
}

void UITextView__set_TextContainerInset(UITextView* __this, ::app::iOS::UIKit::UIEdgeInsets value)
{
    __this->setTextContainerInset(value);
}

void UITextView__setAutocapitalizationType(UITextView* __this, int autocapitalizationType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType_));
}

void UITextView__setAutocorrectionType(UITextView* __this, int autocorrectionType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType_));
}

void UITextView__setBaseWritingDirectionForRange(UITextView* __this, int writingDirection_, ::app::iOS::UIKit::UITextRange* range_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setBaseWritingDirection:forRange:),
        ::UITextWritingDirection(writingDirection_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
}

void UITextView__setDelegate_1(UITextView* __this, ::uObject* delegate__)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)delegate__, ::app::iOS::UIKit::IUITextViewDelegate__typeof()));
}

void UITextView__setEnablesReturnKeyAutomatically(UITextView* __this, bool enablesReturnKeyAutomatically_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically_);
}

void UITextView__setFont(UITextView* __this, ::app::iOS::UIKit::UIFont* font_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setFont:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)font_));
}

void UITextView__setInputDelegate(UITextView* __this, ::uObject* inputDelegate_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setInputDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)inputDelegate_, ::app::iOS::UIKit::IUITextInputDelegate__typeof()));
}

void UITextView__setKeyboardAppearance(UITextView* __this, int keyboardAppearance_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance_));
}

void UITextView__setKeyboardType(UITextView* __this, int keyboardType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType_));
}

void UITextView__setMarkedTextSelectedRange(UITextView* __this, ::uString* markedText_, ::app::iOS::Foundation::_NSRange selectedRange_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMarkedText:selectedRange:),
        uObjC::NativeString(markedText_),
        uObjC::Struct::FromUno__NSRange(selectedRange_, ::_NSRange()));
}

void UITextView__setMarkedTextStyle(UITextView* __this, ::app::iOS::Foundation::NSDictionary* markedTextStyle_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMarkedTextStyle:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)markedTextStyle_));
}

void UITextView__setReturnKeyType(UITextView* __this, int returnKeyType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType_));
}

void UITextView__setSecureTextEntry(UITextView* __this, bool secureTextEntry_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry_);
}

void UITextView__setSelectedTextRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* selectedTextRange_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSelectedTextRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)selectedTextRange_));
}

void UITextView__setSelectionAffinity(UITextView* __this, int selectionAffinity_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSelectionAffinity:),
        ::UITextStorageDirection(selectionAffinity_));
}

void UITextView__setSpellCheckingType(UITextView* __this, int spellCheckingType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType_));
}

void UITextView__setText(UITextView* __this, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setText:),
        uObjC::NativeString(text_));
}

void UITextView__setTextAlignment(UITextView* __this, int textAlignment_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextAlignment:),
        ::NSTextAlignment(textAlignment_));
}

void UITextView__setTextColor(UITextView* __this, ::app::iOS::UIKit::UIColor* textColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textColor_));
}

void UITextView__setTextContainerInset(UITextView* __this, ::app::iOS::UIKit::UIEdgeInsets textContainerInset_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextContainerInset:),
        uObjC::Struct::FromUno_UIEdgeInsets(textContainerInset_, ::UIEdgeInsets()));
}

bool UITextView__shouldChangeTextInRangeReplacementText(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_, ::uString* text_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(shouldChangeTextInRange:replacementText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
    return (bool)__return;
}

int UITextView__spellCheckingType(UITextView* __this)
{
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}

::uString* UITextView__text(UITextView* __this)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(text));
    return uObjC::UnoString(__return);
}

int UITextView__textAlignment(UITextView* __this)
{
    ::NSTextAlignment __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSTextAlignment, @selector(textAlignment));
    return int(__return);
}

::app::iOS::UIKit::UIColor* UITextView__textColor(UITextView* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(textColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

::app::iOS::UIKit::UIEdgeInsets UITextView__textContainerInset(UITextView* __this)
{
    ::UIEdgeInsets __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIEdgeInsets, @selector(textContainerInset));
    return uObjC::Struct::ToUno_UIEdgeInsets(__return, ::app::iOS::UIKit::UIEdgeInsets());
}

::app::iOS::UIKit::UIView* UITextView__textInputView(UITextView* __this)
{
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIView*, @selector(textInputView));
    return (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIView__typeof());
}

::uString* UITextView__textInRange(UITextView* __this, ::app::iOS::UIKit::UITextRange* range_)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(textInRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::UnoString(__return);
}

::app::iOS::UIKit::UITextRange* UITextView__textRangeFromPositionToPosition(UITextView* __this, ::app::iOS::UIKit::UITextPosition* fromPosition_, ::app::iOS::UIKit::UITextPosition* toPosition_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(textRangeFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)fromPosition_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

::app::iOS::Foundation::NSDictionary* UITextView__textStylingAtPositionInDirection(UITextView* __this, ::app::iOS::UIKit::UITextPosition* position_, int direction_)
{
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSDictionary*, @selector(textStylingAtPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction_));
    return (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSDictionary__typeof());
}

::uObject* UITextView__tokenizer(UITextView* __this)
{
    id<UITextInputTokenizer> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UITextInputTokenizer>, @selector(tokenizer));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUITextInputTokenizer__typeof());
}

void UITextView__unmarkText(UITextView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(unmarkText));
}

}}}
