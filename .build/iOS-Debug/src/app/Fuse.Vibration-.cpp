#include <app/Fuse.Node.h>
#include <app/Fuse.Vibration.Vibrate.h>
#include <app/Fuse.Vibration.Vibration.h>
#include <app/iOS.AudioToolbox.Functions.h>
#include <app/Uno.Double.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Fuse {
namespace Vibration {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Vibration/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vibrate__uType* Vibrate__typeof()
{
    static ::uStaticStrong<Vibrate__uType*> type;
    if (type != NULL) return type;

    type = (Vibrate__uType*)::uAllocClassType(sizeof(Vibrate__uType), "Fuse.Vibration.Vibrate", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Vibrate__Perform;

    return type;
}

double Vibrate__get_Duration(Vibrate* __this)
{
    return __this->_Duration;
}

void Vibrate__Perform(Vibrate* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Vibration::Vibration__Vibrate(NULL, __this->Duration());
}

void Vibrate__set_Duration(Vibrate* __this, double value)
{
    __this->_Duration = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Vibration/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vibration__uType* Vibration__typeof()
{
    static ::uStaticStrong<Vibration__uType*> type;
    if (type != NULL) return type;

    type = (Vibration__uType*)::uAllocClassType(sizeof(Vibration__uType), "Fuse.Vibration.Vibration");

    return type;
}

void Vibration__Vibrate(::uStatic* __this, double seconds)
{
    {
        ::app::iOS::AudioToolbox::Functions__AudioServicesPlayAlertSound(NULL, 4095u);
    }
}

}}}
