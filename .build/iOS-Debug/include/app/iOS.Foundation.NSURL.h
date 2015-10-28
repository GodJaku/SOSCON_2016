// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_U_R_L_H__
#define __APP_I_O_S_FOUNDATION_N_S_U_R_L_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSURL;

struct NSURL__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSURL__uType* NSURL__typeof();

void NSURL___ObjInit_4(NSURL* __this);
void NSURL___ObjInit_5(NSURL* __this, ::id __id);
::id NSURL___urlWithString(::uStatic* __this, ::uString* URLString_);
::uString* NSURL__absoluteString(NSURL* __this);
::uString* NSURL__get_AbsoluteString(NSURL* __this);
void NSURL__initFileURLWithPath(NSURL* __this, ::uString* path_);
void NSURL__initWithString(NSURL* __this, ::uString* URLString_);
NSURL* NSURL__New_5(::uStatic* __this);
NSURL* NSURL__New_6(::uStatic* __this, ::id __id);

struct NSURL : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4() { NSURL___ObjInit_4(this); }
    void _ObjInit_5(::id __id) { NSURL___ObjInit_5(this, __id); }
    ::uString* absoluteString() { return NSURL__absoluteString(this); }
    ::uString* AbsoluteString() { return NSURL__get_AbsoluteString(this); }
    void initFileURLWithPath(::uString* path_) { NSURL__initFileURLWithPath(this, path_); }
    void initWithString(::uString* URLString_) { NSURL__initWithString(this, URLString_); }
};

}}}


#endif
