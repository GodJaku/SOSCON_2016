// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_NODE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Node;

struct Property__Fuse_Node__uType : ::uClassType
{
    ::app::Fuse::Node*(*__fp_OnGet)(Property__Fuse_Node*);
    void(*__fp_OnSet)(Property__Fuse_Node*, ::app::Fuse::Node*, ::uObject*);
};

Property__Fuse_Node__uType* Property__Fuse_Node__typeof();

void Property__Fuse_Node___ObjInit(Property__Fuse_Node* __this);
::app::Fuse::Node* Property__Fuse_Node__Get(Property__Fuse_Node* __this);
::app::Fuse::Node* Property__Fuse_Node__OnGet(Property__Fuse_Node* __this);
void Property__Fuse_Node__OnSet(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);
void Property__Fuse_Node__RetainRestState(Property__Fuse_Node* __this);
void Property__Fuse_Node__Set(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);
void Property__Fuse_Node__SetRestState(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);

struct Property__Fuse_Node : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Node*> _restState;

    void _ObjInit() { Property__Fuse_Node___ObjInit(this); }
    ::app::Fuse::Node* Get() { return Property__Fuse_Node__Get(this); }
    ::app::Fuse::Node* OnGet() { return (((Property__Fuse_Node__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnSet(::app::Fuse::Node* value, ::uObject* origin) { (((Property__Fuse_Node__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void RetainRestState() { Property__Fuse_Node__RetainRestState(this); }
    void Set(::app::Fuse::Node* value, ::uObject* origin) { Property__Fuse_Node__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Node* value, ::uObject* origin) { Property__Fuse_Node__SetRestState(this, value, origin); }
};

}}}


#endif
