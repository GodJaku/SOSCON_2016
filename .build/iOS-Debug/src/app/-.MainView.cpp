// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Factory.h>
#include <app/-.MainView_Factory1.h>
#include <app/-.MainView_Factory2.h>
#include <app/-.MainView_Factory3.h>
#include <app/-.MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property.h>
#include <app/-.MainView_Fuse_Elements_Element_float_Opacity_Property.h>
#include <app/-.MainView_Fuse_Elements_Element_float_Width_Property.h>
#include <app/-.MainView_Fuse_Reactive_Each_object_Items_Property.h>
#include <app/-.MainView_Fuse_Rotation_float_Degrees_Property.h>
#include <app/-.MainView_Fuse_Translation_float_X_Property.h>
#include <app/-.MainView_Fuse_Translation_float_Y_Property.h>
#include <app/-.Sidebar.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Fuse.Android.Blitter.h>
#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
#include <app/Fuse.Animations.DiscreteSingleTrack.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.EasingTrack.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.BasicTheme.BasicStyle.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.BottomFrameBackground.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Controls.EdgeNavigator.h>
#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.Graphics.ImageElementDraw.h>
#include <app/Fuse.Controls.Graphics.LinearSliderBehavior.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.StatusBarBackground.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual.h>
#include <app/Fuse.Controls.TextEdit.TextPosition.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.Colors.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.LinearGradientDrawable.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.Elements.LimitBoxSizing.h>
#include <app/Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <app/Fuse.Elements.ShadowBoxSizing.h>
#include <app/Fuse.Elements.StandardBoxSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TransformOrigins.h>
#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Clicked.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.iOS.Blitter.h>
#include <app/Fuse.iOS.Controls.Button.h>
#include <app/Fuse.iOS.Controls.ControlProperties.h>
#include <app/Fuse.iOS.Controls.ImageCache.h>
#include <app/Fuse.iOS.FontCache.h>
#include <app/Fuse.iOS.InputDispatch.h>
#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <app/Fuse.iOS.RootView.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.iOS.Transform.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Navigation.ActivatingAnimation.h>
#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Navigation.NavigationPageProperty.h>
#include <app/Fuse.Navigation.SwipeNavigate.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.World.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.Reactive.DataBinding__object.h>
#include <app/Fuse.Reactive.Each.h>
#include <app/Fuse.Reactive.FuseJS.InterApp.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Reactive.ScriptEvents.h>
#include <app/Fuse.Reactive.ThreadWorker.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.FileImageSourceCache.h>
#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.Rotation.h>
#include <app/Fuse.Scripting.Duktape.Context.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Node.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.LayoutAnimation.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileFailed.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible.h>
#include <app/Fuse.Triggers.WhileLoading.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.CharPunctuationChecker.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Color.h>
#include <app/Uno.Data.Json.Boolean.h>
#include <app/Uno.Data.Json.Null.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.Http.HostInfoParser.h>
#include <app/Uno.Net.Http.HttpMessageCache.h>
#include <app/Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <app/Uno.Net.Http.UriScheme.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.POSIXThread.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.Constants.h>
#include <app/Uno.Time.DateTimeZone.h>
#include <app/Uno.Time.Duration.h>
#include <app/Uno.Time.LocalTime.h>
#include <app/Uno.Time.Offset.h>
#include <app/Uno.Time.Period.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__Fuse_Node.h>
#include <app/Uno.UX.Property__object.h>

namespace app {

MainView__uType* MainView__typeof()
{
    static ::uStaticStrong<MainView__uType*> type;
    if (type != NULL) return type;

    type = (MainView__uType*)::uAllocClassType(sizeof(MainView__uType), "MainView", false, 0, 20, 0);

    type->SetBaseType(::app::Fuse::App__typeof());

    type->SetStrongRefs(
        "bottomMenuRotation", offsetof(MainView, bottomMenuRotation),
        "bottomMenuRotation_Degrees_inst", offsetof(MainView, bottomMenuRotation_Degrees_inst),
        "bottomMenuTranslation", offsetof(MainView, bottomMenuTranslation),
        "bottomMenuTranslation_Y_inst", offsetof(MainView, bottomMenuTranslation_Y_inst),
        "bottomRectangle", offsetof(MainView, bottomRectangle),
        "bottomRectangle_Width_inst", offsetof(MainView, bottomRectangle_Width_inst),
        "drawyer", offsetof(MainView, drawyer),
        "EdgeNavigator", offsetof(MainView, EdgeNavigator),
        "EdgeNavigator_Active_inst", offsetof(MainView, EdgeNavigator_Active_inst),
        "mainAppTranslation", offsetof(MainView, mainAppTranslation),
        "mainAppTranslation_X_inst", offsetof(MainView, mainAppTranslation_X_inst),
        "middleRectangle", offsetof(MainView, middleRectangle),
        "middleRectangle_Opacity_inst", offsetof(MainView, middleRectangle_Opacity_inst),
        "temp_Items_inst", offsetof(MainView, temp_Items_inst),
        "topMenuRotation", offsetof(MainView, topMenuRotation),
        "topMenuRotation_Degrees_inst", offsetof(MainView, topMenuRotation_Degrees_inst),
        "topMenuTranslation", offsetof(MainView, topMenuTranslation),
        "topMenuTranslation_Y_inst", offsetof(MainView, topMenuTranslation_Y_inst),
        "topRectangle", offsetof(MainView, topRectangle),
        "topRectangle_Width_inst", offsetof(MainView, topRectangle_Width_inst));

    return type;
}

void MainView___InitTypes(::uStatic* __this)
{
    ::app::Uno::Diagnostics::Debug___TypeInit(NULL);
    ::app::Uno::Platform2::Application___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::Internal::Bootstrapper___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::Internal::NumericFormatter___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl___TypeInit(NULL);
    ::app::Uno::Time::Calendars::Era___TypeInit(NULL);
    ::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator___TypeInit(NULL);
    ::app::Uno::Time::DateTimeZone___TypeInit(NULL);
    ::app::Uno::Time::Duration___TypeInit(NULL);
    ::app::Uno::Time::LocalTime___TypeInit(NULL);
    ::app::Uno::Time::Offset___TypeInit(NULL);
    ::app::Uno::Time::Period___TypeInit(NULL);
    ::app::Uno::Time::Constants___TypeInit(NULL);
    ::app::Uno::Threading::POSIXThread___TypeInit(NULL);
    ::app::Uno::Net::Http::HttpMessageCache___TypeInit(NULL);
    ::app::Uno::Net::Http::HttpStatusReasonPhrase___TypeInit(NULL);
    ::app::Uno::Net::Http::UriScheme___TypeInit(NULL);
    ::app::Uno::Net::Http::HostInfoParser___TypeInit(NULL);
    ::app::Uno::Data::Json::Null___TypeInit(NULL);
    ::app::Uno::Data::Json::Boolean___TypeInit(NULL);
    ::app::Uno::CharPunctuationChecker___TypeInit(NULL);
    ::app::Uno::Color___TypeInit(NULL);
    ::app::Uno::EventArgs___TypeInit(NULL);
    ::app::Uno::String___TypeInit(NULL);
    ::app::Fuse::Input::Focus___TypeInit(NULL);
    ::app::Fuse::Input::Keyboard___TypeInit(NULL);
    ::app::Fuse::Input::Pointer___TypeInit(NULL);
    ::app::Fuse::Input::TextService___TypeInit(NULL);
    ::app::Fuse::Internal::Drawing::SolidRectangle___TypeInit(NULL);
    ::app::Fuse::Internal::BlenderMap___TypeInit(NULL);
    ::app::Fuse::Resources::DisposalManager___TypeInit(NULL);
    ::app::Fuse::Resources::MemoryPolicy___TypeInit(NULL);
    ::app::Fuse::Resources::ResourceRegistry___TypeInit(NULL);
    ::app::Fuse::Resources::FileImageSourceCache___TypeInit(NULL);
    ::app::Fuse::Resources::HttpImageSourceCache___TypeInit(NULL);
    ::app::Fuse::Scripting::Duktape::Context___TypeInit(NULL);
    ::app::Fuse::Scripting::NameRegistry___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat2___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat3___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat4___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterDouble___TypeInit(NULL);
    ::app::Fuse::Animations::DiscreteSingleTrack___TypeInit(NULL);
    ::app::Fuse::Animations::EasingTrack___TypeInit(NULL);
    ::app::Fuse::Animations::Mixer___TypeInit(NULL);
    ::app::Fuse::Animations::MasterTransform___TypeInit(NULL);
    ::app::Fuse::Drawing::Primitives::Circle___TypeInit(NULL);
    ::app::Fuse::Drawing::Primitives::Rectangle___TypeInit(NULL);
    ::app::Fuse::Drawing::Primitives::Wedge___TypeInit(NULL);
    ::app::Fuse::Drawing::BlendModeHelpers___TypeInit(NULL);
    ::app::Fuse::Drawing::Colors___TypeInit(NULL);
    ::app::Fuse::Drawing::Brushes___TypeInit(NULL);
    ::app::Fuse::Drawing::LinearGradient___TypeInit(NULL);
    ::app::Fuse::Drawing::LinearGradientDrawable___TypeInit(NULL);
    ::app::Fuse::Triggers::Actions::GiveFocus___TypeInit(NULL);
    ::app::Fuse::Triggers::WhileKeyboardVisible___TypeInit(NULL);
    ::app::Fuse::Triggers::WhileFailed___TypeInit(NULL);
    ::app::Fuse::Triggers::WhileLoading___TypeInit(NULL);
    ::app::Fuse::Triggers::LayoutAnimation___TypeInit(NULL);
    ::app::Fuse::Elements::Internal::ElementDraw___TypeInit(NULL);
    ::app::Fuse::Elements::Internal::Scale9Rectangle___TypeInit(NULL);
    ::app::Fuse::Elements::StandardBoxSizing___TypeInit(NULL);
    ::app::Fuse::Elements::NoImplicitMaxBoxSizing___TypeInit_1(NULL);
    ::app::Fuse::Elements::Element___TypeInit_1(NULL);
    ::app::Fuse::Elements::TransformOrigins___TypeInit(NULL);
    ::app::Fuse::Elements::LimitBoxSizing___TypeInit(NULL);
    ::app::Fuse::Elements::ShadowBoxSizing___TypeInit(NULL);
    ::app::Fuse::Elements::Cache___TypeInit(NULL);
    ::app::Fuse::Entities::Designer::PreloadedResources___TypeInit(NULL);
    ::app::Fuse::Gestures::Internal::EdgeSwiper___TypeInit(NULL);
    ::app::Fuse::Gestures::Clicker___TypeInit(NULL);
    ::app::Fuse::Gestures::Scroller___TypeInit(NULL);
    ::app::Fuse::Navigation::DirectNavigation___TypeInit_1(NULL);
    ::app::Fuse::Navigation::EdgeNavigation___TypeInit_1(NULL);
    ::app::Fuse::Navigation::Navigation___TypeInit(NULL);
    ::app::Fuse::Navigation::NavigationPageProperty___TypeInit(NULL);
    ::app::Fuse::Navigation::SwipeNavigate___TypeInit(NULL);
    ::app::Fuse::Shapes::Rectangle___TypeInit_3(NULL);
    ::app::Fuse::Shapes::Shape___TypeInit_2(NULL);
    ::app::Fuse::Controls::Graphics::DefaultTextVisual___TypeInit_1(NULL);
    ::app::Fuse::Controls::Graphics::ImageElementDraw___TypeInit(NULL);
    ::app::Fuse::Controls::Graphics::LinearSliderBehavior___TypeInit(NULL);
    ::app::Fuse::Controls::Graphics::GraphicsStyle___TypeInit(NULL);
    ::app::Fuse::Controls::TextEdit::TextEditVisual___TypeInit_1(NULL);
    ::app::Fuse::Controls::TextEdit::TextPosition___TypeInit(NULL);
    ::app::Fuse::Controls::Button___TypeInit_4(NULL);
    ::app::Fuse::Controls::Control___TypeInit_2(NULL);
    ::app::Fuse::Controls::GraphicsView___TypeInit_3(NULL);
    ::app::Fuse::Controls::Grid___TypeInit_4(NULL);
    ::app::Fuse::Controls::Image___TypeInit_4(NULL);
    ::app::Fuse::Controls::Number___TypeInit_4(NULL);
    ::app::Fuse::Controls::PageIndicator___TypeInit_5(NULL);
    ::app::Fuse::Controls::Panel___TypeInit_3(NULL);
    ::app::Fuse::Controls::PlainTextEdit___TypeInit_4(NULL);
    ::app::Fuse::Controls::RangeControl___TypeInit_4(NULL);
    ::app::Fuse::Controls::Rectangle___TypeInit_5(NULL);
    ::app::Fuse::Controls::ScrollView___TypeInit_3(NULL);
    ::app::Fuse::Controls::Shape___TypeInit_4(NULL);
    ::app::Fuse::Controls::StackPanel___TypeInit_4(NULL);
    ::app::Fuse::Controls::TextControl___TypeInit_4(NULL);
    ::app::Fuse::Controls::TextInput___TypeInit_5(NULL);
    ::app::Fuse::Controls::ToggleControl___TypeInit_4(NULL);
    ::app::Fuse::Physics::Body___TypeInit(NULL);
    ::app::Fuse::Physics::World___TypeInit(NULL);
    ::app::Fuse::BasicTheme::BasicStyle___TypeInit(NULL);
    ::app::Fuse::Layouts::DockLayout___TypeInit_1(NULL);
    ::app::Fuse::Layouts::GridLayout___TypeInit_1(NULL);
    ::app::Fuse::Layouts::Layout___TypeInit(NULL);
    ::app::Fuse::Layouts::Layouts___TypeInit(NULL);
    ::app::Fuse::Reactive::FuseJS::InterApp___TypeInit(NULL);
    ::app::Fuse::Reactive::JavaScript___TypeInit(NULL);
    ::app::Fuse::Reactive::ScriptEvents___TypeInit(NULL);
    ::app::Fuse::Reactive::ThreadWorker___TypeInit(NULL);
    ::app::Fuse::Android::Button___TypeInit_1(NULL);
    ::app::Fuse::Android::Blitter___TypeInit(NULL);
    ::app::Fuse::iOS::Controls::Button___TypeInit_1(NULL);
    ::app::Fuse::iOS::Controls::ControlProperties___TypeInit(NULL);
    ::app::Fuse::iOS::Controls::ImageCache___TypeInit(NULL);
    ::app::Fuse::iOS::NativeViews::NativeView___TypeInit(NULL);
    ::app::Fuse::iOS::InputDispatch___TypeInit(NULL);
    ::app::Fuse::iOS::FontCache___TypeInit(NULL);
    ::app::Fuse::iOS::RootView___TypeInit(NULL);
    ::app::Fuse::iOS::StatusBarConfig___TypeInit(NULL);
    ::app::Fuse::iOS::Blitter___TypeInit(NULL);
    ::app::Fuse::iOS::Transform___TypeInit(NULL);
    ::app::Fuse::Font___TypeInit(NULL);
    ::app::Fuse::RootViewport___TypeInit_1(NULL);
    ::app::Fuse::Node___TypeInit(NULL);
    ::app::Fuse::NodeBounds___TypeInit(NULL);
    ::app::Fuse::Properties___TypeInit(NULL);
    ::app::Fuse::TranslationModes___TypeInit(NULL);
    ::app::Fuse::UpdateManager___TypeInit(NULL);
    ::app::Experimental::Http::HttpLoader___TypeInit(NULL);
}

void MainView___ObjInit_3(MainView* __this)
{
    MainView___InitTypes(NULL);
    ::app::Fuse::App___ObjInit_2(__this);
    __this->InitializeUX();
}

void MainView__InitializeUX(MainView* __this)
{
    __this->mainAppTranslation = ::app::Fuse::Translation__New_1(NULL);
    __this->mainAppTranslation_X_inst = ::app::MainView_Fuse_Translation_float_X_Property__New_1(NULL, __this->mainAppTranslation);
    __this->topMenuTranslation = ::app::Fuse::Translation__New_1(NULL);
    __this->topMenuTranslation_Y_inst = ::app::MainView_Fuse_Translation_float_Y_Property__New_1(NULL, __this->topMenuTranslation);
    __this->bottomMenuTranslation = ::app::Fuse::Translation__New_1(NULL);
    __this->bottomMenuTranslation_Y_inst = ::app::MainView_Fuse_Translation_float_Y_Property__New_1(NULL, __this->bottomMenuTranslation);
    __this->middleRectangle = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    __this->middleRectangle_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->middleRectangle);
    __this->topMenuRotation = ::app::Fuse::Rotation__New_1(NULL);
    __this->topMenuRotation_Degrees_inst = ::app::MainView_Fuse_Rotation_float_Degrees_Property__New_1(NULL, __this->topMenuRotation);
    __this->bottomMenuRotation = ::app::Fuse::Rotation__New_1(NULL);
    __this->bottomMenuRotation_Degrees_inst = ::app::MainView_Fuse_Rotation_float_Degrees_Property__New_1(NULL, __this->bottomMenuRotation);
    __this->topRectangle = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    __this->topRectangle_Width_inst = ::app::MainView_Fuse_Elements_Element_float_Width_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->topRectangle);
    __this->bottomRectangle = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    __this->bottomRectangle_Width_inst = ::app::MainView_Fuse_Elements_Element_float_Width_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->bottomRectangle);
    __this->EdgeNavigator = ::app::Fuse::Controls::EdgeNavigator__New_2(NULL);
    __this->EdgeNavigator_Active_inst = ::app::MainView_Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property__New_1(NULL, __this->EdgeNavigator);
    ::app::Fuse::Reactive::Each* temp = ::app::Fuse::Reactive::Each__New_1(NULL);
    __this->temp_Items_inst = ::app::MainView_Fuse_Reactive_Each_object_Items_Property__New_1(NULL, temp);
    ::app::Fuse::Reactive::JavaScript* temp1 = ::app::Fuse::Reactive::JavaScript__New_1(NULL);
    __this->drawyer = ::app::Sidebar__New_3(NULL);
    ::app::Fuse::Navigation::ActivatingAnimation* temp2 = ::app::Fuse::Navigation::ActivatingAnimation__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp3 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->mainAppTranslation_X_inst);
    ::app::Fuse::Animations::Change__float* temp4 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->topMenuTranslation_Y_inst);
    ::app::Fuse::Animations::Change__float* temp5 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->bottomMenuTranslation_Y_inst);
    ::app::Fuse::Animations::Change__float* temp6 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->middleRectangle_Opacity_inst);
    ::app::Fuse::Animations::Change__float* temp7 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->topMenuRotation_Degrees_inst);
    ::app::Fuse::Animations::Change__float* temp8 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->bottomMenuRotation_Degrees_inst);
    ::app::Fuse::Animations::Change__float* temp9 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->topRectangle_Width_inst);
    ::app::Fuse::Animations::Change__float* temp10 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->bottomRectangle_Width_inst);
    ::app::Fuse::Controls::DockPanel* temp11 = ::app::Fuse::Controls::DockPanel__New_2(NULL);
    ::app::Fuse::Controls::StatusBarBackground* temp12 = ::app::Fuse::Controls::StatusBarBackground__New_2(NULL);
    ::app::Fuse::Controls::BottomFrameBackground* temp13 = ::app::Fuse::Controls::BottomFrameBackground__New_1(NULL);
    ::app::Fuse::Controls::StackPanel* temp14 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp15 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp16 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp17 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Set__Fuse_Node* temp18 = ::app::Fuse::Triggers::Actions::Set__Fuse_Node__New_1(NULL, (::app::Uno::UX::Property__Fuse_Node*)__this->EdgeNavigator_Active_inst);
    ::app::Fuse::Drawing::StaticSolidColor* temp19 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    ::app::Fuse::Drawing::StaticSolidColor* temp20 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    ::app::Fuse::Drawing::StaticSolidColor* temp21 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    ::app::Fuse::Controls::Text* temp22 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp23 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Rectangle* temp24 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp25 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    ::app::Fuse::Controls::ScrollView* temp26 = ::app::Fuse::Controls::ScrollView__New_2(NULL);
    ::app::Fuse::Controls::StackPanel* temp27 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::MainView_Factory* temp28 = ::app::MainView_Factory__New_2(NULL, __this);
    ::app::MainView_Factory1* temp29 = ::app::MainView_Factory1__New_2(NULL, __this);
    ::app::MainView_Factory2* temp30 = ::app::MainView_Factory2__New_2(NULL, __this);
    ::app::MainView_Factory3* temp31 = ::app::MainView_Factory3__New_2(NULL, __this);
    ::app::Fuse::Reactive::DataBinding__object* temp32 = ::app::Fuse::Reactive::DataBinding__object__New_1(NULL, (::app::Uno::UX::Property__object*)__this->temp_Items_inst, ::uGetConstString("data.responseData.feed.entries"));
    ::uPtr< ::app::Fuse::Reactive::JavaScript*>(temp1)->LineNumber(2);
    temp1->FileName(::uGetConstString("MainView.ux"));
    temp1->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 0), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::EdgeNavigator*>(__this->EdgeNavigator)->Name(::uGetConstString("EdgeNavigator"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::EdgeNavigator*>(__this->EdgeNavigator)->Children()), (::app::Fuse::Node*)__this->drawyer);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::EdgeNavigator*>(__this->EdgeNavigator)->Children()), (::app::Fuse::Node*)temp11);
    ::uPtr< ::app::Sidebar*>(__this->drawyer)->Width(200.0f);
    ::uPtr< ::app::Sidebar*>(__this->drawyer)->Name(::uGetConstString("drawyer"));
    ::app::Fuse::Navigation::EdgeNavigation__SetEdge(NULL, (::app::Fuse::Elements::Element*)__this->drawyer, 0);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Sidebar*>(__this->drawyer)->Behaviors()), (::app::Fuse::Behavior*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::ActivatingAnimation*>(temp2)->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp2->Animators()), (::app::Fuse::Animations::Animator*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp2->Animators()), (::app::Fuse::Animations::Animator*)temp5);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp2->Animators()), (::app::Fuse::Animations::Animator*)temp6);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp2->Animators()), (::app::Fuse::Animations::Animator*)temp7);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp2->Animators()), (::app::Fuse::Animations::Animator*)temp8);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp2->Animators()), (::app::Fuse::Animations::Animator*)temp9);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp2->Animators()), (::app::Fuse::Animations::Animator*)temp10);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp3)->Value(200.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp4)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp5)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp6)->Value(0.0f);
    temp6->Easing(20);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp7)->Value(45.0f);
    temp7->Easing(16);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp8)->Value(-45.0f);
    temp8->Easing(16);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp9)->Value(28.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp10)->Value(28.0f);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::DockPanel*>(temp11)->Children()), (::app::Fuse::Node*)temp12);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp11->Children()), (::app::Fuse::Node*)temp13);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp11->Children()), (::app::Fuse::Node*)temp14);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp11->Children()), (::app::Fuse::Node*)temp26);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(temp11->Transforms()), (::app::Fuse::Transform*)__this->mainAppTranslation);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp12, 2);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp13, 3);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp14, 2);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(temp14)->Children()), (::app::Fuse::Node*)temp15);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp14->Children()), (::app::Fuse::Node*)temp24);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp15)->ColumnData(::uGetConstString("auto, 1*, auto"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp15->Children()), (::app::Fuse::Node*)temp16);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp15->Children()), (::app::Fuse::Node*)temp22);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp15->Children()), (::app::Fuse::Node*)temp23);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp16)->HitTestMode(2);
    temp16->Width(32.0f);
    temp16->Height(32.0f);
    temp16->Margin(::app::Uno::Float4__New_2(NULL, 7.0f, 5.0f, 5.0f, 5.0f));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp16->Children()), (::app::Fuse::Node*)__this->topRectangle);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp16->Children()), (::app::Fuse::Node*)__this->middleRectangle);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp16->Children()), (::app::Fuse::Node*)__this->bottomRectangle);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp16->Behaviors()), (::app::Fuse::Behavior*)temp17);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp17)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp18);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__Fuse_Node*>(temp18)->Value((::app::Fuse::Node*)__this->drawyer);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->topRectangle)->Width(26.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->topRectangle)->Height(2.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->topRectangle)->Name(::uGetConstString("topRectangle"));
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->topRectangle)->Fill((::app::Fuse::Drawing::Brush*)temp19);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->topRectangle)->Transforms()), (::app::Fuse::Transform*)__this->topMenuTranslation);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->topRectangle)->Transforms()), (::app::Fuse::Transform*)__this->topMenuRotation);
    ::uPtr< ::app::Fuse::Translation*>(__this->topMenuTranslation)->Y(-9.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->middleRectangle)->Width(26.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->middleRectangle)->Height(2.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->middleRectangle)->Name(::uGetConstString("middleRectangle"));
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->middleRectangle)->Fill((::app::Fuse::Drawing::Brush*)temp20);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->bottomRectangle)->Width(26.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->bottomRectangle)->Height(2.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->bottomRectangle)->Name(::uGetConstString("bottomRectangle"));
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->bottomRectangle)->Fill((::app::Fuse::Drawing::Brush*)temp21);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->bottomRectangle)->Transforms()), (::app::Fuse::Transform*)__this->bottomMenuTranslation);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->bottomRectangle)->Transforms()), (::app::Fuse::Transform*)__this->bottomMenuRotation);
    ::uPtr< ::app::Fuse::Translation*>(__this->bottomMenuTranslation)->Y(9.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp22)->Value(::uGetConstString("NewsFeed"));
    temp22->FontSize(22.0f);
    temp22->TextAlignment(1);
    temp22->Alignment(8);
    temp22->Padding(::app::Uno::Float4__New_2(NULL, 2.0f, 2.0f, 2.0f, 2.0f));
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp23)->HitTestMode(2);
    temp23->Width(32.0f);
    temp23->Height(32.0f);
    temp23->Margin(::app::Uno::Float4__New_2(NULL, 7.0f, 5.0f, 5.0f, 5.0f));
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp24)->Height(1.0f);
    temp24->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 5.0f, 0.0f, 0.0f));
    temp24->Fill((::app::Fuse::Drawing::Brush*)temp25);
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(temp26)->Content_1((::app::Fuse::Elements::Element*)temp27);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp27)->Alignment(4);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp27->Behaviors()), (::app::Fuse::Behavior*)temp32);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp27->Behaviors()), (::app::Fuse::Behavior*)temp);
    ::app::Uno::Collections::ICollection__Uno_UX_IFactory::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Reactive::Each*>(temp)->Factories()), (::uObject*)temp28);
    ::app::Uno::Collections::ICollection__Uno_UX_IFactory::Add(::uPtr< ::uObject*>(temp->Factories()), (::uObject*)temp29);
    ::app::Uno::Collections::ICollection__Uno_UX_IFactory::Add(::uPtr< ::uObject*>(temp->Factories()), (::uObject*)temp30);
    ::app::Uno::Collections::ICollection__Uno_UX_IFactory::Add(::uPtr< ::uObject*>(temp->Factories()), (::uObject*)temp31);
    __this->RootNode((::app::Fuse::Node*)__this->EdgeNavigator);
    __this->Theme(::app::Fuse::BasicTheme::BasicTheme__get_Singleton_1(NULL));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)temp1);
}

MainView* MainView__New_2(::uStatic* __this)
{
    MainView* inst = (MainView*)::uAllocObject(sizeof(MainView), MainView__typeof());
    inst->_ObjInit_3();
    return inst;
}

}
