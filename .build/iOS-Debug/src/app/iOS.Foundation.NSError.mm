// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSError
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSError*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSError__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSError.h>
#include <app/Uno.Int.h>

namespace app {
namespace iOS {
namespace Foundation {

NSError__uType* NSError__typeof()
{
    static ::uStaticStrong<NSError__uType*> type;
    if (type != NULL) return type;

    type = (NSError__uType*)::uAllocClassType(sizeof(NSError__uType), "iOS.Foundation.NSError", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSError__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

int NSError__code(NSError* __this)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(code));
    return (int)__return;
}

int NSError__get_Code(NSError* __this)
{
    return __this->code();
}

}}}
