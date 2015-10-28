// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__I_O_S_QUARTZ_CORE_C_A_SHAPE_LAYER_H__
#define __APP_UNO_COLLECTIONS_LIST__I_O_S_QUARTZ_CORE_C_A_SHAPE_LAYER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace QuartzCore { struct CAShapeLayer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__iOS_QuartzCore_CAShapeLayer;

struct List__iOS_QuartzCore_CAShapeLayer__uType : ::uClassType
{
};

List__iOS_QuartzCore_CAShapeLayer__uType* List__iOS_QuartzCore_CAShapeLayer__typeof();

void List__iOS_QuartzCore_CAShapeLayer___ObjInit(List__iOS_QuartzCore_CAShapeLayer* __this);
void List__iOS_QuartzCore_CAShapeLayer__Add(List__iOS_QuartzCore_CAShapeLayer* __this, ::app::iOS::QuartzCore::CAShapeLayer* item);
void List__iOS_QuartzCore_CAShapeLayer__BoundsCheck(List__iOS_QuartzCore_CAShapeLayer* __this, int index);
void List__iOS_QuartzCore_CAShapeLayer__EnsureCapacity(List__iOS_QuartzCore_CAShapeLayer* __this);
int List__iOS_QuartzCore_CAShapeLayer__get_Count(List__iOS_QuartzCore_CAShapeLayer* __this);
::app::iOS::QuartzCore::CAShapeLayer* List__iOS_QuartzCore_CAShapeLayer__get_Item(List__iOS_QuartzCore_CAShapeLayer* __this, int index);
List__iOS_QuartzCore_CAShapeLayer* List__iOS_QuartzCore_CAShapeLayer__New_1(::uStatic* __this);
void List__iOS_QuartzCore_CAShapeLayer__RemoveAt(List__iOS_QuartzCore_CAShapeLayer* __this, int index);
void List__iOS_QuartzCore_CAShapeLayer__set_Item(List__iOS_QuartzCore_CAShapeLayer* __this, int index, ::app::iOS::QuartzCore::CAShapeLayer* value);

struct List__iOS_QuartzCore_CAShapeLayer : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__iOS_QuartzCore_CAShapeLayer___ObjInit(this); }
    void Add(::app::iOS::QuartzCore::CAShapeLayer* item) { List__iOS_QuartzCore_CAShapeLayer__Add(this, item); }
    void BoundsCheck(int index) { List__iOS_QuartzCore_CAShapeLayer__BoundsCheck(this, index); }
    void EnsureCapacity() { List__iOS_QuartzCore_CAShapeLayer__EnsureCapacity(this); }
    int Count() { return List__iOS_QuartzCore_CAShapeLayer__get_Count(this); }
    ::app::iOS::QuartzCore::CAShapeLayer* Item(int index) { return List__iOS_QuartzCore_CAShapeLayer__get_Item(this, index); }
    void RemoveAt(int index) { List__iOS_QuartzCore_CAShapeLayer__RemoveAt(this, index); }
    void Item(int index, ::app::iOS::QuartzCore::CAShapeLayer* value) { List__iOS_QuartzCore_CAShapeLayer__set_Item(this, index, value); }
};

}}}


#endif
