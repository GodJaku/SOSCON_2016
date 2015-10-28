// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIViewController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIViewController*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIViewController__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIViewController.h>
#include <app/Uno.Bool.h>

namespace app {
namespace iOS {
namespace UIKit {

UIViewController__uType* UIViewController__typeof()
{
    static ::uStaticStrong<UIViewController__uType*> type;
    if (type != NULL) return type;

    type = (UIViewController__uType*)::uAllocClassType(sizeof(UIViewController__uType), "iOS.UIKit.UIViewController", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIResponder__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIViewController___ObjInit_7(UIViewController* __this)
{
    ::app::iOS::UIKit::UIResponder___ObjInit_5(__this);
}

void UIViewController__dismissModalViewControllerAnimated(UIViewController* __this, bool animated_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(dismissModalViewControllerAnimated:),
        (BOOL)animated_);
}

void UIViewController__presentModalViewControllerAnimated(UIViewController* __this, UIViewController* modalViewController_, bool animated_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(presentModalViewController:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)modalViewController_),
        (BOOL)animated_);
}

}}}
