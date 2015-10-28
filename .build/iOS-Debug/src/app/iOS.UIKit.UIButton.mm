// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIButton
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIButton*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIButton__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIButton.h>
#include <app/iOS.UIKit.UIButtonType.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIControlState.h>
#include <app/ObjC.ID.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

UIButton__uType* UIButton__typeof()
{
    static ::uStaticStrong<UIButton__uType*> type;
    if (type != NULL) return type;

    type = (UIButton__uType*)::uAllocClassType(sizeof(UIButton__uType), "iOS.UIKit.UIButton", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIControl__typeof());
    type->__fp_setTintColor = (void(*)(::app::iOS::UIKit::UIView*, ::app::iOS::UIKit::UIColor*))UIButton__setTintColor;
    type->__fp_tintColor = (::app::iOS::UIKit::UIColor*(*)(::app::iOS::UIKit::UIView*))UIButton__tintColor;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

::id UIButton___buttonWithType(::uStatic* __this, int buttonType_)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(::id, @selector(buttonWithType:),
        ::UIButtonType(buttonType_));
    return (::id)__return;
}

void UIButton___ObjInit_10(UIButton* __this, ::id __id)
{
    ::app::iOS::UIKit::UIControl___ObjInit_8(__this, __id);
}

UIButton* UIButton__New_12(::uStatic* __this, ::id __id)
{
    UIButton* inst = (UIButton*)::uAllocObject(sizeof(UIButton), UIButton__typeof());
    inst->_ObjInit_10(__id);
    return inst;
}

void UIButton__setTintColor(UIButton* __this, ::app::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

void UIButton__setTitleColorForState(UIButton* __this, ::app::iOS::UIKit::UIColor* color_, ::uUInt state_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTitleColor:forState:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)color_),
        ::UIControlState(state_));
}

void UIButton__setTitleForState(UIButton* __this, ::uString* title_, ::uUInt state_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTitle:forState:),
        uObjC::NativeString(title_),
        ::UIControlState(state_));
}

::app::iOS::UIKit::UIColor* UIButton__tintColor(UIButton* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(tintColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

}}}
