// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LINKED_LIST__FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFF_DF9F456A_H__
#define __APP_UNO_COLLECTIONS_LINKED_LIST__FUSE_ELEMENTS_ELEMENT_ATLAS_FRAMEBUFF_DF9F456A_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebufferPoolEntry; } } }
namespace app { namespace Uno { namespace Collections { struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry;

struct LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType : ::uClassType
{
};

LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof();

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddFirst_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node);
::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value);
void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node);
void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Clear(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
int LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Count(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_First(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Last(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this);
void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Remove_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node);
void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Count(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, int value);
void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_First(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value);
void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Last(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value);

struct LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry : ::uObject
{
    int _Count;
    ::uStrong< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _First;
    ::uStrong< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _Last;

    void _ObjInit() { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(this); }
    void AddFirst_1(::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node) { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddFirst_1(this, node); }
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* AddLast(::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value) { return LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast(this, value); }
    void AddLast_1(::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node) { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast_1(this, node); }
    void Clear() { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Clear(this); }
    int Count() { return LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Count(this); }
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* First() { return LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_First(this); }
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* Last() { return LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Last(this); }
    void Remove_1(::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node) { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Remove_1(this, node); }
    void Count(int value) { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Count(this, value); }
    void First(::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value) { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_First(this, value); }
    void Last(::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value) { LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Last(this, value); }
};

}}}


#endif
