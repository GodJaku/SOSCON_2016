#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_ContentControl.h>
#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_GraphicsView.h>
#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_NativeViewHost.h>
#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_Panel.h>
#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_ScrollView.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentNativeView__Fuse_Controls_ContentControl__uType* ParentNativeView__Fuse_Controls_ContentControl__typeof()
{
    static ::uStaticStrong<ParentNativeView__Fuse_Controls_ContentControl__uType*> type;
    if (type != NULL) return type;

    type = (ParentNativeView__Fuse_Controls_ContentControl__uType*)::uAllocClassType(sizeof(ParentNativeView__Fuse_Controls_ContentControl__uType), "Fuse.iOS.NativeViews.ParentNativeView<Fuse.Controls.ContentControl>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::iOS::NativeViews::NativeView*))ParentNativeView__Fuse_Controls_ContentControl__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_ContentControl__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_ContentControl__OnUnrooted;

    return type;
}

void ParentNativeView__Fuse_Controls_ContentControl___ObjInit_2(ParentNativeView__Fuse_Controls_ContentControl* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

void ParentNativeView__Fuse_Controls_ContentControl__Attach(ParentNativeView__Fuse_Controls_ContentControl* __this)
{
}

void ParentNativeView__Fuse_Controls_ContentControl__Detach(ParentNativeView__Fuse_Controls_ContentControl* __this)
{
}

::app::Fuse::Controls::ContentControl* ParentNativeView__Fuse_Controls_ContentControl__get_Control(ParentNativeView__Fuse_Controls_ContentControl* __this)
{
    return ::uAs< ::app::Fuse::Controls::ContentControl*>(__this->Node(), ::app::Fuse::Controls::ContentControl__typeof());
}

::app::Uno::Float2 ParentNativeView__Fuse_Controls_ContentControl__get_Size(ParentNativeView__Fuse_Controls_ContentControl* __this)
{
    return ::uPtr< ::app::Fuse::Controls::ContentControl*>(__this->Control())->ActualSize();
}

void ParentNativeView__Fuse_Controls_ContentControl__OnRooted(ParentNativeView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::iOS::NativeViews::NativeView__OnRooted(__this, n);
    __this->Attach();
}

void ParentNativeView__Fuse_Controls_ContentControl__OnUnrooted(ParentNativeView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::iOS::NativeViews::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentNativeView__Fuse_Controls_GraphicsView__uType* ParentNativeView__Fuse_Controls_GraphicsView__typeof()
{
    static ::uStaticStrong<ParentNativeView__Fuse_Controls_GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (ParentNativeView__Fuse_Controls_GraphicsView__uType*)::uAllocClassType(sizeof(ParentNativeView__Fuse_Controls_GraphicsView__uType), "Fuse.iOS.NativeViews.ParentNativeView<Fuse.Controls.GraphicsView>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());
    type->__fp_Attach = ParentNativeView__Fuse_Controls_GraphicsView__Attach;
    type->__fp_Detach = ParentNativeView__Fuse_Controls_GraphicsView__Detach;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::iOS::NativeViews::NativeView*))ParentNativeView__Fuse_Controls_GraphicsView__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_GraphicsView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_GraphicsView__OnUnrooted;

    return type;
}

void ParentNativeView__Fuse_Controls_GraphicsView___ObjInit_2(ParentNativeView__Fuse_Controls_GraphicsView* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

void ParentNativeView__Fuse_Controls_GraphicsView__Attach(ParentNativeView__Fuse_Controls_GraphicsView* __this)
{
}

void ParentNativeView__Fuse_Controls_GraphicsView__Detach(ParentNativeView__Fuse_Controls_GraphicsView* __this)
{
}

::app::Fuse::Controls::GraphicsView* ParentNativeView__Fuse_Controls_GraphicsView__get_Control(ParentNativeView__Fuse_Controls_GraphicsView* __this)
{
    return ::uAs< ::app::Fuse::Controls::GraphicsView*>(__this->Node(), ::app::Fuse::Controls::GraphicsView__typeof());
}

::app::Uno::Float2 ParentNativeView__Fuse_Controls_GraphicsView__get_Size(ParentNativeView__Fuse_Controls_GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->ActualSize();
}

void ParentNativeView__Fuse_Controls_GraphicsView__OnRooted(ParentNativeView__Fuse_Controls_GraphicsView* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::iOS::NativeViews::NativeView__OnRooted(__this, n);
    __this->Attach();
}

void ParentNativeView__Fuse_Controls_GraphicsView__OnUnrooted(ParentNativeView__Fuse_Controls_GraphicsView* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::iOS::NativeViews::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentNativeView__Fuse_Controls_NativeViewHost__uType* ParentNativeView__Fuse_Controls_NativeViewHost__typeof()
{
    static ::uStaticStrong<ParentNativeView__Fuse_Controls_NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (ParentNativeView__Fuse_Controls_NativeViewHost__uType*)::uAllocClassType(sizeof(ParentNativeView__Fuse_Controls_NativeViewHost__uType), "Fuse.iOS.NativeViews.ParentNativeView<Fuse.Controls.NativeViewHost>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::iOS::NativeViews::NativeView*))ParentNativeView__Fuse_Controls_NativeViewHost__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_NativeViewHost__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_NativeViewHost__OnUnrooted;

    return type;
}

void ParentNativeView__Fuse_Controls_NativeViewHost___ObjInit_2(ParentNativeView__Fuse_Controls_NativeViewHost* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

void ParentNativeView__Fuse_Controls_NativeViewHost__Attach(ParentNativeView__Fuse_Controls_NativeViewHost* __this)
{
}

void ParentNativeView__Fuse_Controls_NativeViewHost__Detach(ParentNativeView__Fuse_Controls_NativeViewHost* __this)
{
}

::app::Fuse::Controls::NativeViewHost* ParentNativeView__Fuse_Controls_NativeViewHost__get_Control(ParentNativeView__Fuse_Controls_NativeViewHost* __this)
{
    return ::uAs< ::app::Fuse::Controls::NativeViewHost*>(__this->Node(), ::app::Fuse::Controls::NativeViewHost__typeof());
}

::app::Uno::Float2 ParentNativeView__Fuse_Controls_NativeViewHost__get_Size(ParentNativeView__Fuse_Controls_NativeViewHost* __this)
{
    return ::uPtr< ::app::Fuse::Controls::NativeViewHost*>(__this->Control())->ActualSize();
}

void ParentNativeView__Fuse_Controls_NativeViewHost__OnRooted(ParentNativeView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::iOS::NativeViews::NativeView__OnRooted(__this, n);
    __this->Attach();
}

void ParentNativeView__Fuse_Controls_NativeViewHost__OnUnrooted(ParentNativeView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::iOS::NativeViews::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentNativeView__Fuse_Controls_Panel__uType* ParentNativeView__Fuse_Controls_Panel__typeof()
{
    static ::uStaticStrong<ParentNativeView__Fuse_Controls_Panel__uType*> type;
    if (type != NULL) return type;

    type = (ParentNativeView__Fuse_Controls_Panel__uType*)::uAllocClassType(sizeof(ParentNativeView__Fuse_Controls_Panel__uType), "Fuse.iOS.NativeViews.ParentNativeView<Fuse.Controls.Panel>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());
    type->__fp_Attach = ParentNativeView__Fuse_Controls_Panel__Attach;
    type->__fp_Detach = ParentNativeView__Fuse_Controls_Panel__Detach;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::iOS::NativeViews::NativeView*))ParentNativeView__Fuse_Controls_Panel__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_Panel__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_Panel__OnUnrooted;

    return type;
}

void ParentNativeView__Fuse_Controls_Panel___ObjInit_2(ParentNativeView__Fuse_Controls_Panel* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

void ParentNativeView__Fuse_Controls_Panel__Attach(ParentNativeView__Fuse_Controls_Panel* __this)
{
}

void ParentNativeView__Fuse_Controls_Panel__Detach(ParentNativeView__Fuse_Controls_Panel* __this)
{
}

::app::Fuse::Controls::Panel* ParentNativeView__Fuse_Controls_Panel__get_Control(ParentNativeView__Fuse_Controls_Panel* __this)
{
    return ::uAs< ::app::Fuse::Controls::Panel*>(__this->Node(), ::app::Fuse::Controls::Panel__typeof());
}

::app::Uno::Float2 ParentNativeView__Fuse_Controls_Panel__get_Size(ParentNativeView__Fuse_Controls_Panel* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->ActualSize();
}

void ParentNativeView__Fuse_Controls_Panel__OnRooted(ParentNativeView__Fuse_Controls_Panel* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::iOS::NativeViews::NativeView__OnRooted(__this, n);
    __this->Attach();
}

void ParentNativeView__Fuse_Controls_Panel__OnUnrooted(ParentNativeView__Fuse_Controls_Panel* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::iOS::NativeViews::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentNativeView__Fuse_Controls_ScrollView__uType* ParentNativeView__Fuse_Controls_ScrollView__typeof()
{
    static ::uStaticStrong<ParentNativeView__Fuse_Controls_ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ParentNativeView__Fuse_Controls_ScrollView__uType*)::uAllocClassType(sizeof(ParentNativeView__Fuse_Controls_ScrollView__uType), "Fuse.iOS.NativeViews.ParentNativeView<Fuse.Controls.ScrollView>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());
    type->__fp_Attach = ParentNativeView__Fuse_Controls_ScrollView__Attach;
    type->__fp_Detach = ParentNativeView__Fuse_Controls_ScrollView__Detach;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::iOS::NativeViews::NativeView*))ParentNativeView__Fuse_Controls_ScrollView__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_ScrollView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentNativeView__Fuse_Controls_ScrollView__OnUnrooted;

    return type;
}

void ParentNativeView__Fuse_Controls_ScrollView___ObjInit_2(ParentNativeView__Fuse_Controls_ScrollView* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

void ParentNativeView__Fuse_Controls_ScrollView__Attach(ParentNativeView__Fuse_Controls_ScrollView* __this)
{
}

void ParentNativeView__Fuse_Controls_ScrollView__Detach(ParentNativeView__Fuse_Controls_ScrollView* __this)
{
}

::app::Fuse::Controls::ScrollView* ParentNativeView__Fuse_Controls_ScrollView__get_Control(ParentNativeView__Fuse_Controls_ScrollView* __this)
{
    return ::uAs< ::app::Fuse::Controls::ScrollView*>(__this->Node(), ::app::Fuse::Controls::ScrollView__typeof());
}

::app::Uno::Float2 ParentNativeView__Fuse_Controls_ScrollView__get_Size(ParentNativeView__Fuse_Controls_ScrollView* __this)
{
    return ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->ActualSize();
}

void ParentNativeView__Fuse_Controls_ScrollView__OnRooted(ParentNativeView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::iOS::NativeViews::NativeView__OnRooted(__this, n);
    __this->Attach();
}

void ParentNativeView__Fuse_Controls_ScrollView__OnUnrooted(ParentNativeView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::iOS::NativeViews::NativeView__OnUnrooted(__this, n);
}

}}}}
