// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIScrollViewDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIScrollViewDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.IUIScrollViewDelegate.h>
#include <app/iOS.UIKit.UIScrollView.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUIScrollViewDelegate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("iOS.UIKit.IUIScrollViewDelegate");

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
