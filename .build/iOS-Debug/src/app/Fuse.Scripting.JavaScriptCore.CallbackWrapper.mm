// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Scripting.JavaScriptCore.CallbackWrapper.h>
#include <app/Fuse.Scripting.JavaScriptCore.ContextualCallback.h>
#include <app/Fuse.Scripting.JavaScriptCore.ObjectMarshaller.h>
#include <app/iOS.JavaScriptCore.JSContext.h>
#include <app/iOS.JavaScriptCore.JSValue.h>
#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.Reference.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

CallbackWrapper__uType* CallbackWrapper__typeof()
{
    static ::uStaticStrong<CallbackWrapper__uType*> type;
    if (type != NULL) return type;

    type = (CallbackWrapper__uType*)::uAllocClassType(sizeof(CallbackWrapper__uType), "Fuse.Scripting.JavaScriptCore.CallbackWrapper");

    return type;
}

::app::iOS::JavaScriptCore::JSValue* CallbackWrapper__Wrap(::uStatic* __this, ::uDelegate* callback_, ::app::iOS::JavaScriptCore::JSContext* context_)
{
    Uno_StrongReference *objcCallback = [[Uno_StrongReference alloc] initWithUnoObject:callback_];
    JSValue *(^callbackBlock)() = ^ JSValue *() {
        NSArray *args = [JSContext currentArguments];
        JSContext *context = [JSContext currentContext];
        ::app::iOS::JavaScriptCore::JSContext* unoContext =
            (::app::iOS::JavaScriptCore::JSContext*) uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof());
    
        ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller =
            ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller__New_1(NULL, unoContext);
    
        // TODO: Change this to use UXL when array syntax is available for it.
        ::uArray* wrappedArgs = ::uNewArray(::uObject__typeof(), (int) args.count);
        int i = 0;
        for (JSValue *arg in args) {
            ::app::iOS::JavaScriptCore::JSValue* unoArg =
                (::app::iOS::JavaScriptCore::JSValue*) uObjC::Lifetime::GetUnoObject(arg, ::app::iOS::JavaScriptCore::JSValue__typeof());
            wrappedArgs->ItemStrong<::uObject*>(i) =
                marshaller->Wrap(unoArg);
            ++i;
        }
        ::uDelegate* unoCallback =
            (::uDelegate*) [objcCallback unoObject];
    
        ::uObject* result =
            unoCallback->Invoke< ::uObject*, ::app::iOS::JavaScriptCore::JSContext*, ::uArray*>(unoContext, wrappedArgs);
        ::app::iOS::JavaScriptCore::JSValue* unwrappedResult = marshaller->Unwrap(result);
        return uObjC::Lifetime::GetNativeHandle((::uObject*) unwrappedResult);
    };
    return ::app::iOS::JavaScriptCore::JSValue___valueWithObjectInContext(NULL, Block_copy(callbackBlock), context_);
}

}}}}
