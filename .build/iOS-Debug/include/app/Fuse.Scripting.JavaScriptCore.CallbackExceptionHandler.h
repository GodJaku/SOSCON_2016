// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_CALLBACK_EXCEPTION_HANDLER_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_CALLBACK_EXCEPTION_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace JavaScriptCore { struct JSContext; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct CallbackExceptionHandler;

struct CallbackExceptionHandler__uType : ::uClassType
{
};

CallbackExceptionHandler__uType* CallbackExceptionHandler__typeof();

void CallbackExceptionHandler___ObjInit(CallbackExceptionHandler* __this, ::uDelegate* callback);
::uObject* CallbackExceptionHandler__Call(CallbackExceptionHandler* __this, ::app::iOS::JavaScriptCore::JSContext* context, ::uArray* args);
CallbackExceptionHandler* CallbackExceptionHandler__New_1(::uStatic* __this, ::uDelegate* callback);

struct CallbackExceptionHandler : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::uDelegate* callback) { CallbackExceptionHandler___ObjInit(this, callback); }
    ::uObject* Call(::app::iOS::JavaScriptCore::JSContext* context, ::uArray* args) { return CallbackExceptionHandler__Call(this, context, args); }
};

}}}}


#endif
