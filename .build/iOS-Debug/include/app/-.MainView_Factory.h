// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FACTORY_H__
#define __APP___MAIN_VIEW_FACTORY_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.IFactory.h>
#include <Uno.h>
namespace app { struct MainView; }
namespace app { struct MainView_Fuse_Controls_TextControl_string_Value_Property; }

namespace app {

struct MainView_Factory;

struct MainView_Factory__uType : ::uClassType
{
    ::app::Uno::UX::IFactory __interface_0;
};

MainView_Factory__uType* MainView_Factory__typeof();

void MainView_Factory___ObjInit(MainView_Factory* __this, ::app::MainView* parent);
::uObject* MainView_Factory__New_1(MainView_Factory* __this);
MainView_Factory* MainView_Factory__New_2(::uStatic* __this, ::app::MainView* parent);

struct MainView_Factory : ::uObject
{
    ::uStrong< ::app::MainView*> __parent;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> self_Value_inst;

    void _ObjInit(::app::MainView* parent) { MainView_Factory___ObjInit(this, parent); }
    ::uObject* New_1() { return MainView_Factory__New_1(this); }
};

}


#endif
