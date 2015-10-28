// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_KEY_INPUT_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_KEY_INPUT_H__

#include <app/iOS.UIKit.IUIKeyInput.h>
#include <app/iOS.UIKit.IUITextInputTraits.h>
#include <app/ObjC.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUIKeyInput;

struct IUIKeyInput__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUIKeyInput __interface_0;
    ::app::iOS::UIKit::IUITextInputTraits __interface_1;
};

IUIKeyInput__uType* IUIKeyInput__typeof();

int IUIKeyInput__autocapitalizationType(IUIKeyInput* __this);
int IUIKeyInput__autocorrectionType(IUIKeyInput* __this);
void IUIKeyInput__deleteBackward(IUIKeyInput* __this);
bool IUIKeyInput__enablesReturnKeyAutomatically(IUIKeyInput* __this);
bool IUIKeyInput__hasText(IUIKeyInput* __this);
void IUIKeyInput__insertText(IUIKeyInput* __this, ::uString* text_);
bool IUIKeyInput__isSecureTextEntry(IUIKeyInput* __this);
int IUIKeyInput__keyboardAppearance(IUIKeyInput* __this);
int IUIKeyInput__keyboardType(IUIKeyInput* __this);
int IUIKeyInput__returnKeyType(IUIKeyInput* __this);
void IUIKeyInput__setAutocapitalizationType(IUIKeyInput* __this, int autocapitalizationType_);
void IUIKeyInput__setAutocorrectionType(IUIKeyInput* __this, int autocorrectionType_);
void IUIKeyInput__setEnablesReturnKeyAutomatically(IUIKeyInput* __this, bool enablesReturnKeyAutomatically_);
void IUIKeyInput__setKeyboardAppearance(IUIKeyInput* __this, int keyboardAppearance_);
void IUIKeyInput__setKeyboardType(IUIKeyInput* __this, int keyboardType_);
void IUIKeyInput__setReturnKeyType(IUIKeyInput* __this, int returnKeyType_);
void IUIKeyInput__setSecureTextEntry(IUIKeyInput* __this, bool secureTextEntry_);
void IUIKeyInput__setSpellCheckingType(IUIKeyInput* __this, int spellCheckingType_);
int IUIKeyInput__spellCheckingType(IUIKeyInput* __this);

struct IUIKeyInput : ::app::ObjC::Object
{
    int autocapitalizationType() { return IUIKeyInput__autocapitalizationType(this); }
    int autocorrectionType() { return IUIKeyInput__autocorrectionType(this); }
    void deleteBackward() { IUIKeyInput__deleteBackward(this); }
    bool enablesReturnKeyAutomatically() { return IUIKeyInput__enablesReturnKeyAutomatically(this); }
    bool hasText() { return IUIKeyInput__hasText(this); }
    void insertText(::uString* text_) { IUIKeyInput__insertText(this, text_); }
    bool isSecureTextEntry() { return IUIKeyInput__isSecureTextEntry(this); }
    int keyboardAppearance() { return IUIKeyInput__keyboardAppearance(this); }
    int keyboardType() { return IUIKeyInput__keyboardType(this); }
    int returnKeyType() { return IUIKeyInput__returnKeyType(this); }
    void setAutocapitalizationType(int autocapitalizationType_) { IUIKeyInput__setAutocapitalizationType(this, autocapitalizationType_); }
    void setAutocorrectionType(int autocorrectionType_) { IUIKeyInput__setAutocorrectionType(this, autocorrectionType_); }
    void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_) { IUIKeyInput__setEnablesReturnKeyAutomatically(this, enablesReturnKeyAutomatically_); }
    void setKeyboardAppearance(int keyboardAppearance_) { IUIKeyInput__setKeyboardAppearance(this, keyboardAppearance_); }
    void setKeyboardType(int keyboardType_) { IUIKeyInput__setKeyboardType(this, keyboardType_); }
    void setReturnKeyType(int returnKeyType_) { IUIKeyInput__setReturnKeyType(this, returnKeyType_); }
    void setSecureTextEntry(bool secureTextEntry_) { IUIKeyInput__setSecureTextEntry(this, secureTextEntry_); }
    void setSpellCheckingType(int spellCheckingType_) { IUIKeyInput__setSpellCheckingType(this, spellCheckingType_); }
    int spellCheckingType() { return IUIKeyInput__spellCheckingType(this); }
};

}}}}


#endif
