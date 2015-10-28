// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_I_U_I_KEY_INPUT_H__
#define __APP_I_O_S_U_I_KIT_I_U_I_KEY_INPUT_H__

#include <app/iOS.UIKit.IUITextInputTraits.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUIKeyInput__typeof();

struct IUIKeyInput
{
    int(*__fp_autocapitalizationType)(void*);
    int(*__fp_autocorrectionType)(void*);
    void(*__fp_deleteBackward)(void*);
    bool(*__fp_enablesReturnKeyAutomatically)(void*);
    bool(*__fp_hasText)(void*);
    void(*__fp_insertText)(void*, ::uString*);
    bool(*__fp_isSecureTextEntry)(void*);
    int(*__fp_keyboardAppearance)(void*);
    int(*__fp_keyboardType)(void*);
    int(*__fp_returnKeyType)(void*);
    void(*__fp_setAutocapitalizationType)(void*, int);
    void(*__fp_setAutocorrectionType)(void*, int);
    void(*__fp_setEnablesReturnKeyAutomatically)(void*, bool);
    void(*__fp_setKeyboardAppearance)(void*, int);
    void(*__fp_setKeyboardType)(void*, int);
    void(*__fp_setReturnKeyType)(void*, int);
    void(*__fp_setSecureTextEntry)(void*, bool);
    void(*__fp_setSpellCheckingType)(void*, int);
    int(*__fp_spellCheckingType)(void*);

    static int autocapitalizationType(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_autocapitalizationType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int autocorrectionType(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_autocorrectionType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void deleteBackward(::uObject* __this) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_deleteBackward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool enablesReturnKeyAutomatically(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_enablesReturnKeyAutomatically((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool hasText(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_hasText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void insertText(::uObject* __this, ::uString* text) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_insertText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), text); }
    static bool isSecureTextEntry(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_isSecureTextEntry((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int keyboardAppearance(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_keyboardAppearance((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int keyboardType(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_keyboardType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int returnKeyType(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_returnKeyType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void setAutocapitalizationType(::uObject* __this, int autocapitalizationType) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setAutocapitalizationType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), autocapitalizationType); }
    static void setAutocorrectionType(::uObject* __this, int autocorrectionType) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setAutocorrectionType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), autocorrectionType); }
    static void setEnablesReturnKeyAutomatically(::uObject* __this, bool enablesReturnKeyAutomatically) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setEnablesReturnKeyAutomatically((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), enablesReturnKeyAutomatically); }
    static void setKeyboardAppearance(::uObject* __this, int keyboardAppearance) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setKeyboardAppearance((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), keyboardAppearance); }
    static void setKeyboardType(::uObject* __this, int keyboardType) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setKeyboardType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), keyboardType); }
    static void setReturnKeyType(::uObject* __this, int returnKeyType) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setReturnKeyType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), returnKeyType); }
    static void setSecureTextEntry(::uObject* __this, bool secureTextEntry) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setSecureTextEntry((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), secureTextEntry); }
    static void setSpellCheckingType(::uObject* __this, int spellCheckingType) { ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_setSpellCheckingType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), spellCheckingType); }
    static int spellCheckingType(::uObject* __this) { return ((IUIKeyInput*)uGetInterfacePtr(__this, IUIKeyInput__typeof()))->__fp_spellCheckingType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
