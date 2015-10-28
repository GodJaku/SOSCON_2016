// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/iOS.AudioToolbox.Functions.h>
#include <app/Uno.UInt.h>
#include <AudioToolbox/AudioToolbox.h>

namespace app {
namespace iOS {
namespace AudioToolbox {

Functions__uType* Functions__typeof()
{
    static ::uStaticStrong<Functions__uType*> type;
    if (type != NULL) return type;

    type = (Functions__uType*)::uAllocClassType(sizeof(Functions__uType), "iOS.AudioToolbox.Functions");

    return type;
}

void Functions__AudioServicesPlayAlertSound(::uStatic* __this, ::uUInt inSystemSoundID)
{
    AudioServicesPlayAlertSound((UInt32)inSystemSoundID);
}

}}}
