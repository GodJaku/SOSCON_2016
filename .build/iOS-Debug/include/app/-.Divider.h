// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___DIVIDER_H__
#define __APP___DIVIDER_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {

struct Divider;

struct Divider__uType : ::app::Fuse::Controls::Panel__uType
{
};

Divider__uType* Divider__typeof();

void Divider___ObjInit_4(Divider* __this);
void Divider__InitializeUX(Divider* __this);
Divider* Divider__New_2(::uStatic* __this);

struct Divider : ::app::Fuse::Controls::Panel
{
    void _ObjInit_4() { Divider___ObjInit_4(this); }
    void InitializeUX() { Divider__InitializeUX(this); }
};

}


#endif
