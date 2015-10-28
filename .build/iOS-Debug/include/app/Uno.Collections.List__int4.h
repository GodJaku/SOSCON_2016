// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__INT4_H__
#define __APP_UNO_COLLECTIONS_LIST__INT4_H__

#include <app/Uno.Collections.ICollection__int4.h>
#include <app/Uno.Collections.IList__int4.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__int4;

struct List__int4__uType : ::uClassType
{
    ::app::Uno::Collections::IList__int4 __interface_0;
    ::app::Uno::Collections::ICollection__int4 __interface_1;
};

List__int4__uType* List__int4__typeof();

void List__int4___ObjInit(List__int4* __this);
void List__int4__Add(List__int4* __this, ::app::Uno::Int4 item);
void List__int4__BoundsCheck(List__int4* __this, int index);
void List__int4__Clear(List__int4* __this);
void List__int4__EnsureCapacity(List__int4* __this);
int List__int4__get_Count(List__int4* __this);
::app::Uno::Int4 List__int4__get_Item(List__int4* __this, int index);
List__int4* List__int4__New_1(::uStatic* __this);
void List__int4__RemoveAt(List__int4* __this, int index);
void List__int4__set_Item(List__int4* __this, int index, ::app::Uno::Int4 value);

struct List__int4 : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__int4___ObjInit(this); }
    void Add(::app::Uno::Int4 item) { List__int4__Add(this, item); }
    void BoundsCheck(int index) { List__int4__BoundsCheck(this, index); }
    void Clear() { List__int4__Clear(this); }
    void EnsureCapacity() { List__int4__EnsureCapacity(this); }
    int Count() { return List__int4__get_Count(this); }
    ::app::Uno::Int4 Item(int index) { return List__int4__get_Item(this, index); }
    void RemoveAt(int index) { List__int4__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Int4 value) { List__int4__set_Item(this, index, value); }
};

}}}


#endif
