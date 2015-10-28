// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextViewDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextViewDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.UIKit.IUITextViewDelegate.h>
#include <app/iOS.UIKit.NSTextAttachment.h>
#include <app/iOS.UIKit.UIScrollView.h>
#include <app/iOS.UIKit.UITextView.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUITextViewDelegate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("iOS.UIKit.IUITextViewDelegate");

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
