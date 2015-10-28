// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FUSE_CONTROLS_EDGE_NAVIGATOR_FUSE_NODE_ACTIVE_PROPERTY_H__
#define __APP___MAIN_VIEW_FUSE_CONTROLS_EDGE_NAVIGATOR_FUSE_NODE_ACTIVE_PROPERTY_H__

#include <app/Uno.UX.Property__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct EdgeNavigator; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {

struct MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property;

struct MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__uType : ::app::Uno::UX::Property__Fuse_Node__uType
{
};

MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__uType* MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__typeof();

void MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property___ObjInit_1(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* __this, ::app::Fuse::Controls::EdgeNavigator* obj);
MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::EdgeNavigator* obj);
::app::Fuse::Node* MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__OnGet(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* __this);
void MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__OnSet(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* __this, ::app::Fuse::Node* v, ::uObject* origin);

struct MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property : ::app::Uno::UX::Property__Fuse_Node
{
    ::uStrong< ::app::Fuse::Controls::EdgeNavigator*> _obj;

    void _ObjInit_1(::app::Fuse::Controls::EdgeNavigator* obj) { MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property___ObjInit_1(this, obj); }
};

}


#endif
