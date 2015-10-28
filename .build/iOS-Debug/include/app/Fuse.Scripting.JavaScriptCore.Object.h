// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_OBJECT_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_OBJECT_H__

#include <app/Fuse.Scripting.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace JavaScriptCore { struct ObjectMarshaller; } } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct Object;

struct Object__uType : ::app::Fuse::Scripting::Object__uType
{
};

Object__uType* Object__typeof();

void Object___ObjInit_1(Object* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value);
::uObject* Object__CallMethod(Object* __this, ::uString* name, ::uArray* args);
bool Object__ContainsKey(Object* __this, ::uString* key);
bool Object__Equals_2(Object* __this, ::app::Fuse::Scripting::Object* o);
::uObject* Object__get_Item(Object* __this, ::uString* key);
::uArray* Object__get_Keys(Object* __this);
bool Object__InstanceOf(Object* __this, ::app::Fuse::Scripting::Function* type);
Object* Object__New_1(::uStatic* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value);
void Object__set_Item(Object* __this, ::uString* key, ::uObject* value);

struct Object : ::app::Fuse::Scripting::Object
{
    ::uStrong< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*> _marshaller;
    ::uStrong< ::app::iOS::JavaScriptCore::JSValue*> _value;

    void _ObjInit_1(::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value) { Object___ObjInit_1(this, marshaller, value); }
};

}}}}


#endif
