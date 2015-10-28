#include <app/Fuse.Camera.Camera.h>
#include <app/Fuse.Camera.iOSCameraHelper.h>
#include <app/Fuse.Camera.iOSCameraImpl.h>
#include <app/Fuse.Camera.iOSCameraImpl_TakePictureTask.h>
#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Camera.TakePictureHelpers.h>
#include <app/Fuse.Camera.TakePictureOptions.h>
#include <app/iOS.CoreGraphics.CGAffineTransform.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.CoreGraphics.Functions.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.Foundation.NSNumber.h>
#include <app/iOS.Foundation.NSObject.h>
#include <app/iOS.Foundation.NSString.h>
#include <app/iOS.UIKit.Functions.h>
#include <app/iOS.UIKit.IUIImagePickerControllerDelegate.h>
#include <app/iOS.UIKit.UIApplication.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/iOS.UIKit.UIImagePickerController.h>
#include <app/iOS.UIKit.UIImagePickerControllerSourceType.h>
#include <app/iOS.UIKit.UIViewController.h>
#include <app/iOS.UIKit.UIWindow.h>
#include <app/ObjC.ID.h>
#include <app/ObjC.Object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.Path.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>

namespace app {
namespace Fuse {
namespace Camera {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Camera__uType* Camera__typeof()
{
    static ::uStaticStrong<Camera__uType*> type;
    if (type != NULL) return type;

    type = (Camera__uType*)::uAllocClassType(sizeof(Camera__uType), "Fuse.Camera.Camera");

    return type;
}

::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Camera__TakePicture_1(::uStatic* __this, ::app::Fuse::Camera::TakePictureOptions* options)
{
    {
        ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath = ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__New_4(NULL);
        ::app::Fuse::Camera::iOSCameraImpl__TakePicture(NULL, futurePath, options);
        return (::app::Uno::Threading::Future__Fuse_Camera_PictureResult*)futurePath;
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bool iOSCameraImpl___initialized;
::uStaticStrong< ::app::Fuse::Camera::iOSCameraImpl_TakePictureTask*> iOSCameraImpl___pendingTask;
bool iOSCameraImpl__IsCameraAvailable;
::uStaticStrong< ::app::iOS::Foundation::NSString*> iOSCameraImpl__MEDIA_METADATA;
::uStaticStrong< ::app::iOS::Foundation::NSString*> iOSCameraImpl__ORIENTATION;
::uStaticStrong< ::app::iOS::Foundation::NSString*> iOSCameraImpl__ORIGINAL_IMAGE;

iOSCameraImpl__uType* iOSCameraImpl__typeof()
{
    static ::uStaticStrong<iOSCameraImpl__uType*> type;
    if (type != NULL) return type;

    type = (iOSCameraImpl__uType*)::uAllocClassType(sizeof(iOSCameraImpl__uType), "Fuse.Camera.iOSCameraImpl");

    return type;
}

::app::iOS::Foundation::NSDictionary* iOSCameraImpl__DictionaryForKey(::uStatic* __this, ::app::iOS::Foundation::NSDictionary* dict, ::app::iOS::Foundation::NSString* key)
{
    if (dict == NULL)
    {
        return NULL;
    }

    ::id id = ::uPtr< ::app::iOS::Foundation::NSDictionary*>(dict)->objectForKey(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)key));
    return (id != NULL) ? ::app::iOS::Foundation::NSDictionary__New_6(NULL, id) : NULL;
}

void iOSCameraImpl__EnsureInitialized(::uStatic* __this)
{
    if (!iOSCameraImpl___initialized)
    {
        ::app::iOS::Foundation::NSString* oi = ::app::iOS::Foundation::NSString__New_5(NULL);
        ::uPtr< ::app::iOS::Foundation::NSString*>(oi)->initWithString(::uGetConstString("UIImagePickerControllerOriginalImage"));
        iOSCameraImpl__ORIGINAL_IMAGE = ::app::iOS::Foundation::NSString__New_5(NULL);
        ::uPtr< ::app::iOS::Foundation::NSString*>(iOSCameraImpl__ORIGINAL_IMAGE)->initWithString(::uGetConstString("UIImagePickerControllerOriginalImage"));
        iOSCameraImpl__MEDIA_METADATA = ::app::iOS::Foundation::NSString__New_5(NULL);
        ::uPtr< ::app::iOS::Foundation::NSString*>(iOSCameraImpl__MEDIA_METADATA)->initWithString(::uGetConstString("UIImagePickerControllerMediaMetadata"));
        iOSCameraImpl__ORIENTATION = ::app::iOS::Foundation::NSString__New_5(NULL);
        ::uPtr< ::app::iOS::Foundation::NSString*>(iOSCameraImpl__ORIENTATION)->initWithString(::uGetConstString("Orientation"));
        iOSCameraImpl__IsCameraAvailable = ::app::iOS::UIKit::UIImagePickerController___isSourceTypeAvailable(NULL, 1);
        iOSCameraImpl___initialized = true;
    }
}

::app::iOS::UIKit::UIImage* iOSCameraImpl__ImageForKey(::uStatic* __this, ::app::iOS::Foundation::NSDictionary* dict, ::app::iOS::Foundation::NSString* key)
{
    if (dict == NULL)
    {
        return NULL;
    }

    ::id id = ::uPtr< ::app::iOS::Foundation::NSDictionary*>(dict)->objectForKey(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)key));
    return (id != NULL) ? ::app::iOS::UIKit::UIImage__New_6(NULL, id) : NULL;
}

::app::iOS::Foundation::NSNumber* iOSCameraImpl__NumberForKey(::uStatic* __this, ::app::iOS::Foundation::NSDictionary* dict, ::app::iOS::Foundation::NSString* key)
{
    if (dict == NULL)
    {
        return NULL;
    }

    ::id id = ::uPtr< ::app::iOS::Foundation::NSDictionary*>(dict)->objectForKey(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)key));
    return (id != NULL) ? ::app::iOS::Foundation::NSNumber__New_8(NULL, id) : NULL;
}

void iOSCameraImpl__StartTakePictureTask(::uStatic* __this, ::app::Fuse::Camera::iOSCameraImpl_TakePictureTask* task)
{
    ::app::iOS::UIKit::UIImagePickerController* imagePicker;
    imagePicker = ::app::iOS::UIKit::UIImagePickerController__New_11(NULL);
    ::uPtr< ::app::iOS::UIKit::UIImagePickerController*>(imagePicker)->init();
    imagePicker->SourceType(1);
    imagePicker->MediaTypes(::app::iOS::UIKit::UIImagePickerController___availableMediaTypesForSourceType(NULL, imagePicker->SourceType()));
    imagePicker->Delegate_1((::uObject*)task);
    ::uPtr< ::app::iOS::UIKit::UIViewController*>(::uPtr< ::app::iOS::UIKit::UIWindow*>(::uPtr< ::app::iOS::UIKit::UIApplication*>(::app::iOS::UIKit::UIApplication___sharedApplication(NULL))->KeyWindow())->RootViewController())->presentModalViewControllerAnimated((::app::iOS::UIKit::UIViewController*)imagePicker, true);
}

void iOSCameraImpl__TakePicture(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    iOSCameraImpl__EnsureInitialized(NULL);

    if (iOSCameraImpl___pendingTask == NULL)
    {
        iOSCameraImpl___pendingTask = ::app::Fuse::Camera::iOSCameraImpl_TakePictureTask__New_1(NULL, futurePath, options);
        iOSCameraImpl__StartTakePictureTask(NULL, iOSCameraImpl___pendingTask);
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Take Picture already in progress ")));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

iOSCameraImpl_TakePictureTask__uType* iOSCameraImpl_TakePictureTask__typeof()
{
    static ::uStaticStrong<iOSCameraImpl_TakePictureTask__uType*> type;
    if (type != NULL) return type;

    type = (iOSCameraImpl_TakePictureTask__uType*)::uAllocClassType(sizeof(iOSCameraImpl_TakePictureTask__uType), "Fuse.Camera.iOSCameraImpl.TakePictureTask", false, 1, 3, 0);

    type->__interface_0.__fp_imagePickerControllerDidFinishPickingMediaWithInfo = (void(*)(void*, ::app::iOS::UIKit::UIImagePickerController*, ::app::iOS::Foundation::NSDictionary*))iOSCameraImpl_TakePictureTask__imagePickerControllerDidFinishPickingMediaWithInfo;
    type->__interface_0.__fp_imagePickerControllerDidCancel = (void(*)(void*, ::app::iOS::UIKit::UIImagePickerController*))iOSCameraImpl_TakePictureTask__imagePickerControllerDidCancel;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUIImagePickerControllerDelegate__typeof(), offsetof(iOSCameraImpl_TakePictureTask__uType, __interface_0));

    type->SetStrongRefs(
        "_futurePath", offsetof(iOSCameraImpl_TakePictureTask, _futurePath),
        "_options", offsetof(iOSCameraImpl_TakePictureTask, _options),
        "Path", offsetof(iOSCameraImpl_TakePictureTask, Path));

    return type;
}

void iOSCameraImpl_TakePictureTask___ObjInit(iOSCameraImpl_TakePictureTask* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    __this->_futurePath = futurePath;
    __this->_options = options;
    __this->Path = ::app::Uno::IO::Path__Combine(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), ::uGetConstString("temp.jpg"));
}

void iOSCameraImpl_TakePictureTask__FireCallback(iOSCameraImpl_TakePictureTask* __this, bool cancelled)
{
    if (cancelled)
    {
        ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_futurePath)->Reject(::app::Uno::Exception__New_2(NULL, ::uGetConstString("User cancelled the image capture")));
    }
    else
    {
        ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_futurePath)->Resolve(::app::Fuse::Camera::PictureResult__New_1(NULL, __this->Path, __this->_rotation));
    }
}

void iOSCameraImpl_TakePictureTask__imagePickerControllerDidCancel(iOSCameraImpl_TakePictureTask* __this, ::app::iOS::UIKit::UIImagePickerController* imagePicker)
{
    ::uPtr< ::app::iOS::UIKit::UIImagePickerController*>(imagePicker)->dismissModalViewControllerAnimated(true);
    __this->FireCallback(true);
    ::app::Fuse::Camera::iOSCameraImpl___pendingTask = NULL;
}

void iOSCameraImpl_TakePictureTask__imagePickerControllerDidFinishPickingMediaWithInfo(iOSCameraImpl_TakePictureTask* __this, ::app::iOS::UIKit::UIImagePickerController* imagePicker, ::app::iOS::Foundation::NSDictionary* info)
{
    ::app::iOS::UIKit::UIImage* image = ::app::Fuse::Camera::iOSCameraImpl__ImageForKey(NULL, info, ::app::Fuse::Camera::iOSCameraImpl__ORIGINAL_IMAGE);
    ::app::iOS::CoreGraphics::CGSize origSize = ::uPtr< ::app::iOS::UIKit::UIImage*>(image)->Size();
    ::app::iOS::Foundation::NSDictionary* metadata = ::app::Fuse::Camera::iOSCameraImpl__DictionaryForKey(NULL, info, ::app::Fuse::Camera::iOSCameraImpl__MEDIA_METADATA);
    ::app::iOS::Foundation::NSNumber* orientation = ::app::Fuse::Camera::iOSCameraImpl__NumberForKey(NULL, metadata, ::app::Fuse::Camera::iOSCameraImpl__ORIENTATION);
    int orientationValue = 0;

    if (orientation != NULL)
    {
        orientationValue = ::uPtr< ::app::iOS::Foundation::NSNumber*>(orientation)->IntValue();
    }

    ::app::Uno::Int2 scaledSize = ::app::Fuse::Camera::TakePictureHelpers__GetAspectCorrectedSize(NULL, __this->_options, ::app::Uno::Int2__New_2(NULL, (int)origSize.Width, (int)origSize.Height));
    double scaleWidth = (double)(float)scaledSize.X / origSize.Width;
    double scaleHeight = (double)(float)scaledSize.Y / origSize.Height;
    ::app::iOS::CoreGraphics::CGSize size = ::app::iOS::CoreGraphics::Functions__CGSizeApplyAffineTransform(NULL, image->Size(), ::app::iOS::CoreGraphics::Functions__CGAffineTransformMakeScale(NULL, scaleWidth, scaleHeight));
    bool hasAlpha = false;
    float scale = 1.0f;
    ::app::iOS::UIKit::Functions__UIGraphicsBeginImageContextWithOptions(NULL, size, !hasAlpha, (double)scale);
    image->drawInRect(::app::iOS::CoreGraphics::CGRect__New_1(NULL, ::app::iOS::CoreGraphics::CGPoint__New_1(NULL, 0.0, 0.0), size));
    ::app::iOS::UIKit::UIImage* scaledImage = ::app::iOS::UIKit::Functions__UIGraphicsGetImageFromCurrentImageContext(NULL);

    try
    {
        ::app::Fuse::Camera::iOSCameraHelper__SaveImageJPG(NULL, ::uPtr< ::app::iOS::UIKit::UIImage*>(scaledImage)->Handle(), __this->Path);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uPtr< ::app::Uno::Exception*>(e)->Message(), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno"), 329);
        }
        else
        {
            throw __t;
        }
    }

    ::app::iOS::UIKit::Functions__UIGraphicsEndImageContext(NULL);
    ::uPtr< ::app::iOS::UIKit::UIImagePickerController*>(imagePicker)->dismissModalViewControllerAnimated(true);
    __this->FireCallback(false);
    ::app::Fuse::Camera::iOSCameraImpl___pendingTask = NULL;
}

iOSCameraImpl_TakePictureTask* iOSCameraImpl_TakePictureTask__New_1(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    iOSCameraImpl_TakePictureTask* inst = (iOSCameraImpl_TakePictureTask*)::uAllocObject(sizeof(iOSCameraImpl_TakePictureTask), iOSCameraImpl_TakePictureTask__typeof());
    inst->_ObjInit(futurePath, options);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PictureResult__uType* PictureResult__typeof()
{
    static ::uStaticStrong<PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (PictureResult__uType*)::uAllocClassType(sizeof(PictureResult__uType), "Fuse.Camera.PictureResult", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Path", offsetof(PictureResult, _Path));

    return type;
}

void PictureResult___ObjInit(PictureResult* __this, ::uString* path, int rotation)
{
    __this->Path(path);
    __this->Rotation(rotation);
}

::uString* PictureResult__get_Path(PictureResult* __this)
{
    return __this->_Path;
}

int PictureResult__get_Rotation(PictureResult* __this)
{
    return __this->_Rotation;
}

PictureResult* PictureResult__New_1(::uStatic* __this, ::uString* path, int rotation)
{
    PictureResult* inst = (PictureResult*)::uAllocObject(sizeof(PictureResult), PictureResult__typeof());
    inst->_ObjInit(path, rotation);
    return inst;
}

void PictureResult__set_Path(PictureResult* __this, ::uString* value)
{
    __this->_Path = value;
}

void PictureResult__set_Rotation(PictureResult* __this, int value)
{
    __this->_Rotation = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TakePictureHelpers__uType* TakePictureHelpers__typeof()
{
    static ::uStaticStrong<TakePictureHelpers__uType*> type;
    if (type != NULL) return type;

    type = (TakePictureHelpers__uType*)::uAllocClassType(sizeof(TakePictureHelpers__uType), "Fuse.Camera.TakePictureHelpers");

    return type;
}

::app::Uno::Int2 TakePictureHelpers__GetAspectCorrectedSize(::uStatic* __this, ::app::Fuse::Camera::TakePictureOptions* options, ::app::Uno::Int2 originalImageSize)
{
    if (!::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetHeightSet() && !::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetWidthSet())
    {
        return originalImageSize;
    }

    float targetWidth = (float)::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetWidth();
    float targetHeight = (float)options->TargetHeight();
    float ratio = 1.0f;
    float width = (float)originalImageSize.X;
    float height = (float)originalImageSize.Y;

    if (options->TargetWidthSet() && !options->TargetHeightSet())
    {
        float origRatio = height / width;
        targetHeight = targetWidth * origRatio;
    }
    else if (!options->TargetWidthSet() && options->TargetHeightSet())
    {
        float origRatio = width / height;
        targetWidth = targetHeight * origRatio;
    }

    float w = (float)originalImageSize.X;
    float h = (float)originalImageSize.Y;

    if (::app::Uno::Math__Floor_1(NULL, w) > targetWidth)
    {
        ratio = targetWidth / width;
        w = targetWidth;
        h = h * ratio;
    }

    if (::app::Uno::Math__Floor_1(NULL, h) > targetHeight)
    {
        ratio = targetHeight / height;
        w = width * ratio;
        h = targetHeight;
    }

    return ::app::Uno::Int2__New_2(NULL, (int)::app::Uno::Math__Floor_1(NULL, w), (int)::app::Uno::Math__Floor_1(NULL, h));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TakePictureOptions__uType* TakePictureOptions__typeof()
{
    static ::uStaticStrong<TakePictureOptions__uType*> type;
    if (type != NULL) return type;

    type = (TakePictureOptions__uType*)::uAllocClassType(sizeof(TakePictureOptions__uType), "Fuse.Camera.TakePictureOptions", false, 0, 0, 0);

    return type;
}

void TakePictureOptions___ObjInit(TakePictureOptions* __this)
{
    __this->_targetWidth = -1;
    __this->_targetHeight = -1;
    __this->_correctOrientation = true;
}

bool TakePictureOptions__get_CorrectOrientation(TakePictureOptions* __this)
{
    return __this->_correctOrientation;
}

int TakePictureOptions__get_TargetHeight(TakePictureOptions* __this)
{
    return __this->_targetHeight;
}

bool TakePictureOptions__get_TargetHeightSet(TakePictureOptions* __this)
{
    return __this->_TargetHeightSet;
}

int TakePictureOptions__get_TargetWidth(TakePictureOptions* __this)
{
    return __this->_targetWidth;
}

bool TakePictureOptions__get_TargetWidthSet(TakePictureOptions* __this)
{
    return __this->_TargetWidthSet;
}

TakePictureOptions* TakePictureOptions__New_1(::uStatic* __this)
{
    TakePictureOptions* inst = (TakePictureOptions*)::uAllocObject(sizeof(TakePictureOptions), TakePictureOptions__typeof());
    inst->_ObjInit();
    return inst;
}

void TakePictureOptions__set_CorrectOrientation(TakePictureOptions* __this, bool value)
{
    __this->_correctOrientation = value;
}

void TakePictureOptions__set_TargetHeight(TakePictureOptions* __this, int value)
{
    if (!__this->TargetHeightSet())
    {
        __this->TargetHeightSet(true);
    }

    __this->_targetHeight = value;
}

void TakePictureOptions__set_TargetHeightSet(TakePictureOptions* __this, bool value)
{
    __this->_TargetHeightSet = value;
}

void TakePictureOptions__set_TargetWidth(TakePictureOptions* __this, int value)
{
    if (!__this->TargetWidthSet())
    {
        __this->TargetWidthSet(true);
    }

    __this->_targetWidth = value;
}

void TakePictureOptions__set_TargetWidthSet(TakePictureOptions* __this, bool value)
{
    __this->_TargetWidthSet = value;
}

}}}
