#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Button.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Circle.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Image.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Rectangle.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Slider.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Switch.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_TextBlock.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_TextInput.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_WebView.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-5b05867c.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/iOS.UIKit.UIResponder.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_Button__uType* Control__Fuse_Controls_Button__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_Button__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_Button__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_Button__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.Button>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_Button__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Button__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Button__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_Button__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_Button, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_Button, _view));

    return type;
}

void Control__Fuse_Controls_Button___ObjInit_2(Control__Fuse_Controls_Button* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_Button__Create(Control__Fuse_Controls_Button* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::Button* Control__Fuse_Controls_Button__FindSemanticControl(Control__Fuse_Controls_Button* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Button__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Button*>(p, ::app::Fuse::Controls::Button__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Button* Control__Fuse_Controls_Button__get_SemanticControl(Control__Fuse_Controls_Button* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_Button__OnGotFocus(Control__Fuse_Controls_Button* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_Button__OnGotFocus_1(Control__Fuse_Controls_Button* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_Button__OnLostFocus(Control__Fuse_Controls_Button* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_Button__OnLostFocus_1(Control__Fuse_Controls_Button* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_Button__OnRooted(Control__Fuse_Controls_Button* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Button__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Button__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Button__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_Button__OnUnrooted(Control__Fuse_Controls_Button* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Button__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Button__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_Circle__uType* Control__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_Circle__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.Circle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_Circle__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Circle__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Circle__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_Circle__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_Circle, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_Circle, _view));

    return type;
}

void Control__Fuse_Controls_Circle___ObjInit_2(Control__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_Circle__Create(Control__Fuse_Controls_Circle* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::Circle* Control__Fuse_Controls_Circle__FindSemanticControl(Control__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Circle__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Circle*>(p, ::app::Fuse::Controls::Circle__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Circle* Control__Fuse_Controls_Circle__get_SemanticControl(Control__Fuse_Controls_Circle* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_Circle__OnGotFocus(Control__Fuse_Controls_Circle* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_Circle__OnGotFocus_1(Control__Fuse_Controls_Circle* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_Circle__OnLostFocus(Control__Fuse_Controls_Circle* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_Circle__OnLostFocus_1(Control__Fuse_Controls_Circle* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_Circle__OnRooted(Control__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Circle__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Circle__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Circle__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_Circle__OnUnrooted(Control__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Circle__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Circle__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_Image__uType* Control__Fuse_Controls_Image__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_Image__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_Image__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_Image__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.Image>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_Image__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Image__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Image__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_Image__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_Image, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_Image, _view));

    return type;
}

void Control__Fuse_Controls_Image___ObjInit_2(Control__Fuse_Controls_Image* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_Image__Create(Control__Fuse_Controls_Image* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::Image* Control__Fuse_Controls_Image__FindSemanticControl(Control__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Image__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Image*>(p, ::app::Fuse::Controls::Image__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Image* Control__Fuse_Controls_Image__get_SemanticControl(Control__Fuse_Controls_Image* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_Image__OnGotFocus(Control__Fuse_Controls_Image* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_Image__OnGotFocus_1(Control__Fuse_Controls_Image* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_Image__OnLostFocus(Control__Fuse_Controls_Image* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_Image__OnLostFocus_1(Control__Fuse_Controls_Image* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_Image__OnRooted(Control__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Image__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Image__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Image__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_Image__OnUnrooted(Control__Fuse_Controls_Image* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Image__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Image__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_Rectangle__uType* Control__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_Rectangle__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.Rectangle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_Rectangle__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Rectangle__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Rectangle__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_Rectangle, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_Rectangle, _view));

    return type;
}

void Control__Fuse_Controls_Rectangle___ObjInit_2(Control__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_Rectangle__Create(Control__Fuse_Controls_Rectangle* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::Rectangle* Control__Fuse_Controls_Rectangle__FindSemanticControl(Control__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Rectangle__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Rectangle*>(p, ::app::Fuse::Controls::Rectangle__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Rectangle* Control__Fuse_Controls_Rectangle__get_SemanticControl(Control__Fuse_Controls_Rectangle* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_Rectangle__OnGotFocus(Control__Fuse_Controls_Rectangle* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_Rectangle__OnGotFocus_1(Control__Fuse_Controls_Rectangle* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_Rectangle__OnLostFocus(Control__Fuse_Controls_Rectangle* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_Rectangle__OnLostFocus_1(Control__Fuse_Controls_Rectangle* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_Rectangle__OnRooted(Control__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Rectangle__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Rectangle__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Rectangle__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_Rectangle__OnUnrooted(Control__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Rectangle__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Rectangle__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_Slider__uType* Control__Fuse_Controls_Slider__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_Slider__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_Slider__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_Slider__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.Slider>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_Slider__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Slider__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Slider__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_Slider__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_Slider, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_Slider, _view));

    return type;
}

void Control__Fuse_Controls_Slider___ObjInit_2(Control__Fuse_Controls_Slider* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_Slider__Create(Control__Fuse_Controls_Slider* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::Slider* Control__Fuse_Controls_Slider__FindSemanticControl(Control__Fuse_Controls_Slider* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Slider__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Slider*>(p, ::app::Fuse::Controls::Slider__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Slider* Control__Fuse_Controls_Slider__get_SemanticControl(Control__Fuse_Controls_Slider* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_Slider__OnGotFocus(Control__Fuse_Controls_Slider* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_Slider__OnGotFocus_1(Control__Fuse_Controls_Slider* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_Slider__OnLostFocus(Control__Fuse_Controls_Slider* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_Slider__OnLostFocus_1(Control__Fuse_Controls_Slider* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_Slider__OnRooted(Control__Fuse_Controls_Slider* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Slider__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Slider__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Slider__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_Slider__OnUnrooted(Control__Fuse_Controls_Slider* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Slider__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Slider__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_Switch__uType* Control__Fuse_Controls_Switch__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_Switch__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_Switch__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_Switch__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.Switch>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_Switch__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Switch__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_Switch__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_Switch__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_Switch, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_Switch, _view));

    return type;
}

void Control__Fuse_Controls_Switch___ObjInit_2(Control__Fuse_Controls_Switch* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_Switch__Create(Control__Fuse_Controls_Switch* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::Switch* Control__Fuse_Controls_Switch__FindSemanticControl(Control__Fuse_Controls_Switch* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Switch__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Switch*>(p, ::app::Fuse::Controls::Switch__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Switch* Control__Fuse_Controls_Switch__get_SemanticControl(Control__Fuse_Controls_Switch* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_Switch__OnGotFocus(Control__Fuse_Controls_Switch* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_Switch__OnGotFocus_1(Control__Fuse_Controls_Switch* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_Switch__OnLostFocus(Control__Fuse_Controls_Switch* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_Switch__OnLostFocus_1(Control__Fuse_Controls_Switch* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_Switch__OnRooted(Control__Fuse_Controls_Switch* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Switch__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Switch__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Switch__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_Switch__OnUnrooted(Control__Fuse_Controls_Switch* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_Switch__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_Switch__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_TextBlock__uType* Control__Fuse_Controls_TextBlock__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_TextBlock__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_TextBlock__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_TextBlock__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.TextBlock>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_TextBlock__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_TextBlock__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_TextBlock__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_TextBlock__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_TextBlock, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_TextBlock, _view));

    return type;
}

void Control__Fuse_Controls_TextBlock___ObjInit_2(Control__Fuse_Controls_TextBlock* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_TextBlock__Create(Control__Fuse_Controls_TextBlock* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::TextBlock* Control__Fuse_Controls_TextBlock__FindSemanticControl(Control__Fuse_Controls_TextBlock* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::TextBlock__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::TextBlock*>(p, ::app::Fuse::Controls::TextBlock__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::TextBlock* Control__Fuse_Controls_TextBlock__get_SemanticControl(Control__Fuse_Controls_TextBlock* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_TextBlock__OnGotFocus(Control__Fuse_Controls_TextBlock* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_TextBlock__OnGotFocus_1(Control__Fuse_Controls_TextBlock* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_TextBlock__OnLostFocus(Control__Fuse_Controls_TextBlock* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_TextBlock__OnLostFocus_1(Control__Fuse_Controls_TextBlock* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_TextBlock__OnRooted(Control__Fuse_Controls_TextBlock* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::TextBlock__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_TextBlock__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_TextBlock__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_TextBlock__OnUnrooted(Control__Fuse_Controls_TextBlock* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_TextBlock__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_TextBlock__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_TextInput__uType* Control__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_TextInput__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.TextInput>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_TextInput__Create;
    type->__fp_OnGotFocus = Control__Fuse_Controls_TextInput__OnGotFocus;
    type->__fp_OnLostFocus = Control__Fuse_Controls_TextInput__OnLostFocus;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_TextInput__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_TextInput__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_TextInput__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_TextInput, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_TextInput, _view));

    return type;
}

void Control__Fuse_Controls_TextInput___ObjInit_2(Control__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_TextInput__Create(Control__Fuse_Controls_TextInput* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::TextInput* Control__Fuse_Controls_TextInput__FindSemanticControl(Control__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::TextInput__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::TextInput*>(p, ::app::Fuse::Controls::TextInput__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::TextInput* Control__Fuse_Controls_TextInput__get_SemanticControl(Control__Fuse_Controls_TextInput* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_TextInput__OnGotFocus(Control__Fuse_Controls_TextInput* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_TextInput__OnGotFocus_1(Control__Fuse_Controls_TextInput* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_TextInput__OnLostFocus(Control__Fuse_Controls_TextInput* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_TextInput__OnLostFocus_1(Control__Fuse_Controls_TextInput* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_TextInput__OnRooted(Control__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::TextInput__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_TextInput__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_TextInput__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_TextInput__OnUnrooted(Control__Fuse_Controls_TextInput* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_TextInput__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_TextInput__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Control__Fuse_Controls_WebView__uType* Control__Fuse_Controls_WebView__typeof()
{
    static ::uStaticStrong<Control__Fuse_Controls_WebView__uType*> type;
    if (type != NULL) return type;

    type = (Control__Fuse_Controls_WebView__uType*)::uAllocClassType(sizeof(Control__Fuse_Controls_WebView__uType), "Fuse.iOS.Controls.Control<Fuse.Controls.WebView>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_Create = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Control__Fuse_Controls_WebView__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_WebView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__Fuse_Controls_WebView__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__Fuse_Controls_WebView__uType, __interface_0));

    type->SetStrongRefs(
        "_SemanticControl", offsetof(Control__Fuse_Controls_WebView, _SemanticControl),
        "_view", offsetof(Control__Fuse_Controls_WebView, _view));

    return type;
}

void Control__Fuse_Controls_WebView___ObjInit_2(Control__Fuse_Controls_WebView* __this)
{
    ::app::Fuse::iOS::Controls::Element___ObjInit_1(__this);
}

::app::iOS::UIKit::UIView* Control__Fuse_Controls_WebView__Create(Control__Fuse_Controls_WebView* __this)
{
    if (__this->_view != NULL)
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    return __this->_view;
}

::app::Fuse::Controls::WebView* Control__Fuse_Controls_WebView__FindSemanticControl(Control__Fuse_Controls_WebView* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::WebView__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::WebView*>(p, ::app::Fuse::Controls::WebView__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::WebView* Control__Fuse_Controls_WebView__get_SemanticControl(Control__Fuse_Controls_WebView* __this)
{
    return __this->_SemanticControl;
}

void Control__Fuse_Controls_WebView__OnGotFocus(Control__Fuse_Controls_WebView* __this)
{
    if (__this->_view != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->becomeFirstResponder();
    }
}

void Control__Fuse_Controls_WebView__OnGotFocus_1(Control__Fuse_Controls_WebView* __this, ::uObject* s, ::uObject* a)
{
    __this->OnGotFocus();
}

void Control__Fuse_Controls_WebView__OnLostFocus(Control__Fuse_Controls_WebView* __this)
{
    if ((__this->_view != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_view)->resignFirstResponder();
    }
}

void Control__Fuse_Controls_WebView__OnLostFocus_1(Control__Fuse_Controls_WebView* __this, ::uObject* s, ::uObject* a)
{
    __this->OnLostFocus();
}

void Control__Fuse_Controls_WebView__OnRooted(Control__Fuse_Controls_WebView* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_SemanticControl = __this->FindSemanticControl();

    if ((::uObject*)__this->_SemanticControl == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::WebView__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_WebView__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_WebView__OnLostFocus_1, __this));
    __this->Attach();
}

void Control__Fuse_Controls_WebView__OnUnrooted(Control__Fuse_Controls_WebView* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)Control__Fuse_Controls_WebView__OnGotFocus_1, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)Control__Fuse_Controls_WebView__OnLostFocus_1, __this));
    __this->Detach();
    __this->_SemanticControl = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

}}}}
