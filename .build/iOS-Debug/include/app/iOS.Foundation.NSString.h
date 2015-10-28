// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_STRING_H__
#define __APP_I_O_S_FOUNDATION_N_S_STRING_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSString;

struct NSString__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSString__uType* NSString__typeof();

void NSString___ObjInit_4(NSString* __this, ::id __id);
void NSString___ObjInit_5(NSString* __this);
void NSString__init(NSString* __this);
void NSString__initWithString(NSString* __this, ::uString* aString_);
NSString* NSString__New_5(::uStatic* __this);
NSString* NSString__New_6(::uStatic* __this, ::id __id);
::uString* NSString__stringByAppendingString(NSString* __this, ::uString* aString_);

struct NSString : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4(::id __id) { NSString___ObjInit_4(this, __id); }
    void _ObjInit_5() { NSString___ObjInit_5(this); }
    void initWithString(::uString* aString_) { NSString__initWithString(this, aString_); }
    ::uString* stringByAppendingString(::uString* aString_) { return NSString__stringByAppendingString(this, aString_); }
};

}}}


#endif
