// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_ROOT_VIEW_H__
#define __APP_FUSE_I_O_S_ROOT_VIEW_H__

#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {

extern ::uStaticStrong< ::app::iOS::UIKit::UIControl*> RootView___rootContainer;
extern ::uStaticStrong< ::app::iOS::UIKit::UIView*> RootView___rootView;

struct RootView__uType : ::uClassType
{
};

RootView__uType* RootView__typeof();

void RootView___TypeInit(::uStatic* __this);
void RootView__ClearRoot(::uStatic* __this, ::app::iOS::UIKit::UIView* view);
::app::iOS::UIKit::UIView* RootView__get_Current(::uStatic* __this);
void RootView__SetRoot(::uStatic* __this, ::app::iOS::UIKit::UIView* view);

}}}


#endif
