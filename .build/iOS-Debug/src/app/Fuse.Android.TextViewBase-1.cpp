#include <app/Fuse.Android.TextViewBase__Fuse_Controls_TextInput.h>

namespace app {
namespace Fuse {
namespace Android {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android.Views/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextViewBase__Fuse_Controls_TextInput__uType* TextViewBase__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<TextViewBase__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (TextViewBase__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(TextViewBase__Fuse_Controls_TextInput__uType), "Fuse.Android.TextViewBase<Fuse.Controls.TextInput>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_TextInput__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextViewBase__Fuse_Controls_TextInput__uType, __interface_0));

    return type;
}

void TextViewBase__Fuse_Controls_TextInput___ObjInit_3(TextViewBase__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_TextInput___ObjInit_2(__this);
}

}}}
