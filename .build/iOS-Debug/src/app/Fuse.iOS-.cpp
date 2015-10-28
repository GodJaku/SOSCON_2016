#include <app/Fuse.AppBase.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.iOS.Blitter.h>
#include <app/Fuse.iOS.ControlEvent.h>
#include <app/Fuse.iOS.Controls.Button.h>
#include <app/Fuse.iOS.Controls.Circle.h>
#include <app/Fuse.iOS.Controls.Image.h>
#include <app/Fuse.iOS.Controls.Rectangle.h>
#include <app/Fuse.iOS.Controls.Slider.h>
#include <app/Fuse.iOS.Controls.Switch.h>
#include <app/Fuse.iOS.Controls.TextBlock.h>
#include <app/Fuse.iOS.Controls.TextInput.h>
#include <app/Fuse.iOS.Controls.WebView.h>
#include <app/Fuse.iOS.Helpers.h>
#include <app/Fuse.iOS.InputDispatch.h>
#include <app/Fuse.iOS.InputDispatch_TouchEvents.h>
#include <app/Fuse.iOS.iOSBindingView.h>
#include <app/Fuse.iOS.iOSDeviceInterop.h>
#include <app/Fuse.iOS.iOSExtensions.h>
#include <app/Fuse.iOS.iOSInterop.h>
#include <app/Fuse.iOS.NativeStyle.h>
#include <app/Fuse.iOS.NativeStyle_Template.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template1.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template2.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3_Factory.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3_Factory1.h>
#include <app/Fuse.iOS.NativeTemplate.h>
#include <app/Fuse.iOS.NativeViews.ContentControl.h>
#include <app/Fuse.iOS.NativeViews.GenericNativeView.h>
#include <app/Fuse.iOS.NativeViews.GraphicsView.h>
#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <app/Fuse.iOS.NativeViews.NativeViewHost.h>
#include <app/Fuse.iOS.NativeViews.Panel.h>
#include <app/Fuse.iOS.NativeViews.ScrollView.h>
#include <app/Fuse.iOS.RootView.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.iOS.TextRenderer.h>
#include <app/Fuse.iOS.Transform.h>
#include <app/Fuse.iOS.UIControlCallback.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.Foundation.NSMutableDictionary.h>
#include <app/iOS.Foundation.NSObject.h>
#include <app/iOS.Foundation.NSSet.h>
#include <app/iOS.QuartzCore.CALayer.h>
#include <app/iOS.QuartzCore.CATransform3D.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIControl.h>
#include <app/iOS.UIKit.UIControlEvents.h>
#include <app/iOS.UIKit.UIEvent.h>
#include <app/iOS.UIKit.UITouch.h>
#include <app/iOS.UIKit.UITouchPhase.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/ObjC.Object.h>
#include <app/ObjC.Selector.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__iOS_Foundation_NSObject__iOS_UIKit_UIEvent.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.Dictionary__iOS_Foundation_INSCopying__ObjC_ID.h>
#include <app/Uno.Collections.Dictionary__iOS_UIKit_UIControl__Fuse_Node.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__iOS_Foundation_INSCopyi-9b51e9ad.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID.h>
#include <app/Uno.Collections.List__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBar.h>
#include <app/Uno.Platform.iOS.StatusBarAnimation.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.ViewNativeHandle.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.Template__Fuse_Controls_GraphicsView.h>
#include <app/Uno.UX.Template__Fuse_Controls_NativeViewHost.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextBlock.h>

namespace app {
namespace Fuse {
namespace iOS {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Blitter*> Blitter__Singleton;

Blitter__uType* Blitter__typeof()
{
    static ::uStaticStrong<Blitter__uType*> type;
    if (type != NULL) return type;

    type = (Blitter__uType*)::uAllocClassType(sizeof(Blitter__uType), "Fuse.iOS.Blitter", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_baea6daf._compiledProgram", offsetof(Blitter, _draw_baea6daf._compiledProgram),
        "_draw_baea6daf._constValues", offsetof(Blitter, _draw_baea6daf._constValues),
        "_draw_baea6daf._Program", offsetof(Blitter, _draw_baea6daf._Program),
        "Blit_v_baea6daf_1_7_1", offsetof(Blitter, Blit_v_baea6daf_1_7_1),
        "Blit_verts_baea6daf_1_6_6", offsetof(Blitter, Blit_verts_baea6daf_1_6_6));

    return type;
}

void Blitter___ObjInit(Blitter* __this)
{
    __this->init_DrawCalls();
}

void Blitter___TypeInit(::uStatic* __this)
{
    Blitter__Singleton = Blitter__New_1(NULL);
}

void Blitter__Blit(Blitter* __this, ::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform)
{
    {
        __this->_draw_baea6daf.BlendEnabled(true);
        __this->_draw_baea6daf.BlendSrcAlpha(7);
        __this->_draw_baea6daf.BlendDstRgb(3);
        __this->_draw_baea6daf.CullFace(0);
        __this->_draw_baea6daf.Use();
        __this->_draw_baea6daf.Attrib(0, 2, __this->Blit_v_baea6daf_1_7_1, 8, 0);
        __this->_draw_baea6daf.Uniform_7(1, size);
        __this->_draw_baea6daf.Uniform_7(2, pos);
        __this->_draw_baea6daf.Uniform_2(3, localToClipTransform);
        __this->_draw_baea6daf.Sampler_1(4, vt);
        __this->_draw_baea6daf.DrawArrays(::uPtr< ::uArray*>(__this->Blit_verts_baea6daf_1_6_6)->Length());
    }
}

void Blitter__init_DrawCalls(Blitter* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uArray* verts_baea6daf_1_6_0 = array_123;
    __this->Blit_v_baea6daf_1_7_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_8(NULL, verts_baea6daf_1_6_0), 0);
    __this->Blit_verts_baea6daf_1_6_6 = verts_baea6daf_1_6_0;
    __this->_draw_baea6daf = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 110), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Blitter* Blitter__New_1(::uStatic* __this)
{
    Blitter* inst = (Blitter*)::uAllocObject(sizeof(Blitter), Blitter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/UIControlEvents/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlEvent__uType* ControlEvent__typeof()
{
    static ::uStaticStrong<ControlEvent__uType*> type;
    if (type != NULL) return type;

    type = (ControlEvent__uType*)::uAllocClassType(sizeof(ControlEvent__uType), "Fuse.iOS.ControlEvent", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::UIControlCallback__typeof());
    type->__fp_callback = (void(*)(::app::Fuse::iOS::UIControlCallback*, ::app::iOS::Foundation::NSObject*, ::app::iOS::UIKit::UIEvent*))ControlEvent__callback;
    type->__interface_0.__fp_Dispose = (void(*)(void*))ControlEvent__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(ControlEvent__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlEvent, _control),
        "_handler", offsetof(ControlEvent, _handler));

    return type;
}

void ControlEvent___ObjInit_6(ControlEvent* __this, ::app::iOS::UIKit::UIControl* control, ::uDelegate* handler, ::uUInt events)
{
    ::app::Fuse::iOS::UIControlCallback___ObjInit_4(__this);
    __this->_control = control;
    __this->_handler = handler;
    __this->_events = events;
}

ControlEvent* ControlEvent__AddHandler(::uStatic* __this, ::app::iOS::UIKit::UIControl* control, ::uDelegate* handler, ::uUInt events)
{
    ControlEvent* controlEvent = ControlEvent__New_7(NULL, control, handler, events);
    ::uPtr< ControlEvent*>(controlEvent)->init();
    ::uPtr< ::app::iOS::UIKit::UIControl*>(control)->addTargetActionForControlEvents(controlEvent->Handle(), controlEvent->CallbackSelector(), events);
    return controlEvent;
}

void ControlEvent__callback(ControlEvent* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_handler)->InvokeVoid< ::app::iOS::Foundation::NSObject*, ::app::iOS::UIKit::UIEvent*>(sender, uiEvent);
    }
}

void ControlEvent__Dispose(ControlEvent* __this)
{
    if (!__this->_isDisposed)
    {
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_control)->removeTargetActionForControlEvents(__this->Handle(), __this->CallbackSelector(), __this->_events);
        __this->_isDisposed = true;
    }
}

ControlEvent* ControlEvent__New_7(::uStatic* __this, ::app::iOS::UIKit::UIControl* control, ::uDelegate* handler, ::uUInt events)
{
    ControlEvent* inst = (ControlEvent*)::uAllocObject(sizeof(ControlEvent), ControlEvent__typeof());
    inst->_ObjInit_6(control, handler, events);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Helpers__uType* Helpers__typeof()
{
    static ::uStaticStrong<Helpers__uType*> type;
    if (type != NULL) return type;

    type = (Helpers__uType*)::uAllocClassType(sizeof(Helpers__uType), "Fuse.iOS.Helpers");

    return type;
}

::app::iOS::Foundation::NSDictionary* Helpers__CreateNSDictionary(::uStatic* __this, ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID* dict)
{
    ::app::iOS::Foundation::NSMutableDictionary* ret = ::app::iOS::Foundation::NSMutableDictionary__New_8(NULL, ::app::iOS::Foundation::NSMutableDictionary___dictionaryWithCapacity(NULL, (::uULong)(::uUInt)::uPtr< ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID*>(dict)->Count()));

    for (::app::Uno::Collections::Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID enum_123 = dict->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID e = enum_123.Current();
        ::uPtr< ::app::iOS::Foundation::NSMutableDictionary*>(ret)->setObjectForKey(e.Value(), e.Key());
    }

    return (::app::iOS::Foundation::NSDictionary*)ret;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node*> InputDispatch___listeners;
::uStaticStrong< ::app::Fuse::iOS::InputDispatch_TouchEvents*> InputDispatch___touchEvents;

InputDispatch__uType* InputDispatch__typeof()
{
    static ::uStaticStrong<InputDispatch__uType*> type;
    if (type != NULL) return type;

    type = (InputDispatch__uType*)::uAllocClassType(sizeof(InputDispatch__uType), "Fuse.iOS.InputDispatch");

    return type;
}

void InputDispatch___TypeInit(::uStatic* __this)
{
    InputDispatch___listeners = ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node__New_1(NULL);
    InputDispatch___touchEvents = ::app::Fuse::iOS::InputDispatch_TouchEvents__New_7(NULL);
    ::uPtr< ::app::Fuse::iOS::InputDispatch_TouchEvents*>(InputDispatch___touchEvents)->init();
}

void InputDispatch__AddListener(::uStatic* __this, ::app::Fuse::iOS::NativeViews::NativeView* nativeView)
{
    ::app::iOS::UIKit::UIControl* control = ::uAs< ::app::iOS::UIKit::UIControl*>(::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(nativeView)->HitTestHandle(), ::app::iOS::UIKit::UIControl__typeof());

    if (control != NULL)
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node*>(InputDispatch___listeners)->Add(control, ::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(nativeView)->Node());
        ::uPtr< ::app::iOS::UIKit::UIControl*>(control)->addTargetActionForControlEvents(::uPtr< ::app::Fuse::iOS::InputDispatch_TouchEvents*>(InputDispatch___touchEvents)->Handle(), ::uPtr< ::app::Fuse::iOS::InputDispatch_TouchEvents*>(InputDispatch___touchEvents)->CallbackSelector(), 4095);
    }
}

::app::Fuse::Node* InputDispatch__FindRoot(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (::uPtr< ::app::Fuse::Node*>(n)->Parent() == NULL)
    {
        return n;
    }

    return InputDispatch__FindRoot(NULL, ::uPtr< ::app::Fuse::Node*>(n)->Parent());
}

::app::Fuse::Input::PointerEventData* InputDispatch__MakePointerEventData(::uStatic* __this, ::app::iOS::UIKit::UITouch* touch, ::app::iOS::UIKit::UIView* rootView, int pointIndex)
{
    ::app::Fuse::Input::PointerEventData* collection_123;
    ::app::iOS::CoreGraphics::CGPoint position = ::uPtr< ::app::iOS::UIKit::UITouch*>(touch)->locationInView(rootView);
    ::app::Uno::Float2 windowPoint = ::app::Uno::Float2__New_2(NULL, (float)position.X, (float)position.Y);
    collection_123 = ::app::Fuse::Input::PointerEventData__New_1(NULL);
    ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_123)->PointIndex = pointIndex;
    collection_123->WindowPoint = windowPoint;
    collection_123->Timestamp = touch->Timestamp() / 1000.0;
    collection_123->PointerType = 2;
    collection_123->IsPrimary = pointIndex == 0;
    return collection_123;
}

void InputDispatch__RemoveListener(::uStatic* __this, ::app::Fuse::iOS::NativeViews::NativeView* nativeView)
{
    ::app::iOS::UIKit::UIControl* control = ::uAs< ::app::iOS::UIKit::UIControl*>(::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(nativeView)->HitTestHandle(), ::app::iOS::UIKit::UIControl__typeof());

    if (control == NULL)
    {
        return;
    }

    if (::uPtr< ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node*>(InputDispatch___listeners)->ContainsKey(control))
    {
        ::uPtr< ::app::iOS::UIKit::UIControl*>(control)->removeTargetActionForControlEvents(::uPtr< ::app::Fuse::iOS::InputDispatch_TouchEvents*>(InputDispatch___touchEvents)->Handle(), ::uPtr< ::app::Fuse::iOS::InputDispatch_TouchEvents*>(InputDispatch___touchEvents)->CallbackSelector(), 4095);
        ::uPtr< ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node*>(InputDispatch___listeners)->Remove(control);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InputDispatch_TouchEvents__uType* InputDispatch_TouchEvents__typeof()
{
    static ::uStaticStrong<InputDispatch_TouchEvents__uType*> type;
    if (type != NULL) return type;

    type = (InputDispatch_TouchEvents__uType*)::uAllocClassType(sizeof(InputDispatch_TouchEvents__uType), "Fuse.iOS.InputDispatch.TouchEvents", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::iOS::UIControlCallback__typeof());
    type->__fp_callback = (void(*)(::app::Fuse::iOS::UIControlCallback*, ::app::iOS::Foundation::NSObject*, ::app::iOS::UIKit::UIEvent*))InputDispatch_TouchEvents__callback;

    type->SetStrongRefs(
        "_activeTouches", offsetof(InputDispatch_TouchEvents, _activeTouches));

    return type;
}

void InputDispatch_TouchEvents___ObjInit_6(InputDispatch_TouchEvents* __this)
{
    __this->_activeTouches = ::app::Uno::Collections::List__object__New_1(NULL);
    ::app::Fuse::iOS::UIControlCallback___ObjInit_4(__this);
}

void InputDispatch_TouchEvents__callback(InputDispatch_TouchEvents* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent)
{
    if ((sender == NULL) || (uiEvent == NULL))
    {
        return;
    }

    ::app::iOS::UIKit::UIView* rootView = ::app::Fuse::iOS::RootView__get_Current(NULL);

    if (rootView == NULL)
    {
        return;
    }

    ::app::iOS::UIKit::UIControl* control = ::uAs< ::app::iOS::UIKit::UIControl*>(sender, ::app::iOS::UIKit::UIControl__typeof());

    if ((control == NULL) || !::uPtr< ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node*>(::app::Fuse::iOS::InputDispatch___listeners)->ContainsKey(control))
    {
        return;
    }

    ::app::Fuse::Node* node = ::uPtr< ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node*>(::app::Fuse::iOS::InputDispatch___listeners)->Item(control);
    ::app::Fuse::Node* rootNode = ::app::Fuse::iOS::InputDispatch__FindRoot(NULL, node);
    ::app::iOS::Foundation::NSArray* touches = ::uPtr< ::app::iOS::Foundation::NSSet*>(::uPtr< ::app::iOS::UIKit::UIEvent*>(uiEvent)->touchesForView((::app::iOS::UIKit::UIView*)control))->AllObjects();
    bool touchEnded = false;

    for (::uUInt i = 0u; (::uULong)i < ::uPtr< ::app::iOS::Foundation::NSArray*>(touches)->Count(); i++)
    {
        ::app::iOS::UIKit::UITouch* touch = ::app::iOS::UIKit::UITouch__New_6(NULL, ::uPtr< ::app::iOS::Foundation::NSArray*>(touches)->objectAtIndex((::uULong)i));

        if (!::uPtr< ::app::Uno::Collections::List__object*>(__this->_activeTouches)->Contains((::uObject*)touch))
        {
            ::uPtr< ::app::Uno::Collections::List__object*>(__this->_activeTouches)->Add((::uObject*)touch);
        }

        int pointerIndex = ::uPtr< ::app::Uno::Collections::List__object*>(__this->_activeTouches)->IndexOf((::uObject*)touch);
        ::app::Fuse::Input::PointerEventData* data = ::app::Fuse::iOS::InputDispatch__MakePointerEventData(NULL, touch, rootView, pointerIndex);

        if (::uPtr< ::app::iOS::UIKit::UITouch*>(touch)->Phase() == 0)
        {
            try
            {
                ::app::Fuse::Input::PointerPressedArgs* args = ::app::Fuse::Input::Pointer__RaisePressed(NULL, rootNode, data);
            }
            catch (const ::uThrowable& __t)
            {
                if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
                {
                    ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                    ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
                }
                else
                {
                    throw __t;
                }
            }
        }
        else if (::uPtr< ::app::iOS::UIKit::UITouch*>(touch)->Phase() == 1)
        {
            try
            {
                ::app::Fuse::Input::PointerMovedArgs* args = ::app::Fuse::Input::Pointer__RaiseMoved(NULL, rootNode, data);
            }
            catch (const ::uThrowable& __t)
            {
                if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
                {
                    ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                    ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
                }
                else
                {
                    throw __t;
                }
            }
        }
        else if (::uPtr< ::app::iOS::UIKit::UITouch*>(touch)->Phase() == 3)
        {
            try
            {
                ::app::Fuse::Input::PointerReleasedArgs* args = ::app::Fuse::Input::Pointer__RaiseReleased(NULL, rootNode, data);
            }
            catch (const ::uThrowable& __t)
            {
                if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
                {
                    ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                    ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
                }
                else
                {
                    throw __t;
                }
            }

            touchEnded = true;
        }
        else if (::uPtr< ::app::iOS::UIKit::UITouch*>(touch)->Phase() == 4)
        {
            if (::app::Fuse::Input::Pointer__HardCapture(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointIndex, node, (::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)InputDispatch_TouchEvents__LostCallback, __this)))
            {
                try
                {
                    ::app::Fuse::Input::Pointer__ReleaseHardCapture(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointIndex);
                }
                catch (const ::uThrowable& __t)
                {
                    if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
                    {
                        ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                        ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
                    }
                    else
                    {
                        throw __t;
                    }
                }
            }

            touchEnded = true;
        }
    }

    if (touchEnded)
    {
        for (::uUInt i = 0u; (::uULong)i < ::uPtr< ::app::iOS::Foundation::NSArray*>(touches)->Count(); i++)
        {
            ::app::iOS::UIKit::UITouch* touch = ::app::iOS::UIKit::UITouch__New_6(NULL, ::uPtr< ::app::iOS::Foundation::NSArray*>(touches)->objectAtIndex((::uULong)i));
            int pointerIndex = ::uPtr< ::app::Uno::Collections::List__object*>(__this->_activeTouches)->IndexOf((::uObject*)touch);

            if (::uPtr< ::app::iOS::UIKit::UITouch*>(touch)->Phase() != 3)
            {
                try
                {
                    ::app::Fuse::Input::Pointer__RaiseReleased(NULL, rootNode, ::app::Fuse::iOS::InputDispatch__MakePointerEventData(NULL, touch, rootView, pointerIndex));
                }
                catch (const ::uThrowable& __t)
                {
                    if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
                    {
                        ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                        ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
                    }
                    else
                    {
                        throw __t;
                    }
                }
            }
        }

        ::uPtr< ::app::Uno::Collections::List__object*>(__this->_activeTouches)->Clear();
    }
}

void InputDispatch_TouchEvents__LostCallback(InputDispatch_TouchEvents* __this)
{
}

InputDispatch_TouchEvents* InputDispatch_TouchEvents__New_7(::uStatic* __this)
{
    InputDispatch_TouchEvents* inst = (InputDispatch_TouchEvents*)::uAllocObject(sizeof(InputDispatch_TouchEvents), InputDispatch_TouchEvents__typeof());
    inst->_ObjInit_6();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

iOSExtensions__uType* iOSExtensions__typeof()
{
    static ::uStaticStrong<iOSExtensions__uType*> type;
    if (type != NULL) return type;

    type = (iOSExtensions__uType*)::uAllocClassType(sizeof(iOSExtensions__uType), "Fuse.iOS.iOSExtensions");

    return type;
}

::app::iOS::CoreGraphics::CGPoint iOSExtensions__ToCGPoint(::uStatic* __this, ::app::Uno::Float2 f)
{
    return ::app::iOS::CoreGraphics::CGPoint__New_1(NULL, (double)f.X, (double)f.Y);
}

::app::iOS::CoreGraphics::CGSize iOSExtensions__ToCGSize(::uStatic* __this, ::app::Uno::Float2 f)
{
    return ::app::iOS::CoreGraphics::CGSize__New_1(NULL, (double)f.X, (double)f.Y);
}

::app::Uno::Float2 iOSExtensions__ToFloat2_1(::uStatic* __this, ::app::iOS::CoreGraphics::CGPoint point)
{
    return ::app::Uno::Float2__New_2(NULL, (float)point.X, (float)point.Y);
}

::app::iOS::UIKit::UIColor* iOSExtensions__ToUIColor(::uStatic* __this, ::app::Uno::Float4 color)
{
    ::app::iOS::UIKit::UIColor* uiColor = ::app::iOS::UIKit::UIColor__New_5(NULL);
    ::uPtr< ::app::iOS::UIKit::UIColor*>(uiColor)->initWithRedGreenBlueAlpha((double)color.X, (double)color.Y, (double)color.Z, (double)color.W);
    return uiColor;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

iOSInterop__uType* iOSInterop__typeof()
{
    static ::uStaticStrong<iOSInterop__uType*> type;
    if (type != NULL) return type;

    type = (iOSInterop__uType*)::uAllocClassType(sizeof(iOSInterop__uType), "Fuse.iOS.iOSInterop");

    return type;
}

::app::Uno::Float2 iOSInterop__GetContentSize(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float2 fillSize, int fillSet, float scale)
{
    ::app::iOS::CoreGraphics::CGSize maxSize = ::app::Fuse::iOS::iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation(NULL, iOSInterop__ToCGSize(NULL, fillSize, scale), view);
    ::app::iOS::CoreGraphics::CGSize result = maxSize;
    ::app::iOS::CoreGraphics::CGSize sizeThatFits = ::uPtr< ::app::iOS::UIKit::UIView*>(view)->sizeThatFits(maxSize);

    if ((fillSet & 1) == 1)
    {
        result.Width = sizeThatFits.Width;
    }

    if ((fillSet & 2) == 2)
    {
        result.Height = sizeThatFits.Height;
    }

    return iOSInterop__ToFloat2(NULL, ::app::Fuse::iOS::iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation(NULL, result, view), scale);
}

::app::iOS::CoreGraphics::CGSize iOSInterop__ToCGSize(::uStatic* __this, ::app::Uno::Float2 unoSize, float scale)
{
    return ::app::iOS::CoreGraphics::CGSize__New_1(NULL, (double)(unoSize.X / scale), (double)(unoSize.Y / scale));
}

::app::Uno::Float2 iOSInterop__ToFloat2(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, float scale)
{
    return ::app::Uno::Float2__New_2(NULL, (float)size.Width * scale, (float)size.Height * scale);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle__uType* NativeStyle__typeof()
{
    static ::uStaticStrong<NativeStyle__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle__uType*)::uAllocClassType(sizeof(NativeStyle__uType), "Fuse.iOS.NativeStyle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Style__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle__uType, __interface_0));

    return type;
}

void NativeStyle___ObjInit_1(NativeStyle* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
    __this->InitializeUX();
}

void NativeStyle__InitializeUX(NativeStyle* __this)
{
    ::app::Fuse::iOS::NativeStyle_Template* collection_123;
    ::app::Fuse::iOS::NativeTemplate* temp = ::app::Fuse::iOS::NativeTemplate__New_1(NULL);
    collection_123 = ::app::Fuse::iOS::NativeStyle_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template* temp1 = collection_123;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp1);
}

NativeStyle* NativeStyle__New_2(::uStatic* __this)
{
    NativeStyle* inst = (NativeStyle*)::uAllocObject(sizeof(NativeStyle), NativeStyle__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template__uType* NativeStyle_Template__typeof()
{
    static ::uStaticStrong<NativeStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template__uType*)::uAllocClassType(sizeof(NativeStyle_Template__uType), "Fuse.iOS.NativeStyle.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_GraphicsView__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_GraphicsView*, ::app::Fuse::Controls::GraphicsView*))NativeStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template, __parent));

    return type;
}

void NativeStyle_Template___ObjInit_1(NativeStyle_Template* __this, ::app::Fuse::iOS::NativeStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_GraphicsView___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template* NativeStyle_Template__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle* parent)
{
    NativeStyle_Template* inst = (NativeStyle_Template*)::uAllocObject(sizeof(NativeStyle_Template), NativeStyle_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template__OnApply(NativeStyle_Template* __this, ::app::Fuse::Controls::GraphicsView* self)
{
    ::app::Fuse::iOS::NativeStyle_Template_Template1* collection_123;
    ::app::Fuse::iOS::NativeStyle_Template_Template2* collection_124;
    ::app::Fuse::iOS::NativeStyle_Template_Template3* collection_125;
    ::app::Fuse::Style* temp = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::Fuse::iOS::NativeStyle_Template_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template1*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template1* temp1 = collection_123;
    collection_124 = ::app::Fuse::iOS::NativeStyle_Template_Template2__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template2*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template2* temp2 = collection_124;
    collection_125 = ::app::Fuse::iOS::NativeStyle_Template_Template3__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template3*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template3* temp3 = collection_125;
    ::app::Fuse::Controls::Graphics::GraphicsStyle* temp4 = ::app::Fuse::Controls::Graphics::GraphicsStyle__New_2(NULL);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp)->Templates()), (::uObject*)temp1);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp2);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp3);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp4);
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(self)->AddStyleStyle(temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template1__uType* NativeStyle_Template_Template1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template1__uType), "Fuse.iOS.NativeStyle.Template.Template1", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextBlock__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextBlock*, ::app::Fuse::Controls::TextBlock*))NativeStyle_Template_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template1, __parent));

    return type;
}

void NativeStyle_Template_Template1___ObjInit_1(NativeStyle_Template_Template1* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextBlock___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template1* NativeStyle_Template_Template1__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template1* inst = (NativeStyle_Template_Template1*)::uAllocObject(sizeof(NativeStyle_Template_Template1), NativeStyle_Template_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template1__OnApply(NativeStyle_Template_Template1* __this, ::app::Fuse::Controls::TextBlock* self)
{
    ::app::Fuse::iOS::TextRenderer* temp = ::app::Fuse::iOS::TextRenderer__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template2__uType* NativeStyle_Template_Template2__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template2__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template2__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template2__uType), "Fuse.iOS.NativeStyle.Template.Template2", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost*, ::app::Fuse::Controls::NativeViewHost*))NativeStyle_Template_Template2__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template2__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template2, __parent));

    return type;
}

void NativeStyle_Template_Template2___ObjInit_1(NativeStyle_Template_Template2* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_NativeViewHost___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template2* NativeStyle_Template_Template2__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template2* inst = (NativeStyle_Template_Template2*)::uAllocObject(sizeof(NativeStyle_Template_Template2), NativeStyle_Template_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template2__OnApply(NativeStyle_Template_Template2* __this, ::app::Fuse::Controls::NativeViewHost* self)
{
    ::app::Fuse::iOS::NativeViews::NativeViewHost* temp = ::app::Fuse::iOS::NativeViews::NativeViewHost__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::NativeViewHost*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3__uType* NativeStyle_Template_Template3__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3__uType), "Fuse.iOS.NativeStyle.Template.Template3", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit*, ::app::Fuse::Controls::PlainTextEdit*))NativeStyle_Template_Template3__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template3__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3, __parent));

    return type;
}

void NativeStyle_Template_Template3___ObjInit_1(NativeStyle_Template_Template3* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template3* NativeStyle_Template_Template3__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template3* inst = (NativeStyle_Template_Template3*)::uAllocObject(sizeof(NativeStyle_Template_Template3), NativeStyle_Template_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template3__OnApply(NativeStyle_Template_Template3* __this, ::app::Fuse::Controls::PlainTextEdit* self)
{
    ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory* temp = ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory__New_2(NULL, __this);
    ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory1* temp1 = ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory1__New_2(NULL, __this);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeEditProperty)->SetStyle(self, (::uObject*)temp);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeTextProperty)->SetStyle(self, (::uObject*)temp1);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory__uType* NativeStyle_Template_Template3_Factory__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory__uType), "Fuse.iOS.NativeStyle.Template.Template3.Factory", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory, __parent));

    return type;
}

void NativeStyle_Template_Template3_Factory___ObjInit(NativeStyle_Template_Template3_Factory* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory__New_1(NativeStyle_Template_Template3_Factory* __this)
{
    ::app::Fuse::iOS::Controls::TextInput* self = ::app::Fuse::iOS::Controls::TextInput__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory* NativeStyle_Template_Template3_Factory__New_2(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory* inst = (NativeStyle_Template_Template3_Factory*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory), NativeStyle_Template_Template3_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory1__uType* NativeStyle_Template_Template3_Factory1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory1__uType), "Fuse.iOS.NativeStyle.Template.Template3.Factory1", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory1__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory1, __parent));

    return type;
}

void NativeStyle_Template_Template3_Factory1___ObjInit(NativeStyle_Template_Template3_Factory1* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory1__New_1(NativeStyle_Template_Template3_Factory1* __this)
{
    ::app::Fuse::iOS::TextRenderer* self = ::app::Fuse::iOS::TextRenderer__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory1* NativeStyle_Template_Template3_Factory1__New_2(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory1* inst = (NativeStyle_Template_Template3_Factory1*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory1), NativeStyle_Template_Template3_Factory1__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeTemplate__uType* NativeTemplate__typeof()
{
    static ::uStaticStrong<NativeTemplate__uType*> type;
    if (type != NULL) return type;

    type = (NativeTemplate__uType*)::uAllocClassType(sizeof(NativeTemplate__uType), "Fuse.iOS.NativeTemplate", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))NativeTemplate__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeTemplate__uType, __interface_0));

    return type;
}

void NativeTemplate___ObjInit(NativeTemplate* __this)
{
}

bool NativeTemplate__Apply(NativeTemplate* __this, ::uObject* obj)
{
    if (__this->HaveGraphicsViewAncestor(::uAs< ::app::Fuse::Node*>(obj, ::app::Fuse::Node__typeof())))
    {
        return true;
    }

    bool addedNativeView = false;
    ::app::Fuse::Controls::Panel* panel = ::uAs< ::app::Fuse::Controls::Panel*>(obj, ::app::Fuse::Controls::Panel__typeof());

    if (panel != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::Panel*>(panel)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::Panel__New_1(NULL));
        addedNativeView = true;

        if (::uIs(panel, ::app::Fuse::Controls::Button__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Button__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Switch__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Switch__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::TextInput__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::TextInput__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::TextBlock__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::TextBlock__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Slider__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Slider__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Image__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Image__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Rectangle__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Rectangle__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Circle__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Circle__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::WebView__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::WebView__New_1(NULL));
        }
    }

    ::app::Fuse::Controls::ContentControl* contentControl = ::uAs< ::app::Fuse::Controls::ContentControl*>(obj, ::app::Fuse::Controls::ContentControl__typeof());

    if (contentControl != NULL)
    {
        addedNativeView = true;

        if (::uIs(contentControl, ::app::Fuse::Controls::GraphicsView__typeof()))
        {
            ::uPtr< ::app::Fuse::Controls::ContentControl*>(contentControl)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::GraphicsView__New_1(NULL));
        }
        else
        {
            contentControl->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::ContentControl__New_1(NULL));
        }
    }

    ::app::Fuse::Controls::ScrollView* scrollView = ::uAs< ::app::Fuse::Controls::ScrollView*>(obj, ::app::Fuse::Controls::ScrollView__typeof());

    if (scrollView != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(scrollView)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::ScrollView__New_1(NULL));
        addedNativeView = true;
    }

    if (!addedNativeView)
    {
        ::app::Fuse::Controls::Control* c = ::uAs< ::app::Fuse::Controls::Control*>(obj, ::app::Fuse::Controls::Control__typeof());

        if (c != NULL)
        {
            ::uPtr< ::app::Fuse::Controls::Control*>(c)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::GenericNativeView__New_1(NULL));
        }
    }

    return true;
}

bool NativeTemplate__HaveGraphicsViewAncestor(NativeTemplate* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return false;
    }

    if (::uPtr< ::app::Fuse::Node*>(node)->Parent() == NULL)
    {
        return false;
    }

    if (::uIs(::uPtr< ::app::Fuse::Node*>(node)->Parent(), ::app::Fuse::Controls::GraphicsView__typeof()))
    {
        return true;
    }

    return __this->HaveGraphicsViewAncestor(::uPtr< ::app::Fuse::Node*>(node)->Parent());
}

NativeTemplate* NativeTemplate__New_1(::uStatic* __this)
{
    NativeTemplate* inst = (NativeTemplate*)::uAllocObject(sizeof(NativeTemplate), NativeTemplate__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::iOS::UIKit::UIControl*> RootView___rootContainer;
::uStaticStrong< ::app::iOS::UIKit::UIView*> RootView___rootView;

RootView__uType* RootView__typeof()
{
    static ::uStaticStrong<RootView__uType*> type;
    if (type != NULL) return type;

    type = (RootView__uType*)::uAllocClassType(sizeof(RootView__uType), "Fuse.iOS.RootView");

    return type;
}

void RootView___TypeInit(::uStatic* __this)
{
    RootView___rootContainer = ::app::iOS::UIKit::UIControl__New_9(NULL);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(RootView___rootContainer)->init();
    ::uPtr< ::app::iOS::UIKit::UIControl*>(RootView___rootContainer)->BackgroundColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::app::Uno::Float4__New_2(NULL, 0.95f, 0.95f, 0.95f, 1.0f)));
    ::uPtr< ::app::iOS::UIKit::UIControl*>(RootView___rootContainer)->UserInteractionEnabled(true);
    ::uPtr< ::app::iOS::UIKit::UIControl*>(RootView___rootContainer)->MultipleTouchEnabled(true);
    ::app::Uno::Platform2::Application__set_RootView(NULL, ::app::Fuse::iOS::iOSBindingView__GetNativeViewHandle(NULL, (::app::iOS::UIKit::UIView*)RootView___rootContainer));
    ::uPtr< ::app::iOS::UIKit::UIControl*>(RootView___rootContainer)->sizeToFit();
}

void RootView__ClearRoot(::uStatic* __this, ::app::iOS::UIKit::UIView* view)
{
    if (RootView___rootView != view)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("View not set as rootview")));
    }

    RootView___rootView = NULL;
    ::uPtr< ::app::iOS::UIKit::UIView*>(view)->removeFromSuperview();
}

::app::iOS::UIKit::UIView* RootView__get_Current(::uStatic* __this)
{
    return (::app::iOS::UIKit::UIView*)RootView___rootContainer;
}

void RootView__SetRoot(::uStatic* __this, ::app::iOS::UIKit::UIView* view)
{
    if (RootView___rootView != NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Rootview already set!")));
    }

    RootView___rootView = view;
    ::uPtr< ::app::iOS::UIKit::UIControl*>(RootView___rootContainer)->addSubview(view);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*> StatusBarConfig___stack;

StatusBarConfig__uType* StatusBarConfig__typeof()
{
    static ::uStaticStrong<StatusBarConfig__uType*> type;
    if (type != NULL) return type;

    type = (StatusBarConfig__uType*)::uAllocClassType(sizeof(StatusBarConfig__uType), "Fuse.iOS.StatusBarConfig", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StatusBarConfig__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StatusBarConfig__OnUnrooted;

    return type;
}

void StatusBarConfig___TypeInit(::uStatic* __this)
{
    StatusBarConfig___stack = ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig__New_1(NULL);
}

void StatusBarConfig__Apply(::uStatic* __this)
{
    {
        int anim = StatusBarConfig__GetAnimation(NULL);
        int style = StatusBarConfig__GetStyle(NULL);
        bool visible = StatusBarConfig__GetIsVisible(NULL);

        if (::app::Uno::Platform::iOS::StatusBar__get_Animation(NULL) != anim)
        {
            ::app::Uno::Platform::iOS::StatusBar__set_Animation(NULL, anim);
        }

        if (::app::Uno::Platform::iOS::StatusBar__get_Style(NULL) != style)
        {
            ::app::Uno::Platform::iOS::StatusBar__set_Style(NULL, style);
        }

        if (::app::Uno::Platform::iOS::StatusBar__get_IsVisible(NULL) != visible)
        {
            ::app::Uno::Platform::iOS::StatusBar__set_IsVisible(NULL, visible);
        }
    }
}

int StatusBarConfig__get_Animation(StatusBarConfig* __this)
{
    return __this->_animation;
}

bool StatusBarConfig__get_IsVisible(StatusBarConfig* __this)
{
    return __this->_isVisible;
}

int StatusBarConfig__get_Style(StatusBarConfig* __this)
{
    return __this->_style;
}

int StatusBarConfig__GetAnimation(::uStatic* __this)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Count(); (i--) > 0; )
    {
        if (::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->_hasAnimation)
        {
            return ::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->Animation();
        }
    }

    return 0;
}

bool StatusBarConfig__GetIsVisible(::uStatic* __this)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Count(); (i--) > 0; )
    {
        if (::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->_hasIsVisible)
        {
            return ::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->IsVisible();
        }
    }

    return true;
}

int StatusBarConfig__GetStyle(::uStatic* __this)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Count(); (i--) > 0; )
    {
        if (::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->_hasStyle)
        {
            return ::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->Style();
        }
    }

    return 0;
}

void StatusBarConfig__OnRooted(StatusBarConfig* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Add(__this);
    StatusBarConfig__Apply(NULL);
}

void StatusBarConfig__OnUnrooted(StatusBarConfig* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Remove(__this);
    StatusBarConfig__Apply(NULL);
}

void StatusBarConfig__set_Animation(StatusBarConfig* __this, int value)
{
    if (!__this->_hasAnimation || (__this->_animation != value))
    {
        __this->_animation = value;
        __this->_hasAnimation = true;
        StatusBarConfig__Apply(NULL);
    }
}

void StatusBarConfig__set_IsVisible(StatusBarConfig* __this, bool value)
{
    if (!__this->_hasIsVisible || (__this->_isVisible != value))
    {
        __this->_isVisible = value;
        __this->_hasIsVisible = true;
        StatusBarConfig__Apply(NULL);
    }
}

void StatusBarConfig__set_Style(StatusBarConfig* __this, int value)
{
    if (!__this->_hasStyle || (__this->_style != value))
    {
        __this->_style = value;
        __this->_hasStyle = true;
        StatusBarConfig__Apply(NULL);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::iOS::QuartzCore::CATransform3D Transform___identity;

Transform__uType* Transform__typeof()
{
    static ::uStaticStrong<Transform__uType*> type;
    if (type != NULL) return type;

    type = (Transform__uType*)::uAllocClassType(sizeof(Transform__uType), "Fuse.iOS.Transform");

    return type;
}

void Transform___TypeInit(::uStatic* __this)
{
    Transform___identity = Transform__CreateCATransform3D(NULL, ::app::Uno::Float4x4__get_Identity(NULL));
}

void Transform__Apply(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float4x4 t)
{
    ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIView*>(view)->Layer())->Transform(Transform__CreateCATransform3D(NULL, t));
}

void Transform__ApplyIdentity(::uStatic* __this, ::app::iOS::UIKit::UIView* view)
{
    ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIView*>(view)->Layer())->Transform(Transform__get_Identity(NULL));
}

::app::iOS::QuartzCore::CATransform3D Transform__CreateCATransform3D(::uStatic* __this, ::app::Uno::Float4x4 t)
{
    return ::app::iOS::QuartzCore::CATransform3D__New_1(NULL, (double)t.M11, (double)t.M12, (double)t.M13, (double)t.M14, (double)t.M21, (double)t.M22, (double)t.M23, (double)t.M24, (double)t.M31, (double)t.M32, (double)t.M33, (double)t.M34, (double)t.M41, (double)t.M42, (double)t.M43, (double)t.M44);
}

::app::iOS::QuartzCore::CATransform3D Transform__get_Identity(::uStatic* __this)
{
    return Transform___identity;
}

void Transform__SetAnchor(::uStatic* __this, ::app::iOS::UIKit::UIView* view)
{
    ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIView*>(view)->Layer())->AnchorPoint(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f)));
}

void Transform__SetSize(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float2 size)
{
    ::uPtr< ::app::iOS::UIKit::UIView*>(view)->Frame(::app::iOS::CoreGraphics::CGRect__New_1(NULL, ::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f)), ::app::Fuse::iOS::iOSExtensions__ToCGSize(NULL, size)));
}

}}}
