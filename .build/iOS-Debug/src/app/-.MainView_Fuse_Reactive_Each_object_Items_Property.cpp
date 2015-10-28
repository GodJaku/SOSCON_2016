// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Reactive_Each_object_Items_Property.h>
#include <app/Fuse.Reactive.Each.h>
#include <app/Uno.Object.h>

namespace app {

MainView_Fuse_Reactive_Each_object_Items_Property__uType* MainView_Fuse_Reactive_Each_object_Items_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Reactive_Each_object_Items_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Reactive_Each_object_Items_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Reactive_Each_object_Items_Property__uType), "MainView.Fuse_Reactive_Each_object_Items_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__object__typeof());
    type->__fp_OnGet = (::uObject*(*)(::app::Uno::UX::Property__object*))MainView_Fuse_Reactive_Each_object_Items_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__object*, ::uObject*, ::uObject*))MainView_Fuse_Reactive_Each_object_Items_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Reactive_Each_object_Items_Property, _obj));

    return type;
}

void MainView_Fuse_Reactive_Each_object_Items_Property___ObjInit_1(MainView_Fuse_Reactive_Each_object_Items_Property* __this, ::app::Fuse::Reactive::Each* obj)
{
    ::app::Uno::UX::Property__object___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Reactive_Each_object_Items_Property* MainView_Fuse_Reactive_Each_object_Items_Property__New_1(::uStatic* __this, ::app::Fuse::Reactive::Each* obj)
{
    MainView_Fuse_Reactive_Each_object_Items_Property* inst = (MainView_Fuse_Reactive_Each_object_Items_Property*)::uAllocObject(sizeof(MainView_Fuse_Reactive_Each_object_Items_Property), MainView_Fuse_Reactive_Each_object_Items_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::uObject* MainView_Fuse_Reactive_Each_object_Items_Property__OnGet(MainView_Fuse_Reactive_Each_object_Items_Property* __this)
{
    return ::uPtr< ::app::Fuse::Reactive::Each*>(__this->_obj)->Items();
}

void MainView_Fuse_Reactive_Each_object_Items_Property__OnSet(MainView_Fuse_Reactive_Each_object_Items_Property* __this, ::uObject* v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Reactive::Each*>(__this->_obj)->Items(v);
}

}
