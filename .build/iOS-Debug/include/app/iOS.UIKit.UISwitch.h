// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_SWITCH_H__
#define __APP_I_O_S_U_I_KIT_U_I_SWITCH_H__

#include <app/iOS.UIKit.UIControl.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UISwitch;

struct UISwitch__uType : ::app::iOS::UIKit::UIControl__uType
{
};

UISwitch__uType* UISwitch__typeof();

void UISwitch___ObjInit_10(UISwitch* __this);
bool UISwitch__get_On(UISwitch* __this);
bool UISwitch__isOn(UISwitch* __this);
UISwitch* UISwitch__New_11(::uStatic* __this);
void UISwitch__set_On(UISwitch* __this, bool value);
void UISwitch__setOn(UISwitch* __this, bool on_);
void UISwitch__setTintColor(UISwitch* __this, ::app::iOS::UIKit::UIColor* tintColor_);
::app::iOS::UIKit::UIColor* UISwitch__tintColor(UISwitch* __this);

struct UISwitch : ::app::iOS::UIKit::UIControl
{
    void _ObjInit_10() { UISwitch___ObjInit_10(this); }
    bool On() { return UISwitch__get_On(this); }
    bool isOn() { return UISwitch__isOn(this); }
    void On(bool value) { UISwitch__set_On(this, value); }
    void setOn(bool on_) { UISwitch__setOn(this, on_); }
};

}}}


#endif
