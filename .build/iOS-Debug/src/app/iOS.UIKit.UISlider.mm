// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UISlider
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UISlider*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UISlider__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UISlider.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace iOS {
namespace UIKit {

UISlider__uType* UISlider__typeof()
{
    static ::uStaticStrong<UISlider__uType*> type;
    if (type != NULL) return type;

    type = (UISlider__uType*)::uAllocClassType(sizeof(UISlider__uType), "iOS.UIKit.UISlider", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIControl__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UISlider___ObjInit_11(UISlider* __this)
{
    ::app::iOS::UIKit::UIControl___ObjInit_9(__this);
}

bool UISlider__get_Continuous(UISlider* __this)
{
    return __this->isContinuous();
}

float UISlider__get_MaximumValue(UISlider* __this)
{
    return __this->maximumValue();
}

float UISlider__get_MinimumValue(UISlider* __this)
{
    return __this->minimumValue();
}

float UISlider__get_Value(UISlider* __this)
{
    return __this->value();
}

bool UISlider__isContinuous(UISlider* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isContinuous));
    return (bool)__return;
}

float UISlider__maximumValue(UISlider* __this)
{
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(float, @selector(maximumValue));
    return __return;
}

float UISlider__minimumValue(UISlider* __this)
{
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(float, @selector(minimumValue));
    return __return;
}

UISlider* UISlider__New_11(::uStatic* __this)
{
    UISlider* inst = (UISlider*)::uAllocObject(sizeof(UISlider), UISlider__typeof());
    inst->_ObjInit_11();
    return inst;
}

void UISlider__set_Continuous(UISlider* __this, bool value)
{
    __this->setContinuous(value);
}

void UISlider__set_MaximumValue(UISlider* __this, float value)
{
    __this->setMaximumValue(value);
}

void UISlider__set_MinimumValue(UISlider* __this, float value)
{
    __this->setMinimumValue(value);
}

void UISlider__set_Value(UISlider* __this, float value)
{
    __this->setValue(value);
}

void UISlider__setContinuous(UISlider* __this, bool continuous_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setContinuous:),
        (BOOL)continuous_);
}

void UISlider__setMaximumValue(UISlider* __this, float maximumValue_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMaximumValue:),
        maximumValue_);
}

void UISlider__setMinimumValue(UISlider* __this, float minimumValue_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMinimumValue:),
        minimumValue_);
}

void UISlider__setValue(UISlider* __this, float value_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setValue:),
        value_);
}

float UISlider__value(UISlider* __this)
{
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(float, @selector(value));
    return __return;
}

}}}
