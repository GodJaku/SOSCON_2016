// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__I_O_S_U_I_KIT_U_I_CONTROL__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__I_O_S_U_I_KIT_U_I_CONTROL__FUSE_NODE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__iOS_UIKit_UIControl__Fuse_Node;

struct Dictionary__iOS_UIKit_UIControl__Fuse_Node__uType : ::uClassType
{
};

Dictionary__iOS_UIKit_UIControl__Fuse_Node__uType* Dictionary__iOS_UIKit_UIControl__Fuse_Node__typeof();

void Dictionary__iOS_UIKit_UIControl__Fuse_Node___ObjInit_1(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this);
void Dictionary__iOS_UIKit_UIControl__Fuse_Node__Add(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key, ::app::Fuse::Node* value);
bool Dictionary__iOS_UIKit_UIControl__Fuse_Node__ContainsKey(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key);
::app::Fuse::Node* Dictionary__iOS_UIKit_UIControl__Fuse_Node__get_Item(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key);
Dictionary__iOS_UIKit_UIControl__Fuse_Node* Dictionary__iOS_UIKit_UIControl__Fuse_Node__New_1(::uStatic* __this);
void Dictionary__iOS_UIKit_UIControl__Fuse_Node__Rehash(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this);
bool Dictionary__iOS_UIKit_UIControl__Fuse_Node__Remove(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key);
void Dictionary__iOS_UIKit_UIControl__Fuse_Node__set_Item(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key, ::app::Fuse::Node* value);

struct Dictionary__iOS_UIKit_UIControl__Fuse_Node : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__iOS_UIKit_UIControl__Fuse_Node___ObjInit_1(this); }
    void Add(::app::iOS::UIKit::UIControl* key, ::app::Fuse::Node* value) { Dictionary__iOS_UIKit_UIControl__Fuse_Node__Add(this, key, value); }
    bool ContainsKey(::app::iOS::UIKit::UIControl* key) { return Dictionary__iOS_UIKit_UIControl__Fuse_Node__ContainsKey(this, key); }
    ::app::Fuse::Node* Item(::app::iOS::UIKit::UIControl* key) { return Dictionary__iOS_UIKit_UIControl__Fuse_Node__get_Item(this, key); }
    void Rehash() { Dictionary__iOS_UIKit_UIControl__Fuse_Node__Rehash(this); }
    bool Remove(::app::iOS::UIKit::UIControl* key) { return Dictionary__iOS_UIKit_UIControl__Fuse_Node__Remove(this, key); }
    void Item(::app::iOS::UIKit::UIControl* key, ::app::Fuse::Node* value) { Dictionary__iOS_UIKit_UIControl__Fuse_Node__set_Item(this, key, value); }
};

}}}


#endif
