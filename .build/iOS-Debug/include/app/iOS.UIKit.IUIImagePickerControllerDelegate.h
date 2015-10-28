// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_I_U_I_IMAGE_PICKER_CONTROLLER_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_I_U_I_IMAGE_PICKER_CONTROLLER_DELEGATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImage; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImagePickerController; } } }

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUIImagePickerControllerDelegate__typeof();

struct IUIImagePickerControllerDelegate
{
    void(*__fp_imagePickerControllerDidCancel)(void*, ::app::iOS::UIKit::UIImagePickerController*);
    void(*__fp_imagePickerControllerDidFinishPickingImageEditingInfo)(void*, ::app::iOS::UIKit::UIImagePickerController*, ::app::iOS::UIKit::UIImage*, ::app::iOS::Foundation::NSDictionary*);
    void(*__fp_imagePickerControllerDidFinishPickingMediaWithInfo)(void*, ::app::iOS::UIKit::UIImagePickerController*, ::app::iOS::Foundation::NSDictionary*);

    static void imagePickerControllerDidCancel(::uObject* __this, ::app::iOS::UIKit::UIImagePickerController* picker) { ((IUIImagePickerControllerDelegate*)uGetInterfacePtr(__this, IUIImagePickerControllerDelegate__typeof()))->__fp_imagePickerControllerDidCancel((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), picker); }
    static void imagePickerControllerDidFinishPickingImageEditingInfo(::uObject* __this, ::app::iOS::UIKit::UIImagePickerController* picker, ::app::iOS::UIKit::UIImage* image, ::app::iOS::Foundation::NSDictionary* editingInfo) { ((IUIImagePickerControllerDelegate*)uGetInterfacePtr(__this, IUIImagePickerControllerDelegate__typeof()))->__fp_imagePickerControllerDidFinishPickingImageEditingInfo((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), picker, image, editingInfo); }
    static void imagePickerControllerDidFinishPickingMediaWithInfo(::uObject* __this, ::app::iOS::UIKit::UIImagePickerController* picker, ::app::iOS::Foundation::NSDictionary* info) { ((IUIImagePickerControllerDelegate*)uGetInterfacePtr(__this, IUIImagePickerControllerDelegate__typeof()))->__fp_imagePickerControllerDidFinishPickingMediaWithInfo((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), picker, info); }
};

}}}


#endif
