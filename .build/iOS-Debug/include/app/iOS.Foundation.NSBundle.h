// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_BUNDLE_H__
#define __APP_I_O_S_FOUNDATION_N_S_BUNDLE_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSBundle;

struct NSBundle__uType : ::app::iOS::Foundation::NSObject__uType
{
};

NSBundle__uType* NSBundle__typeof();

NSBundle* NSBundle___mainBundle(::uStatic* __this);
::uString* NSBundle__pathForResourceOfType(NSBundle* __this, ::uString* name_, ::uString* ext_);

struct NSBundle : ::app::iOS::Foundation::NSObject
{
    ::uString* pathForResourceOfType(::uString* name_, ::uString* ext_) { return NSBundle__pathForResourceOfType(this, name_, ext_); }
};

}}}


#endif
