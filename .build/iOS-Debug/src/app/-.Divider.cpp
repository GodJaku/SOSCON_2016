// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.Divider.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

Divider__uType* Divider__typeof()
{
    static ::uStaticStrong<Divider__uType*> type;
    if (type != NULL) return type;

    type = (Divider__uType*)::uAllocClassType(sizeof(Divider__uType), "Divider", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Divider__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Divider__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Divider__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Divider__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Divider__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Divider__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Divider__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Divider__uType, __interface_7));

    return type;
}

void Divider___ObjInit_4(Divider* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->InitializeUX();
}

void Divider__InitializeUX(Divider* __this)
{
    ::app::Fuse::Controls::Rectangle* temp = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp1 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.6f, 0.6f, 0.6f, 1.0f));
    __this->Alignment(8);
    __this->Margin(::app::Uno::Float4__New_2(NULL, 46.0f, 10.0f, 0.0f, 10.0f));
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp)->Height(1.0f);
    temp->Fill((::app::Fuse::Drawing::Brush*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)temp);
}

Divider* Divider__New_2(::uStatic* __this)
{
    Divider* inst = (Divider*)::uAllocObject(sizeof(Divider), Divider__typeof());
    inst->_ObjInit_4();
    return inst;
}

}
