// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_MUTABLE_DICTIONARY_H__
#define __APP_I_O_S_FOUNDATION_N_S_MUTABLE_DICTIONARY_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSMutableDictionary;

struct NSMutableDictionary__uType : ::app::iOS::Foundation::NSDictionary__uType
{
};

NSMutableDictionary__uType* NSMutableDictionary__typeof();

::id NSMutableDictionary___dictionaryWithCapacity(::uStatic* __this, ::uULong numItems_);
void NSMutableDictionary___ObjInit_7(NSMutableDictionary* __this, ::id __id);
void NSMutableDictionary__init(NSMutableDictionary* __this);
NSMutableDictionary* NSMutableDictionary__New_8(::uStatic* __this, ::id __id);
void NSMutableDictionary__setObjectForKey(NSMutableDictionary* __this, ::id anObject_, ::uObject* aKey_);

struct NSMutableDictionary : ::app::iOS::Foundation::NSDictionary
{
    void _ObjInit_7(::id __id) { NSMutableDictionary___ObjInit_7(this, __id); }
    void setObjectForKey(::id anObject_, ::uObject* aKey_) { NSMutableDictionary__setObjectForKey(this, anObject_, aKey_); }
};

}}}


#endif
