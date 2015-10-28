// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.iOS.iOSBindingView.h>
#include <app/Fuse.iOS.iOSInterop.h>
#include <app/Fuse.SizeFlags.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/ObjC.Object.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Platform.ViewNativeHandle.h>
#include <app/Uno.Platform2.Application.h>
#include <objc/runtime.h>

namespace app {
namespace Fuse {
namespace iOS {

iOSBindingView__uType* iOSBindingView__typeof()
{
    static ::uStaticStrong<iOSBindingView__uType*> type;
    if (type != NULL) return type;

    type = (iOSBindingView__uType*)::uAllocClassType(sizeof(iOSBindingView__uType), "Fuse.iOS.iOSBindingView");

    return type;
}

::app::Uno::Float2 iOSBindingView__GetContentSize(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Fuse::iOS::iOSInterop__GetContentSize(NULL, view, fillSize, fillSet, 1.0f);
}

uPlatform2::ViewNativeHandle iOSBindingView__GetNativeViewHandle(::uStatic* __this, ::app::iOS::UIKit::UIView* view)
{
    return (uPlatform2::ViewNativeHandle)::uPtr< ::app::iOS::UIKit::UIView*>(view)->Handle();
}

}}}
