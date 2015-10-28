// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___SIDEBAR_ICON_H__
#define __APP___SIDEBAR_ICON_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {

struct SidebarIcon;

struct SidebarIcon__uType : ::app::Fuse::Controls::Image__uType
{
};

SidebarIcon__uType* SidebarIcon__typeof();

void SidebarIcon___ObjInit_5(SidebarIcon* __this);
void SidebarIcon__InitializeUX(SidebarIcon* __this);
SidebarIcon* SidebarIcon__New_3(::uStatic* __this);

struct SidebarIcon : ::app::Fuse::Controls::Image
{
    void _ObjInit_5() { SidebarIcon___ObjInit_5(this); }
    void InitializeUX() { SidebarIcon__InitializeUX(this); }
};

}


#endif
