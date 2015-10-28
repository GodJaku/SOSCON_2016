// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSBundle
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSBundle*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSBundle__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSBundle.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace Foundation {

NSBundle__uType* NSBundle__typeof()
{
    static ::uStaticStrong<NSBundle__uType*> type;
    if (type != NULL) return type;

    type = (NSBundle__uType*)::uAllocClassType(sizeof(NSBundle__uType), "iOS.Foundation.NSBundle", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

NSBundle* NSBundle___mainBundle(::uStatic* __this)
{
    ::NSBundle* __return = uObjC_SEND_MESSAGE_TO_CLASS(::NSBundle*, @selector(mainBundle));
    return (NSBundle*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSBundle__typeof());
}

::uString* NSBundle__pathForResourceOfType(NSBundle* __this, ::uString* name_, ::uString* ext_)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(pathForResource:ofType:),
        uObjC::NativeString(name_),
        uObjC::NativeString(ext_));
    return uObjC::UnoString(__return);
}

}}}
