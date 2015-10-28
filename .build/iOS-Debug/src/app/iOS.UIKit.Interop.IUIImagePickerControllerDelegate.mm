// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIImagePickerControllerDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIImagePickerControllerDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.UIKit.Interop.IUIImagePickerControllerDelegate.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/iOS.UIKit.UIImagePickerController.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

IUIImagePickerControllerDelegate__uType* IUIImagePickerControllerDelegate__typeof()
{
    static ::uStaticStrong<IUIImagePickerControllerDelegate__uType*> type;
    if (type != NULL) return type;

    type = (IUIImagePickerControllerDelegate__uType*)::uAllocClassType(sizeof(IUIImagePickerControllerDelegate__uType), "iOS.UIKit.Interop.IUIImagePickerControllerDelegate", false, 1, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_imagePickerControllerDidFinishPickingImageEditingInfo = (void(*)(void*, ::app::iOS::UIKit::UIImagePickerController*, ::app::iOS::UIKit::UIImage*, ::app::iOS::Foundation::NSDictionary*))IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo;
    type->__interface_0.__fp_imagePickerControllerDidFinishPickingMediaWithInfo = (void(*)(void*, ::app::iOS::UIKit::UIImagePickerController*, ::app::iOS::Foundation::NSDictionary*))IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo;
    type->__interface_0.__fp_imagePickerControllerDidCancel = (void(*)(void*, ::app::iOS::UIKit::UIImagePickerController*))IUIImagePickerControllerDelegate__imagePickerControllerDidCancel;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUIImagePickerControllerDelegate__typeof(), offsetof(IUIImagePickerControllerDelegate__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void IUIImagePickerControllerDelegate__imagePickerControllerDidCancel(IUIImagePickerControllerDelegate* __this, ::app::iOS::UIKit::UIImagePickerController* picker_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(imagePickerControllerDidCancel:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)picker_));
}

void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo(IUIImagePickerControllerDelegate* __this, ::app::iOS::UIKit::UIImagePickerController* picker_, ::app::iOS::UIKit::UIImage* image_, ::app::iOS::Foundation::NSDictionary* editingInfo_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(imagePickerController:didFinishPickingImage:editingInfo:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)picker_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)image_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)editingInfo_));
}

void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo(IUIImagePickerControllerDelegate* __this, ::app::iOS::UIKit::UIImagePickerController* picker_, ::app::iOS::Foundation::NSDictionary* info_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(imagePickerController:didFinishPickingMediaWithInfo:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)picker_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)info_));
}

}}}}
