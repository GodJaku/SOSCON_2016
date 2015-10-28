// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableAttributedString
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSMutableAttributedString*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSMutableAttributedString__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSMutableAttributedString.h>

namespace app {
namespace iOS {
namespace Foundation {

NSMutableAttributedString__uType* NSMutableAttributedString__typeof()
{
    static ::uStaticStrong<NSMutableAttributedString__uType*> type;
    if (type != NULL) return type;

    type = (NSMutableAttributedString__uType*)::uAllocClassType(sizeof(NSMutableAttributedString__uType), "iOS.Foundation.NSMutableAttributedString", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSAttributedString__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSMutableAttributedString__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSMutableAttributedString___ObjInit_6(NSMutableAttributedString* __this)
{
    ::app::iOS::Foundation::NSAttributedString___ObjInit_4(__this);
}

}}}
