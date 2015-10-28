// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_IMAGE_PICKER_CONTROLLER_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_IMAGE_PICKER_CONTROLLER_DELEGATE_H__

#include <app/iOS.UIKit.IUIImagePickerControllerDelegate.h>
#include <app/ObjC.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImage; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImagePickerController; } } }

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUIImagePickerControllerDelegate;

struct IUIImagePickerControllerDelegate__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUIImagePickerControllerDelegate __interface_0;
};

IUIImagePickerControllerDelegate__uType* IUIImagePickerControllerDelegate__typeof();

void IUIImagePickerControllerDelegate__imagePickerControllerDidCancel(IUIImagePickerControllerDelegate* __this, ::app::iOS::UIKit::UIImagePickerController* picker_);
void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo(IUIImagePickerControllerDelegate* __this, ::app::iOS::UIKit::UIImagePickerController* picker_, ::app::iOS::UIKit::UIImage* image_, ::app::iOS::Foundation::NSDictionary* editingInfo_);
void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo(IUIImagePickerControllerDelegate* __this, ::app::iOS::UIKit::UIImagePickerController* picker_, ::app::iOS::Foundation::NSDictionary* info_);

struct IUIImagePickerControllerDelegate : ::app::ObjC::Object
{
    void imagePickerControllerDidCancel(::app::iOS::UIKit::UIImagePickerController* picker_) { IUIImagePickerControllerDelegate__imagePickerControllerDidCancel(this, picker_); }
    void imagePickerControllerDidFinishPickingImageEditingInfo(::app::iOS::UIKit::UIImagePickerController* picker_, ::app::iOS::UIKit::UIImage* image_, ::app::iOS::Foundation::NSDictionary* editingInfo_) { IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo(this, picker_, image_, editingInfo_); }
    void imagePickerControllerDidFinishPickingMediaWithInfo(::app::iOS::UIKit::UIImagePickerController* picker_, ::app::iOS::Foundation::NSDictionary* info_) { IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo(this, picker_, info_); }
};

}}}}


#endif
