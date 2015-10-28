// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.HeaderView.h>
#include <app/-.MainView.h>
#include <app/-.MainView_Factory.h>
#include <app/-.MainView_Fuse_Controls_TextControl_string_Value_Property.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Reactive.DataBinding__string.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__string.h>

namespace app {

MainView_Factory__uType* MainView_Factory__typeof()
{
    static ::uStaticStrong<MainView_Factory__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Factory__uType*)::uAllocClassType(sizeof(MainView_Factory__uType), "MainView.Factory", false, 1, 2, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))MainView_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(MainView_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Factory, __parent),
        "self_Value_inst", offsetof(MainView_Factory, self_Value_inst));

    return type;
}

void MainView_Factory___ObjInit(MainView_Factory* __this, ::app::MainView* parent)
{
    __this->__parent = parent;
}

::uObject* MainView_Factory__New_1(MainView_Factory* __this)
{
    ::app::HeaderView* self = ::app::HeaderView__New_3(NULL);
    __this->self_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)self);
    ::app::Fuse::Reactive::DataBinding__string* temp = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->self_Value_inst, ::uGetConstString("title"));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::HeaderView*>(self)->Behaviors()), (::app::Fuse::Behavior*)temp);
    return (::uObject*)self;
}

MainView_Factory* MainView_Factory__New_2(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Factory* inst = (MainView_Factory*)::uAllocObject(sizeof(MainView_Factory), MainView_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

}
