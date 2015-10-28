// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Rotation_float_Degrees_Property.h>
#include <app/Fuse.Rotation.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>

namespace app {

MainView_Fuse_Rotation_float_Degrees_Property__uType* MainView_Fuse_Rotation_float_Degrees_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Rotation_float_Degrees_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Rotation_float_Degrees_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Rotation_float_Degrees_Property__uType), "MainView.Fuse_Rotation_float_Degrees_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float__typeof());
    type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))MainView_Fuse_Rotation_float_Degrees_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float, ::uObject*))MainView_Fuse_Rotation_float_Degrees_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Rotation_float_Degrees_Property, _obj));

    return type;
}

void MainView_Fuse_Rotation_float_Degrees_Property___ObjInit_1(MainView_Fuse_Rotation_float_Degrees_Property* __this, ::app::Fuse::Rotation* obj)
{
    ::app::Uno::UX::Property__float___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Rotation_float_Degrees_Property* MainView_Fuse_Rotation_float_Degrees_Property__New_1(::uStatic* __this, ::app::Fuse::Rotation* obj)
{
    MainView_Fuse_Rotation_float_Degrees_Property* inst = (MainView_Fuse_Rotation_float_Degrees_Property*)::uAllocObject(sizeof(MainView_Fuse_Rotation_float_Degrees_Property), MainView_Fuse_Rotation_float_Degrees_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

float MainView_Fuse_Rotation_float_Degrees_Property__OnGet(MainView_Fuse_Rotation_float_Degrees_Property* __this)
{
    return ::uPtr< ::app::Fuse::Rotation*>(__this->_obj)->Degrees();
}

void MainView_Fuse_Rotation_float_Degrees_Property__OnSet(MainView_Fuse_Rotation_float_Degrees_Property* __this, float v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Rotation*>(__this->_obj)->Degrees(v);
}

}
