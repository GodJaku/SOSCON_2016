// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSValue
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSValue*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSValue__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSValue.h>
#include <app/ObjC.ID.h>

namespace app {
namespace iOS {
namespace Foundation {

NSValue__uType* NSValue__typeof()
{
    static ::uStaticStrong<NSValue__uType*> type;
    if (type != NULL) return type;

    type = (NSValue__uType*)::uAllocClassType(sizeof(NSValue__uType), "iOS.Foundation.NSValue", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSValue__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSValue___ObjInit_5(NSValue* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

}}}
