// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_CALLBACK_WRAPPER_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_CALLBACK_WRAPPER_H__

#include <Uno.h>
namespace app { namespace iOS { namespace JavaScriptCore { struct JSContext; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct CallbackWrapper__uType : ::uClassType
{
};

CallbackWrapper__uType* CallbackWrapper__typeof();

::app::iOS::JavaScriptCore::JSValue* CallbackWrapper__Wrap(::uStatic* __this, ::uDelegate* callback_, ::app::iOS::JavaScriptCore::JSContext* context_);

}}}}


#endif
