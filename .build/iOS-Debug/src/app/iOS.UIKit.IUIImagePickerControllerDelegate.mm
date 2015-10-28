// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIImagePickerControllerDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIImagePickerControllerDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.UIKit.IUIImagePickerControllerDelegate.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/iOS.UIKit.UIImagePickerController.h>

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUIImagePickerControllerDelegate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("iOS.UIKit.IUIImagePickerControllerDelegate");

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
