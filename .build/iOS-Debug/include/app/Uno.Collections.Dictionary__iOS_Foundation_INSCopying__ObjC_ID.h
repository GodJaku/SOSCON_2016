// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__I_O_S_FOUNDATION_I_N_S_COPYING__OBJ_C_I_D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__I_O_S_FOUNDATION_I_N_S_COPYING__OBJ_C_I_D_H__

#include <app/Uno.Collections.Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID.h>
#include <app/Uno.Object.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__iOS_Foundation_INSCopying__ObjC_ID;

struct Dictionary__iOS_Foundation_INSCopying__ObjC_ID__uType : ::uClassType
{
};

Dictionary__iOS_Foundation_INSCopying__ObjC_ID__uType* Dictionary__iOS_Foundation_INSCopying__ObjC_ID__typeof();

void Dictionary__iOS_Foundation_INSCopying__ObjC_ID___ObjInit_1(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this);
void Dictionary__iOS_Foundation_INSCopying__ObjC_ID__Add(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this, ::uObject* key, ::id value);
int Dictionary__iOS_Foundation_INSCopying__ObjC_ID__get_Count(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this);
::app::Uno::Collections::Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID Dictionary__iOS_Foundation_INSCopying__ObjC_ID__GetEnumerator(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this);
Dictionary__iOS_Foundation_INSCopying__ObjC_ID* Dictionary__iOS_Foundation_INSCopying__ObjC_ID__New_1(::uStatic* __this);
void Dictionary__iOS_Foundation_INSCopying__ObjC_ID__Rehash(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this);

struct Dictionary__iOS_Foundation_INSCopying__ObjC_ID : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__iOS_Foundation_INSCopying__ObjC_ID___ObjInit_1(this); }
    void Add(::uObject* key, ::id value) { Dictionary__iOS_Foundation_INSCopying__ObjC_ID__Add(this, key, value); }
    int Count() { return Dictionary__iOS_Foundation_INSCopying__ObjC_ID__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID GetEnumerator();
    void Rehash() { Dictionary__iOS_Foundation_INSCopying__ObjC_ID__Rehash(this); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__iOS_Foundation_INSCopyi-9b51e9ad.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID Dictionary__iOS_Foundation_INSCopying__ObjC_ID::GetEnumerator() { return Dictionary__iOS_Foundation_INSCopying__ObjC_ID__GetEnumerator(this); }

}}}


#endif
