// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_N_S_TEXT_CONTAINER_H__
#define __APP_I_O_S_U_I_KIT_N_S_TEXT_CONTAINER_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct NSTextContainer;

struct NSTextContainer__uType : ::app::iOS::Foundation::NSObject__uType
{
};

NSTextContainer__uType* NSTextContainer__typeof();

void NSTextContainer___ObjInit_5(NSTextContainer* __this);
void NSTextContainer__initWithSize(NSTextContainer* __this, ::app::iOS::CoreGraphics::CGSize size_);
NSTextContainer* NSTextContainer__New_5(::uStatic* __this);
void NSTextContainer__setLineFragmentPadding(NSTextContainer* __this, double lineFragmentPadding_);

struct NSTextContainer : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_5() { NSTextContainer___ObjInit_5(this); }
    void initWithSize(::app::iOS::CoreGraphics::CGSize size_);
    void setLineFragmentPadding(double lineFragmentPadding_) { NSTextContainer__setLineFragmentPadding(this, lineFragmentPadding_); }
};

}}}

#include <app/iOS.CoreGraphics.CGSize.h>

namespace app {
namespace iOS {
namespace UIKit {

inline void NSTextContainer::initWithSize(::app::iOS::CoreGraphics::CGSize size_) { NSTextContainer__initWithSize(this, size_); }

}}}


#endif
