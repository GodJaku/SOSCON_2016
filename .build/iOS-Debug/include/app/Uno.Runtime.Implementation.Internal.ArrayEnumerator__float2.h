// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FLOAT2_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FLOAT2_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__float2;

struct ArrayEnumerator__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__float2__uType* ArrayEnumerator__float2__typeof();

void ArrayEnumerator__float2___ObjInit(ArrayEnumerator__float2* __this, ::uArray* source);
void ArrayEnumerator__float2__Dispose(ArrayEnumerator__float2* __this);
::app::Uno::Float2 ArrayEnumerator__float2__get_Current(ArrayEnumerator__float2* __this);
bool ArrayEnumerator__float2__MoveNext(ArrayEnumerator__float2* __this);
ArrayEnumerator__float2* ArrayEnumerator__float2__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerator__float2 : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::app::Uno::Float2 _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__float2___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__float2__Dispose(this); }
    ::app::Uno::Float2 Current() { return ArrayEnumerator__float2__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__float2__MoveNext(this); }
};

}}}}}


#endif
