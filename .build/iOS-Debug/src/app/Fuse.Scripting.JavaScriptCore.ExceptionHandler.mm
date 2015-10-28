// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Scripting.JavaScriptCore.ExceptionHandler.h>
#include <app/Fuse.Scripting.JavaScriptCore.ExceptionHandlerDelegate.h>
#include <app/iOS.JavaScriptCore.JSContext.h>
#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.Reference.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

ExceptionHandler__uType* ExceptionHandler__typeof()
{
    static ::uStaticStrong<ExceptionHandler__uType*> type;
    if (type != NULL) return type;

    type = (ExceptionHandler__uType*)::uAllocClassType(sizeof(ExceptionHandler__uType), "Fuse.Scripting.JavaScriptCore.ExceptionHandler");

    return type;
}

void ExceptionHandler__Set(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context_, ::uDelegate* handler_)
{
    JSContext *objcContext = uObjC::Lifetime::GetNativeHandle((::uObject*)context_);
    Uno_StrongReference *objcHandler = [[Uno_StrongReference alloc] initWithUnoObject:handler_];
    [objcContext setExceptionHandler:Block_copy(^(JSContext* context, JSValue* value) {
        ::uDelegate* unoHandler =
            (::uDelegate*)[objcHandler unoObject];
        ::app::iOS::JavaScriptCore::JSContext* unoContext =
            (::app::iOS::JavaScriptCore::JSContext*) uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof());
        ::app::iOS::JavaScriptCore::JSValue* unoValue =
            (::app::iOS::JavaScriptCore::JSValue*) uObjC::Lifetime::GetUnoObject(value, ::app::iOS::JavaScriptCore::JSValue__typeof());
        unoHandler->InvokeVoid< ::app::iOS::JavaScriptCore::JSContext*, ::app::iOS::JavaScriptCore::JSValue*>(unoContext, unoValue);
    })];
}

}}}}
