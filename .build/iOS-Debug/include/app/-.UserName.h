// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___USER_NAME_H__
#define __APP___USER_NAME_H__

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

struct UserName;

struct UserName__uType : ::app::Fuse::Controls::Text__uType
{
};

UserName__uType* UserName__typeof();

void UserName___ObjInit_7(UserName* __this);
void UserName__InitializeUX(UserName* __this);
UserName* UserName__New_3(::uStatic* __this);

struct UserName : ::app::Fuse::Controls::Text
{
    void _ObjInit_7() { UserName___ObjInit_7(this); }
    void InitializeUX() { UserName__InitializeUX(this); }
};

}


#endif
