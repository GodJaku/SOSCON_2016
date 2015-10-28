// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_OBJECT_MARSHALLER_H__
#define __APP_FUSE_SCRIPTING_JAVA_SCRIPT_CORE_OBJECT_MARSHALLER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSContext; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

struct ObjectMarshaller;

struct ObjectMarshaller__uType : ::uClassType
{
};

ObjectMarshaller__uType* ObjectMarshaller__typeof();

void ObjectMarshaller___ObjInit(ObjectMarshaller* __this, ::app::iOS::JavaScriptCore::JSContext* context);
ObjectMarshaller* ObjectMarshaller__New_1(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context);
::app::iOS::Foundation::NSArray* ObjectMarshaller__ToNSArray(ObjectMarshaller* __this, ::uArray* args);
::app::iOS::JavaScriptCore::JSValue* ObjectMarshaller__Unwrap(ObjectMarshaller* __this, ::uObject* obj);
::uObject* ObjectMarshaller__Wrap(ObjectMarshaller* __this, ::app::iOS::JavaScriptCore::JSValue* value);

struct ObjectMarshaller : ::uObject
{
    ::uStrong< ::app::iOS::JavaScriptCore::JSContext*> _js;
    ::uStrong< ::app::iOS::JavaScriptCore::JSValue*> _arrayType;
    ::uStrong< ::app::iOS::JavaScriptCore::JSValue*> _functionType;

    void _ObjInit(::app::iOS::JavaScriptCore::JSContext* context) { ObjectMarshaller___ObjInit(this, context); }
    ::app::iOS::Foundation::NSArray* ToNSArray(::uArray* args) { return ObjectMarshaller__ToNSArray(this, args); }
    ::app::iOS::JavaScriptCore::JSValue* Unwrap(::uObject* obj) { return ObjectMarshaller__Unwrap(this, obj); }
    ::uObject* Wrap(::app::iOS::JavaScriptCore::JSValue* value) { return ObjectMarshaller__Wrap(this, value); }
};

}}}}


#endif
