// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.Stats.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

Stats__uType* Stats__typeof()
{
    static ::uStaticStrong<Stats__uType*> type;
    if (type != NULL) return type;

    type = (Stats__uType*)::uAllocClassType(sizeof(Stats__uType), "Stats", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Text__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Stats__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Stats__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Stats__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Stats__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Stats__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Stats__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Stats__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Stats__uType, __interface_7));

    return type;
}

void Stats___ObjInit_7(Stats* __this)
{
    ::app::Fuse::Controls::Text___ObjInit_6(__this);
    __this->InitializeUX();
}

void Stats__InitializeUX(Stats* __this)
{
    __this->FontSize(16.0f);
    __this->TextAlignment(1);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 0.9960784f, 0.8196079f, 0.4f, 1.0f));
}

Stats* Stats__New_3(::uStatic* __this)
{
    Stats* inst = (Stats*)::uAllocObject(sizeof(Stats), Stats__typeof());
    inst->_ObjInit_7();
    return inst;
}

}
