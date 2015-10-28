// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_ARRAY_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_ARRAY_H__

#include <app/Fuse.Scripting.Array.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace JavaScriptCore { struct ObjectMarshaller; } } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct Array;

struct Array__uType : ::app::Fuse::Scripting::Array__uType
{
};

Array__uType* Array__typeof();

void Array___ObjInit_1(Array* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* array);
bool Array__Equals(Array* __this, ::uObject* o);
bool Array__Equals_2(Array* __this, ::app::Fuse::Scripting::Array* a);
::uObject* Array__get_Item(Array* __this, int index);
int Array__get_Length(Array* __this);
int Array__GetHashCode(Array* __this);
Array* Array__New_1(::uStatic* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* array);
void Array__set_Item(Array* __this, int index, ::uObject* value);

struct Array : ::app::Fuse::Scripting::Array
{
    ::uStrong< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*> _marshaller;
    ::uStrong< ::app::iOS::JavaScriptCore::JSValue*> _array;

    void _ObjInit_1(::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* array) { Array___ObjInit_1(this, marshaller, array); }
};

}}}}


#endif
