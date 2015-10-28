// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_DICTIONARY_H__
#define __APP_I_O_S_FOUNDATION_N_S_DICTIONARY_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }

namespace app {
namespace iOS {
namespace Foundation {

struct NSDictionary;

struct NSDictionary__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSDictionary__uType* NSDictionary__typeof();

void NSDictionary___ObjInit_5(NSDictionary* __this, ::id __id);
::app::iOS::Foundation::NSArray* NSDictionary__allKeys(NSDictionary* __this);
::app::iOS::Foundation::NSArray* NSDictionary__get_AllKeys(NSDictionary* __this);
void NSDictionary__init(NSDictionary* __this);
NSDictionary* NSDictionary__New_6(::uStatic* __this, ::id __id);
::id NSDictionary__objectForKey(NSDictionary* __this, ::id aKey_);

struct NSDictionary : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_5(::id __id) { NSDictionary___ObjInit_5(this, __id); }
    ::app::iOS::Foundation::NSArray* allKeys() { return NSDictionary__allKeys(this); }
    ::app::iOS::Foundation::NSArray* AllKeys() { return NSDictionary__get_AllKeys(this); }
    ::id objectForKey(::id aKey_) { return NSDictionary__objectForKey(this, aKey_); }
};

}}}


#endif
