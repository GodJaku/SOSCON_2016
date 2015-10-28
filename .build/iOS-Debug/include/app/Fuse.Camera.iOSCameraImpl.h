// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_I_O_S_CAMERA_IMPL_H__
#define __APP_FUSE_CAMERA_I_O_S_CAMERA_IMPL_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct iOSCameraImpl_TakePictureTask; } } }
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions; } } }
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace Foundation { struct NSNumber; } } }
namespace app { namespace iOS { namespace Foundation { struct NSString; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImage; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Camera {

extern bool iOSCameraImpl___initialized;
extern ::uStaticStrong< ::app::Fuse::Camera::iOSCameraImpl_TakePictureTask*> iOSCameraImpl___pendingTask;
extern bool iOSCameraImpl__IsCameraAvailable;
extern ::uStaticStrong< ::app::iOS::Foundation::NSString*> iOSCameraImpl__MEDIA_METADATA;
extern ::uStaticStrong< ::app::iOS::Foundation::NSString*> iOSCameraImpl__ORIENTATION;
extern ::uStaticStrong< ::app::iOS::Foundation::NSString*> iOSCameraImpl__ORIGINAL_IMAGE;

struct iOSCameraImpl__uType : ::uClassType
{
};

iOSCameraImpl__uType* iOSCameraImpl__typeof();

::app::iOS::Foundation::NSDictionary* iOSCameraImpl__DictionaryForKey(::uStatic* __this, ::app::iOS::Foundation::NSDictionary* dict, ::app::iOS::Foundation::NSString* key);
void iOSCameraImpl__EnsureInitialized(::uStatic* __this);
::app::iOS::UIKit::UIImage* iOSCameraImpl__ImageForKey(::uStatic* __this, ::app::iOS::Foundation::NSDictionary* dict, ::app::iOS::Foundation::NSString* key);
::app::iOS::Foundation::NSNumber* iOSCameraImpl__NumberForKey(::uStatic* __this, ::app::iOS::Foundation::NSDictionary* dict, ::app::iOS::Foundation::NSString* key);
void iOSCameraImpl__StartTakePictureTask(::uStatic* __this, ::app::Fuse::Camera::iOSCameraImpl_TakePictureTask* task);
void iOSCameraImpl__TakePicture(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);

}}}


#endif
