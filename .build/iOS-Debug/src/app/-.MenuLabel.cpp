// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MenuLabel.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

MenuLabel__uType* MenuLabel__typeof()
{
    static ::uStaticStrong<MenuLabel__uType*> type;
    if (type != NULL) return type;

    type = (MenuLabel__uType*)::uAllocClassType(sizeof(MenuLabel__uType), "MenuLabel", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Text__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(MenuLabel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(MenuLabel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(MenuLabel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(MenuLabel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(MenuLabel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(MenuLabel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(MenuLabel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(MenuLabel__uType, __interface_7));

    return type;
}

void MenuLabel___ObjInit_7(MenuLabel* __this)
{
    ::app::Fuse::Controls::Text___ObjInit_6(__this);
    __this->InitializeUX();
}

void MenuLabel__InitializeUX(MenuLabel* __this)
{
    __this->FontSize(18.0f);
    __this->TextAlignment(1);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 0.254902f, 0.3098039f, 0.3686275f, 1.0f));
    __this->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.0f));
}

MenuLabel* MenuLabel__New_3(::uStatic* __this)
{
    MenuLabel* inst = (MenuLabel*)::uAllocObject(sizeof(MenuLabel), MenuLabel__typeof());
    inst->_ObjInit_7();
    return inst;
}

}
