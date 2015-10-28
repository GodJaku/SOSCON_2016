// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___SIDEBAR_H__
#define __APP___SIDEBAR_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Grid; } } }
namespace app { namespace Fuse { namespace Controls { struct StackPanel; } } }

namespace app {

struct Sidebar;

struct Sidebar__uType : ::app::Fuse::Controls::ScrollView__uType
{
};

Sidebar__uType* Sidebar__typeof();

void Sidebar___ObjInit_5(Sidebar* __this);
void Sidebar__InitializeUX(Sidebar* __this);
Sidebar* Sidebar__New_3(::uStatic* __this);

struct Sidebar : ::app::Fuse::Controls::ScrollView
{
    ::uStrong< ::app::Fuse::Controls::StackPanel*> user;
    ::uStrong< ::app::Fuse::Controls::Grid*> stats;
    ::uStrong< ::app::Fuse::Controls::StackPanel*> browser;
    ::uStrong< ::app::Fuse::Controls::StackPanel*> feed;
    ::uStrong< ::app::Fuse::Controls::StackPanel*> chat;
    ::uStrong< ::app::Fuse::Controls::StackPanel*> setting;

    void _ObjInit_5() { Sidebar___ObjInit_5(this); }
    void InitializeUX() { Sidebar__InitializeUX(this); }
};

}


#endif
