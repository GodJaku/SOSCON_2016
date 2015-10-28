// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_TRAITS_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_TRAITS_H__

#include <app/iOS.UIKit.IUITextInputTraits.h>
#include <app/ObjC.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUITextInputTraits;

struct IUITextInputTraits__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUITextInputTraits __interface_0;
};

IUITextInputTraits__uType* IUITextInputTraits__typeof();

int IUITextInputTraits__autocapitalizationType(IUITextInputTraits* __this);
int IUITextInputTraits__autocorrectionType(IUITextInputTraits* __this);
bool IUITextInputTraits__enablesReturnKeyAutomatically(IUITextInputTraits* __this);
bool IUITextInputTraits__isSecureTextEntry(IUITextInputTraits* __this);
int IUITextInputTraits__keyboardAppearance(IUITextInputTraits* __this);
int IUITextInputTraits__keyboardType(IUITextInputTraits* __this);
int IUITextInputTraits__returnKeyType(IUITextInputTraits* __this);
void IUITextInputTraits__setAutocapitalizationType(IUITextInputTraits* __this, int autocapitalizationType_);
void IUITextInputTraits__setAutocorrectionType(IUITextInputTraits* __this, int autocorrectionType_);
void IUITextInputTraits__setEnablesReturnKeyAutomatically(IUITextInputTraits* __this, bool enablesReturnKeyAutomatically_);
void IUITextInputTraits__setKeyboardAppearance(IUITextInputTraits* __this, int keyboardAppearance_);
void IUITextInputTraits__setKeyboardType(IUITextInputTraits* __this, int keyboardType_);
void IUITextInputTraits__setReturnKeyType(IUITextInputTraits* __this, int returnKeyType_);
void IUITextInputTraits__setSecureTextEntry(IUITextInputTraits* __this, bool secureTextEntry_);
void IUITextInputTraits__setSpellCheckingType(IUITextInputTraits* __this, int spellCheckingType_);
int IUITextInputTraits__spellCheckingType(IUITextInputTraits* __this);

struct IUITextInputTraits : ::app::ObjC::Object
{
    int autocapitalizationType() { return IUITextInputTraits__autocapitalizationType(this); }
    int autocorrectionType() { return IUITextInputTraits__autocorrectionType(this); }
    bool enablesReturnKeyAutomatically() { return IUITextInputTraits__enablesReturnKeyAutomatically(this); }
    bool isSecureTextEntry() { return IUITextInputTraits__isSecureTextEntry(this); }
    int keyboardAppearance() { return IUITextInputTraits__keyboardAppearance(this); }
    int keyboardType() { return IUITextInputTraits__keyboardType(this); }
    int returnKeyType() { return IUITextInputTraits__returnKeyType(this); }
    void setAutocapitalizationType(int autocapitalizationType_) { IUITextInputTraits__setAutocapitalizationType(this, autocapitalizationType_); }
    void setAutocorrectionType(int autocorrectionType_) { IUITextInputTraits__setAutocorrectionType(this, autocorrectionType_); }
    void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_) { IUITextInputTraits__setEnablesReturnKeyAutomatically(this, enablesReturnKeyAutomatically_); }
    void setKeyboardAppearance(int keyboardAppearance_) { IUITextInputTraits__setKeyboardAppearance(this, keyboardAppearance_); }
    void setKeyboardType(int keyboardType_) { IUITextInputTraits__setKeyboardType(this, keyboardType_); }
    void setReturnKeyType(int returnKeyType_) { IUITextInputTraits__setReturnKeyType(this, returnKeyType_); }
    void setSecureTextEntry(bool secureTextEntry_) { IUITextInputTraits__setSecureTextEntry(this, secureTextEntry_); }
    void setSpellCheckingType(int spellCheckingType_) { IUITextInputTraits__setSpellCheckingType(this, spellCheckingType_); }
    int spellCheckingType() { return IUITextInputTraits__spellCheckingType(this); }
};

}}}}


#endif
