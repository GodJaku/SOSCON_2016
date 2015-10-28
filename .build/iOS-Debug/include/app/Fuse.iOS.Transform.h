// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_TRANSFORM_H__
#define __APP_FUSE_I_O_S_TRANSFORM_H__

#include <Uno.h>
namespace app { namespace iOS { namespace QuartzCore { struct CATransform3D; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace iOS {

extern ::app::iOS::QuartzCore::CATransform3D Transform___identity;

struct Transform__uType : ::uClassType
{
};

Transform__uType* Transform__typeof();

void Transform___TypeInit(::uStatic* __this);
void Transform__Apply(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float4x4 t);
void Transform__ApplyIdentity(::uStatic* __this, ::app::iOS::UIKit::UIView* view);
::app::iOS::QuartzCore::CATransform3D Transform__CreateCATransform3D(::uStatic* __this, ::app::Uno::Float4x4 t);
::app::iOS::QuartzCore::CATransform3D Transform__get_Identity(::uStatic* __this);
void Transform__SetAnchor(::uStatic* __this, ::app::iOS::UIKit::UIView* view);
void Transform__SetSize(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float2 size);

}}}


#endif
