// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSDictionary
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSDictionary*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSDictionary__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/ObjC.ID.h>

namespace app {
namespace iOS {
namespace Foundation {

NSDictionary__uType* NSDictionary__typeof()
{
    static ::uStaticStrong<NSDictionary__uType*> type;
    if (type != NULL) return type;

    type = (NSDictionary__uType*)::uAllocClassType(sizeof(NSDictionary__uType), "iOS.Foundation.NSDictionary", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))NSDictionary__init;

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSDictionary__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSDictionary___ObjInit_5(NSDictionary* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

::app::iOS::Foundation::NSArray* NSDictionary__allKeys(NSDictionary* __this)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(allKeys));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

::app::iOS::Foundation::NSArray* NSDictionary__get_AllKeys(NSDictionary* __this)
{
    return __this->allKeys();
}

void NSDictionary__init(NSDictionary* __this)
{
    uObjC_DO_INIT(@selector(init));
}

NSDictionary* NSDictionary__New_6(::uStatic* __this, ::id __id)
{
    NSDictionary* inst = (NSDictionary*)::uAllocObject(sizeof(NSDictionary), NSDictionary__typeof());
    inst->_ObjInit_5(__id);
    return inst;
}

::id NSDictionary__objectForKey(NSDictionary* __this, ::id aKey_)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::id, @selector(objectForKey:),
        (::id)aKey_);
    return (::id)__return;
}

}}}
