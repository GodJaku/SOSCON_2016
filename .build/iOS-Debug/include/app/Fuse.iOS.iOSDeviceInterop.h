// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_I_O_S_DEVICE_INTEROP_H__
#define __APP_FUSE_I_O_S_I_O_S_DEVICE_INTEROP_H__

#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct iOSDeviceInterop__uType : ::uClassType
{
};

iOSDeviceInterop__uType* iOSDeviceInterop__typeof();

bool iOSDeviceInterop__get_PreV8(::uStatic* __this);
bool iOSDeviceInterop__IsOrientationLandscape(::uStatic* __this);
bool iOSDeviceInterop__IsRootView(::uStatic* __this, ::app::iOS::UIKit::UIView* view);
::app::iOS::CoreGraphics::CGSize iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, ::app::iOS::UIKit::UIView* view);

}}}


#endif
