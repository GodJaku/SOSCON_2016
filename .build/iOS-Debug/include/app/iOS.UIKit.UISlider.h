// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_SLIDER_H__
#define __APP_I_O_S_U_I_KIT_U_I_SLIDER_H__

#include <app/iOS.UIKit.UIControl.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {

struct UISlider;

struct UISlider__uType : ::app::iOS::UIKit::UIControl__uType
{
};

UISlider__uType* UISlider__typeof();

void UISlider___ObjInit_11(UISlider* __this);
bool UISlider__get_Continuous(UISlider* __this);
float UISlider__get_MaximumValue(UISlider* __this);
float UISlider__get_MinimumValue(UISlider* __this);
float UISlider__get_Value(UISlider* __this);
bool UISlider__isContinuous(UISlider* __this);
float UISlider__maximumValue(UISlider* __this);
float UISlider__minimumValue(UISlider* __this);
UISlider* UISlider__New_11(::uStatic* __this);
void UISlider__set_Continuous(UISlider* __this, bool value);
void UISlider__set_MaximumValue(UISlider* __this, float value);
void UISlider__set_MinimumValue(UISlider* __this, float value);
void UISlider__set_Value(UISlider* __this, float value);
void UISlider__setContinuous(UISlider* __this, bool continuous_);
void UISlider__setMaximumValue(UISlider* __this, float maximumValue_);
void UISlider__setMinimumValue(UISlider* __this, float minimumValue_);
void UISlider__setValue(UISlider* __this, float value_);
float UISlider__value(UISlider* __this);

struct UISlider : ::app::iOS::UIKit::UIControl
{
    void _ObjInit_11() { UISlider___ObjInit_11(this); }
    bool Continuous() { return UISlider__get_Continuous(this); }
    float MaximumValue() { return UISlider__get_MaximumValue(this); }
    float MinimumValue() { return UISlider__get_MinimumValue(this); }
    float Value() { return UISlider__get_Value(this); }
    bool isContinuous() { return UISlider__isContinuous(this); }
    float maximumValue() { return UISlider__maximumValue(this); }
    float minimumValue() { return UISlider__minimumValue(this); }
    void Continuous(bool value) { UISlider__set_Continuous(this, value); }
    void MaximumValue(float value) { UISlider__set_MaximumValue(this, value); }
    void MinimumValue(float value) { UISlider__set_MinimumValue(this, value); }
    void Value(float value) { UISlider__set_Value(this, value); }
    void setContinuous(bool continuous_) { UISlider__setContinuous(this, continuous_); }
    void setMaximumValue(float maximumValue_) { UISlider__setMaximumValue(this, maximumValue_); }
    void setMinimumValue(float minimumValue_) { UISlider__setMinimumValue(this, minimumValue_); }
    void setValue(float value_) { UISlider__setValue(this, value_); }
    float value() { return UISlider__value(this); }
};

}}}


#endif
