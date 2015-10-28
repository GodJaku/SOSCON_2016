// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.iOS.iOSDeviceInterop.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.UIKit.UIApplication.h>
#include <app/iOS.UIKit.UIInterfaceOrientation.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/ObjC.Object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Platform2.Application.h>
#include <objc/runtime.h>

namespace app {
namespace Fuse {
namespace iOS {

iOSDeviceInterop__uType* iOSDeviceInterop__typeof()
{
    static ::uStaticStrong<iOSDeviceInterop__uType*> type;
    if (type != NULL) return type;

    type = (iOSDeviceInterop__uType*)::uAllocClassType(sizeof(iOSDeviceInterop__uType), "Fuse.iOS.iOSDeviceInterop");

    return type;
}

bool iOSDeviceInterop__get_PreV8(::uStatic* __this)
{
    return (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1);
}

bool iOSDeviceInterop__IsOrientationLandscape(::uStatic* __this)
{
    int o = ::uPtr< ::app::iOS::UIKit::UIApplication*>(::app::iOS::UIKit::UIApplication___sharedApplication(NULL))->StatusBarOrientation();
    return (o == 4) || (o == 3);
}

bool iOSDeviceInterop__IsRootView(::uStatic* __this, ::app::iOS::UIKit::UIView* view)
{
    return (((uPlatform2::ViewNativeHandle)::uPtr< ::app::iOS::UIKit::UIView*>(view)->Handle())==::app::Uno::Platform2::Application__GetRootView(NULL));
}

::app::iOS::CoreGraphics::CGSize iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, ::app::iOS::UIKit::UIView* view)
{
    if ((iOSDeviceInterop__get_PreV8(NULL) && iOSDeviceInterop__IsOrientationLandscape(NULL)) && ((view == NULL) || iOSDeviceInterop__IsRootView(NULL, view)))
    {
        return ::app::iOS::CoreGraphics::CGSize__New_1(NULL, size.Height, size.Width);
    }

    return size;
}

}}}
