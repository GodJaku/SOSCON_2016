#include <app/Fuse.Internal.Blender__Fuse_Node.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Node.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Expression__Fuse_Node.h>
#include <app/Uno.UX.Property__Fuse_Node.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.11.3/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Node__uType* Set__Fuse_Node__typeof()
{
    static ::uStaticStrong<Set__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Node__uType*)::uAllocClassType(sizeof(Set__Fuse_Node__uType), "Fuse.Triggers.Actions.Set<Fuse.Node>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Node__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Node, _blender),
        "_Expression", offsetof(Set__Fuse_Node, _Expression),
        "_increment", offsetof(Set__Fuse_Node, _increment),
        "_Target", offsetof(Set__Fuse_Node, _Target),
        "_Value", offsetof(Set__Fuse_Node, _Value));

    return type;
}

void Set__Fuse_Node___ObjInit_1(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Node__get_Expression(Set__Fuse_Node* __this)
{
    return __this->_Expression;
}

::app::Uno::UX::Property__Fuse_Node* Set__Fuse_Node__get_Target(Set__Fuse_Node* __this)
{
    return __this->_Target;
}

::app::Fuse::Node* Set__Fuse_Node__get_Value(Set__Fuse_Node* __this)
{
    return __this->_Value;
}

Set__Fuse_Node* Set__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Node* target)
{
    Set__Fuse_Node* inst = (Set__Fuse_Node*)::uAllocObject(sizeof(Set__Fuse_Node), Set__Fuse_Node__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Node__Perform(Set__Fuse_Node* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Node*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Node*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Node__set_Expression(Set__Fuse_Node* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Node__set_Target(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value)
{
    __this->_Target = value;
}

void Set__Fuse_Node__set_Value(Set__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    __this->_Value = value;
}

void Set__Fuse_Node__Update(Set__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

}}}}
