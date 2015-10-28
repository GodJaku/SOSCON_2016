// This file was generated based on '/usr/local/share/uno/Packages/ObjC/0.13.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OBJ_C_OBJECT_H__
#define __APP_OBJ_C_OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace ObjC {

struct Object;

struct Object__uType : ::uClassType
{
};

Object__uType* Object__typeof();

void Object__Finalize(Object* __this);
void Object____clearHandle(Object* __this);
void Object____initHandle(Object* __this, ::id handle_);
void Object___ObjInit(Object* __this);
void Object___ObjInit_1(Object* __this, ::id handle);
bool Object__Equals(Object* __this, ::uObject* obj);
::id Object__get_Handle(Object* __this);
int Object__GetHashCode(Object* __this);
bool Object__isEqual(Object* __this, Object* obj_);
::id Object__op_Implicit(::uStatic* __this, Object* obj);
::uString* Object__ToString(Object* __this);

struct Object : ::uObject
{
    ::id __handle;

    void __clearHandle() { Object____clearHandle(this); }
    void __initHandle(::id handle_) { Object____initHandle(this, handle_); }
    void _ObjInit() { Object___ObjInit(this); }
    void _ObjInit_1(::id handle) { Object___ObjInit_1(this, handle); }
    ::id Handle() { return Object__get_Handle(this); }
    bool isEqual(Object* obj_) { return Object__isEqual(this, obj_); }
};

}}


#endif
