// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UISwitch
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UISwitch*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UISwitch__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UISwitch.h>
#include <app/Uno.Bool.h>

namespace app {
namespace iOS {
namespace UIKit {

UISwitch__uType* UISwitch__typeof()
{
    static ::uStaticStrong<UISwitch__uType*> type;
    if (type != NULL) return type;

    type = (UISwitch__uType*)::uAllocClassType(sizeof(UISwitch__uType), "iOS.UIKit.UISwitch", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIControl__typeof());
    type->__fp_setTintColor = (void(*)(::app::iOS::UIKit::UIView*, ::app::iOS::UIKit::UIColor*))UISwitch__setTintColor;
    type->__fp_tintColor = (::app::iOS::UIKit::UIColor*(*)(::app::iOS::UIKit::UIView*))UISwitch__tintColor;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UISwitch___ObjInit_10(UISwitch* __this)
{
    ::app::iOS::UIKit::UIControl___ObjInit_9(__this);
}

bool UISwitch__get_On(UISwitch* __this)
{
    return __this->isOn();
}

bool UISwitch__isOn(UISwitch* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isOn));
    return (bool)__return;
}

UISwitch* UISwitch__New_11(::uStatic* __this)
{
    UISwitch* inst = (UISwitch*)::uAllocObject(sizeof(UISwitch), UISwitch__typeof());
    inst->_ObjInit_10();
    return inst;
}

void UISwitch__set_On(UISwitch* __this, bool value)
{
    __this->setOn(value);
}

void UISwitch__setOn(UISwitch* __this, bool on_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setOn:),
        (BOOL)on_);
}

void UISwitch__setTintColor(UISwitch* __this, ::app::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

::app::iOS::UIKit::UIColor* UISwitch__tintColor(UISwitch* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(tintColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

}}}
