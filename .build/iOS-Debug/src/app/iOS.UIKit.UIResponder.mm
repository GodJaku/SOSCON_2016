// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIResponder
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIResponder*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIResponder__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIResponder.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Bool.h>

namespace app {
namespace iOS {
namespace UIKit {

UIResponder__uType* UIResponder__typeof()
{
    static ::uStaticStrong<UIResponder__uType*> type;
    if (type != NULL) return type;

    type = (UIResponder__uType*)::uAllocClassType(sizeof(UIResponder__uType), "iOS.UIKit.UIResponder", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIResponder___ObjInit_4(UIResponder* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

void UIResponder___ObjInit_5(UIResponder* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

bool UIResponder__becomeFirstResponder(UIResponder* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(becomeFirstResponder));
    return (bool)__return;
}

bool UIResponder__isFirstResponder(UIResponder* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isFirstResponder));
    return (bool)__return;
}

bool UIResponder__resignFirstResponder(UIResponder* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(resignFirstResponder));
    return (bool)__return;
}

}}}
