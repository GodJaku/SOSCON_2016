// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_ARRAY_H__
#define __APP_I_O_S_FOUNDATION_N_S_ARRAY_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSArray;

struct NSArray__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSArray__uType* NSArray__typeof();

void NSArray___ObjInit_4(NSArray* __this);
::uULong NSArray__count(NSArray* __this);
::uULong NSArray__get_Count(NSArray* __this);
void NSArray__init(NSArray* __this);
::id NSArray__objectAtIndex(NSArray* __this, ::uULong index_);

struct NSArray : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4() { NSArray___ObjInit_4(this); }
    ::uULong count() { return NSArray__count(this); }
    ::uULong Count() { return NSArray__get_Count(this); }
    ::id objectAtIndex(::uULong index_) { return NSArray__objectAtIndex(this, index_); }
};

}}}


#endif
