// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSAttributedString
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSAttributedString*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSAttributedString__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSAttributedString.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace Foundation {

NSAttributedString__uType* NSAttributedString__typeof()
{
    static ::uStaticStrong<NSAttributedString__uType*> type;
    if (type != NULL) return type;

    type = (NSAttributedString__uType*)::uAllocClassType(sizeof(NSAttributedString__uType), "iOS.Foundation.NSAttributedString", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSAttributedString__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSAttributedString___ObjInit_4(NSAttributedString* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void NSAttributedString__initWithStringAttributes(NSAttributedString* __this, ::uString* str_, ::app::iOS::Foundation::NSDictionary* attrs_)
{
    uObjC_DO_INIT(@selector(initWithString:attributes:),
        uObjC::NativeString(str_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)attrs_));
}

}}}
