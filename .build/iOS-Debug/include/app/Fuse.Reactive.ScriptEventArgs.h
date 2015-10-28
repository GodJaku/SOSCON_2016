// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_SCRIPT_EVENT_ARGS_H__
#define __APP_FUSE_REACTIVE_SCRIPT_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct ScriptEventArgs;

struct ScriptEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

ScriptEventArgs__uType* ScriptEventArgs__typeof();

::uObject* ScriptEventArgs__get_Args(ScriptEventArgs* __this);
::uString* ScriptEventArgs__get_Name(ScriptEventArgs* __this);
::app::Fuse::Node* ScriptEventArgs__get_Sender(ScriptEventArgs* __this);
void ScriptEventArgs__set_Args(ScriptEventArgs* __this, ::uObject* value);
void ScriptEventArgs__set_Name(ScriptEventArgs* __this, ::uString* value);
void ScriptEventArgs__set_Sender(ScriptEventArgs* __this, ::app::Fuse::Node* value);

struct ScriptEventArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Node*> _Sender;
    ::uStrong< ::uString*> _Name;
    ::uStrong< ::uObject*> _Args;

    ::uObject* Args() { return ScriptEventArgs__get_Args(this); }
    ::uString* Name() { return ScriptEventArgs__get_Name(this); }
    ::app::Fuse::Node* Sender() { return ScriptEventArgs__get_Sender(this); }
    void Args(::uObject* value) { ScriptEventArgs__set_Args(this, value); }
    void Name(::uString* value) { ScriptEventArgs__set_Name(this, value); }
    void Sender(::app::Fuse::Node* value) { ScriptEventArgs__set_Sender(this, value); }
};

}}}


#endif
