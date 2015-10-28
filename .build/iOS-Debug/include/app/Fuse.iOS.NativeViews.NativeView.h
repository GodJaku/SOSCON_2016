// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_NATIVE_VIEW_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_NATIVE_VIEW_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct NativeView;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> NativeView___viewHandle;

struct NativeView__uType : ::app::Fuse::Behavior__uType
{
    void(*__fp_ChildRooted)(NativeView*, NativeView*);
    void(*__fp_ChildUnrooted)(NativeView*, NativeView*);
    ::app::iOS::UIKit::UIView*(*__fp_Create)(NativeView*);
    ::app::iOS::UIKit::UIView*(*__fp_get_HitTestHandle)(NativeView*);
    NativeView*(*__fp_get_Parent)(NativeView*);
    ::app::Uno::Float2(*__fp_get_Size)(NativeView*);
    void(*__fp_NotifyNewSize)(NativeView*, NativeView*);
    void(*__fp_UpdateTransform)(NativeView*);
};

NativeView__uType* NativeView__typeof();

void NativeView___ObjInit_1(NativeView* __this);
void NativeView___TypeInit(::uStatic* __this);
void NativeView__CancelNotifyNewTransform(NativeView* __this);
void NativeView__ChildRooted(NativeView* __this, NativeView* child);
void NativeView__ChildUnrooted(NativeView* __this, NativeView* child);
void NativeView__CompensateForScrollView(NativeView* __this, ::app::Uno::Float4x4* t);
::app::Fuse::Controls::Control* NativeView__get_FuseControl(NativeView* __this);
::app::iOS::UIKit::UIView* NativeView__get_Handle(NativeView* __this);
::app::iOS::UIKit::UIView* NativeView__get_HitTestHandle(NativeView* __this);
bool NativeView__get_IsFuseControl(NativeView* __this);
::app::Fuse::Node* NativeView__get_Node(NativeView* __this);
NativeView* NativeView__get_Parent(NativeView* __this);
bool NativeView__get_UpdatingTransform(NativeView* __this);
NativeView* NativeView__GetFrom(::uStatic* __this, ::app::Fuse::Node* n);
void NativeView__HookEvents(NativeView* __this);
void NativeView__HookFuseControlEvents(NativeView* __this);
void NativeView__NotifyNewSize(NativeView* __this, NativeView* child);
void NativeView__NotifyNewTransform(NativeView* __this);
void NativeView__OnBackgroundChanged(NativeView* __this, ::uObject* s, ::uObject* a);
void NativeView__OnIsEnabledChanged(NativeView* __this, ::uObject* s, ::uObject* a);
void NativeView__OnPlaced(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeView__OnPropertyChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeView__OnRooted(NativeView* __this, ::app::Fuse::Node* node);
void NativeView__OnTintColorChanged(NativeView* __this);
void NativeView__OnTransformsChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeView__OnUnrooted(NativeView* __this, ::app::Fuse::Node* node);
void NativeView__RootNativeView(NativeView* __this);
void NativeView__set_Handle(NativeView* __this, ::app::iOS::UIKit::UIView* value);
void NativeView__set_Node(NativeView* __this, ::app::Fuse::Node* value);
void NativeView__set_UpdatingTransform(NativeView* __this, bool value);
void NativeView__UnhookEvents(NativeView* __this);
void NativeView__UnhookFuseControlEvents(NativeView* __this);
void NativeView__UnrootNativeView(NativeView* __this);
void NativeView__UpdateTransform(NativeView* __this);

struct NativeView : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::app::Fuse::Controls::Control*> _fuseControl;
    ::uStrong< ::app::iOS::UIKit::UIView*> _view;
    bool _UpdatingTransform;

    void _ObjInit_1() { NativeView___ObjInit_1(this); }
    void CancelNotifyNewTransform() { NativeView__CancelNotifyNewTransform(this); }
    void ChildRooted(NativeView* child) { (((NativeView__uType*)this->__obj_type)->__fp_ChildRooted)(this, child); }
    void ChildUnrooted(NativeView* child) { (((NativeView__uType*)this->__obj_type)->__fp_ChildUnrooted)(this, child); }
    void CompensateForScrollView(::app::Uno::Float4x4* t) { NativeView__CompensateForScrollView(this, t); }
    ::app::iOS::UIKit::UIView* Create() { return (((NativeView__uType*)this->__obj_type)->__fp_Create)(this); }
    ::app::Fuse::Controls::Control* FuseControl() { return NativeView__get_FuseControl(this); }
    ::app::iOS::UIKit::UIView* Handle() { return NativeView__get_Handle(this); }
    ::app::iOS::UIKit::UIView* HitTestHandle() { return (((NativeView__uType*)this->__obj_type)->__fp_get_HitTestHandle)(this); }
    bool IsFuseControl() { return NativeView__get_IsFuseControl(this); }
    ::app::Fuse::Node* Node() { return NativeView__get_Node(this); }
    NativeView* Parent() { return (((NativeView__uType*)this->__obj_type)->__fp_get_Parent)(this); }
    ::app::Uno::Float2 Size();
    bool UpdatingTransform() { return NativeView__get_UpdatingTransform(this); }
    void HookEvents() { NativeView__HookEvents(this); }
    void HookFuseControlEvents() { NativeView__HookFuseControlEvents(this); }
    void NotifyNewSize(NativeView* child) { (((NativeView__uType*)this->__obj_type)->__fp_NotifyNewSize)(this, child); }
    void NotifyNewTransform() { NativeView__NotifyNewTransform(this); }
    void OnBackgroundChanged(::uObject* s, ::uObject* a) { NativeView__OnBackgroundChanged(this, s, a); }
    void OnIsEnabledChanged(::uObject* s, ::uObject* a) { NativeView__OnIsEnabledChanged(this, s, a); }
    void OnPlaced(::uObject* sender, ::app::Uno::EventArgs* args) { NativeView__OnPlaced(this, sender, args); }
    void OnPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { NativeView__OnPropertyChanged(this, sender, args); }
    void OnTintColorChanged() { NativeView__OnTintColorChanged(this); }
    void OnTransformsChanged(::uObject* sender, ::app::Uno::EventArgs* args) { NativeView__OnTransformsChanged(this, sender, args); }
    void RootNativeView() { NativeView__RootNativeView(this); }
    void Handle(::app::iOS::UIKit::UIView* value) { NativeView__set_Handle(this, value); }
    void Node(::app::Fuse::Node* value) { NativeView__set_Node(this, value); }
    void UpdatingTransform(bool value) { NativeView__set_UpdatingTransform(this, value); }
    void UnhookEvents() { NativeView__UnhookEvents(this); }
    void UnhookFuseControlEvents() { NativeView__UnhookFuseControlEvents(this); }
    void UnrootNativeView() { NativeView__UnrootNativeView(this); }
    void UpdateTransform() { (((NativeView__uType*)this->__obj_type)->__fp_UpdateTransform)(this); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

inline ::app::Uno::Float2 NativeView::Size() { return (((NativeView__uType*)this->__obj_type)->__fp_get_Size)(this); }

}}}}


#endif
