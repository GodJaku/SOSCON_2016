// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT4_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float4; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__float4;

struct AverageMasterProperty__float4__uType : ::app::Fuse::Animations::MasterProperty__float4__uType
{
};

AverageMasterProperty__float4__uType* AverageMasterProperty__float4__typeof();

void AverageMasterProperty__float4___ObjInit_2(AverageMasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__float4* AverageMasterProperty__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__float4__OnActive(AverageMasterProperty__float4* __this);
void AverageMasterProperty__float4__OnComplete(AverageMasterProperty__float4* __this);

struct AverageMasterProperty__float4 : ::app::Fuse::Animations::MasterProperty__float4
{
    ::uStrong< ::app::Fuse::Internal::Blender__float4*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__float4___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
