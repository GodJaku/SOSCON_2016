// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_I_O_S_CAMERA_IMPL_TAKE_PICTURE_TASK_H__
#define __APP_FUSE_CAMERA_I_O_S_CAMERA_IMPL_TAKE_PICTURE_TASK_H__

#include <app/iOS.UIKit.IUIImagePickerControllerDelegate.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions; } } }
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImagePickerController; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Camera {

struct iOSCameraImpl_TakePictureTask;

struct iOSCameraImpl_TakePictureTask__uType : ::uClassType
{
    ::app::iOS::UIKit::IUIImagePickerControllerDelegate __interface_0;
};

iOSCameraImpl_TakePictureTask__uType* iOSCameraImpl_TakePictureTask__typeof();

void iOSCameraImpl_TakePictureTask___ObjInit(iOSCameraImpl_TakePictureTask* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);
void iOSCameraImpl_TakePictureTask__FireCallback(iOSCameraImpl_TakePictureTask* __this, bool cancelled);
void iOSCameraImpl_TakePictureTask__imagePickerControllerDidCancel(iOSCameraImpl_TakePictureTask* __this, ::app::iOS::UIKit::UIImagePickerController* imagePicker);
void iOSCameraImpl_TakePictureTask__imagePickerControllerDidFinishPickingMediaWithInfo(iOSCameraImpl_TakePictureTask* __this, ::app::iOS::UIKit::UIImagePickerController* imagePicker, ::app::iOS::Foundation::NSDictionary* info);
iOSCameraImpl_TakePictureTask* iOSCameraImpl_TakePictureTask__New_1(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);

struct iOSCameraImpl_TakePictureTask : ::uObject
{
    ::uStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*> _futurePath;
    ::uStrong< ::uString*> Path;
    ::uStrong< ::app::Fuse::Camera::TakePictureOptions*> _options;
    int _rotation;

    void _ObjInit(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options) { iOSCameraImpl_TakePictureTask___ObjInit(this, futurePath, options); }
    void FireCallback(bool cancelled) { iOSCameraImpl_TakePictureTask__FireCallback(this, cancelled); }
    void imagePickerControllerDidCancel(::app::iOS::UIKit::UIImagePickerController* imagePicker) { iOSCameraImpl_TakePictureTask__imagePickerControllerDidCancel(this, imagePicker); }
    void imagePickerControllerDidFinishPickingMediaWithInfo(::app::iOS::UIKit::UIImagePickerController* imagePicker, ::app::iOS::Foundation::NSDictionary* info) { iOSCameraImpl_TakePictureTask__imagePickerControllerDidFinishPickingMediaWithInfo(this, imagePicker, info); }
};

}}}


#endif
