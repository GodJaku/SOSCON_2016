#include <app/iOS.Foundation._NSRange.h>
#include <app/iOS.Foundation.NSComparisonResult.h>
#include <app/Uno.ULong.h>

namespace app {
namespace iOS {
namespace Foundation {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

_NSRange__uType* _NSRange__typeof()
{
    static ::uStaticStrong<_NSRange__uType*> type;
    if (type != NULL) return type;

    type = (_NSRange__uType*)::uAllocStructType(sizeof(_NSRange__uType), "iOS.Foundation._NSRange", sizeof(_NSRange), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NSComparisonResult__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.Foundation.NSComparisonResult", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "NSOrderedAscending", -1LL,
        "NSOrderedSame", 0LL,
        "NSOrderedDescending", 1LL);

    return type;
}

}}}
