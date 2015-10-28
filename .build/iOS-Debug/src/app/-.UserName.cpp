// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.UserName.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

UserName__uType* UserName__typeof()
{
    static ::uStaticStrong<UserName__uType*> type;
    if (type != NULL) return type;

    type = (UserName__uType*)::uAllocClassType(sizeof(UserName__uType), "UserName", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Text__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(UserName__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(UserName__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(UserName__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(UserName__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(UserName__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(UserName__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(UserName__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(UserName__uType, __interface_7));

    return type;
}

void UserName___ObjInit_7(UserName* __this)
{
    ::app::Fuse::Controls::Text___ObjInit_6(__this);
    __this->InitializeUX();
}

void UserName__InitializeUX(UserName* __this)
{
    __this->FontSize(18.0f);
    __this->TextAlignment(1);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    __this->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 8.0f, 0.0f, 0.0f));
}

UserName* UserName__New_3(::uStatic* __this)
{
    UserName* inst = (UserName*)::uAllocObject(sizeof(UserName), UserName__typeof());
    inst->_ObjInit_7();
    return inst;
}

}
