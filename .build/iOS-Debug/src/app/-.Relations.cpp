// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.Relations.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

Relations__uType* Relations__typeof()
{
    static ::uStaticStrong<Relations__uType*> type;
    if (type != NULL) return type;

    type = (Relations__uType*)::uAllocClassType(sizeof(Relations__uType), "Relations", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Text__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Relations__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Relations__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Relations__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Relations__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Relations__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Relations__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Relations__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Relations__uType, __interface_7));

    return type;
}

void Relations___ObjInit_7(Relations* __this)
{
    ::app::Fuse::Controls::Text___ObjInit_6(__this);
    __this->InitializeUX();
}

void Relations__InitializeUX(Relations* __this)
{
    __this->FontSize(11.0f);
    __this->TextAlignment(1);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 0.254902f, 0.3098039f, 0.3686275f, 1.0f));
}

Relations* Relations__New_3(::uStatic* __this)
{
    Relations* inst = (Relations*)::uAllocObject(sizeof(Relations), Relations__typeof());
    inst->_ObjInit_7();
    return inst;
}

}
