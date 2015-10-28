// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_PANEL_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_PANEL_H__

#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct ParentNativeView__Fuse_Controls_Panel;

struct ParentNativeView__Fuse_Controls_Panel__uType : ::app::Fuse::iOS::NativeViews::NativeView__uType
{
    void(*__fp_Attach)(ParentNativeView__Fuse_Controls_Panel*);
    void(*__fp_Detach)(ParentNativeView__Fuse_Controls_Panel*);
};

ParentNativeView__Fuse_Controls_Panel__uType* ParentNativeView__Fuse_Controls_Panel__typeof();

void ParentNativeView__Fuse_Controls_Panel___ObjInit_2(ParentNativeView__Fuse_Controls_Panel* __this);
void ParentNativeView__Fuse_Controls_Panel__Attach(ParentNativeView__Fuse_Controls_Panel* __this);
void ParentNativeView__Fuse_Controls_Panel__Detach(ParentNativeView__Fuse_Controls_Panel* __this);
::app::Fuse::Controls::Panel* ParentNativeView__Fuse_Controls_Panel__get_Control(ParentNativeView__Fuse_Controls_Panel* __this);
::app::Uno::Float2 ParentNativeView__Fuse_Controls_Panel__get_Size(ParentNativeView__Fuse_Controls_Panel* __this);
void ParentNativeView__Fuse_Controls_Panel__OnRooted(ParentNativeView__Fuse_Controls_Panel* __this, ::app::Fuse::Node* n);
void ParentNativeView__Fuse_Controls_Panel__OnUnrooted(ParentNativeView__Fuse_Controls_Panel* __this, ::app::Fuse::Node* n);

struct ParentNativeView__Fuse_Controls_Panel : ::app::Fuse::iOS::NativeViews::NativeView
{
    void _ObjInit_2() { ParentNativeView__Fuse_Controls_Panel___ObjInit_2(this); }
    void Attach() { (((ParentNativeView__Fuse_Controls_Panel__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ParentNativeView__Fuse_Controls_Panel__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Panel* Control() { return ParentNativeView__Fuse_Controls_Panel__get_Control(this); }
};

}}}}


#endif
