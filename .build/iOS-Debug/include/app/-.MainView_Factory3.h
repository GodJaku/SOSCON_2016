// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FACTORY3_H__
#define __APP___MAIN_VIEW_FACTORY3_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.IFactory.h>
#include <Uno.h>
namespace app { struct MainView; }

namespace app {

struct MainView_Factory3;

struct MainView_Factory3__uType : ::uClassType
{
    ::app::Uno::UX::IFactory __interface_0;
};

MainView_Factory3__uType* MainView_Factory3__typeof();

void MainView_Factory3___ObjInit(MainView_Factory3* __this, ::app::MainView* parent);
::uObject* MainView_Factory3__New_1(MainView_Factory3* __this);
MainView_Factory3* MainView_Factory3__New_2(::uStatic* __this, ::app::MainView* parent);

struct MainView_Factory3 : ::uObject
{
    ::uStrong< ::app::MainView*> __parent;

    void _ObjInit(::app::MainView* parent) { MainView_Factory3___ObjInit(this, parent); }
    ::uObject* New_1() { return MainView_Factory3__New_1(this); }
};

}


#endif
