// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ENTITIES_ENTITY_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ENTITIES_ENTITY_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Entities_Entity__typeof();

struct ICollection__Fuse_Entities_Entity
{
    int(*__fp_get_Count)(void*);

    static int Count(::uObject* __this) { return ((ICollection__Fuse_Entities_Entity*)uGetInterfacePtr(__this, ICollection__Fuse_Entities_Entity__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
