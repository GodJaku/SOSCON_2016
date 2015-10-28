#include <app/Fuse.Node.h>
#include <app/Fuse.Reactive.DataBinding__object.h>
#include <app/Fuse.Reactive.DataBinding__string.h>
#include <app/Fuse.Reactive.IObservable.h>
#include <app/Fuse.Reactive.ISubscription.h>
#include <app/Fuse.Reactive.Marshal.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__object.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.ValueChangedArgs__object.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__object.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Fuse {
namespace Reactive {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__object__uType* DataBinding__object__typeof()
{
    static ::uStaticStrong<DataBinding__object__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__object__uType*)::uAllocClassType(sizeof(DataBinding__object__uType), "Fuse.Reactive.DataBinding<object>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__object__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__object__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__object__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__object__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__object__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__object__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__object__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__object__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__object__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__object__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__object__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__object__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__object, _currentValue),
        "_subscription", offsetof(DataBinding__object, _subscription),
        "_Target", offsetof(DataBinding__object, _Target));

    return type;
}

void DataBinding__object___ObjInit_2(DataBinding__object* __this, ::app::Uno::UX::Property__object* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__object__Acceptor(DataBinding__object* __this, ::uObject* obj)
{
    return ::uIs(obj, ::uObject__typeof());
}

void DataBinding__object__Fuse_Reactive_IObserver_OnAdd(DataBinding__object* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnFailed(DataBinding__object* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnNewAll(DataBinding__object* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__object__Fuse_Reactive_IObserver_OnNewAt(DataBinding__object* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnRemove(DataBinding__object* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__object__Fuse_Reactive_IObserver_OnSet(DataBinding__object* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__object__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__object* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__object* DataBinding__object__get_Target(DataBinding__object* __this)
{
    return __this->_Target;
}

DataBinding__object* DataBinding__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* target, ::uString* key)
{
    DataBinding__object* inst = (DataBinding__object*)::uAllocObject(sizeof(DataBinding__object), DataBinding__object__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__object__NewValue(DataBinding__object* __this, ::uObject* value)
{
    if (::uIs(value, ::uObject__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__object__OnRooted(DataBinding__object* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__object__typeof(), (const void*)DataBinding__object__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__object__OnUnrooted(DataBinding__object* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__object__typeof(), (const void*)DataBinding__object__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__object__OnValueChanged(DataBinding__object* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__object* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__object*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uPtr< ::app::Uno::UX::ValueChangedArgs__object*>(args)->Value());
    }
}

void DataBinding__object__PushValue(DataBinding__object* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::uObject__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState(newValue, (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::uObject__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState((::uObject*)k, (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__object__Acceptor, __this));

            if (::uIs(candidate, ::uObject__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState(candidate, (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__object(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)DataBinding__object__SetValue, __this));
}

void DataBinding__object__set_Target(DataBinding__object* __this, ::app::Uno::UX::Property__object* value)
{
    __this->_Target = value;
}

void DataBinding__object__SetValue(DataBinding__object* __this, ::uObject* value)
{
    ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__string__uType* DataBinding__string__typeof()
{
    static ::uStaticStrong<DataBinding__string__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__string__uType*)::uAllocClassType(sizeof(DataBinding__string__uType), "Fuse.Reactive.DataBinding<string>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__string__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__string__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__string__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__string__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__string__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__string__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__string__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__string__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__string__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__string, _currentValue),
        "_subscription", offsetof(DataBinding__string, _subscription),
        "_Target", offsetof(DataBinding__string, _Target));

    return type;
}

void DataBinding__string___ObjInit_2(DataBinding__string* __this, ::app::Uno::UX::Property__string* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__string__Acceptor(DataBinding__string* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::String__typeof());
}

void DataBinding__string__Fuse_Reactive_IObserver_OnAdd(DataBinding__string* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnFailed(DataBinding__string* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnNewAll(DataBinding__string* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__string__Fuse_Reactive_IObserver_OnNewAt(DataBinding__string* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnRemove(DataBinding__string* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnSet(DataBinding__string* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__string__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__string* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__string* DataBinding__string__get_Target(DataBinding__string* __this)
{
    return __this->_Target;
}

DataBinding__string* DataBinding__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target, ::uString* key)
{
    DataBinding__string* inst = (DataBinding__string*)::uAllocObject(sizeof(DataBinding__string), DataBinding__string__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__string__NewValue(DataBinding__string* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::String__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__string__OnRooted(DataBinding__string* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)DataBinding__string__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__string__OnUnrooted(DataBinding__string* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)DataBinding__string__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__string__OnValueChanged(DataBinding__string* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Value());
    }
}

void DataBinding__string__PushValue(DataBinding__string* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::String__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::String__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>((::uObject*)k, ::app::Uno::String__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__string__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::String__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>(candidate, ::app::Uno::String__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__string(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__string__typeof(), (const void*)DataBinding__string__SetValue, __this));
}

void DataBinding__string__set_Target(DataBinding__string* __this, ::app::Uno::UX::Property__string* value)
{
    __this->_Target = value;
}

void DataBinding__string__SetValue(DataBinding__string* __this, ::uString* value)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

}}}
