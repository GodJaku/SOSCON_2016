#include <app/Fuse.Internal.Blender__bool.h>
#include <app/Fuse.Internal.Blender__double.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.Blender__float3.h>
#include <app/Fuse.Internal.Blender__float4.h>
#include <app/Fuse.Internal.Blender__Fuse_Node.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Internal {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__bool__uType* Blender__bool__typeof()
{
    static ::uStaticStrong<Blender__bool__uType*> type;
    if (type != NULL) return type;

    type = (Blender__bool__uType*)::uAllocClassType(sizeof(Blender__bool__uType), "Fuse.Internal.Blender<bool>", false, 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__double__uType* Blender__double__typeof()
{
    static ::uStaticStrong<Blender__double__uType*> type;
    if (type != NULL) return type;

    type = (Blender__double__uType*)::uAllocClassType(sizeof(Blender__double__uType), "Fuse.Internal.Blender<double>", false, 0, 0, 0);

    return type;
}

void Blender__double___ObjInit(Blender__double* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float__uType* Blender__float__typeof()
{
    static ::uStaticStrong<Blender__float__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float__uType*)::uAllocClassType(sizeof(Blender__float__uType), "Fuse.Internal.Blender<float>", false, 0, 0, 0);

    return type;
}

void Blender__float___ObjInit(Blender__float* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float2__uType* Blender__float2__typeof()
{
    static ::uStaticStrong<Blender__float2__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float2__uType*)::uAllocClassType(sizeof(Blender__float2__uType), "Fuse.Internal.Blender<float2>", false, 0, 0, 0);

    return type;
}

void Blender__float2___ObjInit(Blender__float2* __this)
{
}

::app::Uno::Float2 Blender__float2__UnitWeight(Blender__float2* __this, ::app::Uno::Float2 v, double w)
{
    double l = double();
    ::app::Uno::Float2 unit = __this->ToUnit(v, &l);
    return __this->Weight(unit, w);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float3__uType* Blender__float3__typeof()
{
    static ::uStaticStrong<Blender__float3__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float3__uType*)::uAllocClassType(sizeof(Blender__float3__uType), "Fuse.Internal.Blender<float3>", false, 0, 0, 0);

    return type;
}

void Blender__float3___ObjInit(Blender__float3* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float4__uType* Blender__float4__typeof()
{
    static ::uStaticStrong<Blender__float4__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float4__uType*)::uAllocClassType(sizeof(Blender__float4__uType), "Fuse.Internal.Blender<float4>", false, 0, 0, 0);

    return type;
}

void Blender__float4___ObjInit(Blender__float4* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Node__uType* Blender__Fuse_Node__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Node__uType*)::uAllocClassType(sizeof(Blender__Fuse_Node__uType), "Fuse.Internal.Blender<Fuse.Node>", false, 0, 0, 0);

    return type;
}

}}}
