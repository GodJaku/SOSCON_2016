// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_I_U_I_TEXT_INPUT_H__
#define __APP_I_O_S_U_I_KIT_I_U_I_TEXT_INPUT_H__

#include <app/iOS.UIKit.IUIKeyInput.h>
#include <app/iOS.UIKit.IUITextInputTraits.h>
#include <app/Uno.Object.h>
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

::uInterfaceType* IUITextInput__typeof();

struct IUITextInput
{
    int(*__fp_autocapitalizationType)(void*);
    int(*__fp_autocorrectionType)(void*);
    int(*__fp_baseWritingDirectionForPositionInDirection)(void*, ::app::iOS::UIKit::UITextPosition*, int);
    ::app::iOS::UIKit::UITextPosition*(*__fp_beginningOfDocument)(void*);
    ::app::iOS::CoreGraphics::CGRect(*__fp_caretRectForPosition)(void*, ::app::iOS::UIKit::UITextPosition*);
    int(*__fp_characterOffsetOfPositionWithinRange)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextRange*);
    ::app::iOS::UIKit::UITextRange*(*__fp_characterRangeAtPoint)(void*, ::app::iOS::CoreGraphics::CGPoint);
    ::app::iOS::UIKit::UITextRange*(*__fp_characterRangeByExtendingPositionInDirection)(void*, ::app::iOS::UIKit::UITextPosition*, int);
    ::app::iOS::UIKit::UITextPosition*(*__fp_closestPositionToPoint)(void*, ::app::iOS::CoreGraphics::CGPoint);
    ::app::iOS::UIKit::UITextPosition*(*__fp_closestPositionToPointWithinRange)(void*, ::app::iOS::CoreGraphics::CGPoint, ::app::iOS::UIKit::UITextRange*);
    int(*__fp_comparePositionToPosition)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*);
    void(*__fp_deleteBackward)(void*);
    void(*__fp_dictationRecognitionFailed)(void*);
    void(*__fp_dictationRecordingDidEnd)(void*);
    bool(*__fp_enablesReturnKeyAutomatically)(void*);
    ::app::iOS::UIKit::UITextPosition*(*__fp_endOfDocument)(void*);
    ::app::iOS::CoreGraphics::CGRect(*__fp_firstRectForRange)(void*, ::app::iOS::UIKit::UITextRange*);
    ::app::iOS::CoreGraphics::CGRect(*__fp_frameForDictationResultPlaceholder)(void*, ::id);
    int(*__fp_get_KeyboardType)(void*);
    bool(*__fp_hasText)(void*);
    ::uObject*(*__fp_inputDelegate)(void*);
    void(*__fp_insertDictationResult)(void*, ::app::iOS::Foundation::NSArray*);
    ::id(*__fp_insertDictationResultPlaceholder)(void*);
    void(*__fp_insertText)(void*, ::uString*);
    bool(*__fp_isSecureTextEntry)(void*);
    int(*__fp_keyboardAppearance)(void*);
    int(*__fp_keyboardType)(void*);
    ::app::iOS::UIKit::UITextRange*(*__fp_markedTextRange)(void*);
    ::app::iOS::Foundation::NSDictionary*(*__fp_markedTextStyle)(void*);
    int(*__fp_offsetFromPositionToPosition)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*);
    ::app::iOS::UIKit::UITextPosition*(*__fp_positionFromPositionInDirectionOffset)(void*, ::app::iOS::UIKit::UITextPosition*, int, int);
    ::app::iOS::UIKit::UITextPosition*(*__fp_positionFromPositionOffset)(void*, ::app::iOS::UIKit::UITextPosition*, int);
    ::app::iOS::UIKit::UITextPosition*(*__fp_positionWithinRangeAtCharacterOffset)(void*, ::app::iOS::UIKit::UITextRange*, int);
    ::app::iOS::UIKit::UITextPosition*(*__fp_positionWithinRangeFarthestInDirection)(void*, ::app::iOS::UIKit::UITextRange*, int);
    void(*__fp_removeDictationResultPlaceholderWillInsertResult)(void*, ::id, bool);
    void(*__fp_replaceRangeWithText)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*);
    int(*__fp_returnKeyType)(void*);
    ::app::iOS::UIKit::UITextRange*(*__fp_selectedTextRange)(void*);
    int(*__fp_selectionAffinity)(void*);
    ::app::iOS::Foundation::NSArray*(*__fp_selectionRectsForRange)(void*, ::app::iOS::UIKit::UITextRange*);
    void(*__fp_set_KeyboardType)(void*, int);
    void(*__fp_setAutocapitalizationType)(void*, int);
    void(*__fp_setAutocorrectionType)(void*, int);
    void(*__fp_setBaseWritingDirectionForRange)(void*, int, ::app::iOS::UIKit::UITextRange*);
    void(*__fp_setEnablesReturnKeyAutomatically)(void*, bool);
    void(*__fp_setInputDelegate)(void*, ::uObject*);
    void(*__fp_setKeyboardAppearance)(void*, int);
    void(*__fp_setKeyboardType)(void*, int);
    void(*__fp_setMarkedTextSelectedRange)(void*, ::uString*, ::app::iOS::Foundation::_NSRange);
    void(*__fp_setMarkedTextStyle)(void*, ::app::iOS::Foundation::NSDictionary*);
    void(*__fp_setReturnKeyType)(void*, int);
    void(*__fp_setSecureTextEntry)(void*, bool);
    void(*__fp_setSelectedTextRange)(void*, ::app::iOS::UIKit::UITextRange*);
    void(*__fp_setSelectionAffinity)(void*, int);
    void(*__fp_setSpellCheckingType)(void*, int);
    bool(*__fp_shouldChangeTextInRangeReplacementText)(void*, ::app::iOS::UIKit::UITextRange*, ::uString*);
    int(*__fp_spellCheckingType)(void*);
    ::app::iOS::UIKit::UIView*(*__fp_textInputView)(void*);
    ::uString*(*__fp_textInRange)(void*, ::app::iOS::UIKit::UITextRange*);
    ::app::iOS::UIKit::UITextRange*(*__fp_textRangeFromPositionToPosition)(void*, ::app::iOS::UIKit::UITextPosition*, ::app::iOS::UIKit::UITextPosition*);
    ::app::iOS::Foundation::NSDictionary*(*__fp_textStylingAtPositionInDirection)(void*, ::app::iOS::UIKit::UITextPosition*, int);
    ::uObject*(*__fp_tokenizer)(void*);
    void(*__fp_unmarkText)(void*);

    static int autocapitalizationType(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_autocapitalizationType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int autocorrectionType(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_autocorrectionType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int baseWritingDirectionForPositionInDirection(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int direction) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_baseWritingDirectionForPositionInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, direction); }
    static ::app::iOS::UIKit::UITextPosition* beginningOfDocument(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_beginningOfDocument((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::CoreGraphics::CGRect caretRectForPosition(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position);
    static int characterOffsetOfPositionWithinRange(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextRange* range) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_characterOffsetOfPositionWithinRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, range); }
    static ::app::iOS::UIKit::UITextRange* characterRangeAtPoint(::uObject* __this, ::app::iOS::CoreGraphics::CGPoint point);
    static ::app::iOS::UIKit::UITextRange* characterRangeByExtendingPositionInDirection(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int direction) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_characterRangeByExtendingPositionInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, direction); }
    static ::app::iOS::UIKit::UITextPosition* closestPositionToPoint(::uObject* __this, ::app::iOS::CoreGraphics::CGPoint point);
    static ::app::iOS::UIKit::UITextPosition* closestPositionToPointWithinRange(::uObject* __this, ::app::iOS::CoreGraphics::CGPoint point, ::app::iOS::UIKit::UITextRange* range);
    static int comparePositionToPosition(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, ::app::iOS::UIKit::UITextPosition* other) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_comparePositionToPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, other); }
    static void deleteBackward(::uObject* __this) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_deleteBackward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void dictationRecognitionFailed(::uObject* __this) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_dictationRecognitionFailed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void dictationRecordingDidEnd(::uObject* __this) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_dictationRecordingDidEnd((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool enablesReturnKeyAutomatically(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_enablesReturnKeyAutomatically((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::UIKit::UITextPosition* endOfDocument(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_endOfDocument((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::CoreGraphics::CGRect firstRectForRange(::uObject* __this, ::app::iOS::UIKit::UITextRange* range);
    static ::app::iOS::CoreGraphics::CGRect frameForDictationResultPlaceholder(::uObject* __this, ::id placeholder);
    static int KeyboardType(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_get_KeyboardType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool hasText(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_hasText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* inputDelegate(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_inputDelegate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void insertDictationResult(::uObject* __this, ::app::iOS::Foundation::NSArray* dictationResult) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_insertDictationResult((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), dictationResult); }
    static ::id insertDictationResultPlaceholder(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_insertDictationResultPlaceholder((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void insertText(::uObject* __this, ::uString* text) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_insertText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), text); }
    static bool isSecureTextEntry(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_isSecureTextEntry((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int keyboardAppearance(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_keyboardAppearance((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int keyboardType(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_keyboardType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::UIKit::UITextRange* markedTextRange(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_markedTextRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::Foundation::NSDictionary* markedTextStyle(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_markedTextStyle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int offsetFromPositionToPosition(::uObject* __this, ::app::iOS::UIKit::UITextPosition* from, ::app::iOS::UIKit::UITextPosition* toPosition) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_offsetFromPositionToPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), from, toPosition); }
    static ::app::iOS::UIKit::UITextPosition* positionFromPositionInDirectionOffset(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int direction, int offset) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_positionFromPositionInDirectionOffset((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, direction, offset); }
    static ::app::iOS::UIKit::UITextPosition* positionFromPositionOffset(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int offset) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_positionFromPositionOffset((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, offset); }
    static ::app::iOS::UIKit::UITextPosition* positionWithinRangeAtCharacterOffset(::uObject* __this, ::app::iOS::UIKit::UITextRange* range, int offset) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_positionWithinRangeAtCharacterOffset((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), range, offset); }
    static ::app::iOS::UIKit::UITextPosition* positionWithinRangeFarthestInDirection(::uObject* __this, ::app::iOS::UIKit::UITextRange* range, int direction) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_positionWithinRangeFarthestInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), range, direction); }
    static void removeDictationResultPlaceholderWillInsertResult(::uObject* __this, ::id placeholder, bool willInsertResult) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_removeDictationResultPlaceholderWillInsertResult((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), placeholder, willInsertResult); }
    static void replaceRangeWithText(::uObject* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_replaceRangeWithText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), range, text); }
    static int returnKeyType(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_returnKeyType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::UIKit::UITextRange* selectedTextRange(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_selectedTextRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int selectionAffinity(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_selectionAffinity((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::Foundation::NSArray* selectionRectsForRange(::uObject* __this, ::app::iOS::UIKit::UITextRange* range) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_selectionRectsForRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), range); }
    static void KeyboardType(::uObject* __this, int value) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_set_KeyboardType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void setAutocapitalizationType(::uObject* __this, int autocapitalizationType) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setAutocapitalizationType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), autocapitalizationType); }
    static void setAutocorrectionType(::uObject* __this, int autocorrectionType) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setAutocorrectionType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), autocorrectionType); }
    static void setBaseWritingDirectionForRange(::uObject* __this, int writingDirection, ::app::iOS::UIKit::UITextRange* range) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setBaseWritingDirectionForRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), writingDirection, range); }
    static void setEnablesReturnKeyAutomatically(::uObject* __this, bool enablesReturnKeyAutomatically) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setEnablesReturnKeyAutomatically((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), enablesReturnKeyAutomatically); }
    static void setInputDelegate(::uObject* __this, ::uObject* inputDelegate) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setInputDelegate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), inputDelegate); }
    static void setKeyboardAppearance(::uObject* __this, int keyboardAppearance) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setKeyboardAppearance((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), keyboardAppearance); }
    static void setKeyboardType(::uObject* __this, int keyboardType) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setKeyboardType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), keyboardType); }
    static void setMarkedTextSelectedRange(::uObject* __this, ::uString* markedText, ::app::iOS::Foundation::_NSRange selectedRange);
    static void setMarkedTextStyle(::uObject* __this, ::app::iOS::Foundation::NSDictionary* markedTextStyle) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setMarkedTextStyle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), markedTextStyle); }
    static void setReturnKeyType(::uObject* __this, int returnKeyType) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setReturnKeyType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), returnKeyType); }
    static void setSecureTextEntry(::uObject* __this, bool secureTextEntry) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setSecureTextEntry((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), secureTextEntry); }
    static void setSelectedTextRange(::uObject* __this, ::app::iOS::UIKit::UITextRange* selectedTextRange) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setSelectedTextRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), selectedTextRange); }
    static void setSelectionAffinity(::uObject* __this, int selectionAffinity) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setSelectionAffinity((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), selectionAffinity); }
    static void setSpellCheckingType(::uObject* __this, int spellCheckingType) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setSpellCheckingType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), spellCheckingType); }
    static bool shouldChangeTextInRangeReplacementText(::uObject* __this, ::app::iOS::UIKit::UITextRange* range, ::uString* text) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_shouldChangeTextInRangeReplacementText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), range, text); }
    static int spellCheckingType(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_spellCheckingType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::UIKit::UIView* textInputView(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_textInputView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uString* textInRange(::uObject* __this, ::app::iOS::UIKit::UITextRange* range) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_textInRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), range); }
    static ::app::iOS::UIKit::UITextRange* textRangeFromPositionToPosition(::uObject* __this, ::app::iOS::UIKit::UITextPosition* fromPosition, ::app::iOS::UIKit::UITextPosition* toPosition) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_textRangeFromPositionToPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), fromPosition, toPosition); }
    static ::app::iOS::Foundation::NSDictionary* textStylingAtPositionInDirection(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int direction) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_textStylingAtPositionInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, direction); }
    static ::uObject* tokenizer(::uObject* __this) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_tokenizer((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void unmarkText(::uObject* __this) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_unmarkText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.Foundation._NSRange.h>

namespace app {
namespace iOS {
namespace UIKit {

inline ::app::iOS::CoreGraphics::CGRect IUITextInput::caretRectForPosition(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_caretRectForPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position); }
inline ::app::iOS::UIKit::UITextRange* IUITextInput::characterRangeAtPoint(::uObject* __this, ::app::iOS::CoreGraphics::CGPoint point) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_characterRangeAtPoint((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), point); }
inline ::app::iOS::UIKit::UITextPosition* IUITextInput::closestPositionToPoint(::uObject* __this, ::app::iOS::CoreGraphics::CGPoint point) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_closestPositionToPoint((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), point); }
inline ::app::iOS::UIKit::UITextPosition* IUITextInput::closestPositionToPointWithinRange(::uObject* __this, ::app::iOS::CoreGraphics::CGPoint point, ::app::iOS::UIKit::UITextRange* range) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_closestPositionToPointWithinRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), point, range); }
inline ::app::iOS::CoreGraphics::CGRect IUITextInput::firstRectForRange(::uObject* __this, ::app::iOS::UIKit::UITextRange* range) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_firstRectForRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), range); }
inline ::app::iOS::CoreGraphics::CGRect IUITextInput::frameForDictationResultPlaceholder(::uObject* __this, ::id placeholder) { return ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_frameForDictationResultPlaceholder((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), placeholder); }
inline void IUITextInput::setMarkedTextSelectedRange(::uObject* __this, ::uString* markedText, ::app::iOS::Foundation::_NSRange selectedRange) { ((IUITextInput*)uGetInterfacePtr(__this, IUITextInput__typeof()))->__fp_setMarkedTextSelectedRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), markedText, selectedRange); }

}}}


#endif
