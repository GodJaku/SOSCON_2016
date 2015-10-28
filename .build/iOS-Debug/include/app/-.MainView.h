// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_H__
#define __APP___MAIN_VIEW_H__

#include <app/Fuse.App.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct EdgeNavigator; } } }
namespace app { namespace Fuse { namespace Controls { struct Rectangle; } } }
namespace app { namespace Fuse { struct Rotation; } }
namespace app { namespace Fuse { struct Translation; } }
namespace app { struct MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property; }
namespace app { struct MainView_Fuse_Elements_Element_float_Opacity_Property; }
namespace app { struct MainView_Fuse_Elements_Element_float_Width_Property; }
namespace app { struct MainView_Fuse_Reactive_Each_object_Items_Property; }
namespace app { struct MainView_Fuse_Rotation_float_Degrees_Property; }
namespace app { struct MainView_Fuse_Translation_float_X_Property; }
namespace app { struct MainView_Fuse_Translation_float_Y_Property; }
namespace app { struct Sidebar; }

namespace app {

struct MainView;

struct MainView__uType : ::app::Fuse::App__uType
{
};

MainView__uType* MainView__typeof();

void MainView___InitTypes(::uStatic* __this);
void MainView___ObjInit_3(MainView* __this);
void MainView__InitializeUX(MainView* __this);
MainView* MainView__New_2(::uStatic* __this);

struct MainView : ::app::Fuse::App
{
    ::uStrong< ::app::MainView_Fuse_Translation_float_X_Property*> mainAppTranslation_X_inst;
    ::uStrong< ::app::MainView_Fuse_Translation_float_Y_Property*> topMenuTranslation_Y_inst;
    ::uStrong< ::app::MainView_Fuse_Translation_float_Y_Property*> bottomMenuTranslation_Y_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> middleRectangle_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Rotation_float_Degrees_Property*> topMenuRotation_Degrees_inst;
    ::uStrong< ::app::MainView_Fuse_Rotation_float_Degrees_Property*> bottomMenuRotation_Degrees_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Width_Property*> topRectangle_Width_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Width_Property*> bottomRectangle_Width_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property*> EdgeNavigator_Active_inst;
    ::uStrong< ::app::MainView_Fuse_Reactive_Each_object_Items_Property*> temp_Items_inst;
    ::uStrong< ::app::Fuse::Controls::EdgeNavigator*> EdgeNavigator;
    ::uStrong< ::app::Sidebar*> drawyer;
    ::uStrong< ::app::Fuse::Translation*> mainAppTranslation;
    ::uStrong< ::app::Fuse::Controls::Rectangle*> topRectangle;
    ::uStrong< ::app::Fuse::Translation*> topMenuTranslation;
    ::uStrong< ::app::Fuse::Rotation*> topMenuRotation;
    ::uStrong< ::app::Fuse::Controls::Rectangle*> middleRectangle;
    ::uStrong< ::app::Fuse::Controls::Rectangle*> bottomRectangle;
    ::uStrong< ::app::Fuse::Translation*> bottomMenuTranslation;
    ::uStrong< ::app::Fuse::Rotation*> bottomMenuRotation;

    void _ObjInit_3() { MainView___ObjInit_3(this); }
    void InitializeUX() { MainView__InitializeUX(this); }
};

}


#endif
