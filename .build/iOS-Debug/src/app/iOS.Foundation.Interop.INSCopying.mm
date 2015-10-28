// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE NSCopying
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::INSCopying__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.Interop.INSCopying.h>

namespace app {
namespace iOS {
namespace Foundation {
namespace Interop {

INSCopying__uType* INSCopying__typeof()
{
    static ::uStaticStrong<INSCopying__uType*> type;
    if (type != NULL) return type;

    type = (INSCopying__uType*)::uAllocClassType(sizeof(INSCopying__uType), "iOS.Foundation.Interop.INSCopying", false, 1, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(INSCopying__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}}
