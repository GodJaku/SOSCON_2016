// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_CORE_IMAGE_C_I_IMAGE_H__
#define __APP_I_O_S_CORE_IMAGE_C_I_IMAGE_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }

namespace app {
namespace iOS {
namespace CoreImage {

struct CIImage;

struct CIImage__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

CIImage__uType* CIImage__typeof();

CIImage* CIImage___imageWithContentsOfURL(::uStatic* __this, ::app::iOS::Foundation::NSURL* url_);

struct CIImage : ::app::iOS::Foundation::NSObject
{
};

}}}


#endif
