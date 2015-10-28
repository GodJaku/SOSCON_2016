// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.ArticleView.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

ArticleView__uType* ArticleView__typeof()
{
    static ::uStaticStrong<ArticleView__uType*> type;
    if (type != NULL) return type;

    type = (ArticleView__uType*)::uAllocClassType(sizeof(ArticleView__uType), "ArticleView", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Text__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ArticleView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ArticleView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ArticleView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ArticleView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ArticleView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ArticleView__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(ArticleView__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(ArticleView__uType, __interface_7));

    return type;
}

void ArticleView___ObjInit_7(ArticleView* __this)
{
    ::app::Fuse::Controls::Text___ObjInit_6(__this);
    __this->InitializeUX();
}

void ArticleView__InitializeUX(ArticleView* __this)
{
    __this->TextWrapping(1);
    __this->FontSize(13.0f);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    __this->Margin(::app::Uno::Float4__New_2(NULL, 10.0f, 0.0f, 10.0f, 0.0f));
}

ArticleView* ArticleView__New_3(::uStatic* __this)
{
    ArticleView* inst = (ArticleView*)::uAllocObject(sizeof(ArticleView), ArticleView__typeof());
    inst->_ObjInit_7();
    return inst;
}

}
