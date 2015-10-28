// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIWindow
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIWindow*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIWindow__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIViewController.h>
#include <app/iOS.UIKit.UIWindow.h>

namespace app {
namespace iOS {
namespace UIKit {

UIWindow__uType* UIWindow__typeof()
{
    static ::uStaticStrong<UIWindow__uType*> type;
    if (type != NULL) return type;

    type = (UIWindow__uType*)::uAllocClassType(sizeof(UIWindow__uType), "iOS.UIKit.UIWindow", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

::app::iOS::UIKit::UIViewController* UIWindow__get_RootViewController(UIWindow* __this)
{
    return __this->rootViewController();
}

::app::iOS::UIKit::UIViewController* UIWindow__rootViewController(UIWindow* __this)
{
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIViewController*, @selector(rootViewController));
    return (::app::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIViewController__typeof());
}

void UIWindow__set_RootViewController(UIWindow* __this, ::app::iOS::UIKit::UIViewController* value)
{
    __this->setRootViewController(value);
}

void UIWindow__setRootViewController(UIWindow* __this, ::app::iOS::UIKit::UIViewController* rootViewController_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setRootViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)rootViewController_));
}

}}}
