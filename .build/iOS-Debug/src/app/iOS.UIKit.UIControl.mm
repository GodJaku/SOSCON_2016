// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIControl
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIControl*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIControl__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIControl.h>
#include <app/iOS.UIKit.UIControlEvents.h>
#include <app/ObjC.ID.h>
#include <app/ObjC.Selector.h>

namespace app {
namespace iOS {
namespace UIKit {

UIControl__uType* UIControl__typeof()
{
    static ::uStaticStrong<UIControl__uType*> type;
    if (type != NULL) return type;

    type = (UIControl__uType*)::uAllocClassType(sizeof(UIControl__uType), "iOS.UIKit.UIControl", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIControl___ObjInit_8(UIControl* __this, ::id __id)
{
    ::app::iOS::UIKit::UIView___ObjInit_6(__this, __id);
}

void UIControl___ObjInit_9(UIControl* __this)
{
    ::app::iOS::UIKit::UIView___ObjInit_7(__this);
}

void UIControl__addTargetActionForControlEvents(UIControl* __this, ::id target_, uObjC::Selector action_, ::uUInt controlEvents_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(addTarget:action:forControlEvents:),
        (::id)target_,
        (::SEL)action_,
        ::UIControlEvents(controlEvents_));
}

UIControl* UIControl__New_9(::uStatic* __this)
{
    UIControl* inst = (UIControl*)::uAllocObject(sizeof(UIControl), UIControl__typeof());
    inst->_ObjInit_9();
    return inst;
}

void UIControl__removeTargetActionForControlEvents(UIControl* __this, ::id target_, uObjC::Selector action_, ::uUInt controlEvents_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeTarget:action:forControlEvents:),
        (::id)target_,
        (::SEL)action_,
        ::UIControlEvents(controlEvents_));
}

}}}
