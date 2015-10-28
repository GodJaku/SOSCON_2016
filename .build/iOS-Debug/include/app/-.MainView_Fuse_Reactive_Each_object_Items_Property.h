// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FUSE_REACTIVE_EACH_OBJECT_ITEMS_PROPERTY_H__
#define __APP___MAIN_VIEW_FUSE_REACTIVE_EACH_OBJECT_ITEMS_PROPERTY_H__

#include <app/Uno.UX.Property__object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Each; } } }

namespace app {

struct MainView_Fuse_Reactive_Each_object_Items_Property;

struct MainView_Fuse_Reactive_Each_object_Items_Property__uType : ::app::Uno::UX::Property__object__uType
{
};

MainView_Fuse_Reactive_Each_object_Items_Property__uType* MainView_Fuse_Reactive_Each_object_Items_Property__typeof();

void MainView_Fuse_Reactive_Each_object_Items_Property___ObjInit_1(MainView_Fuse_Reactive_Each_object_Items_Property* __this, ::app::Fuse::Reactive::Each* obj);
MainView_Fuse_Reactive_Each_object_Items_Property* MainView_Fuse_Reactive_Each_object_Items_Property__New_1(::uStatic* __this, ::app::Fuse::Reactive::Each* obj);
::uObject* MainView_Fuse_Reactive_Each_object_Items_Property__OnGet(MainView_Fuse_Reactive_Each_object_Items_Property* __this);
void MainView_Fuse_Reactive_Each_object_Items_Property__OnSet(MainView_Fuse_Reactive_Each_object_Items_Property* __this, ::uObject* v, ::uObject* origin);

struct MainView_Fuse_Reactive_Each_object_Items_Property : ::app::Uno::UX::Property__object
{
    ::uStrong< ::app::Fuse::Reactive::Each*> _obj;

    void _ObjInit_1(::app::Fuse::Reactive::Each* obj) { MainView_Fuse_Reactive_Each_object_Items_Property___ObjInit_1(this, obj); }
};

}


#endif
