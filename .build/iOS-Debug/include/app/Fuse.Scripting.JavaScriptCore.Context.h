// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_CONTEXT_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_CONTEXT_H__

#include <app/Fuse.Scripting.Context.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace JavaScriptCore { struct ObjectMarshaller; } } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSContext; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct Context;

struct Context__uType : ::app::Fuse::Scripting::Context__uType
{
};

Context__uType* Context__typeof();

void Context___ObjInit_1(Context* __this, ::uObject* ownerThread);
void Context__Dispose(Context* __this);
::uObject* Context__Evaluate(Context* __this, ::uString* fileName, ::uString* code);
::app::Fuse::Scripting::Object* Context__get_GlobalObject(Context* __this);
Context* Context__New_1(::uStatic* __this, ::uObject* ownerThread);
void Context__OnException(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context, ::app::iOS::JavaScriptCore::JSValue* value);

struct Context : ::app::Fuse::Scripting::Context
{
    ::uStrong< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*> _marshaller;
    ::uStrong< ::app::Fuse::Scripting::Object*> _global;
    ::uStrong< ::app::iOS::JavaScriptCore::JSContext*> _js;

    void _ObjInit_1(::uObject* ownerThread) { Context___ObjInit_1(this, ownerThread); }
};

}}}}


#endif
