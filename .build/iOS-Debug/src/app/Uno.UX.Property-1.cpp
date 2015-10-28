#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Property__Fuse_Node.h>
#include <app/Uno.UX.Property__object.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__object.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Uno {
namespace UX {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__bool__uType* Property__bool__typeof()
{
    static ::uStaticStrong<Property__bool__uType*> type;
    if (type != NULL) return type;

    type = (Property__bool__uType*)::uAllocClassType(sizeof(Property__bool__uType), "Uno.UX.Property<bool>", false, 0, 0, 0);

    type->__fp_OnGet = Property__bool__OnGet;
    type->__fp_OnSet = Property__bool__OnSet;

    return type;
}

void Property__bool___ObjInit(Property__bool* __this)
{
}

void Property__bool__add_ValueChanged(Property__bool* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

bool Property__bool__Get(Property__bool* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

bool Property__bool__GetRestState(Property__bool* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__bool__OnAddListener(Property__bool* __this, ::uDelegate* listener)
{
}

bool Property__bool__OnGet(Property__bool* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__bool__OnRemoveListener(Property__bool* __this, ::uDelegate* listener)
{
}

void Property__bool__OnSet(Property__bool* __this, bool value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__bool__remove_ValueChanged(Property__bool* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__bool__RetainRestState(Property__bool* __this)
{
    if (!__this->_hasRestState)
    {
        bool v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__bool__Set(Property__bool* __this, bool value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__bool__SetRestState(Property__bool* __this, bool value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__float__uType* Property__float__typeof()
{
    static ::uStaticStrong<Property__float__uType*> type;
    if (type != NULL) return type;

    type = (Property__float__uType*)::uAllocClassType(sizeof(Property__float__uType), "Uno.UX.Property<float>", false, 0, 0, 0);

    type->__fp_OnGet = Property__float__OnGet;
    type->__fp_OnSet = Property__float__OnSet;

    return type;
}

void Property__float___ObjInit(Property__float* __this)
{
}

float Property__float__GetRestState(Property__float* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

float Property__float__OnGet(Property__float* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float__OnSet(Property__float* __this, float value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float__RetainRestState(Property__float* __this)
{
    if (!__this->_hasRestState)
    {
        float v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__float__Set(Property__float* __this, float value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__float4__uType* Property__float4__typeof()
{
    static ::uStaticStrong<Property__float4__uType*> type;
    if (type != NULL) return type;

    type = (Property__float4__uType*)::uAllocClassType(sizeof(Property__float4__uType), "Uno.UX.Property<float4>", false, 0, 0, 0);

    type->__fp_OnGet = Property__float4__OnGet;
    type->__fp_OnSet = Property__float4__OnSet;

    return type;
}

void Property__float4___ObjInit(Property__float4* __this)
{
}

::app::Uno::Float4 Property__float4__GetRestState(Property__float4* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

::app::Uno::Float4 Property__float4__OnGet(Property__float4* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float4__OnSet(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float4__RetainRestState(Property__float4* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Float4 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__float4__Set(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__float4__SetRestState(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Node__uType* Property__Fuse_Node__typeof()
{
    static ::uStaticStrong<Property__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Node__uType*)::uAllocClassType(sizeof(Property__Fuse_Node__uType), "Uno.UX.Property<Fuse.Node>", false, 0, 1, 0);

    type->__fp_OnGet = Property__Fuse_Node__OnGet;
    type->__fp_OnSet = Property__Fuse_Node__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Node, _restState));

    return type;
}

void Property__Fuse_Node___ObjInit(Property__Fuse_Node* __this)
{
}

::app::Fuse::Node* Property__Fuse_Node__Get(Property__Fuse_Node* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Node* Property__Fuse_Node__OnGet(Property__Fuse_Node* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Node__OnSet(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Node__RetainRestState(Property__Fuse_Node* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Node* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Node__Set(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Node__SetRestState(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__object__uType* Property__object__typeof()
{
    static ::uStaticStrong<Property__object__uType*> type;
    if (type != NULL) return type;

    type = (Property__object__uType*)::uAllocClassType(sizeof(Property__object__uType), "Uno.UX.Property<object>", false, 0, 1, 0);

    type->__fp_OnGet = Property__object__OnGet;
    type->__fp_OnSet = Property__object__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__object, _restState));

    return type;
}

void Property__object___ObjInit(Property__object* __this)
{
}

void Property__object__add_ValueChanged(Property__object* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

void Property__object__OnAddListener(Property__object* __this, ::uDelegate* listener)
{
}

::uObject* Property__object__OnGet(Property__object* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__object__OnRemoveListener(Property__object* __this, ::uDelegate* listener)
{
}

void Property__object__OnSet(Property__object* __this, ::uObject* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__object__remove_ValueChanged(Property__object* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__object__RetainRestState(Property__object* __this)
{
    if (!__this->_hasRestState)
    {
        ::uObject* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__object__SetRestState(Property__object* __this, ::uObject* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__string__uType* Property__string__typeof()
{
    static ::uStaticStrong<Property__string__uType*> type;
    if (type != NULL) return type;

    type = (Property__string__uType*)::uAllocClassType(sizeof(Property__string__uType), "Uno.UX.Property<string>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__string__OnAddListener;
    type->__fp_OnGet = Property__string__OnGet;
    type->__fp_OnRemoveListener = Property__string__OnRemoveListener;
    type->__fp_OnSet = Property__string__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__string, _restState));

    return type;
}

void Property__string___ObjInit(Property__string* __this)
{
}

void Property__string__add_ValueChanged(Property__string* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::uString* Property__string__Get(Property__string* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

void Property__string__OnAddListener(Property__string* __this, ::uDelegate* listener)
{
}

::uString* Property__string__OnGet(Property__string* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__string__OnRemoveListener(Property__string* __this, ::uDelegate* listener)
{
}

void Property__string__OnSet(Property__string* __this, ::uString* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__string__remove_ValueChanged(Property__string* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__string__RetainRestState(Property__string* __this)
{
    if (!__this->_hasRestState)
    {
        ::uString* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__string__SetRestState(Property__string* __this, ::uString* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

}}}
