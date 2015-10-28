// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UITouch
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UITouch*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UITouch__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UITouch.h>
#include <app/iOS.UIKit.UITouchPhase.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {

UITouch__uType* UITouch__typeof()
{
    static ::uStaticStrong<UITouch__uType*> type;
    if (type != NULL) return type;

    type = (UITouch__uType*)::uAllocClassType(sizeof(UITouch__uType), "iOS.UIKit.UITouch", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UITouch___ObjInit_4(UITouch* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

int UITouch__get_Phase(UITouch* __this)
{
    return __this->phase();
}

double UITouch__get_Timestamp(UITouch* __this)
{
    return __this->timestamp();
}

::app::iOS::CoreGraphics::CGPoint UITouch__locationInView(UITouch* __this, ::app::iOS::UIKit::UIView* view_)
{
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGPoint, @selector(locationInView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CGPoint(__return, ::app::iOS::CoreGraphics::CGPoint());
}

UITouch* UITouch__New_6(::uStatic* __this, ::id __id)
{
    UITouch* inst = (UITouch*)::uAllocObject(sizeof(UITouch), UITouch__typeof());
    inst->_ObjInit_4(__id);
    return inst;
}

int UITouch__phase(UITouch* __this)
{
    ::UITouchPhase __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITouchPhase, @selector(phase));
    return int(__return);
}

double UITouch__timestamp(UITouch* __this)
{
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(double, @selector(timestamp));
    return __return;
}

}}}
