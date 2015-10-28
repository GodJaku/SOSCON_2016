// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_MUTABLE_ARRAY_H__
#define __APP_I_O_S_FOUNDATION_N_S_MUTABLE_ARRAY_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSArray.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSMutableArray;

struct NSMutableArray__uType : ::app::iOS::Foundation::NSArray__uType
{
};

NSMutableArray__uType* NSMutableArray__typeof();

void NSMutableArray___ObjInit_7(NSMutableArray* __this);
void NSMutableArray__addObject(NSMutableArray* __this, ::id anObject_);
void NSMutableArray__init(NSMutableArray* __this);
NSMutableArray* NSMutableArray__New_7(::uStatic* __this);

struct NSMutableArray : ::app::iOS::Foundation::NSArray
{
    void _ObjInit_7() { NSMutableArray___ObjInit_7(this); }
    void addObject(::id anObject_) { NSMutableArray__addObject(this, anObject_); }
};

}}}


#endif
