// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_COLLECTIONS_CONCURRENT_COLLECTION1_MOD_6C76231C_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_COLLECTIONS_CONCURRENT_COLLECTION1_MOD_6C76231C_H__

#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Fuse_Animations_-a3d9dad5.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_;

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType : ::uClassType
{
};

List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType* List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof();

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster____ObjInit(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Add(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster item);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___BoundsCheck(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Clear(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___EnsureCapacity(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);
int List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Count(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);
::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index);
List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___New_1(::uStatic* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___RemoveAt(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___set_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster value);

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster____ObjInit(this); }
    void Add(::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster item) { List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Add(this, item); }
    void BoundsCheck(int index) { List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___BoundsCheck(this, index); }
    void Clear() { List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Clear(this); }
    void EnsureCapacity() { List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___EnsureCapacity(this); }
    int Count() { return List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Count(this); }
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster Item(int index) { return List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Item(this, index); }
    void RemoveAt(int index) { List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster value) { List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___set_Item(this, index, value); }
};

}}}


#endif
