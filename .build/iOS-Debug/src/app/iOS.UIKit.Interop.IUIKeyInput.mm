// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIKeyInput
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIKeyInput__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.Interop.IUIKeyInput.h>
#include <app/iOS.UIKit.UIKeyboardAppearance.h>
#include <app/iOS.UIKit.UIKeyboardType.h>
#include <app/iOS.UIKit.UIReturnKeyType.h>
#include <app/iOS.UIKit.UITextAutocapitalizationType.h>
#include <app/iOS.UIKit.UITextAutocorrectionType.h>
#include <app/iOS.UIKit.UITextSpellCheckingType.h>
#include <app/Uno.Bool.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

IUIKeyInput__uType* IUIKeyInput__typeof()
{
    static ::uStaticStrong<IUIKeyInput__uType*> type;
    if (type != NULL) return type;

    type = (IUIKeyInput__uType*)::uAllocClassType(sizeof(IUIKeyInput__uType), "iOS.UIKit.Interop.IUIKeyInput", false, 2, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_hasText = (bool(*)(void*))IUIKeyInput__hasText;
    type->__interface_0.__fp_insertText = (void(*)(void*, ::uString*))IUIKeyInput__insertText;
    type->__interface_0.__fp_deleteBackward = (void(*)(void*))IUIKeyInput__deleteBackward;
    type->__interface_0.__fp_autocapitalizationType = (int(*)(void*))IUIKeyInput__autocapitalizationType;
    type->__interface_0.__fp_setAutocapitalizationType = (void(*)(void*, int))IUIKeyInput__setAutocapitalizationType;
    type->__interface_0.__fp_autocorrectionType = (int(*)(void*))IUIKeyInput__autocorrectionType;
    type->__interface_0.__fp_setAutocorrectionType = (void(*)(void*, int))IUIKeyInput__setAutocorrectionType;
    type->__interface_0.__fp_spellCheckingType = (int(*)(void*))IUIKeyInput__spellCheckingType;
    type->__interface_0.__fp_setSpellCheckingType = (void(*)(void*, int))IUIKeyInput__setSpellCheckingType;
    type->__interface_0.__fp_keyboardType = (int(*)(void*))IUIKeyInput__keyboardType;
    type->__interface_0.__fp_setKeyboardType = (void(*)(void*, int))IUIKeyInput__setKeyboardType;
    type->__interface_0.__fp_keyboardAppearance = (int(*)(void*))IUIKeyInput__keyboardAppearance;
    type->__interface_0.__fp_setKeyboardAppearance = (void(*)(void*, int))IUIKeyInput__setKeyboardAppearance;
    type->__interface_0.__fp_returnKeyType = (int(*)(void*))IUIKeyInput__returnKeyType;
    type->__interface_0.__fp_setReturnKeyType = (void(*)(void*, int))IUIKeyInput__setReturnKeyType;
    type->__interface_0.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))IUIKeyInput__enablesReturnKeyAutomatically;
    type->__interface_0.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))IUIKeyInput__setEnablesReturnKeyAutomatically;
    type->__interface_0.__fp_isSecureTextEntry = (bool(*)(void*))IUIKeyInput__isSecureTextEntry;
    type->__interface_0.__fp_setSecureTextEntry = (void(*)(void*, bool))IUIKeyInput__setSecureTextEntry;
    type->__interface_1.__fp_autocapitalizationType = (int(*)(void*))IUIKeyInput__autocapitalizationType;
    type->__interface_1.__fp_setAutocapitalizationType = (void(*)(void*, int))IUIKeyInput__setAutocapitalizationType;
    type->__interface_1.__fp_autocorrectionType = (int(*)(void*))IUIKeyInput__autocorrectionType;
    type->__interface_1.__fp_setAutocorrectionType = (void(*)(void*, int))IUIKeyInput__setAutocorrectionType;
    type->__interface_1.__fp_spellCheckingType = (int(*)(void*))IUIKeyInput__spellCheckingType;
    type->__interface_1.__fp_setSpellCheckingType = (void(*)(void*, int))IUIKeyInput__setSpellCheckingType;
    type->__interface_1.__fp_keyboardType = (int(*)(void*))IUIKeyInput__keyboardType;
    type->__interface_1.__fp_setKeyboardType = (void(*)(void*, int))IUIKeyInput__setKeyboardType;
    type->__interface_1.__fp_keyboardAppearance = (int(*)(void*))IUIKeyInput__keyboardAppearance;
    type->__interface_1.__fp_setKeyboardAppearance = (void(*)(void*, int))IUIKeyInput__setKeyboardAppearance;
    type->__interface_1.__fp_returnKeyType = (int(*)(void*))IUIKeyInput__returnKeyType;
    type->__interface_1.__fp_setReturnKeyType = (void(*)(void*, int))IUIKeyInput__setReturnKeyType;
    type->__interface_1.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))IUIKeyInput__enablesReturnKeyAutomatically;
    type->__interface_1.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))IUIKeyInput__setEnablesReturnKeyAutomatically;
    type->__interface_1.__fp_isSecureTextEntry = (bool(*)(void*))IUIKeyInput__isSecureTextEntry;
    type->__interface_1.__fp_setSecureTextEntry = (void(*)(void*, bool))IUIKeyInput__setSecureTextEntry;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUIKeyInput__typeof(), offsetof(IUIKeyInput__uType, __interface_0),
        ::app::iOS::UIKit::IUITextInputTraits__typeof(), offsetof(IUIKeyInput__uType, __interface_1));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

int IUIKeyInput__autocapitalizationType(IUIKeyInput* __this)
{
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

int IUIKeyInput__autocorrectionType(IUIKeyInput* __this)
{
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

void IUIKeyInput__deleteBackward(IUIKeyInput* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(deleteBackward));
}

bool IUIKeyInput__enablesReturnKeyAutomatically(IUIKeyInput* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

bool IUIKeyInput__hasText(IUIKeyInput* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(hasText));
    return (bool)__return;
}

void IUIKeyInput__insertText(IUIKeyInput* __this, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(insertText:),
        uObjC::NativeString(text_));
}

bool IUIKeyInput__isSecureTextEntry(IUIKeyInput* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

int IUIKeyInput__keyboardAppearance(IUIKeyInput* __this)
{
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

int IUIKeyInput__keyboardType(IUIKeyInput* __this)
{
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

int IUIKeyInput__returnKeyType(IUIKeyInput* __this)
{
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

void IUIKeyInput__setAutocapitalizationType(IUIKeyInput* __this, int autocapitalizationType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType_));
}

void IUIKeyInput__setAutocorrectionType(IUIKeyInput* __this, int autocorrectionType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType_));
}

void IUIKeyInput__setEnablesReturnKeyAutomatically(IUIKeyInput* __this, bool enablesReturnKeyAutomatically_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically_);
}

void IUIKeyInput__setKeyboardAppearance(IUIKeyInput* __this, int keyboardAppearance_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance_));
}

void IUIKeyInput__setKeyboardType(IUIKeyInput* __this, int keyboardType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType_));
}

void IUIKeyInput__setReturnKeyType(IUIKeyInput* __this, int returnKeyType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType_));
}

void IUIKeyInput__setSecureTextEntry(IUIKeyInput* __this, bool secureTextEntry_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry_);
}

void IUIKeyInput__setSpellCheckingType(IUIKeyInput* __this, int spellCheckingType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType_));
}

int IUIKeyInput__spellCheckingType(IUIKeyInput* __this)
{
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}

}}}}
