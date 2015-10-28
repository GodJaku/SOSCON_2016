// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableArray
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSMutableArray*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSMutableArray__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSMutableArray.h>
#include <app/ObjC.ID.h>

namespace app {
namespace iOS {
namespace Foundation {

NSMutableArray__uType* NSMutableArray__typeof()
{
    static ::uStaticStrong<NSMutableArray__uType*> type;
    if (type != NULL) return type;

    type = (NSMutableArray__uType*)::uAllocClassType(sizeof(NSMutableArray__uType), "iOS.Foundation.NSMutableArray", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSArray__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))NSMutableArray__init;

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSMutableArray__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSMutableArray___ObjInit_7(NSMutableArray* __this)
{
    ::app::iOS::Foundation::NSArray___ObjInit_4(__this);
}

void NSMutableArray__addObject(NSMutableArray* __this, ::id anObject_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(addObject:),
        (::id)anObject_);
}

void NSMutableArray__init(NSMutableArray* __this)
{
    uObjC_DO_INIT(@selector(init));
}

NSMutableArray* NSMutableArray__New_7(::uStatic* __this)
{
    NSMutableArray* inst = (NSMutableArray*)::uAllocObject(sizeof(NSMutableArray), NSMutableArray__typeof());
    inst->_ObjInit_7();
    return inst;
}

}}}
