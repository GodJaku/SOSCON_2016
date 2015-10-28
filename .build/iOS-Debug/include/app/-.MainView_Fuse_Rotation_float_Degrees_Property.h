// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FUSE_ROTATION_FLOAT_DEGREES_PROPERTY_H__
#define __APP___MAIN_VIEW_FUSE_ROTATION_FLOAT_DEGREES_PROPERTY_H__

#include <app/Uno.UX.Property__float.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Rotation; } }

namespace app {

struct MainView_Fuse_Rotation_float_Degrees_Property;

struct MainView_Fuse_Rotation_float_Degrees_Property__uType : ::app::Uno::UX::Property__float__uType
{
};

MainView_Fuse_Rotation_float_Degrees_Property__uType* MainView_Fuse_Rotation_float_Degrees_Property__typeof();

void MainView_Fuse_Rotation_float_Degrees_Property___ObjInit_1(MainView_Fuse_Rotation_float_Degrees_Property* __this, ::app::Fuse::Rotation* obj);
MainView_Fuse_Rotation_float_Degrees_Property* MainView_Fuse_Rotation_float_Degrees_Property__New_1(::uStatic* __this, ::app::Fuse::Rotation* obj);
float MainView_Fuse_Rotation_float_Degrees_Property__OnGet(MainView_Fuse_Rotation_float_Degrees_Property* __this);
void MainView_Fuse_Rotation_float_Degrees_Property__OnSet(MainView_Fuse_Rotation_float_Degrees_Property* __this, float v, ::uObject* origin);

struct MainView_Fuse_Rotation_float_Degrees_Property : ::app::Uno::UX::Property__float
{
    ::uStrong< ::app::Fuse::Rotation*> _obj;

    void _ObjInit_1(::app::Fuse::Rotation* obj) { MainView_Fuse_Rotation_float_Degrees_Property___ObjInit_1(this, obj); }
};

}


#endif
