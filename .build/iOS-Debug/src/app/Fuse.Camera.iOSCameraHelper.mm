// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Camera.iOSCameraHelper.h>
#include <app/ObjC.ID.h>
#include <app/Uno.String.h>
#include <ImageIO/ImageIO.h>
#include <MobileCoreServices/MobileCoreServices.h>

namespace app {
namespace Fuse {
namespace Camera {

iOSCameraHelper__uType* iOSCameraHelper__typeof()
{
    static ::uStaticStrong<iOSCameraHelper__uType*> type;
    if (type != NULL) return type;

    type = (iOSCameraHelper__uType*)::uAllocClassType(sizeof(iOSCameraHelper__uType), "Fuse.Camera.iOSCameraHelper", false, 0, 0, 0);

    return type;
}

void iOSCameraHelper__SaveImageJPG(::uStatic* __this, ::id image_, ::uString* path_)
{
    // http://stackoverflow.com/questions/1320988/saving-cgimageref-to-a-png-file
    // http://stackoverflow.com/questions/14831312/ios-writing-a-cgimageref-disk-in-png-or-jpeg
    ::NSString *path = uObjC::NativeString(path_);
    [UIImageJPEGRepresentation(image_, 0.9f) writeToFile:path atomically:YES];
    return;
}

}}}
