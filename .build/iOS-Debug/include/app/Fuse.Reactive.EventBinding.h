// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_EVENT_BINDING_H__
#define __APP_FUSE_REACTIVE_EVENT_BINDING_H__

#include <app/Fuse.Reactive.Binding.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct EventBinding;

struct EventBinding__uType : ::app::Fuse::Reactive::Binding__uType
{
};

EventBinding__uType* EventBinding__typeof();

void EventBinding__NewValue(EventBinding* __this, ::uObject* obj);

struct EventBinding : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _func;
};

}}}


#endif
