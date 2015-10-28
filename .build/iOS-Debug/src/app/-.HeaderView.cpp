// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.HeaderView.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

HeaderView__uType* HeaderView__typeof()
{
    static ::uStaticStrong<HeaderView__uType*> type;
    if (type != NULL) return type;

    type = (HeaderView__uType*)::uAllocClassType(sizeof(HeaderView__uType), "HeaderView", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Text__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(HeaderView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(HeaderView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(HeaderView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(HeaderView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(HeaderView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(HeaderView__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(HeaderView__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(HeaderView__uType, __interface_7));

    return type;
}

void HeaderView___ObjInit_7(HeaderView* __this)
{
    ::app::Fuse::Controls::Text___ObjInit_6(__this);
    __this->InitializeUX();
}

void HeaderView__InitializeUX(HeaderView* __this)
{
    __this->TextWrapping(1);
    __this->FontSize(18.0f);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    __this->Margin(::app::Uno::Float4__New_2(NULL, 10.0f, 10.0f, 10.0f, 5.0f));
}

HeaderView* HeaderView__New_3(::uStatic* __this)
{
    HeaderView* inst = (HeaderView*)::uAllocObject(sizeof(HeaderView), HeaderView__typeof());
    inst->_ObjInit_7();
    return inst;
}

}
