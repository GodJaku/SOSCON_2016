// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property.h>
#include <app/Fuse.Controls.EdgeNavigator.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Object.h>

namespace app {

MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__uType* MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__uType), "MainView.Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Node__typeof());
    type->__fp_OnGet = (::app::Fuse::Node*(*)(::app::Uno::UX::Property__Fuse_Node*))MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Node*, ::app::Fuse::Node*, ::uObject*))MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property, _obj));

    return type;
}

void MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property___ObjInit_1(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* __this, ::app::Fuse::Controls::EdgeNavigator* obj)
{
    ::app::Uno::UX::Property__Fuse_Node___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::EdgeNavigator* obj)
{
    MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* inst = (MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property*)::uAllocObject(sizeof(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property), MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Fuse::Node* MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__OnGet(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::EdgeNavigator*>(__this->_obj)->Active();
}

void MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__OnSet(MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property* __this, ::app::Fuse::Node* v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::EdgeNavigator*>(__this->_obj)->Active(v);
}

}
