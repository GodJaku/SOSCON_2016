#include <app/Fuse.Android.ControlView__Fuse_Controls_TextInput.h>

namespace app {
namespace Fuse {
namespace Android {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android.Views/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_TextInput__uType* ControlView__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_TextInput__uType), "Fuse.Android.ControlView<Fuse.Controls.TextInput>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_TextInput__uType, __interface_0));

    return type;
}

void ControlView__Fuse_Controls_TextInput___ObjInit_2(ControlView__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

}}}
