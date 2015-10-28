// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputTraits
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInputTraits__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.Interop.IUITextInputTraits.h>
#include <app/iOS.UIKit.UIKeyboardAppearance.h>
#include <app/iOS.UIKit.UIKeyboardType.h>
#include <app/iOS.UIKit.UIReturnKeyType.h>
#include <app/iOS.UIKit.UITextAutocapitalizationType.h>
#include <app/iOS.UIKit.UITextAutocorrectionType.h>
#include <app/iOS.UIKit.UITextSpellCheckingType.h>
#include <app/Uno.Bool.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

IUITextInputTraits__uType* IUITextInputTraits__typeof()
{
    static ::uStaticStrong<IUITextInputTraits__uType*> type;
    if (type != NULL) return type;

    type = (IUITextInputTraits__uType*)::uAllocClassType(sizeof(IUITextInputTraits__uType), "iOS.UIKit.Interop.IUITextInputTraits", false, 1, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_autocapitalizationType = (int(*)(void*))IUITextInputTraits__autocapitalizationType;
    type->__interface_0.__fp_setAutocapitalizationType = (void(*)(void*, int))IUITextInputTraits__setAutocapitalizationType;
    type->__interface_0.__fp_autocorrectionType = (int(*)(void*))IUITextInputTraits__autocorrectionType;
    type->__interface_0.__fp_setAutocorrectionType = (void(*)(void*, int))IUITextInputTraits__setAutocorrectionType;
    type->__interface_0.__fp_spellCheckingType = (int(*)(void*))IUITextInputTraits__spellCheckingType;
    type->__interface_0.__fp_setSpellCheckingType = (void(*)(void*, int))IUITextInputTraits__setSpellCheckingType;
    type->__interface_0.__fp_keyboardType = (int(*)(void*))IUITextInputTraits__keyboardType;
    type->__interface_0.__fp_setKeyboardType = (void(*)(void*, int))IUITextInputTraits__setKeyboardType;
    type->__interface_0.__fp_keyboardAppearance = (int(*)(void*))IUITextInputTraits__keyboardAppearance;
    type->__interface_0.__fp_setKeyboardAppearance = (void(*)(void*, int))IUITextInputTraits__setKeyboardAppearance;
    type->__interface_0.__fp_returnKeyType = (int(*)(void*))IUITextInputTraits__returnKeyType;
    type->__interface_0.__fp_setReturnKeyType = (void(*)(void*, int))IUITextInputTraits__setReturnKeyType;
    type->__interface_0.__fp_enablesReturnKeyAutomatically = (bool(*)(void*))IUITextInputTraits__enablesReturnKeyAutomatically;
    type->__interface_0.__fp_setEnablesReturnKeyAutomatically = (void(*)(void*, bool))IUITextInputTraits__setEnablesReturnKeyAutomatically;
    type->__interface_0.__fp_isSecureTextEntry = (bool(*)(void*))IUITextInputTraits__isSecureTextEntry;
    type->__interface_0.__fp_setSecureTextEntry = (void(*)(void*, bool))IUITextInputTraits__setSecureTextEntry;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUITextInputTraits__typeof(), offsetof(IUITextInputTraits__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

int IUITextInputTraits__autocapitalizationType(IUITextInputTraits* __this)
{
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

int IUITextInputTraits__autocorrectionType(IUITextInputTraits* __this)
{
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

bool IUITextInputTraits__enablesReturnKeyAutomatically(IUITextInputTraits* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

bool IUITextInputTraits__isSecureTextEntry(IUITextInputTraits* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

int IUITextInputTraits__keyboardAppearance(IUITextInputTraits* __this)
{
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

int IUITextInputTraits__keyboardType(IUITextInputTraits* __this)
{
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

int IUITextInputTraits__returnKeyType(IUITextInputTraits* __this)
{
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

void IUITextInputTraits__setAutocapitalizationType(IUITextInputTraits* __this, int autocapitalizationType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType_));
}

void IUITextInputTraits__setAutocorrectionType(IUITextInputTraits* __this, int autocorrectionType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType_));
}

void IUITextInputTraits__setEnablesReturnKeyAutomatically(IUITextInputTraits* __this, bool enablesReturnKeyAutomatically_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically_);
}

void IUITextInputTraits__setKeyboardAppearance(IUITextInputTraits* __this, int keyboardAppearance_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance_));
}

void IUITextInputTraits__setKeyboardType(IUITextInputTraits* __this, int keyboardType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType_));
}

void IUITextInputTraits__setReturnKeyType(IUITextInputTraits* __this, int returnKeyType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType_));
}

void IUITextInputTraits__setSecureTextEntry(IUITextInputTraits* __this, bool secureTextEntry_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry_);
}

void IUITextInputTraits__setSpellCheckingType(IUITextInputTraits* __this, int spellCheckingType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType_));
}

int IUITextInputTraits__spellCheckingType(IUITextInputTraits* __this)
{
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}

}}}}
