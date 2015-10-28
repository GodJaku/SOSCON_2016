// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE NSCopying
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::INSCopying__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.INSCopying.h>

namespace app {
namespace iOS {
namespace Foundation {

::uInterfaceType* INSCopying__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("iOS.Foundation.INSCopying");

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
