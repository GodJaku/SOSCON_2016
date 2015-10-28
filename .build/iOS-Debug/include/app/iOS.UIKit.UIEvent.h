// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_EVENT_H__
#define __APP_I_O_S_U_I_KIT_U_I_EVENT_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSSet; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIEvent;

struct UIEvent__uType : ::app::iOS::Foundation::NSObject__uType
{
};

UIEvent__uType* UIEvent__typeof();

::app::iOS::Foundation::NSSet* UIEvent__touchesForView(UIEvent* __this, ::app::iOS::UIKit::UIView* view_);

struct UIEvent : ::app::iOS::Foundation::NSObject
{
    ::app::iOS::Foundation::NSSet* touchesForView(::app::iOS::UIKit::UIView* view_) { return UIEvent__touchesForView(this, view_); }
};

}}}


#endif
