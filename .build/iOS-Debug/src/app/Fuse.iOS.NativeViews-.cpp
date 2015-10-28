#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.ScrollPropertyChangedArgs.h>
#include <app/Fuse.Controls.ScrollPropertyChangedHandler.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.iOS.Controls.ControlProperties.h>
#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.iOS.InputDispatch.h>
#include <app/Fuse.iOS.iOSExtensions.h>
#include <app/Fuse.iOS.NativeViews.ContentControl.h>
#include <app/Fuse.iOS.NativeViews.GenericNativeView.h>
#include <app/Fuse.iOS.NativeViews.GraphicsView.h>
#include <app/Fuse.iOS.NativeViews.LeafNativeView.h>
#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <app/Fuse.iOS.NativeViews.NativeViewHost.h>
#include <app/Fuse.iOS.NativeViews.Panel.h>
#include <app/Fuse.iOS.NativeViews.ScrollView.h>
#include <app/Fuse.iOS.RootView.h>
#include <app/Fuse.iOS.Transform.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.Foundation.NSObject.h>
#include <app/iOS.GLKit.GLKView.h>
#include <app/iOS.OpenGLES.EAGLContext.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIControl.h>
#include <app/iOS.UIKit.UIScrollView.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContentControl__uType* ContentControl__typeof()
{
    static ::uStaticStrong<ContentControl__uType*> type;
    if (type != NULL) return type;

    type = (ContentControl__uType*)::uAllocClassType(sizeof(ContentControl__uType), "Fuse.iOS.NativeViews.ContentControl", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ContentControl__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))ContentControl__Create;

    type->SetStrongRefs(
        "_group", offsetof(ContentControl, _group));

    return type;
}

void ContentControl___ObjInit_3(ContentControl* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ContentControl___ObjInit_2(__this);
}

::app::iOS::UIKit::UIView* ContentControl__Create(ContentControl* __this)
{
    __this->_group = ::app::iOS::UIKit::UIControl__New_9(NULL);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->init();
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->MultipleTouchEnabled(true);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->ClipsToBounds(false);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->Opaque(false);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->setTranslatesAutoresizingMaskIntoConstraints(false);
    return (::app::iOS::UIKit::UIView*)__this->_group;
}

ContentControl* ContentControl__New_1(::uStatic* __this)
{
    ContentControl* inst = (ContentControl*)::uAllocObject(sizeof(ContentControl), ContentControl__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GenericNativeView__uType* GenericNativeView__typeof()
{
    static ::uStaticStrong<GenericNativeView__uType*> type;
    if (type != NULL) return type;

    type = (GenericNativeView__uType*)::uAllocClassType(sizeof(GenericNativeView__uType), "Fuse.iOS.NativeViews.GenericNativeView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))GenericNativeView__Create;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::iOS::NativeViews::NativeView*))GenericNativeView__get_Size;

    return type;
}

void GenericNativeView___ObjInit_2(GenericNativeView* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* GenericNativeView__Create(GenericNativeView* __this)
{
    ::app::iOS::UIKit::UIView* v = ::app::iOS::UIKit::UIView__New_7(NULL);
    ::uPtr< ::app::iOS::UIKit::UIView*>(v)->init();
    return v;
}

::app::Uno::Float2 GenericNativeView__get_Size(GenericNativeView* __this)
{
    return (__this->FuseControl() != NULL) ? ::uPtr< ::app::Fuse::Controls::Control*>(__this->FuseControl())->ActualSize() : ::app::Uno::Float2__New_1(NULL, 0.0f);
}

GenericNativeView* GenericNativeView__New_1(::uStatic* __this)
{
    GenericNativeView* inst = (GenericNativeView*)::uAllocObject(sizeof(GenericNativeView), GenericNativeView__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsView__uType* GraphicsView__typeof()
{
    static ::uStaticStrong<GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsView__uType*)::uAllocClassType(sizeof(GraphicsView__uType), "Fuse.iOS.NativeViews.GraphicsView", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView*))GraphicsView__Attach;
    type->__fp_ChildRooted = (void(*)(::app::Fuse::iOS::NativeViews::NativeView*, ::app::Fuse::iOS::NativeViews::NativeView*))GraphicsView__ChildRooted;
    type->__fp_ChildUnrooted = (void(*)(::app::Fuse::iOS::NativeViews::NativeView*, ::app::Fuse::iOS::NativeViews::NativeView*))GraphicsView__ChildUnrooted;
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))GraphicsView__Create;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView*))GraphicsView__Detach;
    type->__fp_get_HitTestHandle = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))GraphicsView__get_HitTestHandle;
    type->__fp_UpdateTransform = (void(*)(::app::Fuse::iOS::NativeViews::NativeView*))GraphicsView__UpdateTransform;

    type->SetStrongRefs(
        "_container", offsetof(GraphicsView, _container),
        "_dc", offsetof(GraphicsView, _dc),
        "_glkView", offsetof(GraphicsView, _glkView),
        "_hitSurface", offsetof(GraphicsView, _hitSurface));

    return type;
}

void GraphicsView___ObjInit_3(GraphicsView* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView___ObjInit_2(__this);
}

void GraphicsView__Attach(GraphicsView* __this)
{
    __this->Create();
    __this->_dc = ::app::Fuse::DrawContext__New_1(NULL, (::uObject*)__this->Control());
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->add_Redraw(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)GraphicsView__DrawFrame, __this));
}

void GraphicsView__ChildRooted(GraphicsView* __this, ::app::Fuse::iOS::NativeViews::NativeView* child)
{
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_hitSurface)->addSubview(::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(child)->Handle());
}

void GraphicsView__ChildUnrooted(GraphicsView* __this, ::app::Fuse::iOS::NativeViews::NativeView* child)
{
    ::uPtr< ::app::iOS::UIKit::UIView*>(::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(child)->Handle())->removeFromSuperview();
}

::app::iOS::UIKit::UIView* GraphicsView__Create(GraphicsView* __this)
{
    if (__this->_glkView == NULL)
    {
        __this->_glkView = ::app::iOS::GLKit::GLKView__New_9(NULL);
        ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->init();
        ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->EnableSetNeedsDisplay(true);
        ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->BackgroundColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f)));
        __this->_hitSurface = ::app::iOS::UIKit::UIControl__New_9(NULL);
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_hitSurface)->init();
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_hitSurface)->MultipleTouchEnabled(true);
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_hitSurface)->BackgroundColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f)));
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_hitSurface)->Opaque(false);
        __this->_container = ::app::iOS::UIKit::UIView__New_7(NULL);
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_container)->init();
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_container)->BackgroundColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f)));
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_container)->addSubview((::app::iOS::UIKit::UIView*)__this->_glkView);
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_container)->addSubview((::app::iOS::UIKit::UIView*)__this->_hitSurface);
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_container)->bringSubviewToFront((::app::iOS::UIKit::UIView*)__this->_hitSurface);
    }

    return __this->_container;
}

void GraphicsView__Detach(GraphicsView* __this)
{
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->remove_Redraw(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)GraphicsView__DrawFrame, __this));
    ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->deleteDrawable();
    __this->_dc = NULL;
}

void GraphicsView__DoDraw(GraphicsView* __this)
{
    if ((__this->_glkView == NULL) || (__this->Control() == NULL))
    {
        return;
    }

    ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->setContext(::app::iOS::OpenGLES::EAGLContext___currentContext(NULL));
    ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->bindDrawable();
    ::app::Uno::Float2 size = ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->ActualSize();
    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Viewport()));
    int width = ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->drawableWidth();
    int height = ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->drawableHeight();

    if ((width < 1) || (height < 1))
    {
        return;
    }

    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->CaptureRootbuffer();
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PushViewport((::uObject*)__this->Control());
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PushScissor(::app::Uno::Recti__New_1(NULL, 0, 0, width, height));
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->Clear(::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Background_1(), 1.0f);
    double startTime = double();
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Draw(__this->_dc);
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PopScissor();
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PopViewport();
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->ReleaseRootbuffer();
    ::uPtr< ::app::iOS::GLKit::GLKView*>(__this->_glkView)->display();
}

void GraphicsView__DrawFrame(GraphicsView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::UpdateManager__AddOnceAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)GraphicsView__DoDraw, __this), 4);
}

GraphicsView* GraphicsView__Find(::uStatic* __this, ::app::Fuse::Node* node)
{
    GraphicsView* ind_123;
    return (node != NULL) ? (ind_123 = ::uAs< GraphicsView*>(::app::Fuse::iOS::NativeViews::NativeView__GetFrom(NULL, node), GraphicsView__typeof()), ((ind_123 != NULL) ? ind_123 : GraphicsView__Find(NULL, ::uPtr< ::app::Fuse::Node*>(node)->Parent()))) : NULL;
}

::app::iOS::UIKit::UIView* GraphicsView__get_HitTestHandle(GraphicsView* __this)
{
    return (::app::iOS::UIKit::UIView*)__this->_hitSurface;
}

GraphicsView* GraphicsView__New_1(::uStatic* __this)
{
    GraphicsView* inst = (GraphicsView*)::uAllocObject(sizeof(GraphicsView), GraphicsView__typeof());
    inst->_ObjInit_3();
    return inst;
}

void GraphicsView__UpdateTransform(GraphicsView* __this)
{
    if (__this->Node() == NULL)
    {
        return;
    }

    __this->UpdatingTransform(false);
    ::app::Fuse::iOS::Transform__ApplyIdentity(NULL, __this->Handle());
    ::app::Fuse::iOS::Transform__SetAnchor(NULL, __this->Handle());
    ::app::Fuse::iOS::Transform__SetAnchor(NULL, (::app::iOS::UIKit::UIView*)__this->_glkView);
    ::app::Fuse::iOS::Transform__SetAnchor(NULL, (::app::iOS::UIKit::UIView*)__this->_hitSurface);
    ::app::Fuse::iOS::Transform__SetSize(NULL, __this->Handle(), __this->Size());
    ::app::Fuse::iOS::Transform__SetSize(NULL, (::app::iOS::UIKit::UIView*)__this->_glkView, __this->Size());
    ::app::Fuse::iOS::Transform__SetSize(NULL, (::app::iOS::UIKit::UIView*)__this->_hitSurface, __this->Size());
    ::app::Fuse::iOS::Transform__Apply(NULL, __this->Handle(), ::uPtr< ::app::Fuse::Node*>(__this->Node())->LocalTransform());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LeafNativeView__uType* LeafNativeView__typeof()
{
    static ::uStaticStrong<LeafNativeView__uType*> type;
    if (type != NULL) return type;

    type = (LeafNativeView__uType*)::uAllocClassType(sizeof(LeafNativeView__uType), "Fuse.iOS.NativeViews.LeafNativeView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))LeafNativeView__Create;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::iOS::NativeViews::NativeView*))LeafNativeView__get_Size;

    return type;
}

void LeafNativeView___ObjInit_2(LeafNativeView* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* LeafNativeView__Create(LeafNativeView* __this)
{
    return ::uPtr< ::app::Fuse::iOS::Controls::Element*>(__this->LeafElement())->Create();
}

::app::Fuse::iOS::Controls::Element* LeafNativeView__get_LeafElement(LeafNativeView* __this)
{
    return ::uAs< ::app::Fuse::iOS::Controls::Element*>(__this->Node(), ::app::Fuse::iOS::Controls::Element__typeof());
}

::app::Uno::Float2 LeafNativeView__get_Size(LeafNativeView* __this)
{
    return ::uPtr< ::app::Fuse::iOS::Controls::Element*>(__this->LeafElement())->ActualSize();
}

LeafNativeView* LeafNativeView__New_1(::uStatic* __this)
{
    LeafNativeView* inst = (LeafNativeView*)::uAllocObject(sizeof(LeafNativeView), LeafNativeView__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> NativeView___viewHandle;

NativeView__uType* NativeView__typeof()
{
    static ::uStaticStrong<NativeView__uType*> type;
    if (type != NULL) return type;

    type = (NativeView__uType*)::uAllocClassType(sizeof(NativeView__uType), "Fuse.iOS.NativeViews.NativeView", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_ChildRooted = NativeView__ChildRooted;
    type->__fp_ChildUnrooted = NativeView__ChildUnrooted;
    type->__fp_get_HitTestHandle = NativeView__get_HitTestHandle;
    type->__fp_get_Parent = NativeView__get_Parent;
    type->__fp_NotifyNewSize = NativeView__NotifyNewSize;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnUnrooted;
    type->__fp_UpdateTransform = NativeView__UpdateTransform;

    type->SetStrongRefs(
        "_fuseControl", offsetof(NativeView, _fuseControl),
        "_node", offsetof(NativeView, _node),
        "_view", offsetof(NativeView, _view));

    return type;
}

void NativeView___ObjInit_1(NativeView* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void NativeView___TypeInit(::uStatic* __this)
{
    NativeView___viewHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void NativeView__CancelNotifyNewTransform(NativeView* __this)
{
    if (__this->UpdatingTransform())
    {
        ::app::Fuse::UpdateManager__RemoveOnceAction(NULL, ::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(NativeView__uType, __fp_UpdateTransform)), 3);
        __this->UpdatingTransform(false);
    }
}

void NativeView__ChildRooted(NativeView* __this, NativeView* child)
{
    ::uPtr< ::app::iOS::UIKit::UIView*>(__this->Handle())->addSubview(::uPtr< NativeView*>(child)->Handle());
}

void NativeView__ChildUnrooted(NativeView* __this, NativeView* child)
{
    ::uPtr< ::app::iOS::UIKit::UIView*>(::uPtr< NativeView*>(child)->Handle())->removeFromSuperview();
}

void NativeView__CompensateForScrollView(NativeView* __this, ::app::Uno::Float4x4* t)
{
    ::app::Fuse::Controls::ScrollView* sv = ::uAs< ::app::Fuse::Controls::ScrollView*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent(), ::app::Fuse::Controls::ScrollView__typeof());

    if (sv != NULL)
    {
        (*t).M41 = (*t).M41 + ::uPtr< ::app::Fuse::Controls::ScrollView*>(sv)->ScrollPosition().X;
        (*t).M42 = (*t).M42 + sv->ScrollPosition().Y;
    }
}

::app::Fuse::Controls::Control* NativeView__get_FuseControl(NativeView* __this)
{
    return __this->_fuseControl;
}

::app::iOS::UIKit::UIView* NativeView__get_Handle(NativeView* __this)
{
    return __this->_view;
}

::app::iOS::UIKit::UIView* NativeView__get_HitTestHandle(NativeView* __this)
{
    return __this->Handle();
}

bool NativeView__get_IsFuseControl(NativeView* __this)
{
    return __this->_fuseControl != NULL;
}

::app::Fuse::Node* NativeView__get_Node(NativeView* __this)
{
    return __this->_node;
}

NativeView* NativeView__get_Parent(NativeView* __this)
{
    return (__this->Node() != NULL) ? NativeView__GetFrom(NULL, ::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent()) : NULL;
}

bool NativeView__get_UpdatingTransform(NativeView* __this)
{
    return __this->_UpdatingTransform;
}

NativeView* NativeView__GetFrom(::uStatic* __this, ::app::Fuse::Node* n)
{
    return (n != NULL) ? ::uAs< NativeView*>(::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(NativeView___viewHandle), NativeView__typeof()) : NULL;
}

void NativeView__HookEvents(NativeView* __this)
{
    ::app::Fuse::iOS::InputDispatch__AddListener(NULL, __this);

    if (::uIs(__this->Node(), ::app::Fuse::Elements::Element__typeof()))
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->add_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)NativeView__OnPlaced, __this));
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->add_PropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnPropertyChanged, __this));
        __this->OnPropertyChanged(NULL, NULL);
    }

    ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnIsEnabledChanged, __this));
    ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_TransformsChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnTransformsChanged, __this));
    __this->OnIsEnabledChanged(NULL, NULL);
}

void NativeView__HookFuseControlEvents(NativeView* __this)
{
    ::uPtr< ::app::Fuse::Controls::Control*>(__this->FuseControl())->add_ControlRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnBackgroundChanged, __this));
    __this->OnBackgroundChanged(NULL, NULL);
    __this->OnTintColorChanged();
}

void NativeView__NotifyNewSize(NativeView* __this, NativeView* child)
{
    ::app::Fuse::iOS::Transform__SetSize(NULL, ::uPtr< NativeView*>(child)->Handle(), ::uPtr< NativeView*>(child)->Size());
}

void NativeView__NotifyNewTransform(NativeView* __this)
{
    if (!__this->UpdatingTransform())
    {
        if (__this->Node() != NULL)
        {
            ::app::Fuse::UpdateManager__AddOnceAction(NULL, ::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(NativeView__uType, __fp_UpdateTransform)), 3);
        }

        __this->UpdatingTransform(true);
    }
}

void NativeView__OnBackgroundChanged(NativeView* __this, ::uObject* s, ::uObject* a)
{
    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(::app::Fuse::Controls::Control__BackgroundProperty)->HasValue(__this->FuseControl()))
    {
        ::app::Fuse::Drawing::Brush* background = ::uPtr< ::app::Fuse::Controls::Control*>(__this->FuseControl())->Background();

        if (::uIs(background, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->setBackgroundColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(background, ::app::Fuse::Drawing::SolidColor__typeof()))->Color()));
        }

        if (::uIs(background, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->setBackgroundColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(background, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color()));
        }
    }
}

void NativeView__OnIsEnabledChanged(NativeView* __this, ::uObject* s, ::uObject* a)
{
    ::uPtr< ::app::iOS::UIKit::UIView*>(__this->HitTestHandle())->UserInteractionEnabled(::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled());
}

void NativeView__OnPlaced(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->NotifyNewTransform();
}

void NativeView__OnPropertyChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::Elements::Element* elm = ::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof());
    ::uPtr< ::app::iOS::UIKit::UIView*>(__this->Handle())->Alpha((double)::uPtr< ::app::Fuse::Elements::Element*>(elm)->Opacity());
    ::uPtr< ::app::iOS::UIKit::UIView*>(__this->Handle())->ClipsToBounds(elm->ClipToBounds());
}

void NativeView__OnRooted(NativeView* __this, ::app::Fuse::Node* node)
{
    __this->Node(node);
    __this->Handle(__this->Create());
    __this->HookEvents();
    __this->RootNativeView();
    __this->NotifyNewTransform();

    if (__this->IsFuseControl())
    {
        __this->HookFuseControlEvents();
    }
}

void NativeView__OnTintColorChanged(NativeView* __this)
{
    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*>(::app::Fuse::iOS::Controls::ControlProperties__TintColorProperty)->HasValue(__this->FuseControl()))
    {
        ::app::Uno::Float4 v = ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*>(::app::Fuse::iOS::Controls::ControlProperties__TintColorProperty)->Get(__this->FuseControl());
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->Handle())->setTintColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, v));
    }
}

void NativeView__OnTransformsChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->NotifyNewTransform();
}

void NativeView__OnUnrooted(NativeView* __this, ::app::Fuse::Node* node)
{
    __this->UnhookEvents();
    __this->CancelNotifyNewTransform();
    __this->UnrootNativeView();

    if (__this->IsFuseControl())
    {
        __this->UnhookFuseControlEvents();
    }

    __this->Node(NULL);
    __this->Handle(NULL);
}

void NativeView__RootNativeView(NativeView* __this)
{
    if (::uIs(::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent(), ::app::Fuse::RootViewport__typeof()))
    {
        ::app::Fuse::iOS::RootView__SetRoot(NULL, __this->Handle());
    }
    else if (__this->Parent() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this->Node(), ::uGetConstString(" must have a native parent view. Theme provides no native view for parent type ")), (::uObject*)::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent())));
    }
    else
    {
        ::uPtr< NativeView*>(__this->Parent())->ChildRooted(__this);
    }
}

void NativeView__set_Handle(NativeView* __this, ::app::iOS::UIKit::UIView* value)
{
    __this->_view = value;
}

void NativeView__set_Node(NativeView* __this, ::app::Fuse::Node* value)
{
    if (__this->_node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Properties())->Clear(NativeView___viewHandle);
    }

    __this->_node = value;
    __this->_fuseControl = ::uAs< ::app::Fuse::Controls::Control*>(value, ::app::Fuse::Controls::Control__typeof());

    if (__this->_node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Properties())->Set(NativeView___viewHandle, (::uObject*)__this);
    }
}

void NativeView__set_UpdatingTransform(NativeView* __this, bool value)
{
    __this->_UpdatingTransform = value;
}

void NativeView__UnhookEvents(NativeView* __this)
{
    ::app::Fuse::iOS::InputDispatch__RemoveListener(NULL, __this);

    if (::uIs(__this->Node(), ::app::Fuse::Elements::Element__typeof()))
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)NativeView__OnPlaced, __this));
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->remove_PropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnPropertyChanged, __this));
    }

    ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnIsEnabledChanged, __this));
    ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_TransformsChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnTransformsChanged, __this));
}

void NativeView__UnhookFuseControlEvents(NativeView* __this)
{
    ::uPtr< ::app::Fuse::Controls::Control*>(__this->FuseControl())->remove_ControlRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnBackgroundChanged, __this));
}

void NativeView__UnrootNativeView(NativeView* __this)
{
    if (::uIs(::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent(), ::app::Fuse::RootViewport__typeof()))
    {
        ::app::Fuse::iOS::RootView__ClearRoot(NULL, __this->Handle());
    }
    else if (__this->Parent() != NULL)
    {
        ::uPtr< NativeView*>(__this->Parent())->ChildUnrooted(__this);
    }
}

void NativeView__UpdateTransform(NativeView* __this)
{
    __this->UpdatingTransform(false);
    ::app::Fuse::iOS::Transform__ApplyIdentity(NULL, __this->Handle());
    ::app::Fuse::iOS::Transform__SetAnchor(NULL, __this->Handle());

    if (__this->Parent() != NULL)
    {
        ::uPtr< NativeView*>(__this->Parent())->NotifyNewSize(__this);
    }
    else
    {
        ::app::Fuse::iOS::Transform__SetSize(NULL, __this->Handle(), __this->Size());
    }

    ::app::Uno::Float4x4 transform = ::uPtr< ::app::Fuse::Node*>(__this->Node())->LocalTransform();
    __this->CompensateForScrollView(&transform);
    ::app::Fuse::iOS::Transform__Apply(NULL, __this->Handle(), transform);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeViewHost__uType* NativeViewHost__typeof()
{
    static ::uStaticStrong<NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (NativeViewHost__uType*)::uAllocClassType(sizeof(NativeViewHost__uType), "Fuse.iOS.NativeViews.NativeViewHost", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))NativeViewHost__Create;
    type->__fp_get_Parent = (::app::Fuse::iOS::NativeViews::NativeView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))NativeViewHost__get_Parent;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeViewHost__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeViewHost__OnUnrooted;
    type->__fp_UpdateTransform = (void(*)(::app::Fuse::iOS::NativeViews::NativeView*))NativeViewHost__UpdateTransform;

    type->SetStrongRefs(
        "_group", offsetof(NativeViewHost, _group));

    return type;
}

void NativeViewHost___ObjInit_3(NativeViewHost* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost___ObjInit_2(__this);
}

::app::iOS::UIKit::UIView* NativeViewHost__Create(NativeViewHost* __this)
{
    __this->_group = ::app::iOS::UIKit::UIControl__New_9(NULL);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->init();
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->MultipleTouchEnabled(true);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->ClipsToBounds(false);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->Opaque(false);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->setTranslatesAutoresizingMaskIntoConstraints(false);
    return (::app::iOS::UIKit::UIView*)__this->_group;
}

::app::Fuse::iOS::NativeViews::NativeView* NativeViewHost__get_Parent(NativeViewHost* __this)
{
    return (::app::Fuse::iOS::NativeViews::NativeView*)((__this->Node() != NULL) ? ::app::Fuse::iOS::NativeViews::GraphicsView__Find(NULL, ::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent()) : NULL);
}

NativeViewHost* NativeViewHost__New_1(::uStatic* __this)
{
    NativeViewHost* inst = (NativeViewHost*)::uAllocObject(sizeof(NativeViewHost), NativeViewHost__typeof());
    inst->_ObjInit_3();
    return inst;
}

void NativeViewHost__OnRooted(NativeViewHost* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost__OnRooted(__this, node);
    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativeViewHost__Update, __this), 0);
}

void NativeViewHost__OnUnrooted(NativeViewHost* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativeViewHost__Update, __this), 0);
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost__OnUnrooted(__this, node);
}

void NativeViewHost__Update(NativeViewHost* __this)
{
    __this->NotifyNewTransform();
}

void NativeViewHost__UpdateTransform(NativeViewHost* __this)
{
    __this->UpdatingTransform(false);

    if (::app::Uno::Float2__op_Inequality(NULL, __this->_sizeCache, __this->Size()))
    {
        ::app::Fuse::iOS::Transform__ApplyIdentity(NULL, __this->Handle());
        ::app::Fuse::iOS::Transform__SetAnchor(NULL, __this->Handle());
        ::app::Fuse::iOS::Transform__SetSize(NULL, __this->Handle(), __this->Size());
        __this->_sizeCache = __this->Size();
    }

    ::app::Uno::Float4x4 parentInverse = ::app::Uno::Matrix__Invert_2(NULL, ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(__this->Parent())->Node())->LocalTransform());
    ::app::Uno::Float4x4 transform = ::app::Uno::Matrix__Mul_10(NULL, parentInverse, ::uPtr< ::app::Fuse::Node*>(__this->Node())->WorldTransform());
    __this->CompensateForScrollView(&transform);
    ::app::Fuse::iOS::Transform__Apply(NULL, __this->Handle(), transform);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Panel__uType* Panel__typeof()
{
    static ::uStaticStrong<Panel__uType*> type;
    if (type != NULL) return type;

    type = (Panel__uType*)::uAllocClassType(sizeof(Panel__uType), "Fuse.iOS.NativeViews.Panel", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel*))Panel__Attach;
    type->__fp_ChildRooted = (void(*)(::app::Fuse::iOS::NativeViews::NativeView*, ::app::Fuse::iOS::NativeViews::NativeView*))Panel__ChildRooted;
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))Panel__Create;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel*))Panel__Detach;

    type->SetStrongRefs(
        "_group", offsetof(Panel, _group));

    return type;
}

void Panel___ObjInit_3(Panel* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel___ObjInit_2(__this);
}

void Panel__ApplyZOrder(Panel* __this)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->Children())); i++)
    {
        ::app::Fuse::iOS::NativeViews::NativeView* child = ::app::Fuse::iOS::NativeViews::NativeView__GetFrom(NULL, ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->GetZOrderChild(i));

        if (child != NULL)
        {
            ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->bringSubviewToFront(::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(child)->Handle());
        }
    }
}

void Panel__Attach(Panel* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel__Attach(__this);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->add_ZOrderChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Panel__OnZOrderChanged, __this));
}

void Panel__ChildRooted(Panel* __this, ::app::Fuse::iOS::NativeViews::NativeView* child)
{
    ::app::Fuse::iOS::NativeViews::NativeView__ChildRooted(__this, child);
    __this->ApplyZOrder();
}

::app::iOS::UIKit::UIView* Panel__Create(Panel* __this)
{
    __this->_group = ::app::iOS::UIKit::UIControl__New_9(NULL);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->init();
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->MultipleTouchEnabled(true);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->ClipsToBounds(false);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->Opaque(false);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_group)->setTranslatesAutoresizingMaskIntoConstraints(false);
    return (::app::iOS::UIKit::UIView*)__this->_group;
}

void Panel__Detach(Panel* __this)
{
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->remove_ZOrderChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Panel__OnZOrderChanged, __this));
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel__Detach(__this);
}

Panel* Panel__New_1(::uStatic* __this)
{
    Panel* inst = (Panel*)::uAllocObject(sizeof(Panel), Panel__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Panel__OnZOrderChanged(Panel* __this, ::uObject* s, ::uObject* a)
{
    __this->ApplyZOrder();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollView__uType* ScrollView__typeof()
{
    static ::uStaticStrong<ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ScrollView__uType*)::uAllocClassType(sizeof(ScrollView__uType), "Fuse.iOS.NativeViews.ScrollView", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView*))ScrollView__Attach;
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::NativeViews::NativeView*))ScrollView__Create;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView*))ScrollView__Detach;
    type->__fp_NotifyNewSize = (void(*)(::app::Fuse::iOS::NativeViews::NativeView*, ::app::Fuse::iOS::NativeViews::NativeView*))ScrollView__NotifyNewSize;
    type->__interface_0.__fp_scrollViewDidScroll = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidScroll;
    type->__interface_0.__fp_scrollViewDidZoom = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidZoom;
    type->__interface_0.__fp_scrollViewWillBeginDragging = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginDragging;
    type->__interface_0.__fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, bool))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndDraggingWillDecelerate;
    type->__interface_0.__fp_scrollViewWillBeginDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginDecelerating;
    type->__interface_0.__fp_scrollViewDidEndDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndDecelerating;
    type->__interface_0.__fp_scrollViewDidEndScrollingAnimation = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndScrollingAnimation;
    type->__interface_0.__fp_viewForZoomingInScrollView = (::app::iOS::UIKit::UIView*(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_viewForZoomingInScrollView;
    type->__interface_0.__fp_scrollViewWillBeginZoomingWithView = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginZoomingWithView;
    type->__interface_0.__fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*, double))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndZoomingWithViewAtScale;
    type->__interface_0.__fp_scrollViewShouldScrollToTop = (bool(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewShouldScrollToTop;
    type->__interface_0.__fp_scrollViewDidScrollToTop = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidScrollToTop;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUIScrollViewDelegate__typeof(), offsetof(ScrollView__uType, __interface_0));

    type->SetStrongRefs(
        "_scrollView", offsetof(ScrollView, _scrollView));

    return type;
}

void ScrollView___ObjInit_3(ScrollView* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView___ObjInit_2(__this);
}

void ScrollView__Attach(ScrollView* __this)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->add_ScrollPropertyChanged(::uNewDelegateNonVirt(::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof(), (const void*)ScrollView__OnScrollPropertyChanged, __this));
    __this->OnScrollPropertyChanged_1();
}

::app::iOS::UIKit::UIView* ScrollView__Create(ScrollView* __this)
{
    __this->_scrollView = ::app::iOS::UIKit::UIScrollView__New_9(NULL);
    ::uPtr< ::app::iOS::UIKit::UIScrollView*>(__this->_scrollView)->init();
    ::uPtr< ::app::iOS::UIKit::UIScrollView*>(__this->_scrollView)->Delegate((::uObject*)__this);
    ::uPtr< ::app::iOS::UIKit::UIScrollView*>(__this->_scrollView)->MultipleTouchEnabled(true);
    ::uPtr< ::app::iOS::UIKit::UIScrollView*>(__this->_scrollView)->Opaque(false);
    return (::app::iOS::UIKit::UIView*)__this->_scrollView;
}

void ScrollView__Detach(ScrollView* __this)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->remove_ScrollPropertyChanged(::uNewDelegateNonVirt(::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof(), (const void*)ScrollView__OnScrollPropertyChanged, __this));
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndDecelerating(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndDraggingWillDecelerate(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView, bool decelerate)
{
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndScrollingAnimation(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndZoomingWithViewAtScale(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view, double scale)
{
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidScroll(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->SetScrollPosition(::app::Fuse::iOS::iOSExtensions__ToFloat2_1(NULL, ::uPtr< ::app::iOS::UIKit::UIScrollView*>(scrollView)->ContentOffset()), (::uObject*)__this);
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidScrollToTop(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidZoom(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

bool ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewShouldScrollToTop(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
    return true;
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginDecelerating(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginDragging(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginZoomingWithView(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view)
{
}

::app::iOS::UIKit::UIView* ScrollView__iOS_UIKit_IUIScrollViewDelegate_viewForZoomingInScrollView(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
    return NULL;
}

ScrollView* ScrollView__New_1(::uStatic* __this)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_3();
    return inst;
}

void ScrollView__NotifyNewSize(ScrollView* __this, ::app::Fuse::iOS::NativeViews::NativeView* child)
{
    ::app::Fuse::iOS::NativeViews::NativeView__NotifyNewSize(__this, child);
    __this->UpdateContentSize(::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(child)->Size());
}

void ScrollView__OnScrollPropertyChanged(ScrollView* __this, ::uObject* sender, ::app::Fuse::Controls::ScrollPropertyChangedArgs* args)
{
    if (::uPtr< ::app::Fuse::Controls::ScrollPropertyChangedArgs*>(args)->Origin() == __this)
    {
        return;
    }

    __this->OnScrollPropertyChanged_1();
}

void ScrollView__OnScrollPropertyChanged_1(ScrollView* __this)
{
    ::uPtr< ::app::iOS::UIKit::UIScrollView*>(__this->_scrollView)->ContentOffset(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->ScrollPosition()));
}

void ScrollView__UpdateContentSize(ScrollView* __this, ::app::Uno::Float2 newContentSize)
{
    ::uPtr< ::app::iOS::UIKit::UIScrollView*>(__this->_scrollView)->ContentSize(::app::Fuse::iOS::iOSExtensions__ToCGSize(NULL, ::app::Uno::Math__Max_10(NULL, __this->Size(), newContentSize)));
}

}}}}
