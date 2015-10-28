// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_FUNCTION_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_FUNCTION_H__

#include <app/Fuse.Scripting.Function.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace JavaScriptCore { struct ObjectMarshaller; } } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct Function;

struct Function__uType : ::app::Fuse::Scripting::Function__uType
{
};

Function__uType* Function__typeof();

void Function___ObjInit_1(Function* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value);
::uObject* Function__Call(Function* __this, ::uArray* args);
::app::Fuse::Scripting::Object* Function__Construct(Function* __this, ::uArray* args);
bool Function__Equals_2(Function* __this, ::app::Fuse::Scripting::Function* f);
Function* Function__New_1(::uStatic* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value);

struct Function : ::app::Fuse::Scripting::Function
{
    ::uStrong< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*> _marshaller;
    ::uStrong< ::app::iOS::JavaScriptCore::JSValue*> _value;

    void _ObjInit_1(::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value) { Function___ObjInit_1(this, marshaller, value); }
};

}}}}


#endif
