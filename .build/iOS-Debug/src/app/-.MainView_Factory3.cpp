// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.Divider.h>
#include <app/-.MainView.h>
#include <app/-.MainView_Factory3.h>

namespace app {

MainView_Factory3__uType* MainView_Factory3__typeof()
{
    static ::uStaticStrong<MainView_Factory3__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Factory3__uType*)::uAllocClassType(sizeof(MainView_Factory3__uType), "MainView.Factory3", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))MainView_Factory3__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(MainView_Factory3__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Factory3, __parent));

    return type;
}

void MainView_Factory3___ObjInit(MainView_Factory3* __this, ::app::MainView* parent)
{
    __this->__parent = parent;
}

::uObject* MainView_Factory3__New_1(MainView_Factory3* __this)
{
    ::app::Divider* self = ::app::Divider__New_2(NULL);
    return (::uObject*)self;
}

MainView_Factory3* MainView_Factory3__New_2(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Factory3* inst = (MainView_Factory3*)::uAllocObject(sizeof(MainView_Factory3), MainView_Factory3__typeof());
    inst->_ObjInit(parent);
    return inst;
}

}
