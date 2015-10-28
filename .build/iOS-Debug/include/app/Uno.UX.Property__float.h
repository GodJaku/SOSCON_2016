// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float;

struct Property__float__uType : ::uClassType
{
    float(*__fp_OnGet)(Property__float*);
    void(*__fp_OnSet)(Property__float*, float, ::uObject*);
};

Property__float__uType* Property__float__typeof();

void Property__float___ObjInit(Property__float* __this);
float Property__float__GetRestState(Property__float* __this);
float Property__float__OnGet(Property__float* __this);
void Property__float__OnSet(Property__float* __this, float value, ::uObject* origin);
void Property__float__RetainRestState(Property__float* __this);
void Property__float__Set(Property__float* __this, float value, ::uObject* origin);

struct Property__float : ::uObject
{
    bool _hasRestState;
    float _restState;

    void _ObjInit() { Property__float___ObjInit(this); }
    float GetRestState() { return Property__float__GetRestState(this); }
    float OnGet() { return (((Property__float__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnSet(float value, ::uObject* origin) { (((Property__float__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void RetainRestState() { Property__float__RetainRestState(this); }
    void Set(float value, ::uObject* origin) { Property__float__Set(this, value, origin); }
};

}}}


#endif
