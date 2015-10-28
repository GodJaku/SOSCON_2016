// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__I_O_S_FOUNDATION_I_N_S_COPYI_9B51E9AD_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__I_O_S_FOUNDATION_I_N_S_COPYI_9B51E9AD_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__iOS_Foundation_INSCopying__ObjC_ID; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID;

struct Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__uType* Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__typeof();

void Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID___ObjInit(Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID* __this, ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID* source);
void Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__Dispose(Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID* __this);
::app::Uno::Collections::KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__get_Current(Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID* __this);
bool Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__MoveNext(Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID* __this);
Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID* source);

struct Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID
{
    ::uStrong< ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID*> _source;
    ::app::Uno::Collections::KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID* source) { Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__iOS_Foundation_INSCopying__ObjC_ID Current() { return Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__MoveNext(this); }
};

}}}


#endif
