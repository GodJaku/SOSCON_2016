// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FUSE_NODE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Node__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet1_Enumerator__Fuse_Node;

struct HashSet1_Enumerator__Fuse_Node__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Node __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

HashSet1_Enumerator__Fuse_Node__uType* HashSet1_Enumerator__Fuse_Node__typeof();

void HashSet1_Enumerator__Fuse_Node___ObjInit(HashSet1_Enumerator__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source);
void HashSet1_Enumerator__Fuse_Node__Dispose(HashSet1_Enumerator__Fuse_Node* __this);
::app::Fuse::Node* HashSet1_Enumerator__Fuse_Node__get_Current(HashSet1_Enumerator__Fuse_Node* __this);
bool HashSet1_Enumerator__Fuse_Node__MoveNext(HashSet1_Enumerator__Fuse_Node* __this);
HashSet1_Enumerator__Fuse_Node HashSet1_Enumerator__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source);

struct HashSet1_Enumerator__Fuse_Node
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*> _source;
    ::uStrong< ::app::Fuse::Node*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Node__bool* source) { HashSet1_Enumerator__Fuse_Node___ObjInit(this, source); }
    void Dispose() { HashSet1_Enumerator__Fuse_Node__Dispose(this); }
    ::app::Fuse::Node* Current() { return HashSet1_Enumerator__Fuse_Node__get_Current(this); }
    bool MoveNext() { return HashSet1_Enumerator__Fuse_Node__MoveNext(this); }
};

}}}


#endif
