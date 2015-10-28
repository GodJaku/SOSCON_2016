// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___DATE_VIEW_H__
#define __APP___DATE_VIEW_H__

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

struct DateView;

struct DateView__uType : ::app::Fuse::Controls::Text__uType
{
};

DateView__uType* DateView__typeof();

void DateView___ObjInit_7(DateView* __this);
void DateView__InitializeUX(DateView* __this);
DateView* DateView__New_3(::uStatic* __this);

struct DateView : ::app::Fuse::Controls::Text
{
    void _ObjInit_7() { DateView___ObjInit_7(this); }
    void InitializeUX() { DateView__InitializeUX(this); }
};

}


#endif
