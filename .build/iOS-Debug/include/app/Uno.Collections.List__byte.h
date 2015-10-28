// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__BYTE_H__
#define __APP_UNO_COLLECTIONS_LIST__BYTE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__byte;

struct List__byte__uType : ::uClassType
{
};

List__byte__uType* List__byte__typeof();

void List__byte___ObjInit(List__byte* __this);
void List__byte__Add(List__byte* __this, ::uByte item);
void List__byte__EnsureCapacity(List__byte* __this);
List__byte* List__byte__New_1(::uStatic* __this);
::uArray* List__byte__ToArray(List__byte* __this);

struct List__byte : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__byte___ObjInit(this); }
    void Add(::uByte item) { List__byte__Add(this, item); }
    void EnsureCapacity() { List__byte__EnsureCapacity(this); }
    ::uArray* ToArray() { return List__byte__ToArray(this); }
};

}}}


#endif
