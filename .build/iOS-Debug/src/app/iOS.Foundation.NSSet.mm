// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSSet
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSSet*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSSet__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSSet.h>

namespace app {
namespace iOS {
namespace Foundation {

NSSet__uType* NSSet__typeof()
{
    static ::uStaticStrong<NSSet__uType*> type;
    if (type != NULL) return type;

    type = (NSSet__uType*)::uAllocClassType(sizeof(NSSet__uType), "iOS.Foundation.NSSet", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))NSSet__init;

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSSet__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

::app::iOS::Foundation::NSArray* NSSet__allObjects(NSSet* __this)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(allObjects));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

::app::iOS::Foundation::NSArray* NSSet__get_AllObjects(NSSet* __this)
{
    return __this->allObjects();
}

void NSSet__init(NSSet* __this)
{
    uObjC_DO_INIT(@selector(init));
}

}}}
