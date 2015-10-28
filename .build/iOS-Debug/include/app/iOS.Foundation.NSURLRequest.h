// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_U_R_L_REQUEST_H__
#define __APP_I_O_S_FOUNDATION_N_S_U_R_L_REQUEST_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }

namespace app {
namespace iOS {
namespace Foundation {

struct NSURLRequest;

struct NSURLRequest__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSURLRequest__uType* NSURLRequest__typeof();

void NSURLRequest___ObjInit_5(NSURLRequest* __this);
void NSURLRequest__initWithURL(NSURLRequest* __this, ::app::iOS::Foundation::NSURL* URL_);
NSURLRequest* NSURLRequest__New_5(::uStatic* __this);

struct NSURLRequest : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_5() { NSURLRequest___ObjInit_5(this); }
    void initWithURL(::app::iOS::Foundation::NSURL* URL_) { NSURLRequest__initWithURL(this, URL_); }
};

}}}


#endif
