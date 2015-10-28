// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_ATTRIBUTED_STRING_H__
#define __APP_I_O_S_FOUNDATION_N_S_ATTRIBUTED_STRING_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }

namespace app {
namespace iOS {
namespace Foundation {

struct NSAttributedString;

struct NSAttributedString__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

NSAttributedString__uType* NSAttributedString__typeof();

void NSAttributedString___ObjInit_4(NSAttributedString* __this);
void NSAttributedString__initWithStringAttributes(NSAttributedString* __this, ::uString* str_, ::app::iOS::Foundation::NSDictionary* attrs_);

struct NSAttributedString : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4() { NSAttributedString___ObjInit_4(this); }
    void initWithStringAttributes(::uString* str_, ::app::iOS::Foundation::NSDictionary* attrs_) { NSAttributedString__initWithStringAttributes(this, str_, attrs_); }
};

}}}


#endif
