#include <app/ObjC.ID.h>
#include <app/ObjC.Selector.h>

namespace app {
namespace ObjC {

// This file was generated based on '/usr/local/share/uno/Packages/ObjC/0.13.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ID__uType* ID__typeof()
{
    static ::uStaticStrong<ID__uType*> type;
    if (type != NULL) return type;

    type = (ID__uType*)::uAllocClassType(sizeof(ID__uType), "ObjC.ID", false, 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/ObjC/0.13.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Selector__uType* Selector__typeof()
{
    static ::uStaticStrong<Selector__uType*> type;
    if (type != NULL) return type;

    type = (Selector__uType*)::uAllocClassType(sizeof(Selector__uType), "ObjC.Selector", false, 0, 0, 0);

    return type;
}

}}
