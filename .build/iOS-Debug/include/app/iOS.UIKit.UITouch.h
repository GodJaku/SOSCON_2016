// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_TOUCH_H__
#define __APP_I_O_S_U_I_KIT_U_I_TOUCH_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UITouch;

struct UITouch__uType : ::app::iOS::Foundation::NSObject__uType
{
};

UITouch__uType* UITouch__typeof();

void UITouch___ObjInit_4(UITouch* __this, ::id __id);
int UITouch__get_Phase(UITouch* __this);
double UITouch__get_Timestamp(UITouch* __this);
::app::iOS::CoreGraphics::CGPoint UITouch__locationInView(UITouch* __this, ::app::iOS::UIKit::UIView* view_);
UITouch* UITouch__New_6(::uStatic* __this, ::id __id);
int UITouch__phase(UITouch* __this);
double UITouch__timestamp(UITouch* __this);

struct UITouch : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4(::id __id) { UITouch___ObjInit_4(this, __id); }
    int Phase() { return UITouch__get_Phase(this); }
    double Timestamp() { return UITouch__get_Timestamp(this); }
    ::app::iOS::CoreGraphics::CGPoint locationInView(::app::iOS::UIKit::UIView* view_);
    int phase() { return UITouch__phase(this); }
    double timestamp() { return UITouch__timestamp(this); }
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>

namespace app {
namespace iOS {
namespace UIKit {

inline ::app::iOS::CoreGraphics::CGPoint UITouch::locationInView(::app::iOS::UIKit::UIView* view_) { return UITouch__locationInView(this, view_); }

}}}


#endif
