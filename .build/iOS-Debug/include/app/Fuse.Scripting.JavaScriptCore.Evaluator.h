// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_EVALUATOR_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_EVALUATOR_H__

#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSContext; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct Evaluator__uType : ::uClassType
{
};

Evaluator__uType* Evaluator__typeof();

::app::iOS::JavaScriptCore::JSValue* Evaluator__EvaluateWithSourceURL(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context_, ::uString* code_, ::app::iOS::Foundation::NSURL* url_);

}}}}


#endif
