// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.SidebarIcon.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

SidebarIcon__uType* SidebarIcon__typeof()
{
    static ::uStaticStrong<SidebarIcon__uType*> type;
    if (type != NULL) return type;

    type = (SidebarIcon__uType*)::uAllocClassType(sizeof(SidebarIcon__uType), "SidebarIcon", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Image__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(SidebarIcon__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(SidebarIcon__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(SidebarIcon__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(SidebarIcon__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(SidebarIcon__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(SidebarIcon__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(SidebarIcon__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(SidebarIcon__uType, __interface_7));

    return type;
}

void SidebarIcon___ObjInit_5(SidebarIcon* __this)
{
    ::app::Fuse::Controls::Image___ObjInit_4(__this);
    __this->InitializeUX();
}

void SidebarIcon__InitializeUX(SidebarIcon* __this)
{
    __this->Color(::app::Uno::Float4__New_2(NULL, 0.4784314f, 0.5882353f, 0.6980392f, 1.0f));
    __this->Width(22.0f);
    __this->Height(22.0f);
    __this->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 24.0f, 0.0f, 9.0f));
}

SidebarIcon* SidebarIcon__New_3(::uStatic* __this)
{
    SidebarIcon* inst = (SidebarIcon*)::uAllocObject(sizeof(SidebarIcon), SidebarIcon__typeof());
    inst->_ObjInit_5();
    return inst;
}

}
