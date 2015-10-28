// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.ArticleView.h>
#include <app/-.MainView.h>
#include <app/-.MainView_Factory1.h>
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

MainView_Factory1__uType* MainView_Factory1__typeof()
{
    static ::uStaticStrong<MainView_Factory1__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Factory1__uType*)::uAllocClassType(sizeof(MainView_Factory1__uType), "MainView.Factory1", false, 1, 2, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))MainView_Factory1__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(MainView_Factory1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Factory1, __parent),
        "self_Value_inst", offsetof(MainView_Factory1, self_Value_inst));

    return type;
}

void MainView_Factory1___ObjInit(MainView_Factory1* __this, ::app::MainView* parent)
{
    __this->__parent = parent;
}

::uObject* MainView_Factory1__New_1(MainView_Factory1* __this)
{
    ::app::ArticleView* self = ::app::ArticleView__New_3(NULL);
    __this->self_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)self);
    ::app::Fuse::Reactive::DataBinding__string* temp = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->self_Value_inst, ::uGetConstString("content"));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::ArticleView*>(self)->Behaviors()), (::app::Fuse::Behavior*)temp);
    return (::uObject*)self;
}

MainView_Factory1* MainView_Factory1__New_2(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Factory1* inst = (MainView_Factory1*)::uAllocObject(sizeof(MainView_Factory1), MainView_Factory1__typeof());
    inst->_ObjInit(parent);
    return inst;
}

}
