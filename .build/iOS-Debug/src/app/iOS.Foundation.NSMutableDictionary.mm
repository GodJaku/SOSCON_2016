// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableDictionary
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSMutableDictionary*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSMutableDictionary__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSMutableDictionary.h>
#include <app/ObjC.ID.h>
#include <app/Uno.ULong.h>

namespace app {
namespace iOS {
namespace Foundation {

NSMutableDictionary__uType* NSMutableDictionary__typeof()
{
    static ::uStaticStrong<NSMutableDictionary__uType*> type;
    if (type != NULL) return type;

    type = (NSMutableDictionary__uType*)::uAllocClassType(sizeof(NSMutableDictionary__uType), "iOS.Foundation.NSMutableDictionary", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSDictionary__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))NSMutableDictionary__init;

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSMutableDictionary__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

::id NSMutableDictionary___dictionaryWithCapacity(::uStatic* __this, ::uULong numItems_)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(::id, @selector(dictionaryWithCapacity:),
        (unsigned long)numItems_);
    return (::id)__return;
}

void NSMutableDictionary___ObjInit_7(NSMutableDictionary* __this, ::id __id)
{
    ::app::iOS::Foundation::NSDictionary___ObjInit_5(__this, __id);
}

void NSMutableDictionary__init(NSMutableDictionary* __this)
{
    uObjC_DO_INIT(@selector(init));
}

NSMutableDictionary* NSMutableDictionary__New_8(::uStatic* __this, ::id __id)
{
    NSMutableDictionary* inst = (NSMutableDictionary*)::uAllocObject(sizeof(NSMutableDictionary), NSMutableDictionary__typeof());
    inst->_ObjInit_7(__id);
    return inst;
}

void NSMutableDictionary__setObjectForKey(NSMutableDictionary* __this, ::id anObject_, ::uObject* aKey_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setObject:forKey:),
        (::id)anObject_,
        uObjC::Lifetime::GetNativeHandle((::uObject *)aKey_, ::app::iOS::Foundation::INSCopying__typeof()));
}

}}}
