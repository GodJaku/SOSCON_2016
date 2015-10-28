// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_SLIDER_H__
#define __APP_FUSE_I_O_S_CONTROLS_SLIDER_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Slider.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { namespace Controls { struct ViewContainer; } } } }
namespace app { namespace Fuse { namespace iOS { struct ControlEvent; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace Foundation { struct NSObject; } } }
namespace app { namespace iOS { namespace UIKit { struct UIEvent; } } }
namespace app { namespace iOS { namespace UIKit { struct UISlider; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Slider;

struct Slider__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider__uType
{
};

Slider__uType* Slider__typeof();

void Slider__Finalize(Slider* __this);
void Slider___ObjInit_3(Slider* __this);
void Slider__Attach(Slider* __this);
::app::iOS::UIKit::UIView* Slider__CreateInternal(Slider* __this);
void Slider__Detach(Slider* __this);
double Slider__get_Progress(Slider* __this);
::app::Uno::Float2 Slider__GetMarginSize(Slider* __this, ::app::Uno::Float2 fillSize, int fillSet);
Slider* Slider__New_1(::uStatic* __this);
void Slider__OnFrameChanged(Slider* __this, ::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame);
void Slider__OnProgressChanged(Slider* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Slider__OnValueChanged(Slider* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent);
void Slider__set_Progress(Slider* __this, double value);

struct Slider : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider
{
    ::uStrong< ::app::Fuse::iOS::Controls::ViewContainer*> _sliderContainer;
    ::uStrong< ::app::iOS::UIKit::UISlider*> _slider;
    ::uStrong< ::app::Fuse::iOS::ControlEvent*> _valueChangedEvent;
    double _prevProgress;

    void _ObjInit_3() { Slider___ObjInit_3(this); }
    double Progress() { return Slider__get_Progress(this); }
    void OnFrameChanged(::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame);
    void OnProgressChanged(::uObject* sender, ::app::Uno::EventArgs* args) { Slider__OnProgressChanged(this, sender, args); }
    void OnValueChanged(::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent) { Slider__OnValueChanged(this, sender, uiEvent); }
    void Progress(double value) { Slider__set_Progress(this, value); }
};

}}}}

#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

inline void Slider::OnFrameChanged(::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame) { Slider__OnFrameChanged(this, sender, frame); }

}}}}


#endif
