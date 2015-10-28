// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/iOS.Foundation.NSString.h>
#include <app/iOS.Foundation.NSStringExtensions.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace Foundation {

NSStringExtensions__uType* NSStringExtensions__typeof()
{
    static ::uStaticStrong<NSStringExtensions__uType*> type;
    if (type != NULL) return type;

    type = (NSStringExtensions__uType*)::uAllocClassType(sizeof(NSStringExtensions__uType), "iOS.Foundation.NSStringExtensions");

    return type;
}

::app::iOS::Foundation::NSString* NSStringExtensions__ToNSString(::uStatic* __this, ::uString* str)
{
    return (::app::iOS::Foundation::NSString*)::uObjC::Lifetime::GetUnoObject(::uObjC::NativeString(str), ::app::iOS::Foundation::NSString__typeof());
}

::uString* NSStringExtensions__ToUnoString(::uStatic* __this, ::app::iOS::Foundation::NSString* str)
{
    return ::uObjC::UnoString(uObjC::Lifetime::GetNativeHandle(str));
}

}}}
