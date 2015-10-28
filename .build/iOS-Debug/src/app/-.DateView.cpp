// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.DateView.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

DateView__uType* DateView__typeof()
{
    static ::uStaticStrong<DateView__uType*> type;
    if (type != NULL) return type;

    type = (DateView__uType*)::uAllocClassType(sizeof(DateView__uType), "DateView", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Text__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(DateView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(DateView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(DateView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(DateView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(DateView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(DateView__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(DateView__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(DateView__uType, __interface_7));

    return type;
}

void DateView___ObjInit_7(DateView* __this)
{
    ::app::Fuse::Controls::Text___ObjInit_6(__this);
    __this->InitializeUX();
}

void DateView__InitializeUX(DateView* __this)
{
    __this->FontSize(13.0f);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 0.6f, 0.6f, 0.6f, 1.0f));
    __this->Margin(::app::Uno::Float4__New_2(NULL, 10.0f, 0.0f, 10.0f, 0.0f));
}

DateView* DateView__New_3(::uStatic* __this)
{
    DateView* inst = (DateView*)::uAllocObject(sizeof(DateView), DateView__typeof());
    inst->_ObjInit_7();
    return inst;
}

}
