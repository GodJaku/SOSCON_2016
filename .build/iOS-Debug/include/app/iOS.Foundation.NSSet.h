// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_SET_H__
#define __APP_I_O_S_FOUNDATION_N_S_SET_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }

namespace app {
namespace iOS {
namespace Foundation {

struct NSSet;

struct NSSet__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSSet__uType* NSSet__typeof();

::app::iOS::Foundation::NSArray* NSSet__allObjects(NSSet* __this);
::app::iOS::Foundation::NSArray* NSSet__get_AllObjects(NSSet* __this);
void NSSet__init(NSSet* __this);

struct NSSet : ::app::iOS::Foundation::NSObject
{
    ::app::iOS::Foundation::NSArray* allObjects() { return NSSet__allObjects(this); }
    ::app::iOS::Foundation::NSArray* AllObjects() { return NSSet__get_AllObjects(this); }
};

}}}


#endif
