// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_NUMBER_H__
#define __APP_I_O_S_FOUNDATION_N_S_NUMBER_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSValue.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSNumber;

struct NSNumber__uType : ::app::iOS::Foundation::NSValue__uType
{
};

NSNumber__uType* NSNumber__typeof();

void NSNumber___ObjInit_6(NSNumber* __this, ::id __id);
int NSNumber__get_IntValue(NSNumber* __this);
int NSNumber__intValue(NSNumber* __this);
NSNumber* NSNumber__New_8(::uStatic* __this, ::id __id);

struct NSNumber : ::app::iOS::Foundation::NSValue
{
    void _ObjInit_6(::id __id) { NSNumber___ObjInit_6(this, __id); }
    int IntValue() { return NSNumber__get_IntValue(this); }
    int intValue() { return NSNumber__intValue(this); }
};

}}}


#endif
