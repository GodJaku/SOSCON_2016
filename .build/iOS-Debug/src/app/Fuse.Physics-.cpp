#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.Draggable.h>
#include <app/Fuse.Physics.EnteredForceField.h>
#include <app/Fuse.Physics.ExitedForceField.h>
#include <app/Fuse.Physics.ForceField.h>
#include <app/Fuse.Physics.ForceFieldEventArgs.h>
#include <app/Fuse.Physics.ForceFieldEventHandler.h>
#include <app/Fuse.Physics.ForceFieldEventTrigger.h>
#include <app/Fuse.Physics.ForceFieldTrigger.h>
#include <app/Fuse.Physics.InForceFieldAnimation.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Fuse.Physics.PointAttractor.h>
#include <app/Fuse.Physics.Spring.h>
#include <app/Fuse.Physics.WhileDragging.h>
#include <app/Fuse.Physics.World.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Physics_Body.h>
#include <app/Uno.Collections.List__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_Body.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_IRule.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Physics {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Body___frictionHandle;

Body__uType* Body__typeof()
{
    static ::uStaticStrong<Body__uType*> type;
    if (type != NULL) return type;

    type = (Body__uType*)::uAllocClassType(sizeof(Body__uType), "Fuse.Physics.Body", false, 0, 5, 0);

    type->SetStrongRefs(
        "_constraint", offsetof(Body, _constraint),
        "_motionOwner", offsetof(Body, _motionOwner),
        "_translation", offsetof(Body, _translation),
        "Node", offsetof(Body, Node),
        "World", offsetof(Body, World));

    return type;
}

void Body___ObjInit(Body* __this, ::app::Fuse::Physics::World* world, ::app::Fuse::Node* node)
{
    __this->Node = node;
    __this->_translation = ::app::Fuse::Translation__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->_translation);
    __this->World = world;
}

void Body___TypeInit(::uStatic* __this)
{
    Body___frictionHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Body__ApplyForce(Body* __this, ::app::Uno::Float3 force)
{
    __this->_velocity = ::app::Uno::Float3__op_Addition_2(NULL, __this->_velocity, force);
}

void Body__ApplyFriction(Body* __this, double deltaTime)
{
    float friction = __this->Friction();

    for (double t = 0.0; t < deltaTime; t = t + 0.001)
    {
        __this->_velocity = ::app::Uno::Float3__op_Multiply_2(NULL, __this->_velocity, 1.0f - friction);
    }
}

void Body__ApplyMotion(Body* __this, double deltaTime)
{
    if (__this->_motionOwner != NULL)
    {
        return;
    }

    __this->_position = ::app::Uno::Float3__op_Addition_2(NULL, __this->_position, ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, __this->_velocity, (float)deltaTime), 5.0f));
}

void Body__ConstrainToBounds(Body* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_constraint = elm;
}

void Body__Dispose(Body* __this)
{
    ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->_translation);
}

::app::Uno::Float3 Body__get_CenterPosition(Body* __this)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Vector__Transform_1(NULL, ::uPtr< ::app::Fuse::Node*>(__this->Node)->LocalBounds().Center(), ::uPtr< ::app::Fuse::Node*>(__this->Node)->WorldTransform());
    return ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
}

float Body__get_Friction(Body* __this)
{
    return Body__GetFriction(NULL, __this->Node);
}

::app::Uno::Float3 Body__get_WorldPosition(Body* __this)
{
    return ::uPtr< ::app::Fuse::Node*>(__this->Node)->WorldPosition();
}

float Body__GetFriction(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* f = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(Body___frictionHandle);

    if (f == NULL)
    {
        return 0.05f;
    }
    else
    {
        return ::uUnbox< float>(::app::Uno::Float__typeof(), f);
    }
}

void Body__Move(Body* __this, ::app::Uno::Float3 delta)
{
    __this->_position = ::app::Uno::Float3__op_Addition_2(NULL, __this->_position, delta);
}

Body* Body__New_1(::uStatic* __this, ::app::Fuse::Physics::World* world, ::app::Fuse::Node* node)
{
    Body* inst = (Body*)::uAllocObject(sizeof(Body), Body__typeof());
    inst->_ObjInit(world, node);
    return inst;
}

Body* Body__Pin(::uStatic* __this, ::app::Fuse::Node* n)
{
    return ::uPtr< ::app::Fuse::Physics::World*>(::app::Fuse::Physics::World__FindWorld(NULL, n))->PinBody(n);
}

void Body__set_Friction(Body* __this, float value)
{
    Body__SetFriction(NULL, __this->Node, value);
}

void Body__SetFriction(::uStatic* __this, ::app::Fuse::Node* n, float friction)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Body___frictionHandle, ::uBox(::app::Uno::Float__typeof(), friction));
}

bool Body__TryLockMotion(Body* __this, ::uObject* owner)
{
    if (__this->_motionOwner != NULL)
    {
        return false;
    }

    __this->_motionOwner = owner;
    return true;
}

void Body__UnlockMotion(Body* __this)
{
    __this->_motionOwner = NULL;
}

void Body__Unpin(Body* __this)
{
    ::uPtr< ::app::Fuse::Physics::World*>(__this->World)->UnpinBody(__this);
}

void Body__Update(Body* __this, double deltaTime)
{
    __this->ApplyFriction(deltaTime);
    __this->ApplyMotion(deltaTime);
    ::uPtr< ::app::Fuse::Translation*>(__this->_translation)->Vector(__this->_position);

    if (__this->_constraint != NULL)
    {
        ::app::Uno::Float3 p = __this->WorldPosition();
        ::app::Uno::Float2 s = ::app::Uno::Float2__New_1(NULL, 0.0f);

        if (::uIs(__this->Node, ::app::Fuse::Elements::Element__typeof()))
        {
            s = ::uPtr< ::app::Fuse::Elements::Element*>(::uAs< ::app::Fuse::Elements::Element*>(__this->Node, ::app::Fuse::Elements::Element__typeof()))->ActualSize();
        }

        ::app::Uno::Float3 bmin = ::uPtr< ::app::Fuse::Elements::Element*>(__this->_constraint)->WorldPosition();
        ::app::Uno::Float3 bmax = ::app::Uno::Float3__op_Addition_2(NULL, ::app::Uno::Float3__New_4(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_constraint)->ActualSize(), 0.0f), bmin);
        p.X = ::app::Uno::Math__Max_8(NULL, p.X, bmin.X);
        p.Y = ::app::Uno::Math__Max_8(NULL, p.Y, bmin.Y);
        p.Z = ::app::Uno::Math__Max_8(NULL, p.Z, bmin.Z);
        p.X = ::app::Uno::Math__Min_11(NULL, p.X, bmax.X - s.X);
        p.Y = ::app::Uno::Math__Min_11(NULL, p.Y, bmax.Y - s.Y);
        p.Z = ::app::Uno::Math__Max_8(NULL, p.Z, bmax.Z);
        ::app::Uno::Float3 d = ::app::Uno::Float3__op_Subtraction_2(NULL, p, __this->WorldPosition());

        if ((double)::app::Uno::Vector__Length_1(NULL, d) > 0.01)
        {
            __this->_position = ::app::Uno::Float3__op_Addition_2(NULL, __this->_position, d);
            ::uPtr< ::app::Fuse::Translation*>(__this->_translation)->Vector(__this->_position);
            __this->_velocity = ::app::Uno::Float3__New_1(NULL, 0.0f);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Draggable__uType* Draggable__typeof()
{
    static ::uStaticStrong<Draggable__uType*> type;
    if (type != NULL) return type;

    type = (Draggable__uType*)::uAllocClassType(sizeof(Draggable__uType), "Fuse.Physics.Draggable", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Draggable__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Draggable__OnUnrooted;
    type->__interface_0.__fp_Update = (void(*)(void*, double, ::app::Fuse::Physics::World*))Draggable__Fuse_Physics_IRule_Update;

    type->SetInterfaces(
        ::app::Fuse::Physics::IRule__typeof(), offsetof(Draggable__uType, __interface_0));

    type->SetStrongRefs(
        "_body", offsetof(Draggable, _body),
        "_Bounds", offsetof(Draggable, _Bounds));

    return type;
}

void Draggable__Fuse_Physics_IRule_Update(Draggable* __this, double deltaTime, ::app::Fuse::Physics::World* world)
{
    ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->Move(__this->_forceMotion);
    ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->ApplyForce(::app::Uno::Float3__op_Division(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, __this->_forceMotion, 0.3f), (float)deltaTime));
    ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->ConstrainToBounds(__this->Bounds());
    __this->_forceMotion = ::app::Uno::Float3__New_1(NULL, 0.0f);
}

::app::Fuse::Elements::Element* Draggable__get_Bounds(Draggable* __this)
{
    return __this->_Bounds;
}

::app::Uno::Float3 Draggable__GetPointerPosition(Draggable* __this, ::app::Fuse::Input::PointerEventArgs* args)
{
    return ::app::Uno::Float3__New_4(NULL, ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->WindowPoint(), 0.0f);
}

void Draggable__OnMoved(Draggable* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (!__this->_hasLock)
    {
        return;
    }

    ::app::Uno::Float3 newPos = __this->GetPointerPosition((::app::Fuse::Input::PointerEventArgs*)args);
    ::app::Uno::Float3 delta = ::app::Uno::Float3__op_Subtraction_2(NULL, newPos, __this->_pos);
    __this->_pos = newPos;
    __this->_forceMotion = ::app::Uno::Float3__op_Addition_2(NULL, __this->_forceMotion, delta);
}

void Draggable__OnPointerLost(Draggable* __this)
{
    if (__this->_hasLock)
    {
        __this->_hasLock = false;
        ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->UnlockMotion();
        ::app::Fuse::Physics::WhileDragging__End(NULL, ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->Node);
    }
}

void Draggable__OnPressed(Draggable* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_hasLock)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Draggable__OnPointerLost, __this), ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->Node()))
    {
        __this->_hasLock = ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->TryLockMotion((::uObject*)__this);

        if (!__this->_hasLock)
        {
            return;
        }

        ::app::Fuse::Physics::WhileDragging__Begin(NULL, ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->Node);
        __this->_pos = __this->GetPointerPosition((::app::Fuse::Input::PointerEventArgs*)args);
    }
}

void Draggable__OnReleased(Draggable* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_hasLock)
    {
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseHardCapture((::uObject*)__this);
        __this->_hasLock = false;
        ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->UnlockMotion();
        ::app::Fuse::Physics::WhileDragging__End(NULL, ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->Node);
    }
}

void Draggable__OnRooted(Draggable* __this, ::app::Fuse::Node* n)
{
    __this->_body = ::app::Fuse::Physics::Body__Pin(NULL, n);
    ::uPtr< ::app::Fuse::Physics::World*>(::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->World)->AddRule((::uObject*)__this);
    ::app::Fuse::Input::Pointer__AddHandlers(NULL, n, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Draggable__OnPressed, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Draggable__OnMoved, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Draggable__OnReleased, __this), NULL, NULL, NULL);
}

void Draggable__OnUnrooted(Draggable* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::Physics::World*>(::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->World)->RemoveRule((::uObject*)__this);
    ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->Unpin();
    __this->_body = NULL;
    ::app::Fuse::Input::Pointer__RemoveHandlers(NULL, n, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Draggable__OnPressed, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Draggable__OnMoved, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Draggable__OnReleased, __this), NULL, NULL, NULL);
}

void Draggable__set_Bounds(Draggable* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Bounds = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnteredForceField__uType* EnteredForceField__typeof()
{
    static ::uStaticStrong<EnteredForceField__uType*> type;
    if (type != NULL) return type;

    type = (EnteredForceField__uType*)::uAllocClassType(sizeof(EnteredForceField__uType), "Fuse.Physics.EnteredForceField", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Physics::ForceFieldEventTrigger__typeof());
    type->__fp_SetForce_1 = (void(*)(::app::Fuse::Physics::ForceFieldTrigger*, ::app::Fuse::Physics::Body*, float))EnteredForceField__SetForce_1;

    return type;
}

float EnteredForceField__get_Threshold(EnteredForceField* __this)
{
    return __this->_Threshold;
}

void EnteredForceField__set_Threshold(EnteredForceField* __this, float value)
{
    __this->_Threshold = value;
}

void EnteredForceField__SetForce_1(EnteredForceField* __this, ::app::Fuse::Physics::Body* body, float force)
{
    if ((__this->_oldForce <= __this->Threshold()) && (force > __this->Threshold()))
    {
        __this->OnTriggered(body);
    }

    __this->_oldForce = force;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExitedForceField__uType* ExitedForceField__typeof()
{
    static ::uStaticStrong<ExitedForceField__uType*> type;
    if (type != NULL) return type;

    type = (ExitedForceField__uType*)::uAllocClassType(sizeof(ExitedForceField__uType), "Fuse.Physics.ExitedForceField", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Physics::ForceFieldEventTrigger__typeof());
    type->__fp_SetForce_1 = (void(*)(::app::Fuse::Physics::ForceFieldTrigger*, ::app::Fuse::Physics::Body*, float))ExitedForceField__SetForce_1;

    return type;
}

float ExitedForceField__get_Threshold(ExitedForceField* __this)
{
    return __this->_Threshold;
}

void ExitedForceField__set_Threshold(ExitedForceField* __this, float value)
{
    __this->_Threshold = value;
}

void ExitedForceField__SetForce_1(ExitedForceField* __this, ::app::Fuse::Physics::Body* body, float force)
{
    if ((__this->_oldForce > __this->Threshold()) && (force <= __this->Threshold()))
    {
        __this->OnTriggered(body);
    }

    __this->_oldForce = force;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ForceField__uType* ForceField__typeof()
{
    static ::uStaticStrong<ForceField__uType*> type;
    if (type != NULL) return type;

    type = (ForceField__uType*)::uAllocClassType(sizeof(ForceField__uType), "Fuse.Physics.ForceField", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ForceField__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ForceField__OnUnrooted;
    type->__interface_0.__fp_Update = (void(*)(void*, double, ::app::Fuse::Physics::World*))ForceField__Fuse_Physics_IRule_Update;

    type->SetInterfaces(
        ::app::Fuse::Physics::IRule__typeof(), offsetof(ForceField__uType, __interface_0));

    type->SetStrongRefs(
        "_node", offsetof(ForceField, _node),
        "_world", offsetof(ForceField, _world));

    return type;
}

void ForceField__Fuse_Physics_IRule_Update(ForceField* __this, double deltaTime, ::app::Fuse::Physics::World* world)
{
    __this->OnUpdate(deltaTime, world);
}

::app::Fuse::Node* ForceField__get_Node(ForceField* __this)
{
    return __this->_node;
}

::app::Fuse::Physics::World* ForceField__get_World(ForceField* __this)
{
    return __this->_world;
}

void ForceField__OnRooted(ForceField* __this, ::app::Fuse::Node* n)
{
    __this->_world = ::app::Fuse::Physics::World__FindWorld(NULL, n);
    __this->_node = n;
    ::uPtr< ::app::Fuse::Physics::World*>(__this->_world)->AddRule((::uObject*)__this);
}

void ForceField__OnUnrooted(ForceField* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::Physics::World*>(__this->_world)->RemoveRule((::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ForceFieldEventArgs__uType* ForceFieldEventArgs__typeof()
{
    static ::uStaticStrong<ForceFieldEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (ForceFieldEventArgs__uType*)::uAllocClassType(sizeof(ForceFieldEventArgs__uType), "Fuse.Physics.ForceFieldEventArgs", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))ForceFieldEventArgs__Fuse_Scripting_IScriptEvent_Serialize;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(ForceFieldEventArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_Body", offsetof(ForceFieldEventArgs, _Body),
        "_ForceField", offsetof(ForceFieldEventArgs, _ForceField));

    return type;
}

void ForceFieldEventArgs___ObjInit_1(ForceFieldEventArgs* __this, ::app::Fuse::Physics::Body* body, ::app::Fuse::Physics::ForceField* field)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Body(body);
    __this->ForceField(field);
}

void ForceFieldEventArgs__Fuse_Scripting_IScriptEvent_Serialize(ForceFieldEventArgs* __this, ::uObject* s)
{
    ::app::Fuse::Scripting::IEventSerializer::AddObject(::uPtr< ::uObject*>(s), ::uGetConstString("targetData"), ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Physics::ForceField*>(__this->ForceField())->Node())->DataContext());
}

::app::Fuse::Physics::Body* ForceFieldEventArgs__get_Body(ForceFieldEventArgs* __this)
{
    return __this->_Body;
}

::app::Fuse::Physics::ForceField* ForceFieldEventArgs__get_ForceField(ForceFieldEventArgs* __this)
{
    return __this->_ForceField;
}

ForceFieldEventArgs* ForceFieldEventArgs__New_2(::uStatic* __this, ::app::Fuse::Physics::Body* body, ::app::Fuse::Physics::ForceField* field)
{
    ForceFieldEventArgs* inst = (ForceFieldEventArgs*)::uAllocObject(sizeof(ForceFieldEventArgs), ForceFieldEventArgs__typeof());
    inst->_ObjInit_1(body, field);
    return inst;
}

void ForceFieldEventArgs__set_Body(ForceFieldEventArgs* __this, ::app::Fuse::Physics::Body* value)
{
    __this->_Body = value;
}

void ForceFieldEventArgs__set_ForceField(ForceFieldEventArgs* __this, ::app::Fuse::Physics::ForceField* value)
{
    __this->_ForceField = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ForceFieldEventHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Physics.ForceFieldEventHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Physics::ForceFieldEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ForceFieldEventTrigger__uType* ForceFieldEventTrigger__typeof()
{
    static ::uStaticStrong<ForceFieldEventTrigger__uType*> type;
    if (type != NULL) return type;

    type = (ForceFieldEventTrigger__uType*)::uAllocClassType(sizeof(ForceFieldEventTrigger__uType), "Fuse.Physics.ForceFieldEventTrigger", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Physics::ForceFieldTrigger__typeof());

    type->SetStrongRefs(
        "Handler", offsetof(ForceFieldEventTrigger, Handler));

    return type;
}

void ForceFieldEventTrigger__OnTriggered(ForceFieldEventTrigger* __this, ::app::Fuse::Physics::Body* body)
{
    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::app::Fuse::Physics::ForceFieldEventArgs* args = ::app::Fuse::Physics::ForceFieldEventArgs__New_2(NULL, body, __this->ForceField());
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Physics::ForceFieldEventArgs*>((::uObject*)__this, args);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ForceFieldTrigger__uType* ForceFieldTrigger__typeof()
{
    static ::uStaticStrong<ForceFieldTrigger__uType*> type;
    if (type != NULL) return type;

    type = (ForceFieldTrigger__uType*)::uAllocClassType(sizeof(ForceFieldTrigger__uType), "Fuse.Physics.ForceFieldTrigger", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());

    type->SetStrongRefs(
        "_ForceField", offsetof(ForceFieldTrigger, _ForceField));

    return type;
}

::app::Fuse::Physics::ForceField* ForceFieldTrigger__get_ForceField(ForceFieldTrigger* __this)
{
    return __this->_ForceField;
}

void ForceFieldTrigger__set_ForceField(ForceFieldTrigger* __this, ::app::Fuse::Physics::ForceField* value)
{
    __this->_ForceField = value;
}

void ForceFieldTrigger__SetForce(::uStatic* __this, ::app::Fuse::Physics::ForceField* field, ::app::Fuse::Physics::Body* body, float force)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Behavior::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Physics::Body*>(body)->Node)->Behaviors())); i++)
    {
        ::app::Fuse::Behavior* b = ::app::Uno::Collections::IList__Fuse_Behavior::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Physics::Body*>(body)->Node)->Behaviors()), i);
        ForceFieldTrigger* fft = ::uAs< ForceFieldTrigger*>(b, ForceFieldTrigger__typeof());

        if ((fft != NULL) && (::uPtr< ForceFieldTrigger*>(fft)->ForceField() == field))
        {
            ::uPtr< ForceFieldTrigger*>(fft)->SetForce_1(body, force);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InForceFieldAnimation__uType* InForceFieldAnimation__typeof()
{
    static ::uStaticStrong<InForceFieldAnimation__uType*> type;
    if (type != NULL) return type;

    type = (InForceFieldAnimation__uType*)::uAllocClassType(sizeof(InForceFieldAnimation__uType), "Fuse.Physics.InForceFieldAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Physics::ForceFieldTrigger__typeof());
    type->__fp_SetForce_1 = (void(*)(::app::Fuse::Physics::ForceFieldTrigger*, ::app::Fuse::Physics::Body*, float))InForceFieldAnimation__SetForce_1;

    return type;
}

float InForceFieldAnimation__get_From(InForceFieldAnimation* __this)
{
    return __this->_From;
}

float InForceFieldAnimation__get_To(InForceFieldAnimation* __this)
{
    return __this->_To;
}

void InForceFieldAnimation__set_From(InForceFieldAnimation* __this, float value)
{
    __this->_From = value;
}

void InForceFieldAnimation__set_To(InForceFieldAnimation* __this, float value)
{
    __this->_To = value;
}

void InForceFieldAnimation__SetForce_1(InForceFieldAnimation* __this, ::app::Fuse::Physics::Body* body, float force)
{
    float f = ::app::Uno::Math__Clamp_8(NULL, (force - __this->From()) / (__this->To() - __this->From()), 0.0f, 1.0f);
    __this->Seek((double)f, 0);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IRule__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Physics.IRule");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointAttractor__uType* PointAttractor__typeof()
{
    static ::uStaticStrong<PointAttractor__uType*> type;
    if (type != NULL) return type;

    type = (PointAttractor__uType*)::uAllocClassType(sizeof(PointAttractor__uType), "Fuse.Physics.PointAttractor", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Physics::ForceField__typeof());
    type->__fp_OnUpdate = (void(*)(::app::Fuse::Physics::ForceField*, double, ::app::Fuse::Physics::World*))PointAttractor__OnUpdate;

    type->SetInterfaces(
        ::app::Fuse::Physics::IRule__typeof(), offsetof(PointAttractor__uType, __interface_0));

    return type;
}

bool PointAttractor__AnyStrongerForce(PointAttractor* __this, ::app::Fuse::Physics::Body* b, float force, ::app::Fuse::Physics::World* w)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Physics_IRule::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Physics::World*>(w)->Rules())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::uObject* r = ::app::Uno::Collections::IEnumerator__Fuse_Physics_IRule::Current(::uPtr< ::uObject*>(enum_123));

        if (r == __this)
        {
            continue;
        }

        PointAttractor* pa = ::uAs< PointAttractor*>(r, PointAttractor__typeof());

        if (pa != NULL)
        {
            if (::uPtr< PointAttractor*>(pa)->CalcForce(b) > force)
            {
                return true;
            }
        }
    }

    return false;
}

float PointAttractor__CalcForce(PointAttractor* __this, ::app::Fuse::Physics::Body* b)
{
    float dist = ::app::Uno::Vector__Length_1(NULL, __this->DirectionTo(b));
    return ::app::Uno::Math__Max_8(NULL, __this->_radius - dist, 0.0f) / __this->_radius;
}

float PointAttractor__Curve(PointAttractor* __this, float x)
{
    return (float)::app::Uno::Math__Sin(NULL, (double)(x * x) * 3.1415926535897931);
}

::app::Uno::Float3 PointAttractor__DirectionTo(PointAttractor* __this, ::app::Fuse::Physics::Body* b)
{
    return ::app::Uno::Float3__op_Subtraction_2(NULL, __this->TargetPoint(), ::uPtr< ::app::Fuse::Physics::Body*>(b)->CenterPosition());
}

bool PointAttractor__get_Exclusive(PointAttractor* __this)
{
    return __this->_Exclusive;
}

::app::Uno::Float3 PointAttractor__get_Offset(PointAttractor* __this)
{
    return __this->_offset;
}

::app::Uno::Float3 PointAttractor__get_TargetPoint(PointAttractor* __this)
{
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    return ::app::Uno::Float3__op_Addition_2(NULL, (ind_125 = ::app::Uno::Vector__Transform_1(NULL, ::uPtr< ::app::Fuse::Node*>(__this->Node())->LocalBounds().Center(), ::uPtr< ::app::Fuse::Node*>(__this->Node())->WorldTransform()), ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z)), __this->Offset());
}

void PointAttractor__OnUpdate(PointAttractor* __this, double deltaTime, ::app::Fuse::Physics::World* world)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(::uPtr< ::app::Fuse::Physics::World*>(__this->World())->Bodies())->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Physics::Body* b = enum_124.Current();

        if (::uPtr< ::app::Fuse::Physics::Body*>(b)->Node == __this->Node())
        {
            continue;
        }

        float force = __this->CalcForce(b);
        ::app::Fuse::Physics::ForceFieldTrigger__SetForce(NULL, (::app::Fuse::Physics::ForceField*)__this, b, force);

        if (force == 0.0f)
        {
            continue;
        }

        if (__this->Exclusive())
        {
            if (__this->AnyStrongerForce(b, force, world))
            {
                continue;
            }
        }

        ::app::Uno::Float3 dir = __this->DirectionTo(b);
        float dist = ::app::Uno::Vector__Length_1(NULL, dir);

        if (dist < 0.5f)
        {
            return;
        }

        dir = ::app::Uno::Float3__op_Division(NULL, dir, dist);
        dir = ::app::Uno::Float3__op_Multiply_2(NULL, dir, (__this->Curve(force) * 50.0f) * __this->_strength);
        ::app::Uno::Float3 f = ::app::Uno::Float3__op_Multiply_2(NULL, dir, (float)deltaTime);
        ::uPtr< ::app::Fuse::Physics::Body*>(b)->ApplyForce(f);
    }
}

void PointAttractor__set_Exclusive(PointAttractor* __this, bool value)
{
    __this->_Exclusive = value;
}

void PointAttractor__set_Offset(PointAttractor* __this, ::app::Uno::Float3 value)
{
    __this->_offset = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spring__uType* Spring__typeof()
{
    static ::uStaticStrong<Spring__uType*> type;
    if (type != NULL) return type;

    type = (Spring__uType*)::uAllocClassType(sizeof(Spring__uType), "Fuse.Physics.Spring", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Spring__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Spring__OnUnrooted;
    type->__interface_0.__fp_Update = (void(*)(void*, double, ::app::Fuse::Physics::World*))Spring__Fuse_Physics_IRule_Update;

    type->SetInterfaces(
        ::app::Fuse::Physics::IRule__typeof(), offsetof(Spring__uType, __interface_0));

    type->SetStrongRefs(
        "_body", offsetof(Spring, _body),
        "_target", offsetof(Spring, _target),
        "_targetBody", offsetof(Spring, _targetBody));

    return type;
}

void Spring__Fuse_Physics_IRule_Update(Spring* __this, double deltaTime, ::app::Fuse::Physics::World* world)
{
    if ((__this->_body == NULL) || (__this->_targetBody == NULL))
    {
        return;
    }

    ::app::Uno::Float3 vec = ::app::Uno::Float3__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->WorldPosition(), ::uPtr< ::app::Fuse::Physics::Body*>(__this->_targetBody)->WorldPosition());
    float dist = ::app::Uno::Vector__Length_1(NULL, vec);

    if (::app::Uno::Math__Abs_8(NULL, dist) < 0.001f)
    {
        return;
    }

    ::app::Uno::Float3 dir = ::app::Uno::Float3__op_Division(NULL, vec, dist);
    ::app::Uno::Float3 force = ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, dir, dist - __this->Length()), (float)deltaTime), __this->_stiffness), 100.0f);
    ::uPtr< ::app::Fuse::Physics::Body*>(__this->_targetBody)->ApplyForce(force);
    ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->ApplyForce(::app::Uno::Float3__op_Multiply_2(NULL, force, -1.0f));
}

float Spring__get_Length(Spring* __this)
{
    return __this->_length;
}

void Spring__OnRooted(Spring* __this, ::app::Fuse::Node* node)
{
    __this->_body = ::app::Fuse::Physics::Body__Pin(NULL, node);
    ::uPtr< ::app::Fuse::Physics::World*>(::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->World)->AddRule((::uObject*)__this);

    if (__this->_target != NULL)
    {
        __this->_targetBody = ::app::Fuse::Physics::Body__Pin(NULL, __this->_target);
    }
}

void Spring__OnUnrooted(Spring* __this, ::app::Fuse::Node* node)
{
    ::uPtr< ::app::Fuse::Physics::World*>(::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->World)->RemoveRule((::uObject*)__this);
    ::uPtr< ::app::Fuse::Physics::Body*>(__this->_body)->Unpin();
    __this->_body = NULL;

    if (__this->_targetBody != NULL)
    {
        ::uPtr< ::app::Fuse::Physics::Body*>(__this->_targetBody)->Unpin();
        __this->_targetBody = NULL;
    }
}

void Spring__set_Length(Spring* __this, float value)
{
    __this->_length = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileDragging__uType* WhileDragging__typeof()
{
    static ::uStaticStrong<WhileDragging__uType*> type;
    if (type != NULL) return type;

    type = (WhileDragging__uType*)::uAllocClassType(sizeof(WhileDragging__uType), "Fuse.Physics.WhileDragging", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());

    return type;
}

void WhileDragging__Begin(::uStatic* __this, ::app::Fuse::Node* n)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(n)->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));
        WhileDragging* wd = ::uAs< WhileDragging*>(b, WhileDragging__typeof());

        if (wd != NULL)
        {
            ::uPtr< WhileDragging*>(wd)->Activate(NULL);
        }
    }
}

void WhileDragging__End(::uStatic* __this, ::app::Fuse::Node* n)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(n)->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_124));
        WhileDragging* wd = ::uAs< WhileDragging*>(b, WhileDragging__typeof());

        if (wd != NULL)
        {
            ::uPtr< WhileDragging*>(wd)->Deactivate();
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< World*> World___globalWorld;
::uStaticStrong< ::app::Fuse::PropertyHandle*> World___worldHandle;

World__uType* World__typeof()
{
    static ::uStaticStrong<World__uType*> type;
    if (type != NULL) return type;

    type = (World__uType*)::uAllocClassType(sizeof(World__uType), "Fuse.Physics.World", false, 0, 3, 0);

    type->SetStrongRefs(
        "_bodies", offsetof(World, _bodies),
        "_bodyHandle", offsetof(World, _bodyHandle),
        "_rules", offsetof(World, _rules));

    return type;
}

void World___ObjInit(World* __this)
{
    __this->_bodies = ::app::Uno::Collections::List__Fuse_Physics_Body__New_1(NULL);
    __this->_bodyHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_rules = ::app::Uno::Collections::List__Fuse_Physics_IRule__New_1(NULL);
    __this->_firstFrame = true;
}

void World___TypeInit(::uStatic* __this)
{
    World___globalWorld = World__New_1(NULL);
    World___worldHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void World__AddRule(World* __this, ::uObject* rule)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_rules)->Add(rule);
}

void World__EndSimulation(World* __this)
{
    ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)World__OnUpdate, __this), 0);
    __this->_isSimulating = false;
}

void World__EnsureSimulation(World* __this)
{
    if (__this->_isSimulating)
    {
        return;
    }

    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)World__OnUpdate, __this), 0);
    __this->_isSimulating = true;
}

World* World__FindWorld(::uStatic* __this, ::app::Fuse::Node* n)
{
    World* w = ::uAs< World*>(::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(World___worldHandle), World__typeof());

    if (w != NULL)
    {
        return w;
    }

    if (n->Parent() != NULL)
    {
        return World__FindWorld(NULL, n->Parent());
    }

    return World___globalWorld;
}

::app::Uno::Collections::List__Fuse_Physics_Body* World__get_Bodies(World* __this)
{
    return __this->_bodies;
}

::uObject* World__get_Rules(World* __this)
{
    return (::uObject*)__this->_rules;
}

World* World__New_1(::uStatic* __this)
{
    World* inst = (World*)::uAllocObject(sizeof(World), World__typeof());
    inst->_ObjInit();
    return inst;
}

void World__OnUpdate(World* __this)
{
    if (__this->_firstFrame)
    {
        __this->_firstFrame = false;
        return;
    }

    double deltaTime = ::app::Fuse::Time__get_FrameInterval(NULL);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_rules)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::uObject* r = enum_123.Current();
        ::app::Fuse::Physics::IRule::Update(::uPtr< ::uObject*>(r), deltaTime, __this);
    }

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_bodies)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Physics::Body* b = enum_124.Current();
        ::uPtr< ::app::Fuse::Physics::Body*>(b)->Update(deltaTime);
    }
}

::app::Fuse::Physics::Body* World__PinBody(World* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Physics::Body* body = __this->TryGetBody(node);

    if (body == NULL)
    {
        body = ::app::Fuse::Physics::Body__New_1(NULL, __this, node);
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->Set(__this->_bodyHandle, (::uObject*)body);
        ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_bodies)->Add(body);
    }

    ::uPtr< ::app::Fuse::Physics::Body*>(body)->PinCount++;
    __this->EnsureSimulation();
    return body;
}

void World__RemoveRule(World* __this, ::uObject* rule)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_rules)->Remove(rule);
}

::app::Fuse::Physics::Body* World__TryGetBody(World* __this, ::app::Fuse::Node* node)
{
    return ::uAs< ::app::Fuse::Physics::Body*>(::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->Get(__this->_bodyHandle), ::app::Fuse::Physics::Body__typeof());
}

void World__UnpinBody(World* __this, ::app::Fuse::Physics::Body* body)
{
    ::uPtr< ::app::Fuse::Physics::Body*>(body)->PinCount--;

    if (body->PinCount == 0)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Physics::Body*>(body)->Node)->Properties())->Clear(__this->_bodyHandle);
        ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_bodies)->Remove(body);
        body->Dispose();
    }

    if (::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_bodies)->Count() == 0)
    {
        __this->EndSimulation();
    }
}

}}}
