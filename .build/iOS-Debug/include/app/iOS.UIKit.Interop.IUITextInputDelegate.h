// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_DELEGATE_H__

#include <app/iOS.UIKit.IUITextInputDelegate.h>
#include <app/ObjC.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUITextInputDelegate;

struct IUITextInputDelegate__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUITextInputDelegate __interface_0;
};

IUITextInputDelegate__uType* IUITextInputDelegate__typeof();

void IUITextInputDelegate__selectionDidChange(IUITextInputDelegate* __this, ::uObject* textInput_);
void IUITextInputDelegate__selectionWillChange(IUITextInputDelegate* __this, ::uObject* textInput_);
void IUITextInputDelegate__textDidChange(IUITextInputDelegate* __this, ::uObject* textInput_);
void IUITextInputDelegate__textWillChange(IUITextInputDelegate* __this, ::uObject* textInput_);

struct IUITextInputDelegate : ::app::ObjC::Object
{
    void selectionDidChange(::uObject* textInput_) { IUITextInputDelegate__selectionDidChange(this, textInput_); }
    void selectionWillChange(::uObject* textInput_) { IUITextInputDelegate__selectionWillChange(this, textInput_); }
    void textDidChange(::uObject* textInput_) { IUITextInputDelegate__textDidChange(this, textInput_); }
    void textWillChange(::uObject* textInput_) { IUITextInputDelegate__textWillChange(this, textInput_); }
};

}}}}


#endif
