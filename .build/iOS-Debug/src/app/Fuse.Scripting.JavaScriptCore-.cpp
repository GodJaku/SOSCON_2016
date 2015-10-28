#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Error.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.IDispatcher.h>
#include <app/Fuse.Scripting.JavaScriptCore.Array.h>
#include <app/Fuse.Scripting.JavaScriptCore.CallbackExceptionHandler.h>
#include <app/Fuse.Scripting.JavaScriptCore.CallbackWrapper.h>
#include <app/Fuse.Scripting.JavaScriptCore.Context.h>
#include <app/Fuse.Scripting.JavaScriptCore.ContextualCallback.h>
#include <app/Fuse.Scripting.JavaScriptCore.Evaluator.h>
#include <app/Fuse.Scripting.JavaScriptCore.ExceptionHandler.h>
#include <app/Fuse.Scripting.JavaScriptCore.ExceptionHandlerDelegate.h>
#include <app/Fuse.Scripting.JavaScriptCore.Function.h>
#include <app/Fuse.Scripting.JavaScriptCore.Object.h>
#include <app/Fuse.Scripting.JavaScriptCore.ObjectMarshaller.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.ScriptException.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.Foundation.NSMutableArray.h>
#include <app/iOS.Foundation.NSString.h>
#include <app/iOS.Foundation.NSStringExtensions.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.JavaScriptCore.JSContext.h>
#include <app/iOS.JavaScriptCore.JSValue.h>
#include <app/ObjC.ID.h>
#include <app/ObjC.Object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace JavaScriptCore {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Array__uType* Array__typeof()
{
    static ::uStaticStrong<Array__uType*> type;
    if (type != NULL) return type;

    type = (Array__uType*)::uAllocClassType(sizeof(Array__uType), "Fuse.Scripting.JavaScriptCore.Array", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Array__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Array__Equals;
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Array*, ::app::Fuse::Scripting::Array*))Array__Equals_2;
    type->__fp_get_Item = (::uObject*(*)(::app::Fuse::Scripting::Array*, int))Array__get_Item;
    type->__fp_get_Length = (int(*)(::app::Fuse::Scripting::Array*))Array__get_Length;
    type->__fp_GetHashCode = (int(*)(::uObject*))Array__GetHashCode;
    type->__fp_set_Item = (void(*)(::app::Fuse::Scripting::Array*, int, ::uObject*))Array__set_Item;

    type->SetStrongRefs(
        "_array", offsetof(Array, _array),
        "_marshaller", offsetof(Array, _marshaller));

    return type;
}

void Array___ObjInit_1(Array* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* array)
{
    ::app::Fuse::Scripting::Array___ObjInit(__this);
    __this->_marshaller = marshaller;
    __this->_array = array;
}

bool Array__Equals(Array* __this, ::uObject* o)
{
    Array* a = ::uAs< Array*>(o, Array__typeof());

    if (a == NULL)
    {
        return false;
    }

    return __this->Equals_2((::app::Fuse::Scripting::Array*)a);
}

bool Array__Equals_2(Array* __this, ::app::Fuse::Scripting::Array* a)
{
    Array* jsa = ::uCast< Array*>(a, Array__typeof());
    return ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_array)->Equals((::uObject*)::uPtr< Array*>(jsa)->_array);
}

::uObject* Array__get_Item(Array* __this, int index)
{
    return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Wrap(::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_array)->valueAtIndex((::uULong)(::uUInt)index));
}

int Array__get_Length(Array* __this)
{
    return (int)::uPtr< ::app::iOS::Foundation::NSArray*>(::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_array)->toArray())->count();
}

int Array__GetHashCode(Array* __this)
{
    return ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_array)->GetHashCode();
}

Array* Array__New_1(::uStatic* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* array)
{
    Array* inst = (Array*)::uAllocObject(sizeof(Array), Array__typeof());
    inst->_ObjInit_1(marshaller, array);
    return inst;
}

void Array__set_Item(Array* __this, int index, ::uObject* value)
{
    ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_array)->setValueAtIndex(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Unwrap(value)), (::uULong)(::uUInt)index);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallbackExceptionHandler__uType* CallbackExceptionHandler__typeof()
{
    static ::uStaticStrong<CallbackExceptionHandler__uType*> type;
    if (type != NULL) return type;

    type = (CallbackExceptionHandler__uType*)::uAllocClassType(sizeof(CallbackExceptionHandler__uType), "Fuse.Scripting.JavaScriptCore.CallbackExceptionHandler", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(CallbackExceptionHandler, _callback));

    return type;
}

void CallbackExceptionHandler___ObjInit(CallbackExceptionHandler* __this, ::uDelegate* callback)
{
    __this->_callback = callback;
}

::uObject* CallbackExceptionHandler__Call(CallbackExceptionHandler* __this, ::app::iOS::JavaScriptCore::JSContext* context, ::uArray* args)
{
    try
    {
        return ::uPtr< ::uDelegate*>(__this->_callback)->Invoke< ::uObject*, ::uArray*>(args);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Fuse::Scripting::Error__typeof()))
        {
            ::app::Fuse::Scripting::Error* e = (::app::Fuse::Scripting::Error*)__t.Exception;
            ::uPtr< ::app::iOS::JavaScriptCore::JSContext*>(context)->Exception(::app::iOS::JavaScriptCore::JSValue___valueWithNewErrorFromMessageInContext(NULL, ::uPtr< ::app::Fuse::Scripting::Error*>(e)->Message(), context));
        }
        else
        {
            throw __t;
        }
    }

    return NULL;
}

CallbackExceptionHandler* CallbackExceptionHandler__New_1(::uStatic* __this, ::uDelegate* callback)
{
    CallbackExceptionHandler* inst = (CallbackExceptionHandler*)::uAllocObject(sizeof(CallbackExceptionHandler), CallbackExceptionHandler__typeof());
    inst->_ObjInit(callback);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Context__uType* Context__typeof()
{
    static ::uStaticStrong<Context__uType*> type;
    if (type != NULL) return type;

    type = (Context__uType*)::uAllocClassType(sizeof(Context__uType), "Fuse.Scripting.JavaScriptCore.Context", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Scripting::Context__typeof());
    type->__fp_Dispose = (void(*)(::app::Fuse::Scripting::Context*))Context__Dispose;
    type->__fp_Evaluate = (::uObject*(*)(::app::Fuse::Scripting::Context*, ::uString*, ::uString*))Context__Evaluate;
    type->__fp_get_GlobalObject = (::app::Fuse::Scripting::Object*(*)(::app::Fuse::Scripting::Context*))Context__get_GlobalObject;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Context__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Context__uType, __interface_0));

    type->SetStrongRefs(
        "_global", offsetof(Context, _global),
        "_js", offsetof(Context, _js),
        "_marshaller", offsetof(Context, _marshaller));

    return type;
}

void Context___ObjInit_1(Context* __this, ::uObject* ownerThread)
{
    ::app::Fuse::Scripting::Context___ObjInit(__this, ownerThread);
    __this->_js = ::app::iOS::JavaScriptCore::JSContext__New_5(NULL);
    ::uPtr< ::app::iOS::JavaScriptCore::JSContext*>(__this->_js)->init();
    ::app::Fuse::Scripting::JavaScriptCore::ExceptionHandler__Set(NULL, __this->_js, ::uNewDelegateNonVirt(::app::Fuse::Scripting::JavaScriptCore::ExceptionHandlerDelegate__typeof(), (const void*)Context__OnException));
    __this->_marshaller = ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller__New_1(NULL, __this->_js);
    __this->_global = (::app::Fuse::Scripting::Object*)::app::Fuse::Scripting::JavaScriptCore::Object__New_1(NULL, __this->_marshaller, ::uPtr< ::app::iOS::JavaScriptCore::JSContext*>(__this->_js)->globalObject());
}

void Context__Dispose(Context* __this)
{
}

::uObject* Context__Evaluate(Context* __this, ::uString* fileName, ::uString* code)
{
    if (::app::Uno::String__op_Equality(NULL, fileName, NULL) || ::app::Uno::String__op_Equality(NULL, fileName, ::uGetConstString("")))
    {
        return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Wrap(::app::Fuse::Scripting::JavaScriptCore::Evaluator__EvaluateWithSourceURL(NULL, __this->_js, code, NULL));
    }
    else
    {
        ::app::iOS::Foundation::NSURL* url = ::app::iOS::Foundation::NSURL__New_5(NULL);
        ::uPtr< ::app::iOS::Foundation::NSURL*>(url)->initFileURLWithPath(fileName);
        return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Wrap(::app::Fuse::Scripting::JavaScriptCore::Evaluator__EvaluateWithSourceURL(NULL, __this->_js, code, url));
    }
}

::app::Fuse::Scripting::Object* Context__get_GlobalObject(Context* __this)
{
    return __this->_global;
}

Context* Context__New_1(::uStatic* __this, ::uObject* ownerThread)
{
    Context* inst = (Context*)::uAllocObject(sizeof(Context), Context__typeof());
    inst->_ObjInit_1(ownerThread);
    return inst;
}

void Context__OnException(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context, ::app::iOS::JavaScriptCore::JSValue* value)
{
    ::uString* ind_123;
    ::uString* ind_124;
    ::uString* ind_125;
    ::uString* ind_126;
    ::uString* ind_127;
    ::uString* name = NULL;
    ::uString* message = NULL;
    ::uString* file = NULL;
    int line = -1;
    ::uString* stack = NULL;
    ::uObject* wrapped = ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller__New_1(NULL, context))->Wrap(value);

    if (::uIs(wrapped, ::app::Fuse::Scripting::JavaScriptCore::Object__typeof()))
    {
        ::app::Fuse::Scripting::JavaScriptCore::Object* o = ::uCast< ::app::Fuse::Scripting::JavaScriptCore::Object*>(wrapped, ::app::Fuse::Scripting::JavaScriptCore::Object__typeof());
        name = (ind_123 = ::uAs< ::uString*>(::uPtr< ::app::Fuse::Scripting::JavaScriptCore::Object*>(o)->Item(::uGetConstString("name")), ::app::Uno::String__typeof()), (ind_123 != NULL) ? ind_123 : name);
        message = (ind_124 = ::uAs< ::uString*>(o->Item(::uGetConstString("message")), ::app::Uno::String__typeof()), (ind_124 != NULL) ? ind_124 : message);
        file = (ind_125 = (ind_126 = ::uAs< ::uString*>(o->Item(::uGetConstString("fileName")), ::app::Uno::String__typeof()), (ind_126 != NULL) ? ind_126 : ::uAs< ::uString*>(o->Item(::uGetConstString("sourceURL")), ::app::Uno::String__typeof())), (ind_125 != NULL) ? ind_125 : file);
        ::uObject* l1 = o->Item(::uGetConstString("line"));
        ::uObject* l2 = o->Item(::uGetConstString("lineNumber"));
        line = ::uIs(l1, ::app::Uno::Double__typeof()) ? (int)::uUnbox< double>(::app::Uno::Double__typeof(), l1) : (::uIs(l2, ::app::Uno::Double__typeof()) ? (int)::uUnbox< double>(::app::Uno::Double__typeof(), l2) : line);
        stack = (ind_127 = ::uAs< ::uString*>(o->Item(::uGetConstString("stack")), ::app::Uno::String__typeof()), (ind_127 != NULL) ? ind_127 : stack);
    }
    else
    {
        message = (wrapped != NULL) ? ::app::Uno::Object::ToString(::uPtr< ::uObject*>(wrapped)) : message;
    }

    U_THROW(::app::Fuse::Scripting::ScriptException__New_3(NULL, name, message, file, line, stack));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ContextualCallback__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.JavaScriptCore.ContextualCallback", 2);

    type->SetSignature(::uObject__typeof(),
        ::app::iOS::JavaScriptCore::JSContext__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ExceptionHandlerDelegate__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.JavaScriptCore.ExceptionHandlerDelegate", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::iOS::JavaScriptCore::JSContext__typeof(),
        ::app::iOS::JavaScriptCore::JSValue__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Function__uType* Function__typeof()
{
    static ::uStaticStrong<Function__uType*> type;
    if (type != NULL) return type;

    type = (Function__uType*)::uAllocClassType(sizeof(Function__uType), "Fuse.Scripting.JavaScriptCore.Function", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Function__typeof());
    type->__fp_Call = (::uObject*(*)(::app::Fuse::Scripting::Function*, ::uArray*))Function__Call;
    type->__fp_Construct = (::app::Fuse::Scripting::Object*(*)(::app::Fuse::Scripting::Function*, ::uArray*))Function__Construct;
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Function*, ::app::Fuse::Scripting::Function*))Function__Equals_2;

    type->SetStrongRefs(
        "_marshaller", offsetof(Function, _marshaller),
        "_value", offsetof(Function, _value));

    return type;
}

void Function___ObjInit_1(Function* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value)
{
    ::app::Fuse::Scripting::Function___ObjInit(__this);
    __this->_marshaller = marshaller;
    __this->_value = value;
}

::uObject* Function__Call(Function* __this, ::uArray* args)
{
    return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Wrap(::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->callWithArguments(::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->ToNSArray(args)));
}

::app::Fuse::Scripting::Object* Function__Construct(Function* __this, ::uArray* args)
{
    return ::uCast< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Wrap(::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->constructWithArguments(::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->ToNSArray(args))), ::app::Fuse::Scripting::Object__typeof());
}

bool Function__Equals_2(Function* __this, ::app::Fuse::Scripting::Function* f)
{
    Function* jscf = ::uCast< Function*>(f, Function__typeof());
    return ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->Equals((::uObject*)::uPtr< Function*>(jscf)->_value);
}

Function* Function__New_1(::uStatic* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value)
{
    Function* inst = (Function*)::uAllocObject(sizeof(Function), Function__typeof());
    inst->_ObjInit_1(marshaller, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Object__uType* Object__typeof()
{
    static ::uStaticStrong<Object__uType*> type;
    if (type != NULL) return type;

    type = (Object__uType*)::uAllocClassType(sizeof(Object__uType), "Fuse.Scripting.JavaScriptCore.Object", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Object__typeof());
    type->__fp_CallMethod = (::uObject*(*)(::app::Fuse::Scripting::Object*, ::uString*, ::uArray*))Object__CallMethod;
    type->__fp_ContainsKey = (bool(*)(::app::Fuse::Scripting::Object*, ::uString*))Object__ContainsKey;
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Object*, ::app::Fuse::Scripting::Object*))Object__Equals_2;
    type->__fp_get_Item = (::uObject*(*)(::app::Fuse::Scripting::Object*, ::uString*))Object__get_Item;
    type->__fp_get_Keys = (::uArray*(*)(::app::Fuse::Scripting::Object*))Object__get_Keys;
    type->__fp_InstanceOf = (bool(*)(::app::Fuse::Scripting::Object*, ::app::Fuse::Scripting::Function*))Object__InstanceOf;
    type->__fp_set_Item = (void(*)(::app::Fuse::Scripting::Object*, ::uString*, ::uObject*))Object__set_Item;

    type->SetStrongRefs(
        "_marshaller", offsetof(Object, _marshaller),
        "_value", offsetof(Object, _value));

    return type;
}

void Object___ObjInit_1(Object* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value)
{
    ::app::Fuse::Scripting::Object___ObjInit(__this);
    __this->_marshaller = marshaller;
    __this->_value = value;
}

::uObject* Object__CallMethod(Object* __this, ::uString* name, ::uArray* args)
{
    return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Wrap(::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->invokeMethodWithArguments(name, ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->ToNSArray(args)));
}

bool Object__ContainsKey(Object* __this, ::uString* key)
{
    ::uArray* keys = __this->Keys();

    for (int i = 0; i < ::uPtr< ::uArray*>(keys)->Length(); i++)
    {
        if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::uArray*>(keys)->Item< ::uString*>(i), key))
        {
            return true;
        }
    }

    return false;
}

bool Object__Equals_2(Object* __this, ::app::Fuse::Scripting::Object* o)
{
    Object* jso = ::uCast< Object*>(o, Object__typeof());
    return ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->Equals((::uObject*)::uPtr< Object*>(jso)->_value);
}

::uObject* Object__get_Item(Object* __this, ::uString* key)
{
    return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Wrap(::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->valueForProperty(key));
}

::uArray* Object__get_Keys(Object* __this)
{
    ::app::iOS::Foundation::NSArray* keys = ::uPtr< ::app::iOS::Foundation::NSDictionary*>(::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->toDictionary())->AllKeys();
    ::uArray* res = ::uNewArray(::app::Uno::String__typeof(), (int)::uPtr< ::app::iOS::Foundation::NSArray*>(keys)->count());

    for (int i = 0; i < res->Length(); i++)
    {
        ::uPtr< ::uArray*>(res)->ItemStrong< ::uString*>(i) = ::app::iOS::Foundation::NSStringExtensions__ToUnoString(NULL, ::app::iOS::Foundation::NSString__New_6(NULL, ::uPtr< ::app::iOS::Foundation::NSArray*>(keys)->objectAtIndex((::uULong)(::uUInt)i)));
    }

    return res;
}

bool Object__InstanceOf(Object* __this, ::app::Fuse::Scripting::Function* type)
{
    ::app::Fuse::Scripting::JavaScriptCore::Function* jsf = ::uCast< ::app::Fuse::Scripting::JavaScriptCore::Function*>(type, ::app::Fuse::Scripting::JavaScriptCore::Function__typeof());
    return ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->isInstanceOf(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)::uPtr< ::app::Fuse::Scripting::JavaScriptCore::Function*>(jsf)->_value));
}

Object* Object__New_1(::uStatic* __this, ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller* marshaller, ::app::iOS::JavaScriptCore::JSValue* value)
{
    Object* inst = (Object*)::uAllocObject(sizeof(Object), Object__typeof());
    inst->_ObjInit_1(marshaller, value);
    return inst;
}

void Object__set_Item(Object* __this, ::uString* key, ::uObject* value)
{
    ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(__this->_value)->setValueForProperty(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)::uPtr< ::app::Fuse::Scripting::JavaScriptCore::ObjectMarshaller*>(__this->_marshaller)->Unwrap(value)), key);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectMarshaller__uType* ObjectMarshaller__typeof()
{
    static ::uStaticStrong<ObjectMarshaller__uType*> type;
    if (type != NULL) return type;

    type = (ObjectMarshaller__uType*)::uAllocClassType(sizeof(ObjectMarshaller__uType), "Fuse.Scripting.JavaScriptCore.ObjectMarshaller", false, 0, 3, 0);

    type->SetStrongRefs(
        "_arrayType", offsetof(ObjectMarshaller, _arrayType),
        "_functionType", offsetof(ObjectMarshaller, _functionType),
        "_js", offsetof(ObjectMarshaller, _js));

    return type;
}

void ObjectMarshaller___ObjInit(ObjectMarshaller* __this, ::app::iOS::JavaScriptCore::JSContext* context)
{
    __this->_js = context;
    ::app::iOS::JavaScriptCore::JSValue* global = ::uPtr< ::app::iOS::JavaScriptCore::JSContext*>(__this->_js)->globalObject();
    __this->_arrayType = ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(global)->valueForProperty(::uGetConstString("Array"));
    __this->_functionType = global->valueForProperty(::uGetConstString("Function"));
}

ObjectMarshaller* ObjectMarshaller__New_1(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context)
{
    ObjectMarshaller* inst = (ObjectMarshaller*)::uAllocObject(sizeof(ObjectMarshaller), ObjectMarshaller__typeof());
    inst->_ObjInit(context);
    return inst;
}

::app::iOS::Foundation::NSArray* ObjectMarshaller__ToNSArray(ObjectMarshaller* __this, ::uArray* args)
{
    ::app::iOS::Foundation::NSMutableArray* arr = ::app::iOS::Foundation::NSMutableArray__New_7(NULL);
    ::uPtr< ::app::iOS::Foundation::NSMutableArray*>(arr)->init();

    for (int i = 0; i < ::uPtr< ::uArray*>(args)->Length(); i++)
    {
        ::uPtr< ::app::iOS::Foundation::NSMutableArray*>(arr)->addObject(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)__this->Unwrap(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i))));
    }

    return (::app::iOS::Foundation::NSArray*)arr;
}

::app::iOS::JavaScriptCore::JSValue* ObjectMarshaller__Unwrap(ObjectMarshaller* __this, ::uObject* obj)
{
    if (::uIs(obj, ::app::Uno::Int__typeof()))
    {
        return ::app::iOS::JavaScriptCore::JSValue___valueWithInt32InContext(NULL, ::uUnbox< int>(::app::Uno::Int__typeof(), obj), __this->_js);
    }

    if (::uIs(obj, ::app::Uno::Double__typeof()))
    {
        return ::app::iOS::JavaScriptCore::JSValue___valueWithDoubleInContext(NULL, ::uUnbox< double>(::app::Uno::Double__typeof(), obj), __this->_js);
    }

    if (::uIs(obj, ::app::Uno::String__typeof()))
    {
        return ::app::iOS::JavaScriptCore::JSValue___valueWithObjectInContext(NULL, ::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)::app::iOS::Foundation::NSStringExtensions__ToNSString(NULL, ::uCast< ::uString*>(obj, ::app::Uno::String__typeof()))), __this->_js);
    }

    if (::uIs(obj, ::app::Uno::Bool__typeof()))
    {
        return ::app::iOS::JavaScriptCore::JSValue___valueWithBoolInContext(NULL, ::uUnbox< bool>(::app::Uno::Bool__typeof(), obj), __this->_js);
    }

    if (::uIs(obj, ::app::Fuse::Scripting::JavaScriptCore::Object__typeof()))
    {
        return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::Object*>(::uCast< ::app::Fuse::Scripting::JavaScriptCore::Object*>(obj, ::app::Fuse::Scripting::JavaScriptCore::Object__typeof()))->_value;
    }

    if (::uIs(obj, ::app::Fuse::Scripting::JavaScriptCore::Array__typeof()))
    {
        return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::Array*>(::uCast< ::app::Fuse::Scripting::JavaScriptCore::Array*>(obj, ::app::Fuse::Scripting::JavaScriptCore::Array__typeof()))->_array;
    }

    if (::uIs(obj, ::app::Fuse::Scripting::JavaScriptCore::Function__typeof()))
    {
        return ::uPtr< ::app::Fuse::Scripting::JavaScriptCore::Function*>(::uCast< ::app::Fuse::Scripting::JavaScriptCore::Function*>(obj, ::app::Fuse::Scripting::JavaScriptCore::Function__typeof()))->_value;
    }

    if (::uIs(obj, ::app::Fuse::Scripting::Callback__typeof()))
    {
        return ::app::Fuse::Scripting::JavaScriptCore::CallbackWrapper__Wrap(NULL, ::uNewDelegateNonVirt(::app::Fuse::Scripting::JavaScriptCore::ContextualCallback__typeof(), (const void*)::app::Fuse::Scripting::JavaScriptCore::CallbackExceptionHandler__Call, ::app::Fuse::Scripting::JavaScriptCore::CallbackExceptionHandler__New_1(NULL, ::uCast< ::uDelegate*>(obj, ::app::Fuse::Scripting::Callback__typeof()))), __this->_js);
    }

    if (obj == NULL)
    {
        return ::app::iOS::JavaScriptCore::JSValue___valueWithNullInContext(NULL, __this->_js);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unhandled type in JavaScriptCore wrapper: "), obj)));
}

::uObject* ObjectMarshaller__Wrap(ObjectMarshaller* __this, ::app::iOS::JavaScriptCore::JSValue* value)
{
    if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isNumber())
    {
        return ::uBox(::app::Uno::Double__typeof(), ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->toDouble());
    }

    if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isString())
    {
        return (::uObject*)::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->toString();
    }

    if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isBoolean())
    {
        return ::uBox(::app::Uno::Bool__typeof(), ::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->toBool());
    }

    if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isObject())
    {
        if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isInstanceOf(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)__this->_arrayType)))
        {
            return (::uObject*)::app::Fuse::Scripting::JavaScriptCore::Array__New_1(NULL, __this, value);
        }

        if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isInstanceOf(::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)__this->_functionType)))
        {
            return (::uObject*)::app::Fuse::Scripting::JavaScriptCore::Function__New_1(NULL, __this, value);
        }

        return (::uObject*)::app::Fuse::Scripting::JavaScriptCore::Object__New_1(NULL, __this, value);
    }

    if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isUndefined())
    {
        return NULL;
    }

    if (::uPtr< ::app::iOS::JavaScriptCore::JSValue*>(value)->isNull())
    {
        return NULL;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Unhandled JSValue")));
}

}}}}
