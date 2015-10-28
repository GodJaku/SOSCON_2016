// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_ERROR_H__
#define __APP_I_O_S_FOUNDATION_N_S_ERROR_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSError;

struct NSError__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSError__uType* NSError__typeof();

int NSError__code(NSError* __this);
int NSError__get_Code(NSError* __this);

struct NSError : ::app::iOS::Foundation::NSObject
{
    int code() { return NSError__code(this); }
    int Code() { return NSError__get_Code(this); }
};

}}}


#endif
