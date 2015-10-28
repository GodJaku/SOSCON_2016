// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UINavigationController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UINavigationController*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UINavigationController__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UINavigationController.h>

namespace app {
namespace iOS {
namespace UIKit {

UINavigationController__uType* UINavigationController__typeof()
{
    static ::uStaticStrong<UINavigationController__uType*> type;
    if (type != NULL) return type;

    type = (UINavigationController__uType*)::uAllocClassType(sizeof(UINavigationController__uType), "iOS.UIKit.UINavigationController", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIViewController__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UINavigationController___ObjInit_9(UINavigationController* __this)
{
    ::app::iOS::UIKit::UIViewController___ObjInit_7(__this);
}

}}}
