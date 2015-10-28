// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_I_FACTORY_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_I_FACTORY_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_UX_IFactory__typeof();

struct ICollection__Uno_UX_IFactory
{
    void(*__fp_Add)(void*, ::uObject*);

    static void Add(::uObject* __this, ::uObject* item) { ((ICollection__Uno_UX_IFactory*)uGetInterfacePtr(__this, ICollection__Uno_UX_IFactory__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
