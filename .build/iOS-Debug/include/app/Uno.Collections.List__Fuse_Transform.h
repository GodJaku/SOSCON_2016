// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_TRANSFORM_H__

#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Transform; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Transform;

struct List__Fuse_Transform__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Transform __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Transform __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Transform __interface_2;
};

List__Fuse_Transform__uType* List__Fuse_Transform__typeof();

::uObject* List__Fuse_Transform__GetEnumerator_boxed(List__Fuse_Transform* __this);
void List__Fuse_Transform___ObjInit(List__Fuse_Transform* __this);
void List__Fuse_Transform__Add(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void List__Fuse_Transform__BoundsCheck(List__Fuse_Transform* __this, int index);
void List__Fuse_Transform__EnsureCapacity(List__Fuse_Transform* __this);
int List__Fuse_Transform__get_Count(List__Fuse_Transform* __this);
::app::Fuse::Transform* List__Fuse_Transform__get_Item(List__Fuse_Transform* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Transform List__Fuse_Transform__GetEnumerator(List__Fuse_Transform* __this);
List__Fuse_Transform* List__Fuse_Transform__New_1(::uStatic* __this);
bool List__Fuse_Transform__Remove(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void List__Fuse_Transform__RemoveAt(List__Fuse_Transform* __this, int index);
void List__Fuse_Transform__set_Item(List__Fuse_Transform* __this, int index, ::app::Fuse::Transform* value);

struct List__Fuse_Transform : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Transform__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Transform___ObjInit(this); }
    void Add(::app::Fuse::Transform* item) { List__Fuse_Transform__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Transform__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Transform__EnsureCapacity(this); }
    int Count() { return List__Fuse_Transform__get_Count(this); }
    ::app::Fuse::Transform* Item(int index) { return List__Fuse_Transform__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Transform GetEnumerator();
    bool Remove(::app::Fuse::Transform* item) { return List__Fuse_Transform__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Transform__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Transform* value) { List__Fuse_Transform__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Transform.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Transform List__Fuse_Transform::GetEnumerator() { return List__Fuse_Transform__GetEnumerator(this); }

}}}


#endif
