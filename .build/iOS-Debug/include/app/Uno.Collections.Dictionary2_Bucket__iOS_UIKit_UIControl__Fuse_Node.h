// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__I_O_S_U_I_KIT_U_I_CONTROL__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__I_O_S_U_I_KIT_U_I_CONTROL__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node;

struct Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node__uType : ::uStructType
{
};

Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node__uType* Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node__typeof();

struct Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node
{
    ::uStrong< ::app::iOS::UIKit::UIControl*> Key;
    ::uStrong< ::app::Fuse::Node*> Value;
    int State;
};

}}}


#endif
