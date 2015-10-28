// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Scripting.JavaScriptCore.Evaluator.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.JavaScriptCore.JSContext.h>
#include <app/iOS.JavaScriptCore.JSValue.h>
#include <app/Uno.String.h>
#include <Availability.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

Evaluator__uType* Evaluator__typeof()
{
    static ::uStaticStrong<Evaluator__uType*> type;
    if (type != NULL) return type;

    type = (Evaluator__uType*)::uAllocClassType(sizeof(Evaluator__uType), "Fuse.Scripting.JavaScriptCore.Evaluator");

    return type;
}

::app::iOS::JavaScriptCore::JSValue* Evaluator__EvaluateWithSourceURL(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context_, ::uString* code_, ::app::iOS::Foundation::NSURL* url_)
{
    if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1)
    {
        return context_->evaluateScript(code_);
    }
    else
    {
        return context_->evaluateScriptWithSourceURL(code_, url_);
    }
}

}}}}
