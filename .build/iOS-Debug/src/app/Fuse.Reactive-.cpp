#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.DataContextChangedArgs.h>
#include <app/Fuse.DataContextChangedHandler.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Reactive.AsyncArray.h>
#include <app/Fuse.Reactive.AsyncFunction.h>
#include <app/Fuse.Reactive.AsyncObject.h>
#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.CallObjectEventHandler.h>
#include <app/Fuse.Reactive.Case.h>
#include <app/Fuse.Reactive.Console.h>
#include <app/Fuse.Reactive.CrossThreadExceptionHandler.h>
#include <app/Fuse.Reactive.DebugLog.h>
#include <app/Fuse.Reactive.Dispatcher.h>
#include <app/Fuse.Reactive.Dispatcher_Arg2Dispatch__int__object.h>
#include <app/Fuse.Reactive.Dispatcher_Arg2Dispatch__object__int.h>
#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__int.h>
#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__object.h>
#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__object__.h>
#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__string.h>
#include <app/Fuse.Reactive.Dispatcher_UIThreadDispatcher.h>
#include <app/Fuse.Reactive.Each.h>
#include <app/Fuse.Reactive.EnumArray.h>
#include <app/Fuse.Reactive.EnumObservable.h>
#include <app/Fuse.Reactive.EventBinding.h>
#include <app/Fuse.Reactive.FileSourceTell.h>
#include <app/Fuse.Reactive.FuseJS.Base64.h>
#include <app/Fuse.Reactive.FuseJS.Camera.h>
#include <app/Fuse.Reactive.FuseJS.Email.h>
#include <app/Fuse.Reactive.FuseJS.FileReaderImpl.h>
#include <app/Fuse.Reactive.FuseJS.Globals.h>
#include <app/Fuse.Reactive.FuseJS.Http.h>
#include <app/Fuse.Reactive.FuseJS.InterApp.h>
#include <app/Fuse.Reactive.FuseJS.Lifecycle.h>
#include <app/Fuse.Reactive.FuseJS.Maps.h>
#include <app/Fuse.Reactive.FuseJS.Phone.h>
#include <app/Fuse.Reactive.FuseJS.Storage.h>
#include <app/Fuse.Reactive.FuseJS.Timer.h>
#include <app/Fuse.Reactive.FuseJS.Vibration.h>
#include <app/Fuse.Reactive.IAsyncArray.h>
#include <app/Fuse.Reactive.IAsyncFunction.h>
#include <app/Fuse.Reactive.IAsyncObject.h>
#include <app/Fuse.Reactive.IObservable.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Reactive.ISubscription.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Reactive.JSFileSource.h>
#include <app/Fuse.Reactive.Marshal.h>
#include <app/Fuse.Reactive.Marshal_Float2Enum.h>
#include <app/Fuse.Reactive.Marshal_Float3Enum.h>
#include <app/Fuse.Reactive.Marshal_VectorEnum.h>
#include <app/Fuse.Reactive.Match.h>
#include <app/Fuse.Reactive.Observable.h>
#include <app/Fuse.Reactive.ObservableSubscription.h>
#include <app/Fuse.Reactive.PathSubscription.h>
#include <app/Fuse.Reactive.ScriptEventArgs.h>
#include <app/Fuse.Reactive.ScriptEventHandler.h>
#include <app/Fuse.Reactive.ScriptEvents.h>
#include <app/Fuse.Reactive.SubscriptionSetExclusive.h>
#include <app/Fuse.Reactive.TellObject.h>
#include <app/Fuse.Reactive.ThreadWorker.h>
#include <app/Fuse.Scripting.Array.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Context.h>
#include <app/Fuse.Scripting.Duktape.Context.h>
#include <app/Fuse.Scripting.FileModule.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.IModule.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Fuse.Scripting.JavaScriptCore.Context.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.TaskPriority.h>
#include <app/Fuse.Triggers.WhileFailed.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__float2.h>
#include <app/Uno.Action__float3.h>
#include <app/Uno.Action__float4.h>
#include <app/Uno.Action__int.h>
#include <app/Uno.Action__int__object.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Action__object__.h>
#include <app/Uno.Action__object__int.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_UX_FileSource.h>
#include <app/Uno.Action__Uno_UX_IFactory.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_IFactory.h>
#include <app/Uno.Collections.Queue__Uno_Exception.h>
#include <app/Uno.Color.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Threading.Mutex.h>
#include <app/Uno.Threading.Thread.h>
#include <app/Uno.Type.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Fuse {
namespace Reactive {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AsyncArray__uType* AsyncArray__typeof()
{
    static ::uStaticStrong<AsyncArray__uType*> type;
    if (type != NULL) return type;

    type = (AsyncArray__uType*)::uAllocClassType(sizeof(AsyncArray__uType), "Fuse.Reactive.AsyncArray", false, 2, 2, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))AsyncArray__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))AsyncArray__GetHashCode;
    type->__interface_0.__fp_Enum = (void(*)(void*, ::app::Fuse::Reactive::Dispatcher*, ::uDelegate*))AsyncArray__Enum;
    type->__interface_1.__fp_Dispose = (void(*)(void*))AsyncArray__Dispose;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IAsyncArray__typeof(), offsetof(AsyncArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AsyncArray__uType, __interface_1));

    type->SetStrongRefs(
        "_arr", offsetof(AsyncArray, _arr),
        "_worker", offsetof(AsyncArray, _worker));

    return type;
}

void AsyncArray___ObjInit(AsyncArray* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* arr)
{
    __this->_worker = worker;
    __this->_arr = arr;
}

void AsyncArray__Dispose(AsyncArray* __this)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)AsyncArray__DoDispose, __this));
}

void AsyncArray__DoDispose(AsyncArray* __this)
{
}

void AsyncArray__Enum(AsyncArray* __this, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(1, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::EnumArray__Run, ::app::Fuse::Reactive::EnumArray__New_1(NULL, __this->_worker, __this->_arr, thread, callback)));
}

bool AsyncArray__Equals(AsyncArray* __this, ::uObject* obj)
{
    AsyncArray* ao = ::uAs< AsyncArray*>(obj, AsyncArray__typeof());

    if (ao == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Fuse::Scripting::Array*>(__this->_arr)->Equals_2(::uPtr< AsyncArray*>(ao)->_arr);
}

::app::Fuse::Scripting::Array* AsyncArray__get_Array(AsyncArray* __this)
{
    return __this->_arr;
}

int AsyncArray__GetHashCode(AsyncArray* __this)
{
    return ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Scripting::Array*>(__this->_arr));
}

AsyncArray* AsyncArray__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* arr)
{
    AsyncArray* inst = (AsyncArray*)::uAllocObject(sizeof(AsyncArray), AsyncArray__typeof());
    inst->_ObjInit(worker, arr);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AsyncFunction__uType* AsyncFunction__typeof()
{
    static ::uStaticStrong<AsyncFunction__uType*> type;
    if (type != NULL) return type;

    type = (AsyncFunction__uType*)::uAllocClassType(sizeof(AsyncFunction__uType), "Fuse.Reactive.AsyncFunction", false, 2, 2, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))AsyncFunction__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))AsyncFunction__GetHashCode;
    type->__interface_1.__fp_Dispose = (void(*)(void*))AsyncFunction__Dispose;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IAsyncFunction__typeof(), offsetof(AsyncFunction__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AsyncFunction__uType, __interface_1));

    type->SetStrongRefs(
        "_function", offsetof(AsyncFunction, _function),
        "_worker", offsetof(AsyncFunction, _worker));

    return type;
}

void AsyncFunction___ObjInit(AsyncFunction* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* func)
{
    __this->_function = func;
    __this->_worker = worker;
}

void AsyncFunction__Dispose(AsyncFunction* __this)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)AsyncFunction__DoDispose, __this));
}

void AsyncFunction__DoDispose(AsyncFunction* __this)
{
}

bool AsyncFunction__Equals(AsyncFunction* __this, ::uObject* obj)
{
    AsyncFunction* ao = ::uAs< AsyncFunction*>(obj, AsyncFunction__typeof());

    if (ao == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_function)->Equals_2(::uPtr< AsyncFunction*>(ao)->_function);
}

int AsyncFunction__GetHashCode(AsyncFunction* __this)
{
    return ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_function)->GetHashCode();
}

AsyncFunction* AsyncFunction__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* func)
{
    AsyncFunction* inst = (AsyncFunction*)::uAllocObject(sizeof(AsyncFunction), AsyncFunction__typeof());
    inst->_ObjInit(worker, func);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AsyncObject__uType* AsyncObject__typeof()
{
    static ::uStaticStrong<AsyncObject__uType*> type;
    if (type != NULL) return type;

    type = (AsyncObject__uType*)::uAllocClassType(sizeof(AsyncObject__uType), "Fuse.Reactive.AsyncObject", false, 2, 2, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))AsyncObject__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))AsyncObject__GetHashCode;
    type->__interface_0.__fp_Tell = (void(*)(void*, ::uString*, ::app::Fuse::Reactive::Dispatcher*, ::uDelegate*))AsyncObject__Tell;
    type->__interface_1.__fp_Dispose = (void(*)(void*))AsyncObject__Dispose;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IAsyncObject__typeof(), offsetof(AsyncObject__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AsyncObject__uType, __interface_1));

    type->SetStrongRefs(
        "_obj", offsetof(AsyncObject, _obj),
        "_worker", offsetof(AsyncObject, _worker));

    return type;
}

void AsyncObject___ObjInit(AsyncObject* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj)
{
    __this->_worker = worker;
    __this->_obj = obj;
}

void AsyncObject__Dispose(AsyncObject* __this)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)AsyncObject__DoDispose, __this));
}

void AsyncObject__DoDispose(AsyncObject* __this)
{
}

bool AsyncObject__Equals(AsyncObject* __this, ::uObject* obj)
{
    AsyncObject* ao = ::uAs< AsyncObject*>(obj, AsyncObject__typeof());

    if (ao == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->Equals_2(::uPtr< AsyncObject*>(ao)->_obj);
}

::app::Fuse::Scripting::Object* AsyncObject__get_Object(AsyncObject* __this)
{
    return __this->_obj;
}

int AsyncObject__GetHashCode(AsyncObject* __this)
{
    return ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj));
}

AsyncObject* AsyncObject__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj)
{
    AsyncObject* inst = (AsyncObject*)::uAllocObject(sizeof(AsyncObject), AsyncObject__typeof());
    inst->_ObjInit(worker, obj);
    return inst;
}

void AsyncObject__Tell(AsyncObject* __this, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(1, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::TellObject__Run, ::app::Fuse::Reactive::TellObject__New_1(NULL, __this->_worker, __this->_obj, key, thread, callback)));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Binding__uType* Binding__typeof()
{
    static ::uStaticStrong<Binding__uType*> type;
    if (type != NULL) return type;

    type = (Binding__uType*)::uAllocClassType(sizeof(Binding__uType), "Fuse.Reactive.Binding", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Binding__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Binding__OnUnrooted;

    type->SetStrongRefs(
        "_Key", offsetof(Binding, _Key),
        "_Node", offsetof(Binding, _Node),
        "_pathSubscription", offsetof(Binding, _pathSubscription));

    return type;
}

void Binding___ObjInit_1(Binding* __this, ::uString* key)
{
    ::app::Fuse::Behavior___ObjInit(__this);
    __this->Key(key);
}

void Binding__BindToPath(Binding* __this, ::uString* path, ::uObject* dc)
{
    if (__this->_pathSubscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_pathSubscription));
        __this->_pathSubscription = NULL;
    }

    if (dc != NULL)
    {
        __this->_pathSubscription = (::uObject*)::app::Fuse::Reactive::PathSubscription__New_1(NULL, __this, dc, path);
    }
}

::uString* Binding__get_Key(Binding* __this)
{
    return __this->_Key;
}

::app::Fuse::Node* Binding__get_Node(Binding* __this)
{
    return __this->_Node;
}

void Binding__OnDataContextChanged(Binding* __this, ::uObject* sender, ::app::Fuse::DataContextChangedArgs* args)
{
    __this->BindToPath(__this->Key(), ::uPtr< ::app::Fuse::DataContextChangedArgs*>(args)->NewValue());
}

void Binding__OnRooted(Binding* __this, ::app::Fuse::Node* n)
{
    __this->Node(n);
    ::uPtr< ::app::Fuse::Node*>(n)->add_DataContextChanged(::uNewDelegateNonVirt(::app::Fuse::DataContextChangedHandler__typeof(), (const void*)Binding__OnDataContextChanged, __this));

    if (n->DataContext() != NULL)
    {
        __this->OnDataContextChanged((::uObject*)n, ::app::Fuse::DataContextChangedArgs__New_2(NULL, n, NULL, n->DataContext()));
    }
}

void Binding__OnUnrooted(Binding* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::Node*>(n)->remove_DataContextChanged(::uNewDelegateNonVirt(::app::Fuse::DataContextChangedHandler__typeof(), (const void*)Binding__OnDataContextChanged, __this));
    __this->Node(NULL);

    if (n->DataContext() != NULL)
    {
        __this->OnDataContextChanged((::uObject*)n, ::app::Fuse::DataContextChangedArgs__New_2(NULL, n, NULL, NULL));
    }
}

void Binding__set_Key(Binding* __this, ::uString* value)
{
    __this->_Key = value;
}

void Binding__set_Node(Binding* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallObjectEventHandler__uType* CallObjectEventHandler__typeof()
{
    static ::uStaticStrong<CallObjectEventHandler__uType*> type;
    if (type != NULL) return type;

    type = (CallObjectEventHandler__uType*)::uAllocClassType(sizeof(CallObjectEventHandler__uType), "Fuse.Reactive.CallObjectEventHandler", false, 1, 3, 0);

    type->__interface_0.__fp_AddString = (void(*)(void*, ::uString*, ::uString*))CallObjectEventHandler__AddString;
    type->__interface_0.__fp_AddDouble = (void(*)(void*, ::uString*, double))CallObjectEventHandler__AddDouble;
    type->__interface_0.__fp_AddBool = (void(*)(void*, ::uString*, bool))CallObjectEventHandler__AddBool;
    type->__interface_0.__fp_AddObject = (void(*)(void*, ::uString*, ::uObject*))CallObjectEventHandler__AddObject;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IEventSerializer__typeof(), offsetof(CallObjectEventHandler__uType, __interface_0));

    type->SetStrongRefs(
        "_args", offsetof(CallObjectEventHandler, _args),
        "_obj", offsetof(CallObjectEventHandler, _obj),
        "_worker", offsetof(CallObjectEventHandler, _worker));

    return type;
}

void CallObjectEventHandler___ObjInit(CallObjectEventHandler* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::ScriptEventArgs* args)
{
    __this->_worker = worker;
    __this->_obj = obj;
    __this->_args = args;
}

void CallObjectEventHandler__AddBool(CallObjectEventHandler* __this, ::uString* key, bool value)
{
    ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->Item(key, ::uBox(::app::Uno::Bool__typeof(), value));
}

void CallObjectEventHandler__AddDouble(CallObjectEventHandler* __this, ::uString* key, double value)
{
    ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->Item(key, ::uBox(::app::Uno::Double__typeof(), value));
}

void CallObjectEventHandler__AddObject(CallObjectEventHandler* __this, ::uString* key, ::uObject* value)
{
    ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->Item(key, ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Unwrap(value));
}

void CallObjectEventHandler__AddString(CallObjectEventHandler* __this, ::uString* key, ::uString* value)
{
    ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->Item(key, (::uObject*)value);
}

CallObjectEventHandler* CallObjectEventHandler__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::ScriptEventArgs* args)
{
    CallObjectEventHandler* inst = (CallObjectEventHandler*)::uAllocObject(sizeof(CallObjectEventHandler), CallObjectEventHandler__typeof());
    inst->_ObjInit(worker, obj, args);
    return inst;
}

void CallObjectEventHandler__Run(CallObjectEventHandler* __this)
{
    ::uArray* array_123;
    ::uString* f = ::uPtr< ::app::Fuse::Reactive::ScriptEventArgs*>(__this->_args)->Name();

    if (__this->_args == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("_args was null")));
    }

    if (::uPtr< ::app::Fuse::Reactive::ScriptEventArgs*>(__this->_args)->Sender() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("_args.Sender was null")));
    }

    ::uObject* dc = ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Reactive::ScriptEventArgs*>(__this->_args)->Sender())->DataContext();

    if (!::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->ContainsKey(f))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Callback not found: "), f)));
    }

    ::uObject* obj = ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->Item(f);
    ::app::Fuse::Scripting::Object* obs = ::uAs< ::app::Fuse::Scripting::Object*>(obj, ::app::Fuse::Scripting::Object__typeof());

    if (obs != NULL)
    {
        __this->SetObservable(obs, dc);
        return;
    }

    ::app::Fuse::Scripting::Function* func = ::uAs< ::app::Fuse::Scripting::Function*>(obj, ::app::Fuse::Scripting::Function__typeof());

    if (func == NULL)
    {
        return;
    }

    ::uObject* se = ::uAs< ::uObject*>(::uPtr< ::app::Fuse::Reactive::ScriptEventArgs*>(__this->_args)->Args(), ::app::Fuse::Scripting::IScriptEvent__typeof());
    __this->_obj = ::uPtr< ::app::Fuse::Scripting::Context*>(::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Context())->NewObject();
    ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_obj)->Item(::uGetConstString("data"), ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Unwrap(dc));
    ::app::Fuse::Scripting::IScriptEvent::Serialize(::uPtr< ::uObject*>(se), (::uObject*)__this);
    ::uPtr< ::app::Fuse::Scripting::Function*>(func)->Call((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)__this->_obj, array_123));
}

void CallObjectEventHandler__SetObservable(CallObjectEventHandler* __this, ::app::Fuse::Scripting::Object* obs, ::uObject* value)
{
    ::uArray* array_124;
    ::uPtr< ::app::Fuse::Scripting::Object*>(obs)->CallMethod(::uGetConstString("setValueExclusive"), (array_124 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Unwrap(value), array_124));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Case__uType* Case__typeof()
{
    static ::uStaticStrong<Case__uType*> type;
    if (type != NULL) return type;

    type = (Case__uType*)::uAllocClassType(sizeof(Case__uType), "Fuse.Reactive.Case", false, 0, 3, 0);

    type->SetStrongRefs(
        "_factories", offsetof(Case, _factories),
        "_match", offsetof(Case, _match),
        "_value", offsetof(Case, _value));

    return type;
}

::uObject* Case__get_Factories(Case* __this)
{
    ::uObject* ind_123 = __this->_factories;
    return (ind_123 != NULL) ? ind_123 : (__this->_factories = (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_IFactory__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_IFactory__typeof(), (const void*)Case__OnFactoriesChanged, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_IFactory__typeof(), (const void*)Case__OnFactoriesChanged, __this)));
}

bool Case__get_IsDefault(Case* __this)
{
    return __this->_IsDefault;
}

::uObject* Case__get_Value(Case* __this)
{
    return __this->_value;
}

void Case__Invalidate(Case* __this)
{
    if (__this->_match != NULL)
    {
        ::uPtr< ::app::Fuse::Reactive::Match*>(__this->_match)->Invalidate();
    }
}

void Case__OnFactoriesChanged(Case* __this, ::uObject* f)
{
    __this->Invalidate();
}

void Case__set_IsDefault(Case* __this, bool value)
{
    __this->_IsDefault = value;
}

void Case__set_Value(Case* __this, ::uObject* value)
{
    if (__this->_value != value)
    {
        __this->_value = value;
        __this->Invalidate();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Console__uType* Console__typeof()
{
    static ::uStaticStrong<Console__uType*> type;
    if (type != NULL) return type;

    type = (Console__uType*)::uAllocClassType(sizeof(Console__uType), "Fuse.Reactive.Console");

    return type;
}

::uObject* Console__Dir(::uStatic* __this, ::uArray* args)
{
    ::app::Uno::Text::StringBuilder* builder = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (int i = 0; i < ::uPtr< ::uArray*>(args)->Length(); i++)
    {
        Console__Dir_1(NULL, builder, ::uPtr< ::uArray*>(args)->Item< ::uObject*>(i), 0);
    }

    ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->ToString(), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno"), 749);
    return NULL;
}

void Console__Dir_1(::uStatic* __this, ::app::Uno::Text::StringBuilder* builder, ::uObject* obj, int indent)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    if ((((::uIs(obj, ::app::Uno::Int__typeof()) || ::uIs(obj, ::app::Uno::Float__typeof())) || ::uIs(obj, ::app::Uno::Double__typeof())) || ::uIs(obj, ::app::Uno::Bool__typeof())) || ::uIs(obj, ::app::Uno::String__typeof()))
    {
        Console__Indent(NULL, builder, indent);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->AppendLine(::app::Uno::Object::ToString(::uPtr< ::uObject*>(obj)));
        return;
    }

    if (::uIs(obj, ::app::Fuse::Scripting::Function__typeof()))
    {
        Console__Indent(NULL, builder, indent);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->AppendLine(::uGetConstString("[Function]"));
        return;
    }

    if (::uIs(obj, ::app::Fuse::Scripting::Object__typeof()))
    {
        if (indent >= 1)
        {
            Console__Indent(NULL, builder, indent);
            ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->AppendLine(::uGetConstString("[object]"));
        }
        else
        {
            ::app::Fuse::Scripting::Object* o = ::uCast< ::app::Fuse::Scripting::Object*>(obj, ::app::Fuse::Scripting::Object__typeof());

            for (array_123 = ::uPtr< ::app::Fuse::Scripting::Object*>(o)->Keys(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
            {
                ::uString* k = ::uPtr< ::uArray*>(array_123)->Item< ::uString*>(index_124);
                Console__Indent(NULL, builder, indent);
                ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->AppendLine(k);
                Console__Dir_1(NULL, builder, ::uPtr< ::app::Fuse::Scripting::Object*>(o)->Item(k), indent + 1);
            }
        }

        return;
    }

    if (::uIs(obj, ::app::Fuse::Scripting::Array__typeof()))
    {
        if (indent >= 1)
        {
            Console__Indent(NULL, builder, indent);
            ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->AppendLine(::uGetConstString("[array]"));
        }
        else
        {
            ::app::Fuse::Scripting::Array* a = ::uCast< ::app::Fuse::Scripting::Array*>(obj, ::app::Fuse::Scripting::Array__typeof());

            for (int i = 0; i < ::uPtr< ::app::Fuse::Scripting::Array*>(a)->Length(); i++)
            {
                Console__Dir_1(NULL, builder, ::uPtr< ::app::Fuse::Scripting::Array*>(a)->Item(i), indent);
            }
        }

        return;
    }
}

void Console__Indent(::uStatic* __this, ::app::Uno::Text::StringBuilder* builder, int indent)
{
    for (int i = 0; i < indent; i++)
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString(" - "));
    }
}

void Console__Init(::uStatic* __this, ::app::Fuse::Scripting::Context* c)
{
    ::app::Fuse::Scripting::Object* console = ::uPtr< ::app::Fuse::Scripting::Context*>(c)->NewObject();
    ::uPtr< ::app::Fuse::Scripting::Object*>(console)->Item(::uGetConstString("log"), (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)Console__Log));
    console->Item(::uGetConstString("dir"), (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)Console__Dir));
    ::uPtr< ::app::Fuse::Scripting::Object*>(c->GlobalObject())->Item(::uGetConstString("console"), (::uObject*)console);
}

::uObject* Console__Log(::uStatic* __this, ::uArray* args)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(args)->Length(); i++)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, (::uPtr< ::uArray*>(args)->Item< ::uObject*>(i) != NULL) ? ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i))) : ::uGetConstString("null"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno"), 734);
    }

    return NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CrossThreadExceptionHandler__uType* CrossThreadExceptionHandler__typeof()
{
    static ::uStaticStrong<CrossThreadExceptionHandler__uType*> type;
    if (type != NULL) return type;

    type = (CrossThreadExceptionHandler__uType*)::uAllocClassType(sizeof(CrossThreadExceptionHandler__uType), "Fuse.Reactive.CrossThreadExceptionHandler", false, 0, 2, 0);

    type->SetStrongRefs(
        "_exceptionQueue", offsetof(CrossThreadExceptionHandler, _exceptionQueue),
        "_mutex", offsetof(CrossThreadExceptionHandler, _mutex));

    return type;
}

void CrossThreadExceptionHandler___ObjInit(CrossThreadExceptionHandler* __this)
{
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_exceptionQueue = ::app::Uno::Collections::Queue__Uno_Exception__New_1(NULL);
}

void CrossThreadExceptionHandler__CheckAndThrow(CrossThreadExceptionHandler* __this)
{
    try
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

        if (::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(__this->_exceptionQueue)->Count() > 0)
        {
            U_THROW(::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(__this->_exceptionQueue)->Dequeue());
        }
    }
    catch (const ::uThrowable& __t)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        throw __t;
    }
    // finally
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
    }
}

CrossThreadExceptionHandler* CrossThreadExceptionHandler__New_1(::uStatic* __this)
{
    CrossThreadExceptionHandler* inst = (CrossThreadExceptionHandler*)::uAllocObject(sizeof(CrossThreadExceptionHandler), CrossThreadExceptionHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void CrossThreadExceptionHandler__SetException(CrossThreadExceptionHandler* __this, ::app::Uno::Exception* e)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();
    {
        ::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(__this->_exceptionQueue)->Enqueue(e);
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DebugLog__uType* DebugLog__typeof()
{
    static ::uStaticStrong<DebugLog__uType*> type;
    if (type != NULL) return type;

    type = (DebugLog__uType*)::uAllocClassType(sizeof(DebugLog__uType), "Fuse.Reactive.DebugLog");

    return type;
}

void DebugLog__Init(::uStatic* __this, ::app::Fuse::Scripting::Context* c)
{
    ::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Context*>(c)->GlobalObject())->Item(::uGetConstString("debug_log"), (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)DebugLog__Log));
}

::uObject* DebugLog__Log(::uStatic* __this, ::uArray* args)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(args)->Length(); i++)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, (::uPtr< ::uArray*>(args)->Item< ::uObject*>(i) != NULL) ? ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i))) : ::uGetConstString("null"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno"), 713);
    }

    return NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Dispatcher*> Dispatcher___uiThread;

Dispatcher__uType* Dispatcher__typeof()
{
    static ::uStaticStrong<Dispatcher__uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher__uType*)::uAllocClassType(sizeof(Dispatcher__uType), "Fuse.Reactive.Dispatcher", false, 0, 0, 0);

    return type;
}

void Dispatcher___ObjInit(Dispatcher* __this)
{
}

void Dispatcher__Dispatch1__int(Dispatcher* __this, ::uDelegate* action, int arg)
{
    __this->Dispatch(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::Dispatcher_ArgDispatch__int__Run, ::app::Fuse::Reactive::Dispatcher_ArgDispatch__int__New_1(NULL, action, arg)));
}

void Dispatcher__Dispatch1__object(Dispatcher* __this, ::uDelegate* action, ::uObject* arg)
{
    __this->Dispatch(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::Dispatcher_ArgDispatch__object__Run, ::app::Fuse::Reactive::Dispatcher_ArgDispatch__object__New_1(NULL, action, arg)));
}

void Dispatcher__Dispatch1__object__(Dispatcher* __this, ::uDelegate* action, ::uArray* arg)
{
    __this->Dispatch(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::Dispatcher_ArgDispatch__object____Run, ::app::Fuse::Reactive::Dispatcher_ArgDispatch__object____New_1(NULL, action, arg)));
}

void Dispatcher__Dispatch1__string(Dispatcher* __this, ::uDelegate* action, ::uString* arg)
{
    __this->Dispatch(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::Dispatcher_ArgDispatch__string__Run, ::app::Fuse::Reactive::Dispatcher_ArgDispatch__string__New_1(NULL, action, arg)));
}

void Dispatcher__Dispatch2__int__object(Dispatcher* __this, ::uDelegate* action, int arg1, ::uObject* arg2)
{
    __this->Dispatch(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::Dispatcher_Arg2Dispatch__int__object__Run, ::app::Fuse::Reactive::Dispatcher_Arg2Dispatch__int__object__New_1(NULL, action, arg1, arg2)));
}

void Dispatcher__Dispatch2__object__int(Dispatcher* __this, ::uDelegate* action, ::uObject* arg1, int arg2)
{
    __this->Dispatch(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::Dispatcher_Arg2Dispatch__object__int__Run, ::app::Fuse::Reactive::Dispatcher_Arg2Dispatch__object__int__New_1(NULL, action, arg1, arg2)));
}

Dispatcher* Dispatcher__get_UIThread(::uStatic* __this)
{
    if (Dispatcher___uiThread == NULL)
    {
        Dispatcher___uiThread = (Dispatcher*)::app::Fuse::Reactive::Dispatcher_UIThreadDispatcher__New_1(NULL);
    }

    return Dispatcher___uiThread;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dispatcher_UIThreadDispatcher__uType* Dispatcher_UIThreadDispatcher__typeof()
{
    static ::uStaticStrong<Dispatcher_UIThreadDispatcher__uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher_UIThreadDispatcher__uType*)::uAllocClassType(sizeof(Dispatcher_UIThreadDispatcher__uType), "Fuse.Reactive.Dispatcher.UIThreadDispatcher", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Reactive::Dispatcher__typeof());
    type->__fp_Dispatch = (void(*)(::app::Fuse::Reactive::Dispatcher*, ::uDelegate*))Dispatcher_UIThreadDispatcher__Dispatch;

    type->SetStrongRefs(
        "_actions", offsetof(Dispatcher_UIThreadDispatcher, _actions),
        "_mutex", offsetof(Dispatcher_UIThreadDispatcher, _mutex));

    return type;
}

void Dispatcher_UIThreadDispatcher___ObjInit_1(Dispatcher_UIThreadDispatcher* __this)
{
    __this->_actions = ::app::Uno::Collections::List__Uno_Action__New_1(NULL);
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    ::app::Fuse::Reactive::Dispatcher___ObjInit(__this);
    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Dispatcher_UIThreadDispatcher__Run, __this), 0);
}

void Dispatcher_UIThreadDispatcher__Dispatch(Dispatcher_UIThreadDispatcher* __this, ::uDelegate* action)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();
    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_actions)->Add(action);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

Dispatcher_UIThreadDispatcher* Dispatcher_UIThreadDispatcher__New_1(::uStatic* __this)
{
    Dispatcher_UIThreadDispatcher* inst = (Dispatcher_UIThreadDispatcher*)::uAllocObject(sizeof(Dispatcher_UIThreadDispatcher), Dispatcher_UIThreadDispatcher__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dispatcher_UIThreadDispatcher__Run(Dispatcher_UIThreadDispatcher* __this)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_actions)->Count() == 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        return;
    }

    ::uArray* list = ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_actions)->ToArray();
    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_actions)->Clear();
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();

    for (int index_124 = 0, length_125 = ::uPtr< ::uArray*>(list)->Length(); index_124 < length_125; ++index_124)
    {
        ::uDelegate* a = ::uPtr< ::uArray*>(list)->Item< ::uDelegate*>(index_124);
        ::uPtr< ::uDelegate*>(a)->InvokeVoid();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Each__uType* Each__typeof()
{
    static ::uStaticStrong<Each__uType*> type;
    if (type != NULL) return type;

    type = (Each__uType*)::uAllocClassType(sizeof(Each__uType), "Fuse.Reactive.Each", false, 1, 5, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Each__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Each__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))Each__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))Each__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))Each__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))Each__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))Each__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))Each__Fuse_Reactive_IObserver_OnNewAll;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(Each__uType, __interface_0));

    type->SetStrongRefs(
        "_elements", offsetof(Each, _elements),
        "_factories", offsetof(Each, _factories),
        "_items", offsetof(Each, _items),
        "_node", offsetof(Each, _node),
        "_subscription", offsetof(Each, _subscription));

    return type;
}

void Each___ObjInit_1(Each* __this)
{
    __this->_elements = ::app::Uno::Collections::List__Fuse_Elements_Element__New_1(NULL);
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Each__AddNew(Each* __this, ::uObject* dataContext)
{
    for (::uObject* enum_128 = ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory::GetEnumerator(::uPtr< ::uObject*>(__this->Factories())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_128)); )
    {
        ::uObject* f = ::app::Uno::Collections::IEnumerator__Uno_UX_IFactory::Current(::uPtr< ::uObject*>(enum_128));
        ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(f)), ::app::Fuse::Elements::Element__typeof());

        if (elm != NULL)
        {
            if (dataContext != NULL)
            {
                ::uPtr< ::app::Fuse::Elements::Element*>(elm)->DataContext(dataContext);
            }

            ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->_node)->Children()), (::app::Fuse::Node*)elm);
            ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Add(elm);
        }
    }
}

void Each__Fuse_Reactive_IObserver_OnAdd(Each* __this, ::uObject* addedValue)
{
    if (__this->_node == NULL)
    {
        return;
    }

    __this->AddNew(addedValue);
    __this->SetValid();
}

void Each__Fuse_Reactive_IObserver_OnFailed(Each* __this, ::uString* message)
{
    if (__this->_node == NULL)
    {
        return;
    }

    __this->RemoveAll();
    __this->SetFailed(message);
}

void Each__Fuse_Reactive_IObserver_OnNewAll(Each* __this, int length)
{
    if (__this->_node == NULL)
    {
        return;
    }

    __this->Repopulate();
    __this->SetValid();
}

void Each__Fuse_Reactive_IObserver_OnNewAt(Each* __this, int index, ::uObject* value)
{
    if (__this->_node == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->_node)->Children()), index))->DataContext(value);
    __this->SetValid();
}

void Each__Fuse_Reactive_IObserver_OnRemove(Each* __this, ::uObject* value, int index)
{
    if (__this->_node == NULL)
    {
        return;
    }

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Elements::Element* c = enum_123.Current();

        if (::app::Uno::Object::Equals(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(c)->DataContext()), value))
        {
            ::uPtr< ::app::Fuse::Controls::Panel*>(__this->_node)->BeginRemoveChild((::app::Fuse::Node*)c);
            ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Remove(c);
            return;
        }
    }

    __this->SetValid();

    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Count() == 0)
    {
        __this->SetEmpty();
    }
}

void Each__Fuse_Reactive_IObserver_OnSet(Each* __this, ::uObject* newValue)
{
    if (__this->_node == NULL)
    {
        return;
    }

    __this->Repopulate();
    __this->SetValid();
}

int Each__get_Count(Each* __this)
{
    return __this->_count;
}

::uObject* Each__get_Factories(Each* __this)
{
    ::uObject* ind_129 = __this->_factories;
    return (ind_129 != NULL) ? ind_129 : (__this->_factories = (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_IFactory__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_IFactory__typeof(), (const void*)Each__OnFactoriesChanged, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_IFactory__typeof(), (const void*)Each__OnFactoriesChanged, __this)));
}

::uObject* Each__get_Items(Each* __this)
{
    return __this->_items;
}

bool Each__IsUnchanged(Each* __this, ::uArray* newDcs)
{
    if (newDcs == NULL)
    {
        if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Count() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if (::uPtr< ::uArray*>(newDcs)->Length() != ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Count())
    {
        return false;
    }

    {
        for (int i = 0; i < ::uPtr< ::uArray*>(newDcs)->Length(); i++)
        {
            if (!::app::Uno::Object::Equals(::uPtr< ::uObject*>(::uPtr< ::uArray*>(newDcs)->Item< ::uObject*>(i)), ::uPtr< ::app::Fuse::Elements::Element*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Item(i))->DataContext()))
            {
                return false;
            }
        }
    }

    return true;
}

Each* Each__New_1(::uStatic* __this)
{
    Each* inst = (Each*)::uAllocObject(sizeof(Each), Each__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Each__OnFactoriesChanged(Each* __this, ::uObject* factory)
{
    if (__this->_node == NULL)
    {
        return;
    }

    __this->Repopulate();
}

void Each__OnItemsChanged(Each* __this)
{
    if (__this->_node == NULL)
    {
        return;
    }

    ::uObject* obs = ::uAs< ::uObject*>(__this->_items, ::app::Fuse::Reactive::IObservable__typeof());

    if (obs != NULL)
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        }

        __this->_subscription = (::uObject*)::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
    }
    else
    {
        __this->Repopulate();
    }
}

void Each__OnRooted(Each* __this, ::app::Fuse::Node* n)
{
    __this->_node = ::uAs< ::app::Fuse::Controls::Panel*>(n, ::app::Fuse::Controls::Panel__typeof());
    __this->OnItemsChanged();
}

void Each__OnUnrooted(Each* __this, ::app::Fuse::Node* n)
{
    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    __this->RemoveAll();
    __this->_node = NULL;
}

void Each__RemoveAll(Each* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element enum_127 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Fuse::Elements::Element* e = enum_127.Current();
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->_node)->Children()), (::app::Fuse::Node*)e);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Clear();
}

void Each__ReplaceAll(Each* __this, ::uArray* dcs)
{
    ::uArray* array_124;
    int index_125 = int();
    int length_126 = int();

    if (__this->IsUnchanged(dcs))
    {
        return;
    }

    __this->RemoveAll();

    if (dcs != NULL)
    {
        for (array_124 = dcs, index_125 = 0, length_126 = ::uPtr< ::uArray*>(array_124)->Length(); index_125 < length_126; ++index_125)
        {
            ::uObject* d = ::uPtr< ::uArray*>(array_124)->Item< ::uObject*>(index_125);
            __this->AddNew(d);
        }
    }
}

void Each__Repopulate(Each* __this)
{
    ::uArray* e = ::uAs< ::uArray*>(__this->_items, ::uGetArrayType(::uObject__typeof()));

    if (e != NULL)
    {
        __this->ReplaceAll(e);
    }
    else
    {
        ::uObject* a = ::uAs< ::uObject*>(__this->_items, ::app::Fuse::Reactive::IAsyncArray__typeof());

        if ((a != NULL) && (__this->Factories() != NULL))
        {
            ::app::Fuse::Reactive::IAsyncArray::Enum(::uPtr< ::uObject*>(a), ::app::Fuse::Reactive::Dispatcher__get_UIThread(NULL), ::uNewDelegateNonVirt(::app::Uno::Action__object____typeof(), (const void*)Each__ReplaceAll, __this));
        }
        else
        {
            __this->RemoveAll();

            for (int i = 0; i < __this->Count(); i++)
            {
                __this->AddNew(NULL);
            }
        }
    }
}

void Each__set_Count(Each* __this, int value)
{
    if (__this->_count != value)
    {
        __this->_count = value;
        __this->OnItemsChanged();
    }
}

void Each__set_Items(Each* __this, ::uObject* value)
{
    if (__this->_items != value)
    {
        __this->_items = value;
        __this->OnItemsChanged();
    }
}

void Each__SetEmpty(Each* __this)
{
}

void Each__SetFailed(Each* __this, ::uString* message)
{
    ::app::Fuse::Controls::Panel* n = __this->_node;

    if (n != NULL)
    {
        ::app::Fuse::Triggers::WhileFailed__SetState(NULL, (::app::Fuse::Node*)n, true, message);
    }
}

void Each__SetValid(Each* __this)
{
    ::app::Fuse::Controls::Panel* n = __this->_node;

    if (n != NULL)
    {
        ::app::Fuse::Triggers::WhileFailed__SetState(NULL, (::app::Fuse::Node*)n, false, NULL);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumArray__uType* EnumArray__typeof()
{
    static ::uStaticStrong<EnumArray__uType*> type;
    if (type != NULL) return type;

    type = (EnumArray__uType*)::uAllocClassType(sizeof(EnumArray__uType), "Fuse.Reactive.EnumArray", false, 0, 4, 0);

    type->SetStrongRefs(
        "_array", offsetof(EnumArray, _array),
        "_callback", offsetof(EnumArray, _callback),
        "_thread", offsetof(EnumArray, _thread),
        "_worker", offsetof(EnumArray, _worker));

    return type;
}

void EnumArray___ObjInit(EnumArray* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* array, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    __this->_worker = worker;
    __this->_array = array;
    __this->_thread = thread;
    __this->_callback = callback;
}

EnumArray* EnumArray__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Array* array, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    EnumArray* inst = (EnumArray*)::uAllocObject(sizeof(EnumArray), EnumArray__typeof());
    inst->_ObjInit(worker, array, thread, callback);
    return inst;
}

void EnumArray__Run(EnumArray* __this)
{
    ::uArray* res = ::uNewArray(::uObject__typeof(), ::uPtr< ::app::Fuse::Scripting::Array*>(__this->_array)->Length());

    for (int i = 0; i < ::uPtr< ::app::Fuse::Scripting::Array*>(__this->_array)->Length(); i++)
    {
        ::uPtr< ::uArray*>(res)->ItemStrong< ::uObject*>(i) = ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Wrap(::uPtr< ::app::Fuse::Scripting::Array*>(__this->_array)->Item(i));
    }

    if (!::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->IsOnWorkerThread())
    {
        ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid< ::uArray*>(res);
    }
    else
    {
        ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch1__object__(__this->_callback, res);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumObservable__uType* EnumObservable__typeof()
{
    static ::uStaticStrong<EnumObservable__uType*> type;
    if (type != NULL) return type;

    type = (EnumObservable__uType*)::uAllocClassType(sizeof(EnumObservable__uType), "Fuse.Reactive.EnumObservable", false, 0, 4, 0);

    type->SetStrongRefs(
        "_callback", offsetof(EnumObservable, _callback),
        "_observable", offsetof(EnumObservable, _observable),
        "_thread", offsetof(EnumObservable, _thread),
        "_worker", offsetof(EnumObservable, _worker));

    return type;
}

void EnumObservable___ObjInit(EnumObservable* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* observable, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    __this->_worker = worker;
    __this->_observable = observable;
    __this->_thread = thread;
    __this->_callback = callback;
}

EnumObservable* EnumObservable__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* observable, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    EnumObservable* inst = (EnumObservable*)::uAllocObject(sizeof(EnumObservable), EnumObservable__typeof());
    inst->_ObjInit(worker, observable, thread, callback);
    return inst;
}

void EnumObservable__Run(EnumObservable* __this)
{
    ::uObject* obj = ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_observable)->Item(::uGetConstString("_values"));
    ::app::Fuse::Scripting::Array* array = ::uAs< ::app::Fuse::Scripting::Array*>(obj, ::app::Fuse::Scripting::Array__typeof());
    ::uArray* res = ::uNewArray(::uObject__typeof(), ::uPtr< ::app::Fuse::Scripting::Array*>(array)->Length());

    if (array != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Scripting::Array*>(array)->Length(); i++)
        {
            ::uPtr< ::uArray*>(res)->ItemStrong< ::uObject*>(i) = ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Wrap(::uPtr< ::app::Fuse::Scripting::Array*>(array)->Item(i));
        }
    }

    ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch1__object__(__this->_callback, res);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EventBinding__uType* EventBinding__typeof()
{
    static ::uStaticStrong<EventBinding__uType*> type;
    if (type != NULL) return type;

    type = (EventBinding__uType*)::uAllocClassType(sizeof(EventBinding__uType), "Fuse.Reactive.EventBinding", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))EventBinding__NewValue;

    type->SetStrongRefs(
        "_func", offsetof(EventBinding, _func));

    return type;
}

void EventBinding__NewValue(EventBinding* __this, ::uObject* obj)
{
    __this->_func = ::uAs< ::uObject*>(obj, ::app::Fuse::Reactive::IAsyncFunction__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSourceTell__uType* FileSourceTell__typeof()
{
    static ::uStaticStrong<FileSourceTell__uType*> type;
    if (type != NULL) return type;

    type = (FileSourceTell__uType*)::uAllocClassType(sizeof(FileSourceTell__uType), "Fuse.Reactive.FileSourceTell", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(FileSourceTell, _callback));

    return type;
}

void FileSourceTell___ObjInit(FileSourceTell* __this, ::uObject* ao, ::uDelegate* callback)
{
    __this->_callback = callback;
    ::app::Fuse::Reactive::IAsyncObject::Tell(::uPtr< ::uObject*>(ao), ::uGetConstString("path"), ::app::Fuse::Reactive::Dispatcher__get_UIThread(NULL), ::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)FileSourceTell__OnPath, __this));
}

FileSourceTell* FileSourceTell__New_1(::uStatic* __this, ::uObject* ao, ::uDelegate* callback)
{
    FileSourceTell* inst = (FileSourceTell*)::uAllocObject(sizeof(FileSourceTell), FileSourceTell__typeof());
    inst->_ObjInit(ao, callback);
    return inst;
}

void FileSourceTell__OnPath(FileSourceTell* __this, ::uObject* res)
{
    ::uString* path = ::uAs< ::uString*>(res, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, path, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid< ::app::Uno::UX::FileSource*>((::app::Uno::UX::FileSource*)::app::Fuse::Reactive::JSFileSource__New_1(NULL, path));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IAsyncArray__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Reactive.IAsyncArray");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IAsyncFunction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Reactive.IAsyncFunction");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IAsyncObject__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Reactive.IAsyncObject");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IObservable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Reactive.IObservable");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IObserver__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Reactive.IObserver");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ISubscription__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Reactive.ISubscription");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Reactive::CrossThreadExceptionHandler*> JavaScript___exceptionHandler;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*> JavaScript___rootedScripts;
::uStaticStrong< ::app::Fuse::Reactive::ThreadWorker*> JavaScript___worker;

JavaScript__uType* JavaScript__typeof()
{
    static ::uStaticStrong<JavaScript__uType*> type;
    if (type != NULL) return type;

    type = (JavaScript__uType*)::uAllocClassType(sizeof(JavaScript__uType), "Fuse.Reactive.JavaScript", false, 1, 5, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))JavaScript__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))JavaScript__OnUnrooted;
    type->__interface_0.__fp_Evaluate = (::uObject*(*)(void*, ::uString*, ::app::Fuse::Scripting::Context*))JavaScript__Fuse_Scripting_IModule_Evaluate;
    type->__interface_0.__fp_get_LineNumberOffset = (int(*)(void*))JavaScript__Fuse_Scripting_IModule_get_LineNumberOffset;
    type->__interface_0.__fp_get_Code = (::uString*(*)(void*))JavaScript__get_Code;
    type->__interface_0.__fp_get_FileName = (::uString*(*)(void*))JavaScript__get_FileName;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IModule__typeof(), offsetof(JavaScript__uType, __interface_0));

    type->SetStrongRefs(
        "_code", offsetof(JavaScript, _code),
        "_dataContext", offsetof(JavaScript, _dataContext),
        "_file", offsetof(JavaScript, _file),
        "_fileName", offsetof(JavaScript, _fileName),
        "_node", offsetof(JavaScript, _node));

    return type;
}

void JavaScript___ObjInit_1(JavaScript* __this)
{
    __this->_fileName = ::uGetConstString("(no filename)");
    ::app::Fuse::Behavior___ObjInit(__this);
}

void JavaScript___TypeInit(::uStatic* __this)
{
    JavaScript___rootedScripts = ::app::Uno::Collections::List__Fuse_Reactive_JavaScript__New_1(NULL);
}

void JavaScript__EvaluateDataContext(JavaScript* __this)
{
    ::app::Fuse::Node* n = __this->_node;

    if (n != NULL)
    {
        __this->_dataContext = ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(JavaScript___worker)->Wrap(::uPtr< ::app::Fuse::Scripting::Context*>(::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(JavaScript___worker)->Context())->Evaluate_1((::uObject*)__this, __this->_fileName));
        ::uPtr< ::app::Fuse::Node*>(n)->DataContext(__this->_dataContext);
    }
}

::uObject* JavaScript__Fuse_Scripting_IModule_Evaluate(JavaScript* __this, ::uString* id, ::app::Fuse::Scripting::Context* context)
{
    return ::uPtr< ::app::Fuse::Scripting::Context*>(context)->Evaluate_1((::uObject*)__this, id);
}

int JavaScript__Fuse_Scripting_IModule_get_LineNumberOffset(JavaScript* __this)
{
    if (::app::Uno::String__op_Inequality(NULL, __this->_code, NULL))
    {
        return __this->LineNumber();
    }

    return 0;
}

::uString* JavaScript__get_Code(JavaScript* __this)
{
    if (::app::Uno::String__op_Inequality(NULL, __this->_code, NULL))
    {
        return __this->_code;
    }

    if (__this->_file != NULL)
    {
        return ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->ReadAllText();
    }

    return NULL;
}

::app::Uno::UX::FileSource* JavaScript__get_File(JavaScript* __this)
{
    return __this->_file;
}

::uString* JavaScript__get_FileName(JavaScript* __this)
{
    if (__this->_file != NULL)
    {
        return ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->Name;
    }
    else
    {
        return __this->_fileName;
    }
}

int JavaScript__get_LineNumber(JavaScript* __this)
{
    return __this->_lineNumber;
}

void JavaScript__HandleWorkerException(::uStatic* __this)
{
    if (JavaScript___exceptionHandler != NULL)
    {
        ::uPtr< ::app::Fuse::Reactive::CrossThreadExceptionHandler*>(JavaScript___exceptionHandler)->CheckAndThrow();
    }
}

void JavaScript__Invalidate(JavaScript* __this)
{
    ::app::Fuse::Node* n = __this->_node;

    if (n != NULL)
    {
        if (JavaScript___worker != NULL)
        {
            ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(JavaScript___worker)->Dispatch(1, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)JavaScript__EvaluateDataContext, __this));
        }
    }
    else
    {
        ::uString* key = ::app::Uno::UX::Resource__GetGlobalKey(NULL, (::uObject*)__this);

        if (::app::Uno::String__op_Inequality(NULL, key, NULL) && (JavaScript___worker != NULL))
        {
            ::uPtr< ::app::Fuse::Scripting::Context*>(::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(JavaScript___worker)->Context())->ResetModule(key);
        }

        JavaScript__ResetRootedScripts(NULL);
    }
}

JavaScript* JavaScript__New_1(::uStatic* __this)
{
    JavaScript* inst = (JavaScript*)::uAllocObject(sizeof(JavaScript), JavaScript__typeof());
    inst->_ObjInit_1();
    return inst;
}

void JavaScript__OnFileChanged(JavaScript* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Invalidate();
}

void JavaScript__OnRooted(JavaScript* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    ::app::Fuse::Reactive::ScriptEvents__AddListener(NULL, __this->_node, ::uNewDelegateNonVirt(::app::Fuse::Reactive::ScriptEventHandler__typeof(), (const void*)JavaScript__OnScriptEvent, __this));
    JavaScript__StartWorker(NULL);
    __this->Invalidate();
    ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(JavaScript___rootedScripts)->Add(__this);
}

void JavaScript__OnScriptEvent(JavaScript* __this, ::uObject* sender, ::app::Fuse::Reactive::ScriptEventArgs* args)
{
    ::app::Fuse::Scripting::Object* obj = ::uAs< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(JavaScript___worker)->Unwrap(__this->_dataContext), ::app::Fuse::Scripting::Object__typeof());

    if (obj != NULL)
    {
        ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(JavaScript___worker)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::CallObjectEventHandler__Run, ::app::Fuse::Reactive::CallObjectEventHandler__New_1(NULL, JavaScript___worker, obj, args)));
    }
}

void JavaScript__OnUnrooted(JavaScript* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(JavaScript___rootedScripts)->Remove(__this);
    ::app::Fuse::Reactive::ScriptEvents__RemoveListener(NULL, __this->_node, ::uNewDelegateNonVirt(::app::Fuse::Reactive::ScriptEventHandler__typeof(), (const void*)JavaScript__OnScriptEvent, __this));
    ::uPtr< ::app::Fuse::Node*>(__this->_node)->DataContext(NULL);
    __this->_node = NULL;
}

void JavaScript__ResetRootedScripts(::uStatic* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(JavaScript___rootedScripts)->GetEnumerator(); enum_123.MoveNext(); )
    {
        JavaScript* s = enum_123.Current();
        ::uPtr< JavaScript*>(s)->Invalidate();
    }
}

void JavaScript__set_Code(JavaScript* __this, ::uString* value)
{
    if (::app::Uno::String__op_Inequality(NULL, __this->_code, value))
    {
        __this->_code = value;
        __this->Invalidate();
    }
}

void JavaScript__set_File(JavaScript* __this, ::app::Uno::UX::FileSource* value)
{
    if (__this->_file != value)
    {
        if (__this->_file != NULL)
        {
            ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->remove_DataChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_EventArgs__typeof(), (const void*)JavaScript__OnFileChanged, __this));
        }

        __this->_file = value;

        if (__this->_file != NULL)
        {
            ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->add_DataChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_EventArgs__typeof(), (const void*)JavaScript__OnFileChanged, __this));
        }

        __this->Invalidate();
    }
}

void JavaScript__set_FileName(JavaScript* __this, ::uString* value)
{
    __this->_fileName = value;
}

void JavaScript__set_LineNumber(JavaScript* __this, int value)
{
    if (__this->_lineNumber != value)
    {
        __this->_lineNumber = value;
        __this->Invalidate();
    }
}

void JavaScript__StartWorker(::uStatic* __this)
{
    if (JavaScript___worker == NULL)
    {
        if (JavaScript___exceptionHandler == NULL)
        {
            ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)JavaScript__HandleWorkerException), 0);
        }

        JavaScript___exceptionHandler = ::app::Fuse::Reactive::CrossThreadExceptionHandler__New_1(NULL);
        JavaScript___worker = ::app::Fuse::Reactive::ThreadWorker__New_1(NULL, JavaScript___exceptionHandler);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSFileSource__uType* JSFileSource__typeof()
{
    static ::uStaticStrong<JSFileSource__uType*> type;
    if (type != NULL) return type;

    type = (JSFileSource__uType*)::uAllocClassType(sizeof(JSFileSource__uType), "Fuse.Reactive.JSFileSource", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::FileSource__typeof());
    type->__fp_OpenRead = (::app::Uno::IO::Stream*(*)(::app::Uno::UX::FileSource*))JSFileSource__OpenRead;

    type->SetStrongRefs(
        "_path", offsetof(JSFileSource, _path));

    return type;
}

void JSFileSource___ObjInit_1(JSFileSource* __this, ::uString* path)
{
    ::app::Uno::UX::FileSource___ObjInit(__this, path);
    __this->_path = path;
}

JSFileSource* JSFileSource__New_1(::uStatic* __this, ::uString* path)
{
    JSFileSource* inst = (JSFileSource*)::uAllocObject(sizeof(JSFileSource), JSFileSource__typeof());
    inst->_ObjInit_1(path);
    return inst;
}

::app::Uno::IO::Stream* JSFileSource__OpenRead(JSFileSource* __this)
{
    return ::app::Uno::IO::File__OpenRead(NULL, __this->_path);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Marshal__uType* Marshal__typeof()
{
    static ::uStaticStrong<Marshal__uType*> type;
    if (type != NULL) return type;

    type = (Marshal__uType*)::uAllocClassType(sizeof(Marshal__uType), "Fuse.Reactive.Marshal");

    return type;
}

int Marshal__ToAlignment(::uStatic* __this, ::uObject* obj)
{
    ::uString* s = ::uAs< ::uString*>(obj, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Default")))
    {
        return 0;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Left")))
    {
        return 1;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("HorizontalCenter")))
    {
        return 2;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Right")))
    {
        return 3;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Top")))
    {
        return 4;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("VerticalCenter")))
    {
        return 8;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Bottom")))
    {
        return 12;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("TopLeft")))
    {
        return 5;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("TopCenter")))
    {
        return 6;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("TopRight")))
    {
        return 7;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("CenterLeft")))
    {
        return 9;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Center")))
    {
        return 10;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("CenterRight")))
    {
        return 11;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("BottomLeft")))
    {
        return 13;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("BottomCenter")))
    {
        return 14;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("BottomRight")))
    {
        return 15;
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unable to convert "), obj), ::uGetConstString(" to Alignment"))));
    }
}

bool Marshal__ToBool(::uStatic* __this, ::uObject* obj)
{
    if (::uIs(obj, ::app::Uno::Bool__typeof()))
    {
        return ::uUnbox< bool>(::app::Uno::Bool__typeof(), obj);
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unable to convert "), obj), ::uGetConstString(" to bool"))));
    }
}

::app::Fuse::Drawing::Brush* Marshal__ToBrush(::uStatic* __this, ::uObject* o)
{
    ::app::Fuse::Drawing::SolidColor* b = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    Marshal__ToFloat4(NULL, o, ::uNewDelegateNonVirt(::app::Uno::Action__float4__typeof(), (const void*)::app::Fuse::Drawing::SolidColor__SetColor, b));
    return (::app::Fuse::Drawing::Brush*)b;
}

double Marshal__ToDouble(::uStatic* __this, ::uObject* o)
{
    if (::uIs(o, ::app::Uno::Double__typeof()))
    {
        return ::uUnbox< double>(::app::Uno::Double__typeof(), o);
    }
    else if (::uIs(o, ::app::Uno::Float__typeof()))
    {
        return (double)::uUnbox< float>(::app::Uno::Float__typeof(), o);
    }
    else if (::uIs(o, ::app::Uno::Int__typeof()))
    {
        return (double)::uUnbox< int>(::app::Uno::Int__typeof(), o);
    }
    else if (o == NULL)
    {
        return 0.0;
    }
    else
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Expected number was "), (::uObject*)::app::Uno::Object::GetType(::uPtr< ::uObject*>(o))), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno"), 1822);
        return 0.0;
    }
}

void Marshal__ToFileSource(::uStatic* __this, ::uObject* obj, ::uDelegate* callback)
{
    if (::uIs(obj, ::app::Uno::String__typeof()))
    {
        ::uPtr< ::uDelegate*>(callback)->InvokeVoid< ::app::Uno::UX::FileSource*>((::app::Uno::UX::FileSource*)::app::Fuse::Reactive::JSFileSource__New_1(NULL, ::uCast< ::uString*>(obj, ::app::Uno::String__typeof())));
    }
    else if (::uIs(obj, ::app::Fuse::Reactive::IAsyncObject__typeof()))
    {
        ::app::Fuse::Reactive::FileSourceTell__New_1(NULL, (::uObject*)obj, callback);
    }
    else
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unable to convert "), (::uObject*)::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj))), ::uGetConstString(" to a FileSource")), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno"), 1833);
    }
}

float Marshal__ToFloat(::uStatic* __this, ::uObject* o)
{
    return (float)Marshal__ToDouble(NULL, o);
}

void Marshal__ToFloat4(::uStatic* __this, ::uObject* o, ::uDelegate* callback)
{
    ::uObject* aa = ::uAs< ::uObject*>(o, ::app::Fuse::Reactive::IAsyncArray__typeof());

    if (aa != NULL)
    {
        ::app::Fuse::Reactive::IAsyncArray::Enum(::uPtr< ::uObject*>(aa), ::app::Fuse::Reactive::Dispatcher__get_UIThread(NULL), ::uNewDelegateNonVirt(::app::Uno::Action__object____typeof(), (const void*)::app::Fuse::Reactive::Marshal_VectorEnum__Enum, ::app::Fuse::Reactive::Marshal_VectorEnum__New_1(NULL, callback)));
        return;
    }

    if (::uIs(o, ::app::Uno::String__typeof()))
    {
        ::uString* s = ::uCast< ::uString*>(o, ::app::Uno::String__typeof());

        if (::app::Uno::String::StartsWith(::uPtr< ::uString*>(s), ::uGetConstString("#")))
        {
            ::uPtr< ::uDelegate*>(callback)->InvokeVoid< ::app::Uno::Float4>(::app::Uno::Color__FromHex(NULL, s));
        }

        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unable to convert "), o), ::uGetConstString(" to float4"))));
}

int Marshal__ToInt(::uStatic* __this, ::uObject* o)
{
    return (int)Marshal__ToDouble(NULL, o);
}

void Marshal__ToType__object(::uStatic* __this, ::uObject* o, ::uDelegate* callback)
{
    if (o == NULL)
    {
        ::uPtr< ::uDelegate*>(callback)->InvokeVoid< ::uObject*>(NULL);
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Bool__typeof())
    {
        callback->InvokeVoid< ::uObject*>(::uBox(::app::Uno::Bool__typeof(), Marshal__ToBool(NULL, o)));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float__typeof())
    {
        callback->InvokeVoid< ::uObject*>(::uBox(::app::Uno::Float__typeof(), Marshal__ToFloat(NULL, o)));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Double__typeof())
    {
        callback->InvokeVoid< ::uObject*>(::uBox(::app::Uno::Double__typeof(), Marshal__ToDouble(NULL, o)));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Int__typeof())
    {
        callback->InvokeVoid< ::uObject*>(::uBox< int>(::app::Uno::Int__typeof(), Marshal__ToInt(NULL, o)));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::String__typeof())
    {
        callback->InvokeVoid< ::uObject*>((::uObject*)::app::Uno::Object::ToString(::uPtr< ::uObject*>(o)));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float4__typeof())
    {
        Marshal__ToFloat4(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__float4__typeof()));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float3__typeof())
    {
        ::app::Fuse::Reactive::Marshal_Float3Enum__New_1(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__float3__typeof()));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float2__typeof())
    {
        ::app::Fuse::Reactive::Marshal_Float2Enum__New_1(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__float2__typeof()));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Fuse::Elements::Visibility__typeof())
    {
        callback->InvokeVoid< ::uObject*>(::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), Marshal__ToVisibility(NULL, o)));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Fuse::Elements::Alignment__typeof())
    {
        callback->InvokeVoid< ::uObject*>(::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), Marshal__ToAlignment(NULL, o)));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Fuse::Drawing::Brush__typeof())
    {
        callback->InvokeVoid< ::uObject*>((::uObject*)Marshal__ToBrush(NULL, o));
    }
    else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::UX::FileSource__typeof())
    {
        Marshal__ToFileSource(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__Uno_UX_FileSource__typeof()));
    }
    else
    {
        if (!::uIs(o, ::app::Uno::String__typeof()))
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Marshal.ToType(): Unable to convert "), o), ::uGetConstString(" to type ")), (::uObject*)(::uType*)::uObject__typeof())));
        }
    }
}

void Marshal__ToType__string(::uStatic* __this, ::uObject* o, ::uDelegate* callback)
{
    if (o == NULL)
    {
        ::uPtr< ::uDelegate*>(callback)->InvokeVoid< ::uString*>(NULL);
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Bool__typeof())
    {
        callback->InvokeVoid< ::uString*>(::uCast< ::uString*>(::uBox(::app::Uno::Bool__typeof(), Marshal__ToBool(NULL, o)), ::app::Uno::String__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float__typeof())
    {
        callback->InvokeVoid< ::uString*>(::uCast< ::uString*>(::uBox(::app::Uno::Float__typeof(), Marshal__ToFloat(NULL, o)), ::app::Uno::String__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Double__typeof())
    {
        callback->InvokeVoid< ::uString*>(::uCast< ::uString*>(::uBox(::app::Uno::Double__typeof(), Marshal__ToDouble(NULL, o)), ::app::Uno::String__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Int__typeof())
    {
        callback->InvokeVoid< ::uString*>(::uCast< ::uString*>(::uBox< int>(::app::Uno::Int__typeof(), Marshal__ToInt(NULL, o)), ::app::Uno::String__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::String__typeof())
    {
        callback->InvokeVoid< ::uString*>(::app::Uno::Object::ToString(::uPtr< ::uObject*>(o)));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float4__typeof())
    {
        Marshal__ToFloat4(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__float4__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float3__typeof())
    {
        ::app::Fuse::Reactive::Marshal_Float3Enum__New_1(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__float3__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float2__typeof())
    {
        ::app::Fuse::Reactive::Marshal_Float2Enum__New_1(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__float2__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Fuse::Elements::Visibility__typeof())
    {
        callback->InvokeVoid< ::uString*>(::uCast< ::uString*>(::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), Marshal__ToVisibility(NULL, o)), ::app::Uno::String__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Fuse::Elements::Alignment__typeof())
    {
        callback->InvokeVoid< ::uString*>(::uCast< ::uString*>(::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), Marshal__ToAlignment(NULL, o)), ::app::Uno::String__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Fuse::Drawing::Brush__typeof())
    {
        callback->InvokeVoid< ::uString*>(::uCast< ::uString*>((::uObject*)Marshal__ToBrush(NULL, o), ::app::Uno::String__typeof()));
    }
    else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::UX::FileSource__typeof())
    {
        Marshal__ToFileSource(NULL, o, ::uCast< ::uDelegate*>((::uObject*)callback, ::app::Uno::Action__Uno_UX_FileSource__typeof()));
    }
    else
    {
        if (!::uIs(o, ::app::Uno::String__typeof()))
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Marshal.ToType(): Unable to convert "), o), ::uGetConstString(" to type ")), (::uObject*)(::uType*)::app::Uno::String__typeof())));
        }
    }
}

int Marshal__ToVisibility(::uStatic* __this, ::uObject* obj)
{
    ::uString* s = ::uAs< ::uString*>(obj, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Visible")))
    {
        return 0;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Hidden")))
    {
        return 2;
    }
    else if (::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("Collapsed")))
    {
        return 1;
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unable to convert "), obj), ::uGetConstString(" to Visibility"))));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Marshal_Float2Enum__uType* Marshal_Float2Enum__typeof()
{
    static ::uStaticStrong<Marshal_Float2Enum__uType*> type;
    if (type != NULL) return type;

    type = (Marshal_Float2Enum__uType*)::uAllocClassType(sizeof(Marshal_Float2Enum__uType), "Fuse.Reactive.Marshal.Float2Enum", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(Marshal_Float2Enum, _callback));

    return type;
}

void Marshal_Float2Enum___ObjInit(Marshal_Float2Enum* __this, ::uObject* obj, ::uDelegate* callback)
{
    __this->_callback = callback;
    ::app::Fuse::Reactive::Marshal__ToFloat4(NULL, obj, ::uNewDelegateNonVirt(::app::Uno::Action__float4__typeof(), (const void*)Marshal_Float2Enum__Convert, __this));
}

void Marshal_Float2Enum__Convert(Marshal_Float2Enum* __this, ::app::Uno::Float4 v)
{
    ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid< ::app::Uno::Float2>(::app::Uno::Float2__New_2(NULL, v.X, v.Y));
}

Marshal_Float2Enum* Marshal_Float2Enum__New_1(::uStatic* __this, ::uObject* obj, ::uDelegate* callback)
{
    Marshal_Float2Enum* inst = (Marshal_Float2Enum*)::uAllocObject(sizeof(Marshal_Float2Enum), Marshal_Float2Enum__typeof());
    inst->_ObjInit(obj, callback);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Marshal_Float3Enum__uType* Marshal_Float3Enum__typeof()
{
    static ::uStaticStrong<Marshal_Float3Enum__uType*> type;
    if (type != NULL) return type;

    type = (Marshal_Float3Enum__uType*)::uAllocClassType(sizeof(Marshal_Float3Enum__uType), "Fuse.Reactive.Marshal.Float3Enum", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(Marshal_Float3Enum, _callback));

    return type;
}

void Marshal_Float3Enum___ObjInit(Marshal_Float3Enum* __this, ::uObject* obj, ::uDelegate* callback)
{
    __this->_callback = callback;
    ::app::Fuse::Reactive::Marshal__ToFloat4(NULL, obj, ::uNewDelegateNonVirt(::app::Uno::Action__float4__typeof(), (const void*)Marshal_Float3Enum__Convert, __this));
}

void Marshal_Float3Enum__Convert(Marshal_Float3Enum* __this, ::app::Uno::Float4 v)
{
    ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid< ::app::Uno::Float3>(::app::Uno::Float3__New_2(NULL, v.X, v.Y, v.Z));
}

Marshal_Float3Enum* Marshal_Float3Enum__New_1(::uStatic* __this, ::uObject* obj, ::uDelegate* callback)
{
    Marshal_Float3Enum* inst = (Marshal_Float3Enum*)::uAllocObject(sizeof(Marshal_Float3Enum), Marshal_Float3Enum__typeof());
    inst->_ObjInit(obj, callback);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Marshal_VectorEnum__uType* Marshal_VectorEnum__typeof()
{
    static ::uStaticStrong<Marshal_VectorEnum__uType*> type;
    if (type != NULL) return type;

    type = (Marshal_VectorEnum__uType*)::uAllocClassType(sizeof(Marshal_VectorEnum__uType), "Fuse.Reactive.Marshal.VectorEnum", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(Marshal_VectorEnum, _callback));

    return type;
}

void Marshal_VectorEnum___ObjInit(Marshal_VectorEnum* __this, ::uDelegate* callback)
{
    __this->_callback = callback;
}

void Marshal_VectorEnum__Enum(Marshal_VectorEnum* __this, ::uArray* values)
{
    float r = (::uPtr< ::uArray*>(values)->Length() > 0) ? ::app::Fuse::Reactive::Marshal__ToFloat(NULL, ::uPtr< ::uArray*>(values)->Item< ::uObject*>(0)) : 0.0f;
    float g = (values->Length() > 1) ? ::app::Fuse::Reactive::Marshal__ToFloat(NULL, values->Item< ::uObject*>(1)) : r;
    float b = (values->Length() > 2) ? ::app::Fuse::Reactive::Marshal__ToFloat(NULL, values->Item< ::uObject*>(2)) : r;
    float a = (values->Length() > 3) ? ::app::Fuse::Reactive::Marshal__ToFloat(NULL, values->Item< ::uObject*>(3)) : 1.0f;
    ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid< ::app::Uno::Float4>(::app::Uno::Float4__New_2(NULL, r, g, b, a));
}

Marshal_VectorEnum* Marshal_VectorEnum__New_1(::uStatic* __this, ::uDelegate* callback)
{
    Marshal_VectorEnum* inst = (Marshal_VectorEnum*)::uAllocObject(sizeof(Marshal_VectorEnum), Marshal_VectorEnum__typeof());
    inst->_ObjInit(callback);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Match__uType* Match__typeof()
{
    static ::uStaticStrong<Match__uType*> type;
    if (type != NULL) return type;

    type = (Match__uType*)::uAllocClassType(sizeof(Match__uType), "Fuse.Reactive.Match", false, 1, 5, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Match__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Match__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))Match__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))Match__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))Match__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))Match__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))Match__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))Match__Fuse_Reactive_IObserver_OnRemove;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(Match__uType, __interface_0));

    type->SetStrongRefs(
        "_cases", offsetof(Match, _cases),
        "_elements", offsetof(Match, _elements),
        "_oldCase", offsetof(Match, _oldCase),
        "_panel", offsetof(Match, _panel),
        "_realValue", offsetof(Match, _realValue));

    return type;
}

void Match__AddElements(Match* __this, ::app::Fuse::Reactive::Case* c)
{
    if (c != NULL)
    {
        for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Reactive::Case*>(c)->Factories())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::uObject* f = ::app::Uno::Collections::IEnumerator__Uno_UX_IFactory::Current(::uPtr< ::uObject*>(enum_125));
            ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(f)), ::app::Fuse::Elements::Element__typeof());

            if (elm != NULL)
            {
                ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->_panel)->Children()), (::app::Fuse::Node*)elm);
                ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Add(elm);
            }
        }
    }

    __this->_oldCase = c;
}

void Match__Fuse_Reactive_IObserver_OnAdd(Match* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void Match__Fuse_Reactive_IObserver_OnFailed(Match* __this, ::uString* message)
{
}

void Match__Fuse_Reactive_IObserver_OnNewAll(Match* __this, int length)
{
    if (length == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("<Match> can not be used on lists (received OnNewAll)")));
}

void Match__Fuse_Reactive_IObserver_OnNewAt(Match* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void Match__Fuse_Reactive_IObserver_OnRemove(Match* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("<Match> can not be used on lists (received OnNewAll)")));
}

void Match__Fuse_Reactive_IObserver_OnSet(Match* __this, ::uObject* newValue)
{
    __this->_realValue = newValue;
    __this->Invalidate();
}

void Match__Invalidate(Match* __this)
{
    if (__this->_panel == NULL)
    {
        return;
    }

    ::app::Fuse::Reactive::Case* newCase = __this->SelectCase();

    if (newCase != __this->_oldCase)
    {
        __this->RemoveElements();
        __this->AddElements(newCase);
    }
}

void Match__OnRooted(Match* __this, ::app::Fuse::Node* n)
{
    __this->_panel = ::uAs< ::app::Fuse::Controls::Panel*>(n, ::app::Fuse::Controls::Panel__typeof());

    if (__this->_panel == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Match can only be used on Panel (for now)"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno"), 1629);
    }

    __this->Invalidate();
}

void Match__OnUnrooted(Match* __this, ::app::Fuse::Node* n)
{
    __this->RemoveElements();
    __this->_panel = NULL;
}

void Match__RemoveElements(Match* __this)
{
    __this->_oldCase = NULL;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Elements::Element* e = enum_124.Current();
        ::uPtr< ::app::Fuse::Controls::Panel*>(__this->_panel)->BeginRemoveChild((::app::Fuse::Node*)e);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Clear();
}

::app::Fuse::Reactive::Case* Match__SelectCase(Match* __this)
{
    ::app::Fuse::Reactive::Case* def = NULL;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Reactive_Case::GetEnumerator(::uPtr< ::uObject*>(__this->_cases)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Reactive::Case* c = ::app::Uno::Collections::IEnumerator__Fuse_Reactive_Case::Current(::uPtr< ::uObject*>(enum_123));

        if (::app::Uno::Object::Equals(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Reactive::Case*>(c)->Value()), __this->_realValue))
        {
            return c;
        }

        if (::uPtr< ::app::Fuse::Reactive::Case*>(c)->IsDefault())
        {
            def = c;
        }
    }

    return def;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Observable__uType* Observable__typeof()
{
    static ::uStaticStrong<Observable__uType*> type;
    if (type != NULL) return type;

    type = (Observable__uType*)::uAllocClassType(sizeof(Observable__uType), "Fuse.Reactive.Observable", false, 3, 3, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Observable__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Observable__GetHashCode;
    type->__interface_0.__fp_Subscribe = (::uObject*(*)(void*, ::uObject*))Observable__Subscribe;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Observable__Dispose;
    type->__interface_2.__fp_Enum = (void(*)(void*, ::app::Fuse::Reactive::Dispatcher*, ::uDelegate*))Observable__Enum;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObservable__typeof(), offsetof(Observable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Observable__uType, __interface_1),
        ::app::Fuse::Reactive::IAsyncArray__typeof(), offsetof(Observable__uType, __interface_2));

    type->SetStrongRefs(
        "Object", offsetof(Observable, Object),
        "Thread", offsetof(Observable, Thread),
        "Worker", offsetof(Observable, Worker));

    return type;
}

void Observable___ObjInit(Observable* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::Dispatcher* thread)
{
    __this->Worker = worker;
    __this->Object = obj;
    __this->Thread = thread;
}

void Observable__Dispose(Observable* __this)
{
}

void Observable__Enum(Observable* __this, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->Worker)->Dispatch(1, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::EnumObservable__Run, ::app::Fuse::Reactive::EnumObservable__New_1(NULL, __this->Worker, __this->Object, __this->Thread, callback)));
}

bool Observable__Equals(Observable* __this, ::uObject* obj)
{
    Observable* obs = ::uAs< Observable*>(obj, Observable__typeof());

    if (obs == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Fuse::Scripting::Object*>(__this->Object)->Equals_2(::uPtr< Observable*>(obs)->Object);
}

int Observable__GetHashCode(Observable* __this)
{
    return ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Scripting::Object*>(__this->Object));
}

Observable* Observable__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::Dispatcher* thread)
{
    Observable* inst = (Observable*)::uAllocObject(sizeof(Observable), Observable__typeof());
    inst->_ObjInit(worker, obj, thread);
    return inst;
}

::uObject* Observable__Subscribe(Observable* __this, ::uObject* observer)
{
    return (::uObject*)::app::Fuse::Reactive::ObservableSubscription__New_1(NULL, __this->Worker, __this->Object, observer, __this->Thread);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableSubscription__uType* ObservableSubscription__typeof()
{
    static ::uStaticStrong<ObservableSubscription__uType*> type;
    if (type != NULL) return type;

    type = (ObservableSubscription__uType*)::uAllocClassType(sizeof(ObservableSubscription__uType), "Fuse.Reactive.ObservableSubscription", false, 2, 6, 0);

    type->__interface_0.__fp_SetExclusive = (void(*)(void*, ::uObject*))ObservableSubscription__SetExclusive;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ObservableSubscription__Dispose;

    type->SetInterfaces(
        ::app::Fuse::Reactive::ISubscription__typeof(), offsetof(ObservableSubscription__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ObservableSubscription__uType, __interface_1));

    type->SetStrongRefs(
        "_callback", offsetof(ObservableSubscription, _callback),
        "_observable", offsetof(ObservableSubscription, _observable),
        "_observer", offsetof(ObservableSubscription, _observer),
        "_subscriberProxy", offsetof(ObservableSubscription, _subscriberProxy),
        "_thread", offsetof(ObservableSubscription, _thread),
        "_worker", offsetof(ObservableSubscription, _worker));

    return type;
}

void ObservableSubscription___ObjInit(ObservableSubscription* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uObject* observer, ::app::Fuse::Reactive::Dispatcher* thread)
{
    __this->_worker = worker;
    __this->_observable = obj;
    __this->_observer = observer;
    __this->_thread = thread;
    __this->_callback = ::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)ObservableSubscription__ObserveChange, __this);
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ObservableSubscription__Subscribe, __this));
}

void ObservableSubscription__Dispose(ObservableSubscription* __this)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ObservableSubscription__Unsubscribe, __this));
}

::app::Fuse::Scripting::Object* ObservableSubscription__get_Proxy(ObservableSubscription* __this)
{
    return __this->_subscriberProxy;
}

ObservableSubscription* ObservableSubscription__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uObject* observer, ::app::Fuse::Reactive::Dispatcher* thread)
{
    ObservableSubscription* inst = (ObservableSubscription*)::uAllocObject(sizeof(ObservableSubscription), ObservableSubscription__typeof());
    inst->_ObjInit(worker, obj, observer, thread);
    return inst;
}

::uObject* ObservableSubscription__ObserveChange(ObservableSubscription* __this, ::uArray* args)
{
    ::app::Fuse::Scripting::Object* observable = ::uAs< ::app::Fuse::Scripting::Object*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Object__typeof());
    ::uString* op = ::uAs< ::uString*>(args->Item< ::uObject*>(1), ::app::Uno::String__typeof());
    ::uObject* arg = ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Wrap(args->Item< ::uObject*>(2));

    if (!::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->IsOnWorkerThread())
    {
        if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("set")))
        {
            ::app::Fuse::Reactive::IObserver::OnSet(::uPtr< ::uObject*>(__this->_observer), arg);
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("newAt")))
        {
            ::app::Fuse::Reactive::IObserver::OnNewAt(::uPtr< ::uObject*>(__this->_observer), ::app::Fuse::Reactive::Marshal__ToInt(NULL, arg), ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Wrap(::uPtr< ::uArray*>(args)->Item< ::uObject*>(3)));
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("newAll")))
        {
            ::app::Fuse::Reactive::IObserver::OnNewAll(::uPtr< ::uObject*>(__this->_observer), ::app::Fuse::Reactive::Marshal__ToInt(NULL, arg));
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("add")))
        {
            ::app::Fuse::Reactive::IObserver::OnAdd(::uPtr< ::uObject*>(__this->_observer), arg);
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("remove")))
        {
            ::app::Fuse::Reactive::IObserver::OnRemove(::uPtr< ::uObject*>(__this->_observer), arg, ::app::Fuse::Reactive::Marshal__ToInt(NULL, args->Item< ::uObject*>(3)));
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("failed")))
        {
            ::app::Fuse::Reactive::IObserver::OnFailed(::uPtr< ::uObject*>(__this->_observer), ::uCast< ::uString*>(args->Item< ::uObject*>(2), ::app::Uno::String__typeof()));
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unhandled observable operation: "), op)));
        }
    }
    else
    {
        if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("set")))
        {
            ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch1__object(::uNewDelegateInterface(::app::Uno::Action__object__typeof(), __this->_observer, ::app::Fuse::Reactive::IObserver__typeof(), offsetof(::app::Fuse::Reactive::IObserver, __fp_OnSet)), arg);
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("newAt")))
        {
            ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch2__int__object(::uNewDelegateInterface(::app::Uno::Action__int__object__typeof(), __this->_observer, ::app::Fuse::Reactive::IObserver__typeof(), offsetof(::app::Fuse::Reactive::IObserver, __fp_OnNewAt)), ::app::Fuse::Reactive::Marshal__ToInt(NULL, arg), ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Wrap(::uPtr< ::uArray*>(args)->Item< ::uObject*>(3)));
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("newAll")))
        {
            ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch1__int(::uNewDelegateInterface(::app::Uno::Action__int__typeof(), __this->_observer, ::app::Fuse::Reactive::IObserver__typeof(), offsetof(::app::Fuse::Reactive::IObserver, __fp_OnNewAll)), ::app::Fuse::Reactive::Marshal__ToInt(NULL, arg));
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("add")))
        {
            ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch1__object(::uNewDelegateInterface(::app::Uno::Action__object__typeof(), __this->_observer, ::app::Fuse::Reactive::IObserver__typeof(), offsetof(::app::Fuse::Reactive::IObserver, __fp_OnAdd)), arg);
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("remove")))
        {
            ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch2__object__int(::uNewDelegateInterface(::app::Uno::Action__object__int__typeof(), __this->_observer, ::app::Fuse::Reactive::IObserver__typeof(), offsetof(::app::Fuse::Reactive::IObserver, __fp_OnRemove)), arg, ::app::Fuse::Reactive::Marshal__ToInt(NULL, args->Item< ::uObject*>(3)));
        }
        else if (::app::Uno::String__op_Equality(NULL, op, ::uGetConstString("failed")))
        {
            ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch1__string(::uNewDelegateInterface(::app::Uno::Action__string__typeof(), __this->_observer, ::app::Fuse::Reactive::IObserver__typeof(), offsetof(::app::Fuse::Reactive::IObserver, __fp_OnFailed)), ::uCast< ::uString*>(args->Item< ::uObject*>(2), ::app::Uno::String__typeof()));
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unhandled observable operation: "), op)));
        }
    }

    return NULL;
}

void ObservableSubscription__SetExclusive(ObservableSubscription* __this, ::uObject* newValue)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::SubscriptionSetExclusive__Run, ::app::Fuse::Reactive::SubscriptionSetExclusive__New_1(NULL, __this, ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Unwrap(newValue))));
}

void ObservableSubscription__Subscribe(ObservableSubscription* __this)
{
    ::uArray* array_123;
    __this->_subscriberProxy = ::uAs< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->SubscriberProxy())->Call((array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)__this->_observable, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)__this->_callback, array_123)), ::app::Fuse::Scripting::Object__typeof());
}

void ObservableSubscription__Unsubscribe(ObservableSubscription* __this)
{
    ::uPtr< ::app::Fuse::Scripting::Object*>(__this->_subscriberProxy)->CallMethod(::uGetConstString("dispose"), ::uNewArray(::uObject__typeof(), 0));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathSubscription__uType* PathSubscription__typeof()
{
    static ::uStaticStrong<PathSubscription__uType*> type;
    if (type != NULL) return type;

    type = (PathSubscription__uType*)::uAllocClassType(sizeof(PathSubscription__uType), "Fuse.Reactive.PathSubscription", false, 2, 5, 0);

    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))PathSubscription__OnNewAll;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))PathSubscription__OnNewAt;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))PathSubscription__OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))PathSubscription__OnAdd;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))PathSubscription__OnRemove;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))PathSubscription__OnFailed;
    type->__interface_1.__fp_Dispose = (void(*)(void*))PathSubscription__Dispose;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(PathSubscription__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(PathSubscription__uType, __interface_1));

    type->SetStrongRefs(
        "_b", offsetof(PathSubscription, _b),
        "_key", offsetof(PathSubscription, _key),
        "_next", offsetof(PathSubscription, _next),
        "_subscription", offsetof(PathSubscription, _subscription),
        "_unhandledPath", offsetof(PathSubscription, _unhandledPath));

    return type;
}

void PathSubscription___ObjInit(PathSubscription* __this, ::app::Fuse::Reactive::Binding* b, ::uObject* dc, ::uString* path)
{
    __this->_b = b;
    __this->_key = PathSubscription__TakeKeyFromPath(NULL, &path);
    __this->HandlePath(dc, path);
}

void PathSubscription___ObjInit_1(PathSubscription* __this, ::app::Fuse::Reactive::Binding* b, ::uString* path)
{
    __this->_b = b;
    __this->_key = PathSubscription__TakeKeyFromPath(NULL, &path);
    __this->_unhandledPath = path;
    __this->_isInnerLink = true;
}

::uString* PathSubscription__CombineKeyAndPath(::uStatic* __this, ::uString* key, ::uString* path)
{
    if (::app::Uno::String__op_Inequality(NULL, path, NULL) && (::uPtr< ::uString*>(path)->Length() > 0))
    {
        return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, key, ::uGetConstString(".")), path);
    }
    else
    {
        return key;
    }
}

void PathSubscription__Dispose(PathSubscription* __this)
{
    if (__this->_isDisposed)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot access disposed PathSubscription")));
    }

    __this->_isDisposed = true;

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    if (__this->_next != NULL)
    {
        ::uPtr< PathSubscription*>(__this->_next)->Dispose();
        __this->_next = NULL;
    }

    __this->_b = NULL;
}

void PathSubscription__HandleNewDataContext(PathSubscription* __this, ::uObject* val)
{
    if (!__this->_isInnerLink)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    __this->HandlePath(val, __this->_unhandledPath);
}

void PathSubscription__HandleObject(PathSubscription* __this, ::uObject* obj)
{
    ::app::Fuse::Reactive::IAsyncObject::Tell(::uPtr< ::uObject*>(obj), __this->_key, ::app::Fuse::Reactive::Dispatcher__get_UIThread(NULL), ::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)PathSubscription__HandleObjectCallback, __this));
}

void PathSubscription__HandleObjectCallback(PathSubscription* __this, ::uObject* val)
{
    if (__this->_next == NULL)
    {
        return;
    }

    ::uPtr< PathSubscription*>(__this->_next)->HandleNewDataContext(val);
    ::uObject* disp = ::uAs< ::uObject*>(val, ::app::Uno::IDisposable__typeof());

    if (disp != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(disp));
    }
}

void PathSubscription__HandlePath(PathSubscription* __this, ::uObject* dc, ::uString* path)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Reactive::Binding*>(__this->_b)->NewValue(dc);
    }
    else
    {
        if (__this->_next != NULL)
        {
            ::uPtr< PathSubscription*>(__this->_next)->Dispose();
        }

        __this->_next = NULL;
        ::uObject* obs = ::uAs< ::uObject*>(dc, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_next = PathSubscription__New_2(NULL, __this->_b, PathSubscription__CombineKeyAndPath(NULL, __this->_key, path));

            if (__this->_subscription != NULL)
            {
                ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            }

            __this->_subscription = (::uObject*)::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
        else if (::uIs(dc, ::app::Fuse::Reactive::IAsyncObject__typeof()))
        {
            __this->_next = PathSubscription__New_2(NULL, __this->_b, path);
            __this->HandleObject((::uObject*)dc);
        }
        else
        {
            __this->_next = NULL;
        }
    }
}

PathSubscription* PathSubscription__New_1(::uStatic* __this, ::app::Fuse::Reactive::Binding* b, ::uObject* dc, ::uString* path)
{
    PathSubscription* inst = (PathSubscription*)::uAllocObject(sizeof(PathSubscription), PathSubscription__typeof());
    inst->_ObjInit(b, dc, path);
    return inst;
}

PathSubscription* PathSubscription__New_2(::uStatic* __this, ::app::Fuse::Reactive::Binding* b, ::uString* path)
{
    PathSubscription* inst = (PathSubscription*)::uAllocObject(sizeof(PathSubscription), PathSubscription__typeof());
    inst->_ObjInit_1(b, path);
    return inst;
}

void PathSubscription__OnAdd(PathSubscription* __this, ::uObject* addedValue)
{
    if (__this->_isDisposed)
    {
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Data binding to '"), __this->_key), ::uGetConstString("': expected single value, got array"))));
}

void PathSubscription__OnFailed(PathSubscription* __this, ::uString* message)
{
    if (__this->_isDisposed)
    {
        return;
    }
}

void PathSubscription__OnNewAll(PathSubscription* __this, int length)
{
    if (__this->_isDisposed)
    {
        return;
    }

    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Data binding to '"), __this->_key), ::uGetConstString("': expected single value, got array of length ")), ::uBox< int>(::app::Uno::Int__typeof(), length))));
    }
}

void PathSubscription__OnNewAt(PathSubscription* __this, int index, ::uObject* newValue)
{
    if (__this->_isDisposed)
    {
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Data binding to '"), __this->_key), ::uGetConstString("': expected single value, got array"))));
}

void PathSubscription__OnRemove(PathSubscription* __this, ::uObject* value, int index)
{
    if (__this->_isDisposed)
    {
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Data binding to '"), __this->_key), ::uGetConstString("': expected single value, got array"))));
}

void PathSubscription__OnSet(PathSubscription* __this, ::uObject* value)
{
    if (__this->_isDisposed)
    {
        return;
    }

    ::uPtr< PathSubscription*>(__this->_next)->HandleNewDataContext(value);
}

::uString* PathSubscription__TakeKeyFromPath(::uStatic* __this, ::uString** path)
{
    if (::app::Uno::String__op_Equality(NULL, *path, NULL))
    {
        return NULL;
    }

    ::uString* origPath = *path;
    ::uString* key = *path;
    int p = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(key), '.', 0);

    if (p != -1)
    {
        key = ::app::Uno::String::Substring(::uPtr< ::uString*>(key), 0, p);
        *path = ::app::Uno::String::Substring(::uPtr< ::uString*>(*path), p + 1, (::uPtr< ::uString*>(*path)->Length() - p) - 1);
    }
    else
    {
        *path = NULL;
    }

    if (::app::Uno::String__op_Equality(NULL, key, NULL) || (::uPtr< ::uString*>(key)->Length() == 0))
    {
        return NULL;
    }
    else
    {
        return key;
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScriptEventArgs__uType* ScriptEventArgs__typeof()
{
    static ::uStaticStrong<ScriptEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (ScriptEventArgs__uType*)::uAllocClassType(sizeof(ScriptEventArgs__uType), "Fuse.Reactive.ScriptEventArgs", false, 0, 3, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Args", offsetof(ScriptEventArgs, _Args),
        "_Name", offsetof(ScriptEventArgs, _Name),
        "_Sender", offsetof(ScriptEventArgs, _Sender));

    return type;
}

::uObject* ScriptEventArgs__get_Args(ScriptEventArgs* __this)
{
    return __this->_Args;
}

::uString* ScriptEventArgs__get_Name(ScriptEventArgs* __this)
{
    return __this->_Name;
}

::app::Fuse::Node* ScriptEventArgs__get_Sender(ScriptEventArgs* __this)
{
    return __this->_Sender;
}

void ScriptEventArgs__set_Args(ScriptEventArgs* __this, ::uObject* value)
{
    __this->_Args = value;
}

void ScriptEventArgs__set_Name(ScriptEventArgs* __this, ::uString* value)
{
    __this->_Name = value;
}

void ScriptEventArgs__set_Sender(ScriptEventArgs* __this, ::app::Fuse::Node* value)
{
    __this->_Sender = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ScriptEventHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Reactive.ScriptEventHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Reactive::ScriptEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> ScriptEvents___propHandle;

ScriptEvents__uType* ScriptEvents__typeof()
{
    static ::uStaticStrong<ScriptEvents__uType*> type;
    if (type != NULL) return type;

    type = (ScriptEvents__uType*)::uAllocClassType(sizeof(ScriptEvents__uType), "Fuse.Reactive.ScriptEvents");

    return type;
}

void ScriptEvents___TypeInit(::uStatic* __this)
{
    ScriptEvents___propHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void ScriptEvents__AddListener(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->AddToList(ScriptEvents___propHandle, (::uObject*)handler);
}

void ScriptEvents__RemoveListener(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->RemoveFromList(ScriptEvents___propHandle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SubscriptionSetExclusive__uType* SubscriptionSetExclusive__typeof()
{
    static ::uStaticStrong<SubscriptionSetExclusive__uType*> type;
    if (type != NULL) return type;

    type = (SubscriptionSetExclusive__uType*)::uAllocClassType(sizeof(SubscriptionSetExclusive__uType), "Fuse.Reactive.SubscriptionSetExclusive", false, 0, 2, 0);

    type->SetStrongRefs(
        "_newValue", offsetof(SubscriptionSetExclusive, _newValue),
        "_subscription", offsetof(SubscriptionSetExclusive, _subscription));

    return type;
}

void SubscriptionSetExclusive___ObjInit(SubscriptionSetExclusive* __this, ::app::Fuse::Reactive::ObservableSubscription* subscription, ::uObject* newValue)
{
    __this->_subscription = subscription;
    __this->_newValue = newValue;
}

SubscriptionSetExclusive* SubscriptionSetExclusive__New_1(::uStatic* __this, ::app::Fuse::Reactive::ObservableSubscription* subscription, ::uObject* newValue)
{
    SubscriptionSetExclusive* inst = (SubscriptionSetExclusive*)::uAllocObject(sizeof(SubscriptionSetExclusive), SubscriptionSetExclusive__typeof());
    inst->_ObjInit(subscription, newValue);
    return inst;
}

void SubscriptionSetExclusive__Run(SubscriptionSetExclusive* __this)
{
    ::uArray* array_123;
    ::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Reactive::ObservableSubscription*>(__this->_subscription)->Proxy())->CallMethod(::uGetConstString("setExclusive"), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = __this->_newValue, array_123));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TellObject__uType* TellObject__typeof()
{
    static ::uStaticStrong<TellObject__uType*> type;
    if (type != NULL) return type;

    type = (TellObject__uType*)::uAllocClassType(sizeof(TellObject__uType), "Fuse.Reactive.TellObject", false, 0, 5, 0);

    type->SetStrongRefs(
        "_callback", offsetof(TellObject, _callback),
        "_key", offsetof(TellObject, _key),
        "_object", offsetof(TellObject, _object),
        "_thread", offsetof(TellObject, _thread),
        "_worker", offsetof(TellObject, _worker));

    return type;
}

void TellObject___ObjInit(TellObject* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    __this->_worker = worker;
    __this->_object = obj;
    __this->_key = key;
    __this->_thread = thread;
    __this->_callback = callback;
}

TellObject* TellObject__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::uString* key, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback)
{
    TellObject* inst = (TellObject*)::uAllocObject(sizeof(TellObject), TellObject__typeof());
    inst->_ObjInit(worker, obj, key, thread, callback);
    return inst;
}

void TellObject__Run(TellObject* __this)
{
    ::app::Fuse::Scripting::Object* ind_123 = __this->_object;
    ::app::Fuse::Scripting::Object* obj = (ind_123 != NULL) ? ind_123 : ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->GlobalObject();

    if (::uPtr< ::app::Fuse::Scripting::Object*>(obj)->ContainsKey(__this->_key))
    {
        ::uObject* res = ::uPtr< ::app::Fuse::Scripting::Object*>(obj)->Item(__this->_key);
        ::uObject* wrap = ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->Wrap(res);

        if (!::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_worker)->IsOnWorkerThread())
        {
            ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid< ::uObject*>(wrap);
        }
        else
        {
            ::uPtr< ::app::Fuse::Reactive::Dispatcher*>(__this->_thread)->Dispatch1__object(__this->_callback, wrap);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Scripting::Context*> ThreadWorker___context;
::uStaticStrong< ::app::Fuse::Scripting::Function*> ThreadWorker___observable;
::uStaticStrong< ::app::Fuse::Scripting::Function*> ThreadWorker___subscriberProxy;
::uStaticStrong< ::app::Fuse::Reactive::FuseJS::Timer*> ThreadWorker___timer;

ThreadWorker__uType* ThreadWorker__typeof()
{
    static ::uStaticStrong<ThreadWorker__uType*> type;
    if (type != NULL) return type;

    type = (ThreadWorker__uType*)::uAllocClassType(sizeof(ThreadWorker__uType), "Fuse.Reactive.ThreadWorker", false, 3, 4, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))ThreadWorker__Dispose;
    type->__interface_1.__fp_Dispatch = (void(*)(void*, int, ::uDelegate*))ThreadWorker__Dispatch;
    type->__interface_2.__fp_Invoke = (void(*)(void*, ::uDelegate*))ThreadWorker__Invoke;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(ThreadWorker__uType, __interface_0),
        ::app::Fuse::Scripting::IDispatcher__typeof(), offsetof(ThreadWorker__uType, __interface_1),
        ::app::Uno::Threading::IDispatcher__typeof(), offsetof(ThreadWorker__uType, __interface_2));

    type->SetStrongRefs(
        "_exceptionHandler", offsetof(ThreadWorker, _exceptionHandler),
        "_mutex", offsetof(ThreadWorker, _mutex),
        "_queue", offsetof(ThreadWorker, _queue),
        "_suspendMutex", offsetof(ThreadWorker, _suspendMutex));

    return type;
}

void ThreadWorker___ObjInit(ThreadWorker* __this, ::app::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler)
{
    __this->_suspendMutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_working = true;
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_queue = ::app::Uno::Collections::List__Uno_Action__New_1(NULL);
    __this->_exceptionHandler = exceptionHandler;
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->add_Closed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ThreadWorker__OnClosing, __this));
    ThreadWorker__BeginThread(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ThreadWorker__Run, __this));
}

void ThreadWorker___TypeInit(::uStatic* __this)
{
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Timer"), (::uObject*)(ThreadWorker___timer = ::app::Fuse::Reactive::FuseJS::Timer__New_2(NULL)));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Base64"), (::uObject*)::app::Fuse::Reactive::FuseJS::Base64__New_2(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Vibration"), ::app::Fuse::Reactive::FuseJS::Vibration__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Email"), ::app::Fuse::Reactive::FuseJS::Email__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Maps"), ::app::Fuse::Reactive::FuseJS::Maps__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Lifecycle"), ::app::Fuse::Reactive::FuseJS::Lifecycle__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/InterApp"), ::app::Fuse::Reactive::FuseJS::InterApp__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Phone"), ::app::Fuse::Reactive::FuseJS::Phone__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/FileReaderImpl"), ::app::Fuse::Reactive::FuseJS::FileReaderImpl__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/SubscriberProxy"), (::uObject*)::app::Fuse::Scripting::FileModule__New_1(NULL, ::app::Uno::UX::FileSource__op_Implicit(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 26), ::app::Uno::BundleFile__typeof()))));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Observable"), (::uObject*)::app::Fuse::Scripting::FileModule__New_1(NULL, ::app::Uno::UX::FileSource__op_Implicit(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 27), ::app::Uno::BundleFile__typeof()))));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Fetch"), (::uObject*)::app::Fuse::Scripting::FileModule__New_1(NULL, ::app::Uno::UX::FileSource__op_Implicit(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 28), ::app::Uno::BundleFile__typeof()))));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/FetchJson"), (::uObject*)::app::Fuse::Scripting::FileModule__New_1(NULL, ::app::Uno::UX::FileSource__op_Implicit(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 29), ::app::Uno::BundleFile__typeof()))));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Camera"), ::app::Fuse::Reactive::FuseJS::Camera__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Storage"), ::app::Fuse::Reactive::FuseJS::Storage__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS/Globals"), ::app::Fuse::Reactive::FuseJS::Globals__CreateModule(NULL));
    ThreadWorker__Register(NULL, ::uGetConstString("FuseJS"), (::uObject*)::app::Fuse::Scripting::FileModule__New_1(NULL, ::app::Uno::UX::FileSource__op_Implicit(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 30), ::app::Uno::BundleFile__typeof()))));
}

bool ThreadWorker__AttemptSuspend(ThreadWorker* __this)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Lock();

    if (!__this->_working)
    {
        __this->_suspendCount++;
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Unlock();
        return true;
    }
    else
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Unlock();
        return false;
    }
}

void ThreadWorker__BeginThread(::uStatic* __this, ::uDelegate* a)
{
    ::app::Uno::Threading::Thread* thread = ::app::Uno::Threading::Thread__Create(NULL, a);
    ::uPtr< ::app::Uno::Threading::Thread*>(thread)->Start();
}

::app::Fuse::Scripting::Context* ThreadWorker__CreateContext(::uStatic* __this, ::uObject* ownerThread)
{
    return (::app::Fuse::Scripting::Context*)::app::Fuse::Scripting::JavaScriptCore::Context__New_1(NULL, ownerThread);
    return (::app::Fuse::Scripting::Context*)::app::Fuse::Scripting::Duktape::Context__New_1(NULL, ownerThread);
}

::uDelegate* ThreadWorker__Dequeue(ThreadWorker* __this)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_queue)->Count() == 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        return NULL;
    }

    ::uDelegate* res = ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_queue)->Item(0);
    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_queue)->RemoveAt(0);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
    return res;
}

void ThreadWorker__Dispatch(ThreadWorker* __this, int priority, ::uDelegate* action)
{
    if (priority == 2)
    {
        __this->ForceSuspend();

        try
        {
            ::uPtr< ::uDelegate*>(action)->InvokeVoid();
        }
        catch (const ::uThrowable& __t)
        {
            __this->Resume();
            throw __t;
        }
        // finally
        {
            __this->Resume();
        }
        return;
    }
    else if (priority == 1)
    {
        if (__this->AttemptSuspend())
        {
            try
            {
                ::uPtr< ::uDelegate*>(action)->InvokeVoid();
            }
            catch (const ::uThrowable& __t)
            {
                __this->Resume();
                throw __t;
            }
            // finally
            {
                __this->Resume();
            }
            return;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();
    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_queue)->Add(action);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

void ThreadWorker__Dispose(ThreadWorker* __this)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->remove_Closed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ThreadWorker__OnClosing, __this));
    __this->_terminate = true;
}

void ThreadWorker__ForceSuspend(ThreadWorker* __this)
{
    while (true)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Lock();

        if (!__this->_working)
        {
            __this->_suspendCount++;
            ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Unlock();
            return;
        }

        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Unlock();
    }
}

::app::Fuse::Scripting::Context* ThreadWorker__get_Context(ThreadWorker* __this)
{
    return ThreadWorker___context;
}

::app::Fuse::Scripting::Object* ThreadWorker__get_GlobalObject(ThreadWorker* __this)
{
    return ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->GlobalObject();
}

bool ThreadWorker__get_IsOnWorkerThread(ThreadWorker* __this)
{
    return __this->_working;
}

::app::Fuse::Scripting::Function* ThreadWorker__get_SubscriberProxy(ThreadWorker* __this)
{
    return ThreadWorker___subscriberProxy;
}

void ThreadWorker__InitBrowserPolyfill(ThreadWorker* __this)
{
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("browser-Window"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 32), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("window-Timers"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 33), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("window-EventTarget"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 34), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("window-Base64"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 35), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("window-File"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 36), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("window-XMLHttpRequest"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 37), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("window-fetch"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 38), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("window-localStorage"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 39), ::app::Uno::BundleFile__typeof()))->ReadAllText());
}

void ThreadWorker__InitBuiltInObjects(ThreadWorker* __this)
{
    ::app::Fuse::Reactive::DebugLog__Init(NULL, ThreadWorker___context);
    ::app::Fuse::Reactive::Console__Init(NULL, ThreadWorker___context);
    ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Evaluate(::uGetConstString("es6-promise"), ::uPtr< ::app::Uno::BundleFile*>(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 31), ::app::Uno::BundleFile__typeof()))->ReadAllText());
    ::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->GlobalObject())->Item(::uGetConstString("require"), (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)ThreadWorker__Require, __this));
}

void ThreadWorker__InitFuseJS(ThreadWorker* __this)
{
    ThreadWorker___subscriberProxy = ::uCast< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Require(::uGetConstString("FuseJS/SubscriberProxy")), ::app::Fuse::Scripting::Function__typeof());
    ThreadWorker___observable = ::uCast< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Require(::uGetConstString("FuseJS/Observable")), ::app::Fuse::Scripting::Function__typeof());
    ::app::Fuse::Reactive::FuseJS::Http__New_1(NULL, __this);
}

void ThreadWorker__Invoke(ThreadWorker* __this, ::uDelegate* action)
{
    __this->Dispatch(0, action);
}

ThreadWorker* ThreadWorker__New_1(::uStatic* __this, ::app::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler)
{
    ThreadWorker* inst = (ThreadWorker*)::uAllocObject(sizeof(ThreadWorker), ThreadWorker__typeof());
    inst->_ObjInit(exceptionHandler);
    return inst;
}

void ThreadWorker__OnClosing(ThreadWorker* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Dispose();
}

void ThreadWorker__Register(::uStatic* __this, ::uString* moduleId, ::uObject* module)
{
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)module, moduleId);
}

::uObject* ThreadWorker__Require(ThreadWorker* __this, ::uArray* args)
{
    ::uString* path = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    return ::uPtr< ::app::Fuse::Scripting::Context*>(ThreadWorker___context)->Require(path);
}

void ThreadWorker__Resume(ThreadWorker* __this)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Lock();
    __this->_suspendCount--;
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Unlock();
}

void ThreadWorker__Run(ThreadWorker* __this)
{
    if (ThreadWorker___context == NULL)
    {
        ThreadWorker___context = ThreadWorker__CreateContext(NULL, (::uObject*)__this);

        if (ThreadWorker___context == NULL)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Could not create script context")));
        }

        __this->InitBuiltInObjects();
        __this->InitFuseJS();
        __this->InitBrowserPolyfill();
    }

    while (!__this->_terminate)
    {
        ::uAutoReleasePool ____pool;
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Lock();

        if (__this->_suspendCount == 0)
        {
            __this->_working = true;
        }

        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_suspendMutex)->Unlock();

        if (__this->_working)
        {
            ::uDelegate* action = __this->Dequeue();

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)action, NULL))
            {
                try
                {
                    ::uPtr< ::uDelegate*>(action)->InvokeVoid();
                }
                catch (const ::uThrowable& __t)
                {
                    if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
                    {
                        ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                        ::uPtr< ::app::Fuse::Reactive::CrossThreadExceptionHandler*>(__this->_exceptionHandler)->SetException(e);
                    }
                    else
                    {
                        throw __t;
                    }
                }
            }

            ::uPtr< ::app::Fuse::Reactive::FuseJS::Timer*>(ThreadWorker___timer)->Process();
            __this->_working = false;

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)action, NULL))
            {
                continue;
            }
        }

        ::app::Uno::Threading::Thread__Sleep(NULL, 1);
    }
}

::uObject* ThreadWorker__Unwrap(ThreadWorker* __this, ::uObject* dc)
{
    ::app::Fuse::Reactive::AsyncObject* ao = ::uAs< ::app::Fuse::Reactive::AsyncObject*>(dc, ::app::Fuse::Reactive::AsyncObject__typeof());

    if (ao != NULL)
    {
        return (::uObject*)::uPtr< ::app::Fuse::Reactive::AsyncObject*>(ao)->Object();
    }
    else
    {
        ::app::Fuse::Reactive::AsyncArray* aa = ::uAs< ::app::Fuse::Reactive::AsyncArray*>(dc, ::app::Fuse::Reactive::AsyncArray__typeof());

        if (aa != NULL)
        {
            return (::uObject*)::uPtr< ::app::Fuse::Reactive::AsyncArray*>(aa)->Array();
        }
        else if ((((::uIs(dc, ::app::Uno::String__typeof()) || ::uIs(dc, ::app::Uno::Bool__typeof())) || ::uIs(dc, ::app::Uno::Double__typeof())) || ::uIs(dc, ::app::Uno::Int__typeof())) || ::uIs(dc, ::app::Uno::Float__typeof()))
        {
            return dc;
        }
    }

    ::app::Fuse::Reactive::Observable* obs = ::uAs< ::app::Fuse::Reactive::Observable*>(dc, ::app::Fuse::Reactive::Observable__typeof());

    if (obs != NULL)
    {
        return (::uObject*)::uPtr< ::app::Fuse::Reactive::Observable*>(obs)->Object;
    }

    if (dc == __this)
    {
        return (::uObject*)__this->GlobalObject();
    }

    if (dc == NULL)
    {
        return NULL;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unhandled type in ThreadWorker.Unwrap: "), dc)));
}

::uObject* ThreadWorker__Wrap(ThreadWorker* __this, ::uObject* obj)
{
    ::app::Fuse::Scripting::Object* sobj = ::uAs< ::app::Fuse::Scripting::Object*>(obj, ::app::Fuse::Scripting::Object__typeof());

    if (sobj != NULL)
    {
        if (::uPtr< ::app::Fuse::Scripting::Object*>(sobj)->InstanceOf(ThreadWorker___observable))
        {
            return (::uObject*)::app::Fuse::Reactive::Observable__New_1(NULL, __this, sobj, ::app::Fuse::Reactive::Dispatcher__get_UIThread(NULL));
        }
        else
        {
            return (::uObject*)::app::Fuse::Reactive::AsyncObject__New_1(NULL, __this, sobj);
        }
    }

    ::app::Fuse::Scripting::Array* sarr = ::uAs< ::app::Fuse::Scripting::Array*>(obj, ::app::Fuse::Scripting::Array__typeof());

    if (sarr != NULL)
    {
        return (::uObject*)::app::Fuse::Reactive::AsyncArray__New_1(NULL, __this, sarr);
    }

    ::app::Fuse::Scripting::Function* sfunc = ::uAs< ::app::Fuse::Scripting::Function*>(obj, ::app::Fuse::Scripting::Function__typeof());

    if (sfunc != NULL)
    {
        return (::uObject*)::app::Fuse::Reactive::AsyncFunction__New_1(NULL, __this, sfunc);
    }

    if (::uIs(obj, ::app::Uno::String__typeof()))
    {
        return obj;
    }

    if (::uIs(obj, ::app::Uno::Bool__typeof()))
    {
        return obj;
    }

    if (::uIs(obj, ::app::Uno::Double__typeof()))
    {
        return ::uBox(::app::Uno::Double__typeof(), ::uUnbox< double>(::app::Uno::Double__typeof(), obj));
    }

    if (::uIs(obj, ::app::Uno::Float__typeof()))
    {
        return ::uBox(::app::Uno::Double__typeof(), (double)::uUnbox< float>(::app::Uno::Float__typeof(), obj));
    }

    if (::uIs(obj, ::app::Uno::Int__typeof()))
    {
        return ::uBox(::app::Uno::Double__typeof(), (double)::uUnbox< int>(::app::Uno::Int__typeof(), obj));
    }

    if (::uIs(obj, ::app::Uno::UInt__typeof()))
    {
        return ::uBox(::app::Uno::Double__typeof(), (double)::uUnbox< ::uUInt>(::app::Uno::UInt__typeof(), obj));
    }

    if (obj == NULL)
    {
        return NULL;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unhandled type in ThreadWorker.Wrap: "), obj)));
}

}}}
