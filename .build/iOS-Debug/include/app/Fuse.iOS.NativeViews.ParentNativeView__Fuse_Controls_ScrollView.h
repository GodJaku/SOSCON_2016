// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_SCROLL_VIEW_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_SCROLL_VIEW_H__

#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct ParentNativeView__Fuse_Controls_ScrollView;

struct ParentNativeView__Fuse_Controls_ScrollView__uType : ::app::Fuse::iOS::NativeViews::NativeView__uType
{
    void(*__fp_Attach)(ParentNativeView__Fuse_Controls_ScrollView*);
    void(*__fp_Detach)(ParentNativeView__Fuse_Controls_ScrollView*);
};

ParentNativeView__Fuse_Controls_ScrollView__uType* ParentNativeView__Fuse_Controls_ScrollView__typeof();

void ParentNativeView__Fuse_Controls_ScrollView___ObjInit_2(ParentNativeView__Fuse_Controls_ScrollView* __this);
void ParentNativeView__Fuse_Controls_ScrollView__Attach(ParentNativeView__Fuse_Controls_ScrollView* __this);
void ParentNativeView__Fuse_Controls_ScrollView__Detach(ParentNativeView__Fuse_Controls_ScrollView* __this);
::app::Fuse::Controls::ScrollView* ParentNativeView__Fuse_Controls_ScrollView__get_Control(ParentNativeView__Fuse_Controls_ScrollView* __this);
::app::Uno::Float2 ParentNativeView__Fuse_Controls_ScrollView__get_Size(ParentNativeView__Fuse_Controls_ScrollView* __this);
void ParentNativeView__Fuse_Controls_ScrollView__OnRooted(ParentNativeView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n);
void ParentNativeView__Fuse_Controls_ScrollView__OnUnrooted(ParentNativeView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n);

struct ParentNativeView__Fuse_Controls_ScrollView : ::app::Fuse::iOS::NativeViews::NativeView
{
    void _ObjInit_2() { ParentNativeView__Fuse_Controls_ScrollView___ObjInit_2(this); }
    void Attach() { (((ParentNativeView__Fuse_Controls_ScrollView__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ParentNativeView__Fuse_Controls_ScrollView__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::ScrollView* Control() { return ParentNativeView__Fuse_Controls_ScrollView__get_Control(this); }
};

}}}}


#endif
