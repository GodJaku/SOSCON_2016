// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MenuLabel.h>
#include <app/-.Relations.h>
#include <app/-.Sidebar.h>
#include <app/-.SidebarIcon.h>
#include <app/-.Stats.h>
#include <app/-.UserName.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.ImageFill.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Navigation.WhileInactive.h>
#include <app/Fuse.Navigation.WhileNavigationTrigger.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>

namespace app {

Sidebar__uType* Sidebar__typeof()
{
    static ::uStaticStrong<Sidebar__uType*> type;
    if (type != NULL) return type;

    type = (Sidebar__uType*)::uAllocClassType(sizeof(Sidebar__uType), "Sidebar", false, 6, 6, 0);

    type->SetBaseType(::app::Fuse::Controls::ScrollView__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Sidebar__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Sidebar__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Sidebar__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Sidebar__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Sidebar__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Sidebar__uType, __interface_5));

    type->SetStrongRefs(
        "browser", offsetof(Sidebar, browser),
        "chat", offsetof(Sidebar, chat),
        "feed", offsetof(Sidebar, feed),
        "setting", offsetof(Sidebar, setting),
        "stats", offsetof(Sidebar, stats),
        "user", offsetof(Sidebar, user));

    return type;
}

void Sidebar___ObjInit_5(Sidebar* __this)
{
    ::app::Fuse::Controls::ScrollView___ObjInit_4(__this);
    __this->InitializeUX();
}

void Sidebar__InitializeUX(Sidebar* __this)
{
    ::app::Fuse::Controls::StackPanel* temp = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Navigation::WhileInactive* temp1 = ::app::Fuse::Navigation::WhileInactive__New_1(NULL);
    ::app::Fuse::Animations::Move* temp2 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Animations::Move* temp3 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Animations::Move* temp4 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Animations::Move* temp5 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Animations::Move* temp6 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Animations::Move* temp7 = ::app::Fuse::Animations::Move__New_1(NULL);
    __this->user = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp8 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Circle* temp9 = ::app::Fuse::Controls::Circle__New_2(NULL);
    ::app::Fuse::Drawing::ImageFill* temp10 = ::app::Fuse::Drawing::ImageFill__New_1(NULL);
    ::app::UserName* temp11 = ::app::UserName__New_3(NULL);
    __this->stats = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::StackPanel* temp12 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Stats* temp13 = ::app::Stats__New_3(NULL);
    ::app::Relations* temp14 = ::app::Relations__New_3(NULL);
    ::app::Fuse::Controls::Rectangle* temp15 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Drawing::SolidColor* temp16 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    ::app::Fuse::Controls::StackPanel* temp17 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Stats* temp18 = ::app::Stats__New_3(NULL);
    ::app::Relations* temp19 = ::app::Relations__New_3(NULL);
    ::app::Fuse::Controls::StackPanel* temp20 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    __this->browser = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::SidebarIcon* temp21 = ::app::SidebarIcon__New_3(NULL);
    ::app::MenuLabel* temp22 = ::app::MenuLabel__New_3(NULL);
    __this->feed = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::SidebarIcon* temp23 = ::app::SidebarIcon__New_3(NULL);
    ::app::MenuLabel* temp24 = ::app::MenuLabel__New_3(NULL);
    __this->chat = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::SidebarIcon* temp25 = ::app::SidebarIcon__New_3(NULL);
    ::app::MenuLabel* temp26 = ::app::MenuLabel__New_3(NULL);
    __this->setting = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::SidebarIcon* temp27 = ::app::SidebarIcon__New_3(NULL);
    ::app::MenuLabel* temp28 = ::app::MenuLabel__New_3(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp29 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.1294118f, 0.1568628f, 0.1921569f, 1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(temp)->Children()), (::app::Fuse::Node*)__this->user);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Node*)__this->stats);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Node*)temp20);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp->Behaviors()), (::app::Fuse::Behavior*)temp1);
    ::uPtr< ::app::Fuse::Navigation::WhileInactive*>(temp1)->Threshold(0.5f);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp1->Animators()), (::app::Fuse::Animations::Animator*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp1->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp1->Animators()), (::app::Fuse::Animations::Animator*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp1->Animators()), (::app::Fuse::Animations::Animator*)temp5);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp1->Animators()), (::app::Fuse::Animations::Animator*)temp6);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp1->Animators()), (::app::Fuse::Animations::Animator*)temp7);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp2)->X(-180.0f);
    temp2->Easing(19);
    temp2->Delay_1(0.3);
    temp2->Duration(0.2);
    temp2->Target((::app::Fuse::Node*)__this->user);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp3)->X(-180.0f);
    temp3->Easing(19);
    temp3->Delay_1(0.2);
    temp3->Duration(0.2);
    temp3->Target((::app::Fuse::Node*)__this->stats);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp4)->X(-180.0f);
    temp4->Easing(19);
    temp4->Delay_1(0.15);
    temp4->Duration(0.2);
    temp4->Target((::app::Fuse::Node*)__this->browser);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp5)->X(-180.0f);
    temp5->Easing(19);
    temp5->Delay_1(0.1);
    temp5->Duration(0.2);
    temp5->Target((::app::Fuse::Node*)__this->feed);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp6)->X(-180.0f);
    temp6->Easing(19);
    temp6->Delay_1(0.05);
    temp6->Duration(0.2);
    temp6->Target((::app::Fuse::Node*)__this->chat);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp7)->X(-180.0f);
    temp7->Easing(19);
    temp7->Delay_1(0.025);
    temp7->Duration(0.2);
    temp7->Target((::app::Fuse::Node*)__this->setting);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->user)->Name(::uGetConstString("user"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->user)->Children()), (::app::Fuse::Node*)temp8);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->user)->Children()), (::app::Fuse::Node*)temp9);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->user)->Children()), (::app::Fuse::Node*)temp11);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp8)->Height(90.0f);
    ::uPtr< ::app::Fuse::Controls::Circle*>(temp9)->Width(85.0f);
    temp9->Height(85.0f);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(temp9->Fills()), (::app::Fuse::Drawing::Brush*)temp10);
    ::uPtr< ::app::Fuse::Drawing::ImageFill*>(temp10)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 1), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::UserName*>(temp11)->Value(::uGetConstString("Ja-Ku"));
    ::uPtr< ::app::Fuse::Controls::Grid*>(__this->stats)->ColumnCount(3);
    ::uPtr< ::app::Fuse::Controls::Grid*>(__this->stats)->Alignment(2);
    ::uPtr< ::app::Fuse::Controls::Grid*>(__this->stats)->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 15.0f));
    ::uPtr< ::app::Fuse::Controls::Grid*>(__this->stats)->Name(::uGetConstString("stats"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Grid*>(__this->stats)->Children()), (::app::Fuse::Node*)temp12);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Grid*>(__this->stats)->Children()), (::app::Fuse::Node*)temp15);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Grid*>(__this->stats)->Children()), (::app::Fuse::Node*)temp17);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp12)->Width(70.0f);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp12->Children()), (::app::Fuse::Node*)temp13);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp12->Children()), (::app::Fuse::Node*)temp14);
    ::uPtr< ::app::Stats*>(temp13)->Value(::uGetConstString("2,342"));
    ::uPtr< ::app::Relations*>(temp14)->Value(::uGetConstString("Followers"));
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp15)->Width(1.0f);
    temp15->Height(40.0f);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(temp15->Fills()), (::app::Fuse::Drawing::Brush*)temp16);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(temp16)->Color(::app::Uno::Float4__New_2(NULL, 0.254902f, 0.3098039f, 0.3686275f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp17)->Width(70.0f);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp17->Children()), (::app::Fuse::Node*)temp18);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp17->Children()), (::app::Fuse::Node*)temp19);
    ::uPtr< ::app::Stats*>(temp18)->Value(::uGetConstString("3,835"));
    ::uPtr< ::app::Relations*>(temp19)->Value(::uGetConstString("Following"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(temp20)->Children()), (::app::Fuse::Node*)__this->browser);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp20->Children()), (::app::Fuse::Node*)__this->feed);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp20->Children()), (::app::Fuse::Node*)__this->chat);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp20->Children()), (::app::Fuse::Node*)__this->setting);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->browser)->Name(::uGetConstString("browser"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->browser)->Children()), (::app::Fuse::Node*)temp21);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->browser)->Children()), (::app::Fuse::Node*)temp22);
    ::uPtr< ::app::SidebarIcon*>(temp21)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 2), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::MenuLabel*>(temp22)->Value(::uGetConstString("NEWS"));
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->feed)->Name(::uGetConstString("feed"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->feed)->Children()), (::app::Fuse::Node*)temp23);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->feed)->Children()), (::app::Fuse::Node*)temp24);
    ::uPtr< ::app::SidebarIcon*>(temp23)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 3), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::MenuLabel*>(temp24)->Value(::uGetConstString("FEED"));
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->chat)->Name(::uGetConstString("chat"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->chat)->Children()), (::app::Fuse::Node*)temp25);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->chat)->Children()), (::app::Fuse::Node*)temp26);
    ::uPtr< ::app::SidebarIcon*>(temp25)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 4), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::MenuLabel*>(temp26)->Value(::uGetConstString("CHAT"));
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->setting)->Name(::uGetConstString("setting"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->setting)->Children()), (::app::Fuse::Node*)temp27);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->setting)->Children()), (::app::Fuse::Node*)temp28);
    ::uPtr< ::app::SidebarIcon*>(temp27)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 5), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::MenuLabel*>(temp28)->Value(::uGetConstString("SETTING"));
    __this->Content_1((::app::Fuse::Elements::Element*)temp);
    __this->Background((::app::Fuse::Drawing::Brush*)temp29);
}

Sidebar* Sidebar__New_3(::uStatic* __this)
{
    Sidebar* inst = (Sidebar*)::uAllocObject(sizeof(Sidebar), Sidebar__typeof());
    inst->_ObjInit_5();
    return inst;
}

}
