// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___ARTICLE_VIEW_H__
#define __APP___ARTICLE_VIEW_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {

struct ArticleView;

struct ArticleView__uType : ::app::Fuse::Controls::Text__uType
{
};

ArticleView__uType* ArticleView__typeof();

void ArticleView___ObjInit_7(ArticleView* __this);
void ArticleView__InitializeUX(ArticleView* __this);
ArticleView* ArticleView__New_3(::uStatic* __this);

struct ArticleView : ::app::Fuse::Controls::Text
{
    void _ObjInit_7() { ArticleView___ObjInit_7(this); }
    void InitializeUX() { ArticleView__InitializeUX(this); }
};

}


#endif
