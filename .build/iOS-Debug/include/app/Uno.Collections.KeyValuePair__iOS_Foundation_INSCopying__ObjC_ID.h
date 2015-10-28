// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__I_O_S_FOUNDATION_I_N_S_COPYING__OBJ_C_I_D_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__I_O_S_FOUNDATION_I_N_S_COPYING__OBJ_C_I_D_H__

#include <app/Uno.Object.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID;

struct KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__uType : ::uStructType
{
};

KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__uType* KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__typeof();

void KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID___ObjInit(KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID* __this, ::uObject* key, ::id value);
::uObject* KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__get_Key(KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID* __this);
::id KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__get_Value(KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID* __this);
KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__New_1(::uStatic* __this, ::uObject* key, ::id value);

struct KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID
{
    ::uStrong< ::uObject*> _key;
    ::id _value;

    void _ObjInit(::uObject* key, ::id value) { KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID___ObjInit(this, key, value); }
    ::uObject* Key() { return KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__get_Key(this); }
    ::id Value() { return KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID__get_Value(this); }
};

}}}


#endif
