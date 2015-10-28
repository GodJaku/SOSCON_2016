// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_OBJECT_H__
#define __APP_I_O_S_FOUNDATION_N_S_OBJECT_H__

#include <app/ObjC.Object.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSObject;

struct NSObject__uType : ::app::ObjC::Object__uType
{
    void(*__fp_init)(NSObject*);
};

NSObject__uType* NSObject__typeof();

void NSObject___ObjInit_2(NSObject* __this);
void NSObject___ObjInit_3(NSObject* __this, ::id __id);
void NSObject__init(NSObject* __this);
::id NSObject__mutableCopy(NSObject* __this);

struct NSObject : ::app::ObjC::Object
{
    void _ObjInit_2() { NSObject___ObjInit_2(this); }
    void _ObjInit_3(::id __id) { NSObject___ObjInit_3(this, __id); }
    void init() { (((NSObject__uType*)this->__obj_type)->__fp_init)(this); }
    ::id mutableCopy() { return NSObject__mutableCopy(this); }
};

}}}


#endif
