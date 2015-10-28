// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Targets/CPlusPlus/Source/Uno/_main.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Xli.h>
#include <XliGL.h>
#include <XliPlatform.h>
#include <Uno/XliInterop.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.Application.h>

/**
    \addtogroup Bootstrapping
    @{
*/
Xli::Window* uXliWindowPtr;
Xli::GLContext* uXliGLContextPtr;

void uStartApp();

class uApplication : public Xli::Application
{
    Xli::Managed<Xli::GLContext> _gl;

public:
    virtual Xli::String GetInitTitle()
    {
        return "soscon_demo";
    }

    virtual void OnInit(Xli::Window* wnd)
    {
        _gl = Xli::GLContext::Create(wnd, Xli::GLContextAttributes::Default());

#ifdef XLI_GL_DESKTOP
        glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
#endif

        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        _gl->SetSwapInterval(0);
        _gl->SwapBuffers();

        // Store global references to wnd and gl
        uXliWindowPtr = wnd;
        uXliGLContextPtr = _gl;
    }

    virtual void OnLoad(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__Start(NULL);
    }

    virtual void OnUpdate(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnUpdate(NULL);
    }

    virtual void OnDraw(Xli::Window* wnd)
    {
        {
            uAutoReleasePool pool;

            if (::app::Uno::Application__get_Current(NULL) && ::app::Uno::Application__get_Current(NULL)->DrawNextFrame())
            {
                ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnDraw(NULL);
                _gl->SwapBuffers();
            }
        }

#if U_DEBUG_MEM >= 3
        static int frame = 0;
        char path[32];
        sprintf(path, "draw%d.dot", frame++);
        uDumpAllStrongRefs(path);
#endif
    }

    virtual bool OnKeyDown(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyDown(NULL, wnd, key))
            return true;

#ifdef XLI_PLATFORM_WIN32
        if (key == Xli::KeyF11)
        {
            wnd->SetFullscreen(!wnd->IsFullscreen());
            return true;
        }
#endif

        return false;
    }

    virtual bool OnKeyboardResized(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        return ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyboardResized(NULL, wnd);
    }

    virtual bool OnKeyUp(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyUp(NULL, wnd, key))
            return true;

        return false;
    }

    virtual bool OnTextInput(Xli::Window* wnd, const Xli::String& text)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTextInput(NULL, wnd, uStringFromXliString(text)))
            return true;

        return false;
    }

    virtual bool OnMouseDown(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseDown(NULL, wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseUp(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseUp(NULL, wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseMove(Xli::Window* wnd, Xli::Vector2i pos)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseMove(NULL, wnd, pos.X, pos.Y))
            return true;

        return false;
    }

    virtual bool OnMouseWheel(Xli::Window* wnd, Xli::Vector2i delta)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseWheel(NULL, wnd, (float)delta.X, (float)delta.Y, 1))
            return true;

        return false;
    }

    virtual bool OnTouchDown(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchDown(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchMove(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchMove(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchUp(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchUp(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual void OnNativeHandleChanged(Xli::Window* wnd)
    {
        _gl->MakeCurrent(wnd);
    }

    virtual void OnSizeChanged(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnWindowSizeChanged(NULL, wnd);
        Application::OnSizeChanged(wnd);
    }

    virtual bool OnClosing(Xli::Window* wnd, bool& cancel)
    {
        uAutoReleasePool pool;

        // TODO

        return false;
    }

    virtual void OnClosed(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnWindowClosed(NULL, wnd);
    }

    virtual void OnAppLowMemory(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__OnReceivedLowMemoryWarning(NULL);
    }

    virtual void OnAppTerminating(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__Terminate(NULL);
    }

    virtual void OnAppDidEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__EnterInteractive(NULL);
    }

    virtual void OnAppDidEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__EnterBackground(NULL);
    }
};

int Main(const Xli::Array<Xli::String>& args)
{
    uRuntime uno;
    int flags = Xli::WindowFlagsResizeable;

    try
    {
        uApplication app;
        Xli::Application::Run(&app, flags);
    }
    catch (const uThrowable& t)
    {
        Xli::String str = "(null)";

        if (t.Exception && t.Exception->Message())
            str = uStringToXliString(t.Exception->Message());

        Xli::Exception x(str);
        x._func = t.Function;
        x._line = t.Line;

        throw x;
    }

    return 0;
}
/** @} */

#include <app/-.MainView.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Http.LoaderConst.h>
#include <app/Fuse.Android.Blitter.h>
#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
#include <app/Fuse.Animations.DiscreteSingleTrack.h>
#include <app/Fuse.Animations.EasingTrack.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.BasicTheme.BasicStyle.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Camera.iOSCameraImpl.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.Graphics.ImageElementDraw.h>
#include <app/Fuse.Controls.Graphics.LinearSliderBehavior.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual.h>
#include <app/Fuse.Controls.TextEdit.TextPosition.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.DrawHelpers.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.LinearGradientDrawable.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlasFramebufferPool.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.Elements.LimitBoxSizing.h>
#include <app/Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <app/Fuse.Elements.ShadowBoxSizing.h>
#include <app/Fuse.Elements.StandardBoxSizing.h>
#include <app/Fuse.Elements.TransformOrigins.h>
#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Fonts.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.GraphicsTheme.h>
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
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationPageProperty.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.World.h>
#include <app/Fuse.Preview.SelectionManager.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.Reactive.Dispatcher.h>
#include <app/Fuse.Reactive.FuseJS.InterApp.h>
#include <app/Fuse.Reactive.FuseJS.Lifecycle.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Reactive.ScriptEvents.h>
#include <app/Fuse.Reactive.ThreadWorker.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.FileImageSourceCache.h>
#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Scripting.Duktape.Context.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.StyleProperty.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Triggers.LayoutAnimation.h>
#include <app/Fuse.Triggers.WhileFailed.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible.h>
#include <app/Fuse.Triggers.WhileLoading.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Application.h>
#include <app/Uno.CharPunctuationChecker.h>
#include <app/Uno.Data.Json.Boolean.h>
#include <app/Uno.Data.Json.Null.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.Http.HostInfoParser.h>
#include <app/Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <app/Uno.Net.Http.UriScheme.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBar.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.POSIXThread.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.CalendarSystem.h>
#include <app/Uno.Time.DateTimeZone.h>
#include <app/Uno.Time.Period.h>
#include <app/Uno.Time.Text.LocalDateTimePattern.h>
#include <app/Uno.Time.Text.LocalTimePattern.h>
#include <app/Uno.Time.Text.OffsetPattern.h>
#include <app/Uno.UX.Resource.h>

void uStartApp()
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::uArray* array_125;
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_128;
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    ::uArray* array_134;
    ::uArray* array_135;
    ::uArray* array_136;
    ::uArray* array_137;
    ::uArray* array_138;
    ::uArray* array_139;
    ::uArray* array_140;
    ::uArray* array_141;
    ::uArray* array_142;
    ::uArray* array_143;
    ::uArray* array_144;
    ::uArray* array_145;
    ::uArray* array_146;
    ::uArray* array_147;
    ::uArray* array_148;
    ::uArray* array_149;
    ::uArray* array_150;
    ::uArray* array_151;
    ::uArray* array_152;
    ::uArray* array_153;
    ::uArray* array_154;
    ::uArray* array_155;
    ::uArray* array_156;
    ::uArray* array_157;
    ::uArray* array_158;
    ::uArray* array_159;
    ::uArray* array_160;
    ::uArray* array_161;
    ::uArray* array_162;
    ::uArray* array_163;
    ::uArray* array_164;
    ::uArray* array_165;
    ::uArray* array_166;
    ::uArray* array_167;
    ::uArray* array_168;
    ::uArray* array_169;
    ::uArray* array_170;
    ::uArray* array_171;
    ::uArray* array_172;
    ::uArray* array_173;
    ::uArray* array_174;
    ::uArray* array_175;
    ::uArray* array_176;
    ::uArray* array_177;
    ::uArray* array_178;
    ::uArray* array_179;
    ::uArray* array_180;
    ::uArray* array_181;
    ::uArray* array_182;
    ::uArray* array_183;
    ::uArray* array_184;
    ::uArray* array_185;
    ::uArray* array_186;
    ::uArray* array_187;
    ::uArray* array_188;
    ::uArray* array_189;
    ::uArray* array_190;
    ::uArray* array_191;
    ::uArray* array_192;
    ::uArray* array_193;
    ::uArray* array_194;
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Init(NULL, 112);
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 0, ::uGetConstString("es5-b2c6d750.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 1, ::uGetConstString("profile-b44afc99.jpeg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 2, ::uGetConstString("browser-3342aab9.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 3, ::uGetConstString("feed-d8dc9943.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 4, ::uGetConstString("chat-39f9d9fd.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 5, ::uGetConstString("setting-f6c31201.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 6, ::uGetConstString("opensans-light-6be8c155.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 7, ::uGetConstString("roboto-regular-23b8b3b5.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 8, ::uGetConstString("roboto-thin-98f67383.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 9, ::uGetConstString("robotocondensed-bol-95dc539e.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 10, ::uGetConstString("robotocondensed-bol-104f3d6e.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 11, ::uGetConstString("robotocondensed-ita-b791e189.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 12, ::uGetConstString("robotocondensed-lig-8322408d.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 13, ::uGetConstString("robotocondensed-lig-d7657b1d.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 14, ::uGetConstString("robotocondensed-reg-e5d39453.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 15, ::uGetConstString("roboto-italic-63fde71a.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 16, ::uGetConstString("roboto-light-db46c4dc.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 17, ::uGetConstString("roboto-lightitalic-8e23482c.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 18, ::uGetConstString("roboto-medium-331911df.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 19, ::uGetConstString("roboto-mediumitalic-1efa86ef.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 20, ::uGetConstString("roboto-regular-c6e840e2.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 21, ::uGetConstString("roboto-thinitalic-0b091d93.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 22, ::uGetConstString("roboto-black-01d18345.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 23, ::uGetConstString("roboto-blackitalic-b795d3d5.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 24, ::uGetConstString("roboto-bold-c1fe896f.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 25, ::uGetConstString("roboto-bolditalic-f52c127f.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 26, ::uGetConstString("subscriberproxy-87277ded.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 27, ::uGetConstString("observable-51b823b8.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 28, ::uGetConstString("fetch-f7bfd899.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 29, ::uGetConstString("fetchjson-c5045991.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 30, ::uGetConstString("fusejs-4b3aad31.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 31, ::uGetConstString("es6-promise-4cfdc8a6.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 32, ::uGetConstString("window-047cd27d.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 33, ::uGetConstString("windowtimers-7839194f.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 34, ::uGetConstString("eventtarget-292fec96.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 35, ::uGetConstString("windowbase64-065b222e.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 36, ::uGetConstString("file-b0f54b11.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 37, ::uGetConstString("xmlhttprequest-fe956c1d.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 38, ::uGetConstString("fetch-a7bf3ba7.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 39, ::uGetConstString("localstorage-ab92a57d.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 40, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\n\nattribute vec2 a, b;\nattribute vec4 c;\n\nvarying vec2 g;\nvarying vec4 h;\n\nvoid main()\n{\n    g = b;\n    h = c;\n    gl_Position = d * vec4(a, float(0), float(1));\n}\n"), ::uGetConstString("uniform float e, f;\n\nuniform sampler2D i;\n\nvarying vec2 g;\nvarying vec4 h;\n\nvoid main()\n{\n    float j = smoothstep(e, f, texture2D(i, g).x);\n    if (j < 0.15) discard;\n    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n}\n"), 0, 3, (array_123 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uString*>(6) = ::uGetConstString("i"), array_123)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 41, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\n\nattribute vec2 a, c;\nattribute vec4 b;\n\nvarying vec2 e;\nvarying vec4 f;\n\nvoid main()\n{\n    e = c;\n    f = b;\n    gl_Position = d * vec4(a, float(0), float(1));\n}\n"), ::uGetConstString("uniform sampler2D g;\n\nvarying vec2 e;\nvarying vec4 f;\n\nvoid main()\n{\n    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n}\n"), 0, 3, (array_124 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_124)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 42, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 l, c;\nuniform vec2 d, e, f, g, h;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvoid main()\n{\n    m = ((((d * (false ? vec2(a.x, float(1) - a.y) : a)) - e) / f) * g) + h;\n    gl_Position = c * (l * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 i;\nuniform float j, k;\n\nuniform sampler2D n;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = (b ? vec4(float(0)) : texture2D(n, m)) * i;\n    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j) * k;\n}\n"), 1, 1, (array_125 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uString*>(12) = ::uGetConstString("n"), array_125)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 43, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\n\nattribute vec2 a;\n\nvoid main()\n{\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 c;\n\nvoid main()\n{\n    gl_FragColor = c;\n}\n"), 0, 1, (array_126 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), array_126)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 44, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 h, b;\nuniform vec2 c, d, e, i;\nuniform float j;\n\nattribute vec2 a;\n\nvarying float k;\n\nfloat m(vec2 n, vec2 o, float p){\n    vec2 q = (n * c) - d;\n    float r = dot(q, o) / p;\n    return (r - e.x) / e.y;\n}\n\nvoid main()\n{\n    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform float f, g;\n\nuniform sampler2D l;\n\nvarying float k;\n\nvoid main()\n{\n    vec4 n = texture2D(l, vec2(k, 0.5));\n    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f) * g;\n}\n"), 0, 1, (array_127 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(10) = ::uGetConstString("l"), array_127)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 45, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 u, v;\n\nvec4 x(vec2 y, mat4 z){\n    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n}\n\nvoid main()\n{\n    vec2 y = a * c;\n    vec2 z = y + d;\n    u = ((((f * (z / f)) - g) / h) * i) + j;\n    v = y;\n    gl_Position = x(z, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o, p, q;\nuniform vec2 r, s, t;\n\nuniform sampler2D w;\n\nvarying vec2 u, v;\n\nvoid main()\n{\n    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((min(dot(v, r), min(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n}\n"), 1, 1, (array_128 = ::uNewArray(::app::Uno::String__typeof(), 21), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(18) = ::uGetConstString("s"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(19) = ::uGetConstString("t"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(20) = ::uGetConstString("w"), array_128)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 46, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 u, v;\n\nvec4 x(vec2 y, mat4 z){\n    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n}\n\nvoid main()\n{\n    vec2 y = a * c;\n    vec2 z = y + d;\n    u = ((((f * (z / f)) - g) / h) * i) + j;\n    v = y;\n    gl_Position = x(z, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o, p, q;\nuniform vec2 r, s, t;\n\nuniform sampler2D w;\n\nvarying vec2 u, v;\n\nvoid main()\n{\n    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((max(dot(v, r), max(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n}\n"), 1, 1, (array_129 = ::uNewArray(::app::Uno::String__typeof(), 21), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(18) = ::uGetConstString("s"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(19) = ::uGetConstString("t"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(20) = ::uGetConstString("w"), array_129)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 47, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 r, s;\n\nvec4 u(vec2 v, mat4 w){\n    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n}\n\nvoid main()\n{\n    vec2 v = a * c;\n    vec2 w = v + d;\n    r = ((((f * (w / f)) - g) / h) * i) + j;\n    s = v;\n    gl_Position = u(w, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o, p, q;\n\nuniform sampler2D t;\n\nvarying vec2 r, s;\n\nvoid main()\n{\n    vec4 v = (b ? vec4(float(0)) : texture2D(t, r)) * k;\n    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((abs((length(s) - l) - m) - n) * o) * p), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((w.xyz * w.w) * q, w.w * q);\n}\n"), 1, 1, (array_130 = ::uNewArray(::app::Uno::String__typeof(), 18), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(17) = ::uGetConstString("t"), array_130)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 48, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 p;\n\nvec4 q(vec2 r, mat4 s){\n    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n}\n\nvoid main()\n{\n    vec2 r = a * b;\n    p = r;\n    gl_Position = q(r + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j, l;\nuniform vec2 m, n, o;\nuniform vec3 k;\n\nvarying vec2 p;\n\nvoid main()\n{\n    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(p, m), min(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n}\n"), 0, 1, (array_131 = ::uNewArray(::app::Uno::String__typeof(), 15), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), array_131)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 49, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 p;\n\nvec4 q(vec2 r, mat4 s){\n    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n}\n\nvoid main()\n{\n    vec2 r = a * b;\n    p = r;\n    gl_Position = q(r + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j, l;\nuniform vec2 m, n, o;\nuniform vec3 k;\n\nvarying vec2 p;\n\nvoid main()\n{\n    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(p, m), max(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n}\n"), 0, 1, (array_132 = ::uNewArray(::app::Uno::String__typeof(), 15), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), array_132)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 50, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    vec2 o = a * b;\n    m = o;\n    gl_Position = n(o + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j, l;\nuniform vec3 k;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = vec4(k, j * (clamp(0.5 - (((abs((length(m) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((o.xyz * o.w) * l, o.w * l);\n}\n"), 0, 1, (array_133 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_133)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 51, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, n;\nuniform mat4 d;\nuniform float o;\n\nattribute vec2 a;\n\nvarying float s;\nvarying vec2 t;\n\nvec4 v(vec2 x, mat4 y){\n    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n}\n\nfloat w(vec2 x, vec2 y, float z){\n    vec2 A = (x * e) - f;\n    float B = dot(A, y) / z;\n    return (B - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 x = a * b;\n    vec2 y = x + c;\n    s = w(y / e, n, o);\n    t = x;\n    gl_Position = v(y, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, m;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying float s;\nvarying vec2 t;\n\nvoid main()\n{\n    vec4 x = texture2D(u, vec2(s, 0.5));\n    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n}\n"), 0, 1, (array_134 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_134)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 52, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, n;\nuniform mat4 d;\nuniform float o;\n\nattribute vec2 a;\n\nvarying float s;\nvarying vec2 t;\n\nvec4 v(vec2 x, mat4 y){\n    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n}\n\nfloat w(vec2 x, vec2 y, float z){\n    vec2 A = (x * e) - f;\n    float B = dot(A, y) / z;\n    return (B - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 x = a * b;\n    vec2 y = x + c;\n    s = w(y / e, n, o);\n    t = x;\n    gl_Position = v(y, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, m;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying float s;\nvarying vec2 t;\n\nvoid main()\n{\n    vec4 x = texture2D(u, vec2(s, 0.5));\n    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n}\n"), 0, 1, (array_135 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_135)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 53, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, n;\nuniform mat4 d;\nuniform float o;\n\nattribute vec2 a;\n\nvarying float p;\nvarying vec2 q;\n\nvec4 s(vec2 u, mat4 v){\n    return vec4(((u.x * v[0].x) + (u.y * v[1].x)) + v[3].x, ((u.x * v[0].y) + (u.y * v[1].y)) + v[3].y, ((u.x * v[0].z) + (u.y * v[1].z)) + v[3].z, ((u.x * v[0].w) + (u.y * v[1].w)) + v[3].w);\n}\n\nfloat t(vec2 u, vec2 v, float w){\n    vec2 x = (u * e) - f;\n    float y = dot(x, v) / w;\n    return (y - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 u = a * b;\n    vec2 v = u + c;\n    p = t(v / e, n, o);\n    q = u;\n    gl_Position = s(v, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, m;\n\nuniform sampler2D r;\n\nvarying float p;\nvarying vec2 q;\n\nvoid main()\n{\n    vec4 u = texture2D(r, vec2(p, 0.5));\n    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((v.xyz * v.w) * m, v.w * m);\n}\n"), 0, 1, (array_136 = ::uNewArray(::app::Uno::String__typeof(), 16), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(15) = ::uGetConstString("r"), array_136)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 54, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 o;\n\nvec4 p(vec2 q, mat4 r){\n    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n}\n\nvoid main()\n{\n    vec2 q = a * b;\n    o = q;\n    gl_Position = p(q + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j;\nuniform vec2 l, m, n;\nuniform vec3 k;\n\nvarying vec2 o;\n\nvoid main()\n{\n    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n}\n"), 0, 1, (array_137 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), array_137)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 55, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 o;\n\nvec4 p(vec2 q, mat4 r){\n    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n}\n\nvoid main()\n{\n    vec2 q = a * b;\n    o = q;\n    gl_Position = p(q + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j;\nuniform vec2 l, m, n;\nuniform vec3 k;\n\nvarying vec2 o;\n\nvoid main()\n{\n    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n}\n"), 0, 1, (array_138 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), array_138)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 56, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 l;\n\nvec4 m(vec2 n, mat4 o){\n    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n}\n\nvoid main()\n{\n    vec2 n = a * b;\n    l = n;\n    gl_Position = m(n + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j;\nuniform vec3 k;\n\nvarying vec2 l;\n\nvoid main()\n{\n    vec4 n = vec4(k, j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n}\n"), 0, 1, (array_139 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), array_139)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 57, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 s, t;\n\nvec4 v(vec2 w, mat4 x){\n    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n}\n\nvoid main()\n{\n    vec2 w = a * c;\n    vec2 x = w + d;\n    s = ((((f * (x / f)) - g) / h) * i) + j;\n    t = w;\n    gl_Position = v(x, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying vec2 s, t;\n\nvoid main()\n{\n    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n}\n"), 1, 1, (array_140 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_140)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 58, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 s, t;\n\nvec4 v(vec2 w, mat4 x){\n    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n}\n\nvoid main()\n{\n    vec2 w = a * c;\n    vec2 x = w + d;\n    s = ((((f * (x / f)) - g) / h) * i) + j;\n    t = w;\n    gl_Position = v(x, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying vec2 s, t;\n\nvoid main()\n{\n    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n}\n"), 1, 1, (array_141 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_141)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 59, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 p, q;\n\nvec4 s(vec2 t, mat4 u){\n    return vec4(((t.x * u[0].x) + (t.y * u[1].x)) + u[3].x, ((t.x * u[0].y) + (t.y * u[1].y)) + u[3].y, ((t.x * u[0].z) + (t.y * u[1].z)) + u[3].z, ((t.x * u[0].w) + (t.y * u[1].w)) + u[3].w);\n}\n\nvoid main()\n{\n    vec2 t = a * c;\n    vec2 u = t + d;\n    p = ((((f * (u / f)) - g) / h) * i) + j;\n    q = t;\n    gl_Position = s(u, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o;\n\nuniform sampler2D r;\n\nvarying vec2 p, q;\n\nvoid main()\n{\n    vec4 t = (b ? vec4(float(0)) : texture2D(r, p)) * k;\n    vec4 u = vec4(t.xyz, t.w * (clamp(0.5 - (((length(q) - l) * m) * n), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((u.xyz * u.w) * o, u.w * o);\n}\n"), 1, 1, (array_142 = ::uNewArray(::app::Uno::String__typeof(), 16), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(15) = ::uGetConstString("r"), array_142)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 60, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 n;\n\nvec4 o(vec2 p, mat4 q){\n    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n}\n\nvoid main()\n{\n    vec2 p = a * b;\n    n = p;\n    gl_Position = o(p + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, j;\nuniform vec2 k, l, m;\nuniform vec3 i;\n\nvarying vec2 n;\n\nvoid main()\n{\n    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n}\n"), 0, 1, (array_143 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), array_143)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 61, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 n;\n\nvec4 o(vec2 p, mat4 q){\n    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n}\n\nvoid main()\n{\n    vec2 p = a * b;\n    n = p;\n    gl_Position = o(p + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, j;\nuniform vec2 k, l, m;\nuniform vec3 i;\n\nvarying vec2 n;\n\nvoid main()\n{\n    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n}\n"), 0, 1, (array_144 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), array_144)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 62, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 k;\n\nvec4 l(vec2 m, mat4 n){\n    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n}\n\nvoid main()\n{\n    vec2 m = a * b;\n    k = m;\n    gl_Position = l(m + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, j;\nuniform vec3 i;\n\nvarying vec2 k;\n\nvoid main()\n{\n    vec4 m = vec4(i, h * (clamp(0.5 - (((length(k) - e) * f) * g), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((m.xyz * m.w) * j, m.w * j);\n}\n"), 0, 1, (array_145 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), array_145)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 63, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, l;\nuniform mat4 d;\nuniform float m;\n\nattribute vec2 a;\n\nvarying float q;\nvarying vec2 r;\n\nvec4 t(vec2 v, mat4 w){\n    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n}\n\nfloat u(vec2 v, vec2 w, float x){\n    vec2 y = (v * e) - f;\n    float z = dot(y, w) / x;\n    return (z - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 v = a * b;\n    vec2 w = v + c;\n    q = u(w / e, l, m);\n    r = v;\n    gl_Position = t(w, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k;\nuniform vec2 n, o, p;\n\nuniform sampler2D s;\n\nvarying float q;\nvarying vec2 r;\n\nvoid main()\n{\n    vec4 v = texture2D(s, vec2(q, 0.5));\n    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n}\n"), 0, 1, (array_146 = ::uNewArray(::app::Uno::String__typeof(), 17), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(16) = ::uGetConstString("s"), array_146)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 64, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, l;\nuniform mat4 d;\nuniform float m;\n\nattribute vec2 a;\n\nvarying float q;\nvarying vec2 r;\n\nvec4 t(vec2 v, mat4 w){\n    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n}\n\nfloat u(vec2 v, vec2 w, float x){\n    vec2 y = (v * e) - f;\n    float z = dot(y, w) / x;\n    return (z - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 v = a * b;\n    vec2 w = v + c;\n    q = u(w / e, l, m);\n    r = v;\n    gl_Position = t(w, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k;\nuniform vec2 n, o, p;\n\nuniform sampler2D s;\n\nvarying float q;\nvarying vec2 r;\n\nvoid main()\n{\n    vec4 v = texture2D(s, vec2(q, 0.5));\n    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n}\n"), 0, 1, (array_147 = ::uNewArray(::app::Uno::String__typeof(), 17), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(16) = ::uGetConstString("s"), array_147)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 65, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, l;\nuniform mat4 d;\nuniform float m;\n\nattribute vec2 a;\n\nvarying float n;\nvarying vec2 o;\n\nvec4 q(vec2 s, mat4 t){\n    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n}\n\nfloat r(vec2 s, vec2 t, float u){\n    vec2 v = (s * e) - f;\n    float w = dot(v, t) / u;\n    return (w - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 s = a * b;\n    vec2 t = s + c;\n    n = r(t / e, l, m);\n    o = s;\n    gl_Position = q(t, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k;\n\nuniform sampler2D p;\n\nvarying float n;\nvarying vec2 o;\n\nvoid main()\n{\n    vec4 s = texture2D(p, vec2(n, 0.5));\n    vec4 t = vec4(s.xyz, s.w * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((t.xyz * t.w) * k, t.w * k);\n}\n"), 0, 1, (array_148 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(13) = ::uGetConstString("p"), array_148)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 66, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    vec2 o = a * b;\n    m = o;\n    gl_Position = n(o + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h;\nuniform vec2 j, k, l;\nuniform vec3 i;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n}\n"), 0, 1, (array_149 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_149)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 67, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    vec2 o = a * b;\n    m = o;\n    gl_Position = n(o + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h;\nuniform vec2 j, k, l;\nuniform vec3 i;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n}\n"), 0, 1, (array_150 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_150)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 68, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 j;\n\nvec4 k(vec2 l, mat4 m){\n    return vec4(((l.x * m[0].x) + (l.y * m[1].x)) + m[3].x, ((l.x * m[0].y) + (l.y * m[1].y)) + m[3].y, ((l.x * m[0].z) + (l.y * m[1].z)) + m[3].z, ((l.x * m[0].w) + (l.y * m[1].w)) + m[3].w);\n}\n\nvoid main()\n{\n    vec2 l = a * b;\n    j = l;\n    gl_Position = k(l + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h;\nuniform vec3 i;\n\nvarying vec2 j;\n\nvoid main()\n{\n    vec4 l = vec4(i, h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((l.xyz * l.w) * 1.0, l.w);\n}\n"), 0, 1, (array_151 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), array_151)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 69, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float f[d];\nuniform vec2 g, i, j, k, l, m;\nuniform mat4 h;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float t;\nvarying vec2 u, v, w;\n\nvec4 y(vec2 z, mat4 A){\n    return vec4(((z.x * A[0].x) + (z.y * A[1].x)) + A[3].x, ((z.x * A[0].y) + (z.y * A[1].y)) + A[3].y, ((z.x * A[0].z) + (z.y * A[1].z)) + A[3].z, ((z.x * A[0].w) + (z.y * A[1].w)) + A[3].w);\n}\n\nvoid main()\n{\n    vec2 z = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n    t = f[int(c)];\n    u = ((((i * (z / i)) - j) / k) * l) + m;\n    v = z;\n    w = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n    gl_Position = y(z, h);\n}\n"), ::uGetConstString("uniform vec4 n;\nuniform float o, p, q, r, s;\n\nuniform sampler2D x;\n\nvarying float t;\nvarying vec2 u, v, w;\n\nvoid main()\n{\n    vec4 z = (e ? vec4(float(0)) : texture2D(x, u)) * n;\n    vec4 A = vec4(z.xyz, z.w * clamp(0.5 - (((abs((distance(v, w) - t) - o) - p) * q) * r), float(0), float(1)));\n    gl_FragColor = vec4((A.xyz * A.w) * s, A.w * s);\n}\n"), 2, 3, (array_152 = ::uNewArray(::app::Uno::String__typeof(), 20), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(1) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(3) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(4) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(18) = ::uGetConstString("s"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(19) = ::uGetConstString("x"), array_152)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 70, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float o;\nvarying vec2 p, q;\n\nvec4 r(vec2 s, mat4 t){\n    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n}\n\nvoid main()\n{\n    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    o = e[int(c)];\n    p = s;\n    q = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = r(s, g);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, n;\nuniform vec3 m;\n\nvarying float o;\nvarying vec2 p, q;\n\nvoid main()\n{\n    vec4 s = vec4(m, l * clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1)));\n    gl_FragColor = vec4((s.xyz * s.w) * n, s.w * n);\n}\n"), 1, 3, (array_153 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), array_153)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 71, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d], q;\nuniform vec2 f, h, i, j, p;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float r, s;\nvarying vec2 t, u;\n\nvec4 w(vec2 y, mat4 z){\n    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n}\n\nfloat x(vec2 y, vec2 z, float A){\n    vec2 B = (y * h) - i;\n    float C = dot(B, z) / A;\n    return (C - j.x) / j.y;\n}\n\nvoid main()\n{\n    vec2 y = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    r = e[int(c)];\n    s = x(y / h, p, q);\n    t = y;\n    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = w(y, g);\n}\n"), ::uGetConstString("uniform float k, l, m, n, o;\n\nuniform sampler2D v;\n\nvarying float r, s;\nvarying vec2 t, u;\n\nvoid main()\n{\n    vec4 y = texture2D(v, vec2(s, 0.5));\n    vec4 z = vec4(y.xyz, y.w * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1)));\n    gl_FragColor = vec4((z.xyz * z.w) * o, z.w * o);\n}\n"), 1, 3, (array_154 = ::uNewArray(::app::Uno::String__typeof(), 18), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(17) = ::uGetConstString("v"), array_154)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 72, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float n;\nvarying vec2 o, p;\n\nvec4 q(vec2 r, mat4 s){\n    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n}\n\nvoid main()\n{\n    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    n = e[int(c)];\n    o = r;\n    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = q(r, g);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l;\nuniform vec3 m;\n\nvarying float n;\nvarying vec2 o, p;\n\nvoid main()\n{\n    vec4 r = vec4(m, l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1)));\n    gl_FragColor = vec4((r.xyz * r.w) * 1.0, r.w);\n}\n"), 1, 3, (array_155 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), array_155)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 73, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float f[d];\nuniform vec2 g, i, j, k, l, m;\nuniform mat4 h;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float r;\nvarying vec2 s, t, u;\n\nvec4 w(vec2 x, mat4 y){\n    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n}\n\nvoid main()\n{\n    vec2 x = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n    r = f[int(c)];\n    s = ((((i * (x / i)) - j) / k) * l) + m;\n    t = x;\n    u = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n    gl_Position = w(x, h);\n}\n"), ::uGetConstString("uniform vec4 n;\nuniform float o, p, q;\n\nuniform sampler2D v;\n\nvarying float r;\nvarying vec2 s, t, u;\n\nvoid main()\n{\n    vec4 x = (e ? vec4(float(0)) : texture2D(v, s)) * n;\n    vec4 y = vec4(x.xyz, x.w * clamp(0.5 - (((distance(t, u) - r) * o) * p), float(0), float(1)));\n    gl_FragColor = vec4((y.xyz * y.w) * q, y.w * q);\n}\n"), 2, 3, (array_156 = ::uNewArray(::app::Uno::String__typeof(), 18), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(1) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(3) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(4) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(17) = ::uGetConstString("v"), array_156)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 74, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float m;\nvarying vec2 n, o;\n\nvec4 p(vec2 q, mat4 r){\n    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n}\n\nvoid main()\n{\n    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    m = e[int(c)];\n    n = q;\n    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = p(q, g);\n}\n"), ::uGetConstString("uniform float h, i, j, l;\nuniform vec3 k;\n\nvarying float m;\nvarying vec2 n, o;\n\nvoid main()\n{\n    vec4 q = vec4(k, j * clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1)));\n    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n}\n"), 1, 3, (array_157 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_157)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 75, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d], o;\nuniform vec2 f, h, i, j, n;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float p, q;\nvarying vec2 r, s;\n\nvec4 u(vec2 w, mat4 x){\n    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n}\n\nfloat v(vec2 w, vec2 x, float y){\n    vec2 z = (w * h) - i;\n    float A = dot(z, x) / y;\n    return (A - j.x) / j.y;\n}\n\nvoid main()\n{\n    vec2 w = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    p = e[int(c)];\n    q = v(w / h, n, o);\n    r = w;\n    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = u(w, g);\n}\n"), ::uGetConstString("uniform float k, l, m;\n\nuniform sampler2D t;\n\nvarying float p, q;\nvarying vec2 r, s;\n\nvoid main()\n{\n    vec4 w = texture2D(t, vec2(q, 0.5));\n    vec4 x = vec4(w.xyz, w.w * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1)));\n    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n}\n"), 1, 3, (array_158 = ::uNewArray(::app::Uno::String__typeof(), 16), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(15) = ::uGetConstString("t"), array_158)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 76, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float l;\nvarying vec2 m, n;\n\nvec4 o(vec2 p, mat4 q){\n    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n}\n\nvoid main()\n{\n    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    l = e[int(c)];\n    m = p;\n    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = o(p, g);\n}\n"), ::uGetConstString("uniform float h, i, j;\nuniform vec3 k;\n\nvarying float l;\nvarying vec2 m, n;\n\nvoid main()\n{\n    vec4 p = vec4(k, j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1)));\n    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n}\n"), 1, 3, (array_159 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), array_159)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 77, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = a;\n    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n}\n"), ::uGetConstString("uniform float d[b], e;\nuniform vec4 f[c];\n\nvarying vec2 g;\n\nvec4 h(vec2 i){\n    float j = d[0] + (e * i.x);\n    vec4 k = f[0];\n\n    for (int l = 0; l < (b - 1); l++)\n    {\n        float m = d[l];\n        float n = d[l + 1];\n        vec4 o = f[l + 1];\n        k = mix(k, o, smoothstep(m, n, j));\n    }\n\n    return k;\n}\n\nvoid main()\n{\n    gl_FragColor = h(g);\n}\n"), 2, 1, (array_160 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), array_160)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 78, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\nuniform vec2 d, e, f, g, h;\n\nattribute vec2 a;\n\nvarying vec2 k;\n\nvec4 m(vec2 n, mat4 o){\n    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n}\n\nvoid main()\n{\n    k = ((((d * (a / d)) - e) / f) * g) + h;\n    gl_Position = m(a, c);\n}\n"), ::uGetConstString("uniform vec4 i;\nuniform float j;\n\nuniform sampler2D l;\n\nvarying vec2 k;\n\nvoid main()\n{\n    vec4 n = (b ? vec4(float(0)) : texture2D(l, k)) * i;\n    gl_FragColor = vec4((n.xyz * n.w) * j, n.w * j);\n}\n"), 1, 1, (array_161 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(10) = ::uGetConstString("l"), array_161)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 79, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\n\nattribute vec2 a;\n\nvec4 d(vec2 e, mat4 f){\n    return vec4(((e.x * f[0].x) + (e.y * f[1].x)) + f[3].x, ((e.x * f[0].y) + (e.y * f[1].y)) + f[3].y, ((e.x * f[0].z) + (e.y * f[1].z)) + f[3].z, ((e.x * f[0].w) + (e.y * f[1].w)) + f[3].w);\n}\n\nvoid main()\n{\n    gl_Position = d(a, b);\n}\n"), ::uGetConstString("uniform vec4 c;\n\nvoid main()\n{\n    gl_FragColor = c;\n}\n"), 0, 1, (array_162 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_162)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 80, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec2 c, d, e, g;\nuniform float h;\n\nattribute vec2 a;\n\nvarying float i;\n\nvec4 k(vec2 m, mat4 n){\n    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n}\n\nfloat l(vec2 m, vec2 n, float o){\n    vec2 p = (m * c) - d;\n    float q = dot(p, n) / o;\n    return (q - e.x) / e.y;\n}\n\nvoid main()\n{\n    i = l(a / c, g, h);\n    gl_Position = k(a, b);\n}\n"), ::uGetConstString("uniform float f;\n\nuniform sampler2D j;\n\nvarying float i;\n\nvoid main()\n{\n    vec4 m = texture2D(j, vec2(i, 0.5));\n    gl_FragColor = vec4((m.xyz * m.w) * f, m.w * f);\n}\n"), 0, 1, (array_163 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(8) = ::uGetConstString("j"), array_163)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 81, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\nuniform vec2 d, e, f, g, h;\n\nattribute vec4 a;\n\nvarying vec4 k;\nvarying vec2 l;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    k = vec4(float(1), float(1), float(1), a.zw.x);\n    l = ((((d * (a.xy / d)) - e) / f) * g) + h;\n    gl_Position = n(a.xy, c);\n}\n"), ::uGetConstString("uniform vec4 i;\nuniform float j;\n\nuniform sampler2D m;\n\nvarying vec4 k;\nvarying vec2 l;\n\nvoid main()\n{\n    vec4 o = ((b ? vec4(float(0)) : texture2D(m, l)) * i) * k;\n    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n}\n"), 1, 1, (array_164 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(10) = ::uGetConstString("m"), array_164)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 82, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec4 c;\nuniform float d;\n\nattribute vec4 a;\n\nvarying vec4 e;\n\nvec4 f(vec2 g, mat4 h){\n    return vec4(((g.x * h[0].x) + (g.y * h[1].x)) + h[3].x, ((g.x * h[0].y) + (g.y * h[1].y)) + h[3].y, ((g.x * h[0].z) + (g.y * h[1].z)) + h[3].z, ((g.x * h[0].w) + (g.y * h[1].w)) + h[3].w);\n}\n\nvoid main()\n{\n    vec4 g = c * vec4(float(1), float(1), float(1), a.zw.x);\n    e = vec4((g.xyz * g.w) * d, g.w * d);\n    gl_Position = f(a.xy, b);\n}\n"), ::uGetConstString("varying vec4 e;\n\nvoid main()\n{\n    gl_FragColor = e;\n}\n"), 0, 1, (array_165 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_165)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_165)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_165)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_165)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), array_165)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 83, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec2 c, d, e, g;\nuniform float h;\n\nattribute vec4 a;\n\nvarying vec4 i;\nvarying float j;\n\nvec4 l(vec2 n, mat4 o){\n    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n}\n\nfloat m(vec2 n, vec2 o, float p){\n    vec2 q = (n * c) - d;\n    float r = dot(q, o) / p;\n    return (r - e.x) / e.y;\n}\n\nvoid main()\n{\n    i = vec4(float(1), float(1), float(1), a.zw.x);\n    j = m(a.xy / c, g, h);\n    gl_Position = l(a.xy, b);\n}\n"), ::uGetConstString("uniform float f;\n\nuniform sampler2D k;\n\nvarying vec4 i;\nvarying float j;\n\nvoid main()\n{\n    vec4 n = texture2D(k, vec2(j, 0.5)) * i;\n    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f);\n}\n"), 0, 1, (array_166 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(8) = ::uGetConstString("k"), array_166)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 84, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec4 c;\n\nattribute vec4 a;\n\nvarying vec4 d;\n\nvec4 e(vec2 f, mat4 g){\n    return vec4(((f.x * g[0].x) + (f.y * g[1].x)) + g[3].x, ((f.x * g[0].y) + (f.y * g[1].y)) + g[3].y, ((f.x * g[0].z) + (f.y * g[1].z)) + g[3].z, ((f.x * g[0].w) + (f.y * g[1].w)) + g[3].w);\n}\n\nvoid main()\n{\n    vec4 f = c * vec4(float(1), float(1), float(1), a.zw.x);\n    d = vec4((f.xyz * f.w) * 1.0, f.w);\n    gl_Position = e(a.xy, b);\n}\n"), ::uGetConstString("varying vec4 d;\n\nvoid main()\n{\n    gl_FragColor = d;\n}\n"), 0, 1, (array_167 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_167)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 85, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float c, d, e, f, g, h, k, l, m, n;\nuniform mat4 i, j;\nuniform vec2 o;\n\nattribute vec3 a, b;\n\nvarying vec2 q;\n\nvoid main()\n{\n    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n}\n"), ::uGetConstString("uniform vec4 p;\n\nuniform sampler2D r;\n\nvarying vec2 q;\n\nvoid main()\n{\n    gl_FragColor = texture2D(r, q) * p;\n}\n"), 0, 2, (array_168 = ::uNewArray(::app::Uno::String__typeof(), 17), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(16) = ::uGetConstString("r"), array_168)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 86, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b;\nuniform mat4 c, d;\n\nattribute vec2 a;\n\nvarying vec2 f;\n\nvoid main()\n{\n    f = vec2(a.x, 1.0 - a.y);\n    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n}\n"), ::uGetConstString("uniform float e;\n\nuniform sampler2D g;\n\nvarying vec2 f;\n\nvoid main()\n{\n    vec4 h = texture2D(g, f);\n    gl_FragColor = vec4(h.xyz * e, h.w * e);\n}\n"), 0, 1, (array_169 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(5) = ::uGetConstString("g"), array_169)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 87, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\n\nattribute vec3 a;\nattribute vec2 b;\n\nvarying float d;\nvarying vec2 e;\n\nvoid main()\n{\n    d = a.z;\n    e = vec2(b.x, 1.0 - b.y);\n    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n}\n"), ::uGetConstString("uniform sampler2D f;\n\nvarying float d;\nvarying vec2 e;\n\nvoid main()\n{\n    gl_FragColor = texture2D(f, e) * d;\n}\n"), 0, 2, (array_170 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_170)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_170)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_170)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_170)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), array_170)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 88, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d;\n\nvoid main()\n{\n    d = false ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D e;\n\nvarying vec2 d;\n\nvoid main()\n{\n    gl_FragColor = texture2D(e, d);\n}\n"), 0, 1, (array_171 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(3) = ::uGetConstString("e"), array_171)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 89, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d;\n\nvoid main()\n{\n    d = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D e;\n\nvarying vec2 d;\n\nvoid main()\n{\n    vec4 f = texture2D(e, d);\n    gl_FragColor = vec4(f.xyz / f.w, f.w);\n}\n"), 0, 1, (array_172 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(3) = ::uGetConstString("e"), array_172)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 90, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\n\nattribute vec2 a;\n\nvarying vec2 e;\n\nvoid main()\n{\n    e = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform float c;\n\nuniform sampler2D f;\n\nvarying vec2 e;\n\nvoid main()\n{\n    vec4 g = texture2D(f, e);\n    vec4 h = vec4(g.xyz / g.w, g.w);\n    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n}\n"), 0, 1, (array_173 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(4) = ::uGetConstString("f"), array_173)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 91, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 e, b;\n\nattribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec3 d;\nuniform float f, c;\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvoid main()\n{\n    gl_FragColor = vec4(d, clamp(texture2D(h, g).w * f, float(0), float(1)) * c);\n}\n"), 0, 1, (array_174 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_174)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 92, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 b;\n\nvoid main()\n{\n    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    b = (d.xy * 0.5) + 0.5;\n    gl_Position = vec4(d, float(1));\n}\n"), ::uGetConstString("uniform sampler2D c;\n\nvarying vec2 b;\n\nvoid main()\n{\n    gl_FragColor = texture2D(c, b);\n}\n"), 0, 1, (array_175 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_175)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_175)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), array_175)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 93, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, e, f, g;\n\nattribute vec2 a;\n\nvarying vec2 h, i, j, k, l;\n\nvoid main()\n{\n    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 o = (n.xy * 0.5) + 0.5;\n    h = o;\n    i = o + c;\n    j = o + e;\n    k = o + f;\n    l = o + g;\n    gl_Position = vec4(n, float(1));\n}\n"), ::uGetConstString("uniform float b, d;\n\nuniform sampler2D m;\n\nvarying vec2 h, i, j, k, l;\n\nvoid main()\n{\n    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n}\n"), 0, 1, (array_176 = ::uNewArray(::app::Uno::String__typeof(), 8), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(7) = ::uGetConstString("m"), array_176)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 94, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, e, f, h, i, j;\n\nattribute vec2 a;\n\nvarying vec2 k, l, m, n, o, p, q, r, s;\n\nvoid main()\n{\n    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 v = (u.xy * 0.5) + 0.5;\n    k = v;\n    l = v + c;\n    m = v - c;\n    n = v + e;\n    o = v - e;\n    p = v + f;\n    q = v + h;\n    r = v + i;\n    s = v + j;\n    gl_Position = vec4(u, float(1));\n}\n"), ::uGetConstString("uniform float b, d, g;\n\nuniform sampler2D t;\n\nvarying vec2 k, l, m, n, o, p, q, r, s;\n\nvoid main()\n{\n    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n}\n"), 0, 1, (array_177 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(10) = ::uGetConstString("t"), array_177)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 95, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    g = (j.xy * 0.5) + 0.5;\n    gl_Position = vec4(j, float(1));\n}\n"), ::uGetConstString("uniform float e[b];\nuniform vec2 f[d];\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvec4 i(vec2 j){\n    vec4 k = texture2D(h, j) * e[0];\n\n    for (int l = 0; l < c; ++l)\n    {\n        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n    }\n\n    return k;\n}\n\nvoid main()\n{\n    gl_FragColor = i(g);\n}\n"), 3, 1, (array_178 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(2) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_178)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 96, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 m, b;\nuniform vec2 g, h;\nuniform mat2 i;\n\nattribute vec2 a;\n\nvarying vec2 n, o, p;\n\nvoid main()\n{\n    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n    vec2 s = (r * g) + h;\n    n = r;\n    o = i * s;\n    p = s;\n    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform float c, d, e, f, k, l;\nuniform mat2 j;\n\nuniform sampler2D q;\n\nvarying vec2 n, o, p;\n\nvoid main()\n{\n    vec4 r = texture2D(q, n);\n    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n}\n"), 0, 1, (array_179 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(13) = ::uGetConstString("q"), array_179)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 97, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n    d = h;\n    e = vec2(h.x, float(1) - h.y);\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D f, g;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec4 h = texture2D(f, d);\n    vec4 i = vec4(h.xyz / h.w, h.w);\n    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).w);\n}\n"), 0, 1, (array_180 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_180)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 98, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n    d = h;\n    e = vec2(h.x, float(1) - h.y);\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D f, g;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec4 h = texture2D(f, d);\n    vec4 i = vec4(h.xyz / h.w, h.w);\n    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).x);\n}\n"), 0, 1, (array_181 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_181)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 99, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n    d = h;\n    e = vec2(h.x, float(1) - h.y);\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D f, g;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec4 h = texture2D(f, d);\n    vec4 i = vec4(h.xyz / h.w, h.w);\n    vec4 j = texture2D(g, e);\n    gl_FragColor = vec4(i.xyz * j.xyz, i.w * j.w);\n}\n"), 0, 1, (array_182 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_182)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 100, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\n\nattribute vec2 a;\n\nvarying vec2 d, e, f, g;\n\nvoid main()\n{\n    vec3 i = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 j = (i.xy * 0.5) + 0.5;\n    d = j + b;\n    e = j - b;\n    f = j + c;\n    g = j - c;\n    gl_Position = vec4(i, float(1));\n}\n"), ::uGetConstString("uniform sampler2D h;\n\nvarying vec2 d, e, f, g;\n\nvoid main()\n{\n    gl_FragColor = (((texture2D(h, d) + texture2D(h, e)) + texture2D(h, f)) + texture2D(h, g)) * 0.25;\n}\n"), 0, 1, (array_183 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(3) = ::uGetConstString("h"), array_183)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 101, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, d, e;\n\nattribute vec2 a;\n\nvarying vec2 i, j, k, l, m;\n\nvoid main()\n{\n    vec2 o = vec2(a.x, 1.0 - a.y);\n    vec2 p = vec2(o.x, 1.0 - o.y);\n    i = p + b;\n    j = p + c;\n    k = p + d;\n    l = p + e;\n    m = p;\n    gl_Position = vec4(vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0)), float(1));\n}\n"), ::uGetConstString("uniform float f;\nuniform vec4 g, h;\n\nuniform sampler2D n;\n\nvarying vec2 i, j, k, l, m;\n\nvoid main()\n{\n    vec3 o = texture2D(n, m).xyz;\n    float p = min(1.0, (((length(texture2D(n, i).xyz - o) + length(texture2D(n, j).xyz - o)) + length(texture2D(n, k).xyz - o)) + length(texture2D(n, l).xyz - o)) * f);\n    gl_FragColor = (g * (1.0 - p)) + (h * p);\n}\n"), 0, 1, (array_184 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(8) = ::uGetConstString("n"), array_184)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 102, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 i[16], q, m[16];\nuniform vec2 j, k;\n\nattribute vec3 a, e;\nattribute float b;\nattribute vec2 c;\nattribute vec4 d;\n\nvarying vec3 r, s, t, v;\nvarying vec2 u;\n\nmat3 z(mat3 A){\n    return mat3(A[0].x, A[1].x, A[2].x, A[0].y, A[1].y, A[2].y, A[0].z, A[1].z, A[2].z);\n}\n\nvoid main()\n{\n    mat3 A = z(mat3(m[int(b)][0].xyz, m[int(b)][1].xyz, m[int(b)][2].xyz));\n    r = A * d.xyz;\n    s = A * (cross(d.xyz, e) * d.w);\n    t = A * e;\n    u = (c * j) + k;\n    v = (i[int(b)] * vec4(a, 1.)).xyz;\n    gl_Position = (q * i[int(b)]) * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec3 l, n, o;\nuniform float p;\n\nuniform sampler2D w, x, y;\n\nvarying vec3 r, s, t, v;\nvarying vec2 u;\n\nvoid main()\n{\n    vec3 A = l * (f ? texture2D(w, u) : vec4(float(1))).xyz;\n    vec3 B = mat3(normalize(r), normalize(s), normalize(t)) * (g ? normalize((texture2D(x, u).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n    vec3 C = normalize(vec3(float(100), float(0), float(100)));\n    gl_FragColor = vec4(((A * vec3(0.5)) + ((A * max(0.0, dot(normalize(B), C))) * vec3(float(1)))) + (((n * (h ? texture2D(y, u) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(v - o, B)), C)), p)) * vec3(float(1))), 1.0);\n}\n"), 3, 5, (array_185 = ::uNewArray(::app::Uno::String__typeof(), 20), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(0) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(1) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(2) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(4) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(5) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(6) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(7) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(17) = ::uGetConstString("w"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(18) = ::uGetConstString("x"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(19) = ::uGetConstString("y"), array_185)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 103, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 o, l, p;\nuniform vec2 h, i;\n\nattribute vec3 a, d;\nattribute vec2 b;\nattribute vec4 c;\n\nvarying vec3 q, r, s, u;\nvarying vec2 t;\n\nvoid main()\n{\n    q = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * c.xyz;\n    r = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * (cross(c.xyz, d) * c.w);\n    s = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * d;\n    t = (b * h) + i;\n    u = (l * vec4(a, 1.)).xyz;\n    gl_Position = o * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec3 j, k, m;\nuniform float n;\n\nuniform sampler2D v, w, x;\n\nvarying vec3 q, r, s, u;\nvarying vec2 t;\n\nvoid main()\n{\n    vec3 y = j * (e ? texture2D(v, t) : vec4(float(1))).xyz;\n    vec3 z = mat3(normalize(q), normalize(r), normalize(s)) * (f ? normalize((texture2D(w, t).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n    vec3 A = normalize(vec3(float(100), float(0), float(100)));\n    gl_FragColor = vec4(((y * vec3(0.5)) + ((y * max(0.0, dot(normalize(z), A))) * vec3(float(1)))) + (((k * (g ? texture2D(x, t) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(u - m, z)), A)), n)) * vec3(float(1))), 1.0);\n}\n"), 3, 4, (array_186 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(0) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(1) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(2) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(4) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(5) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(6) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(16) = ::uGetConstString("v"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(17) = ::uGetConstString("w"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(18) = ::uGetConstString("x"), array_186)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 104, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\n\nattribute vec3 a;\n\nvoid main()\n{\n    gl_Position = b * vec4(a, 1.);\n}\n"), ::uGetConstString("void main()\n{\n    gl_FragColor = vec4(0.8, 0.85, 1.0, 1.0);\n}\n"), 0, 1, (array_187 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), array_187)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 105, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\n\nattribute vec3 a;\n\nvoid main()\n{\n    gl_Position = c * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec4 b;\n\nvoid main()\n{\n    gl_FragColor = b;\n}\n"), 0, 1, (array_188 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_188)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 106, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 b;\n\nvoid main()\n{\n    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    b = (d.xy * vec2(0.5, -0.5)) + 0.5;\n    gl_Position = vec4(d, float(1));\n}\n"), ::uGetConstString("uniform sampler2D c;\n\nvarying vec2 b;\n\nvoid main()\n{\n    gl_FragColor = texture2D(c, b);\n}\n"), 0, 1, (array_189 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), array_189)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 107, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 f, b;\nuniform vec2 c, d;\n\nattribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = (a * c) + d;\n    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 e;\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvoid main()\n{\n    gl_FragColor = texture2D(h, g) * e;\n}\n"), 0, 1, (array_190 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_190)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 108, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 e;\n\nvec4 g(vec2 h, mat4 i){\n    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n}\n\nvoid main()\n{\n    e = a;\n    gl_Position = g(c + (a * b), d);\n}\n"), ::uGetConstString("uniform sampler2D f;\n\nvarying vec2 e;\n\nvoid main()\n{\n    gl_FragColor = texture2D(f, e);\n}\n"), 0, 1, (array_191 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(4) = ::uGetConstString("f"), array_191)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 109, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b, e;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 f;\n\nvec4 h(vec2 i, mat4 j){\n    return vec4(((i.x * j[0].x) + (i.y * j[1].x)) + j[3].x, ((i.x * j[0].y) + (i.y * j[1].y)) + j[3].y, ((i.x * j[0].z) + (i.y * j[1].z)) + j[3].z, ((i.x * j[0].w) + (i.y * j[1].w)) + j[3].w);\n}\n\nvoid main()\n{\n    f = a * e;\n    gl_Position = h(c + (a * b), d);\n}\n"), ::uGetConstString("uniform sampler2D g;\n\nvarying vec2 f;\n\nvoid main()\n{\n    gl_FragColor = texture2D(g, f);\n}\n"), 0, 1, (array_192 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(5) = ::uGetConstString("g"), array_192)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 110, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 e;\n\nvec4 g(vec2 h, mat4 i){\n    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n}\n\nvoid main()\n{\n    e = vec2(a.x, 1.0 - a.y);\n    gl_Position = g(c + (a * b), d);\n}\n"), ::uGetConstString("uniform sampler2D f;\n\nvarying vec2 e;\n\nvoid main()\n{\n    gl_FragColor = texture2D(f, e);\n}\n"), 0, 1, (array_193 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(4) = ::uGetConstString("f"), array_193)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 111, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvoid main()\n{\n    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n}\n"), ::uGetConstString("uniform vec4 e;\n\nvoid main()\n{\n    gl_FragColor = e;\n}\n"), 0, 1, (array_194 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), array_194)));
    ::app::MainView__New_2(NULL);
}

uObject*** uGetGlobalStrongRefs()
{
    static uObject** result[] =
    {
        (uObject**)&::app::Experimental::Http::HttpLoader___cache,
        (uObject**)&::app::Experimental::Http::LoaderConst__Handler,
        (uObject**)&::app::Fuse::Android::Blitter__Singleton,
        (uObject**)&::app::Fuse::Android::Button__TextColorProperty,
        (uObject**)&::app::Fuse::Animations::ConverterDouble__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat2__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat3__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat4__Singleton,
        (uObject**)&::app::Fuse::Animations::DiscreteSingleTrack__Singleton,
        (uObject**)&::app::Fuse::Animations::EasingTrack__Singleton,
        (uObject**)&::app::Fuse::Animations::MasterTransform__identity,
        (uObject**)&::app::Fuse::Animations::Mixer___default,
        (uObject**)&::app::Fuse::Animations::Mixer___defaultDiscrete,
        (uObject**)&::app::Fuse::Animations::Mixer__PostMasters,
        (uObject**)&::app::Fuse::Animations::Mixer__PreMasters,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Amber,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Blue,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__BlueGrey,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Brown,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__ColorCodes,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Cyan,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__DeepOrange,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__DeepPurple,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Green,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Grey,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Indigo,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__LightBlue,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__LightGreen,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Lime,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Orange,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Pink,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Purple,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Red,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBlack,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBlackItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBold,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBoldItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedBold,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedBoldItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedLight,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedLightItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedRegular,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoLight,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoLightItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoMedium,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoMediumItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoRegular,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoThin,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoThinItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Teal,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Yellow,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme___singleton_1,
        (uObject**)&::app::Fuse::Camera::iOSCameraImpl___pendingTask,
        (uObject**)&::app::Fuse::Camera::iOSCameraImpl__MEDIA_METADATA,
        (uObject**)&::app::Fuse::Camera::iOSCameraImpl__ORIENTATION,
        (uObject**)&::app::Fuse::Camera::iOSCameraImpl__ORIGINAL_IMAGE,
        (uObject**)&::app::Fuse::Controls::Button__TextProperty,
        (uObject**)&::app::Fuse::Controls::Control__BackgroundProperty,
        (uObject**)&::app::Fuse::Controls::Graphics::DefaultTextVisual___textRenderers,
        (uObject**)&::app::Fuse::Controls::Graphics::GraphicsStyle__Default,
        (uObject**)&::app::Fuse::Controls::Graphics::ImageElementDraw__Impl,
        (uObject**)&::app::Fuse::Controls::Graphics::LinearSliderBehavior___horizontalGesture,
        (uObject**)&::app::Fuse::Controls::GraphicsView__BackgroundProperty_1,
        (uObject**)&::app::Fuse::Controls::Grid__CellSpacingProperty,
        (uObject**)&::app::Fuse::Controls::Image__ContentAlignmentProperty,
        (uObject**)&::app::Fuse::Controls::Image__MemoryPolicyProperty,
        (uObject**)&::app::Fuse::Controls::Image__StretchDirectionProperty,
        (uObject**)&::app::Fuse::Controls::Image__StretchModeProperty,
        (uObject**)&::app::Fuse::Controls::Image__StretchSizingProperty,
        (uObject**)&::app::Fuse::Controls::Internal::DefaultTextRenderer___bitmapFonts,
        (uObject**)&::app::Fuse::Controls::Internal::DefaultTextRenderer___renderer,
        (uObject**)&::app::Fuse::Controls::Number__FormatProperty,
        (uObject**)&::app::Fuse::Controls::Number__ValueProperty,
        (uObject**)&::app::Fuse::Controls::PageIndicator__DotFactoryProperty,
        (uObject**)&::app::Fuse::Controls::Panel__AppearanceProperty,
        (uObject**)&::app::Fuse::Controls::Panel__LayoutProperty,
        (uObject**)&::app::Fuse::Controls::PlainTextEdit__NativeEditProperty,
        (uObject**)&::app::Fuse::Controls::PlainTextEdit__NativeTextProperty,
        (uObject**)&::app::Fuse::Controls::RangeControl__MaximumProperty,
        (uObject**)&::app::Fuse::Controls::RangeControl__MinimumProperty,
        (uObject**)&::app::Fuse::Controls::RangeControl__ValueProperty,
        (uObject**)&::app::Fuse::Controls::Rectangle__CornerRadiusProperty,
        (uObject**)&::app::Fuse::Controls::ScrollView__AllowedScrollDirectionsProperty,
        (uObject**)&::app::Fuse::Controls::Shape__FillProperty,
        (uObject**)&::app::Fuse::Controls::Shape__SmoothnessProperty,
        (uObject**)&::app::Fuse::Controls::Shape__StrokeProperty,
        (uObject**)&::app::Fuse::Controls::StackPanel__ItemSpacingProperty,
        (uObject**)&::app::Fuse::Controls::StackPanel__OrientationProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__FontProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__FontSizeProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__LineSpacingProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__TextAlignmentProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__TextColorProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__TextWrappingProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__ValueProperty,
        (uObject**)&::app::Fuse::Controls::TextEdit::TextEditVisual___horizontalGesture,
        (uObject**)&::app::Fuse::Controls::TextEdit::TextEditVisual___verticalGesture,
        (uObject**)&::app::Fuse::Controls::TextEdit::TextPosition__Default,
        (uObject**)&::app::Fuse::Controls::TextInput__CaretColorProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__InputHintProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__IsMultilineProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__IsPasswordProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__IsReadOnlyProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__SelectionColorProperty,
        (uObject**)&::app::Fuse::Controls::ToggleControl__ValueProperty,
        (uObject**)&::app::Fuse::DrawHelpers___instance,
        (uObject**)&::app::Fuse::Drawing::BlendModeHelpers___invalidBlendMode,
        (uObject**)&::app::Fuse::Drawing::Brushes__Aqua,
        (uObject**)&::app::Fuse::Drawing::Brushes__Black,
        (uObject**)&::app::Fuse::Drawing::Brushes__Blue,
        (uObject**)&::app::Fuse::Drawing::Brushes__Fuchsia,
        (uObject**)&::app::Fuse::Drawing::Brushes__Gray,
        (uObject**)&::app::Fuse::Drawing::Brushes__Green,
        (uObject**)&::app::Fuse::Drawing::Brushes__Lime,
        (uObject**)&::app::Fuse::Drawing::Brushes__Maroon,
        (uObject**)&::app::Fuse::Drawing::Brushes__Navy,
        (uObject**)&::app::Fuse::Drawing::Brushes__Olive,
        (uObject**)&::app::Fuse::Drawing::Brushes__Purple,
        (uObject**)&::app::Fuse::Drawing::Brushes__Red,
        (uObject**)&::app::Fuse::Drawing::Brushes__Silver,
        (uObject**)&::app::Fuse::Drawing::Brushes__Teal,
        (uObject**)&::app::Fuse::Drawing::Brushes__Transparent,
        (uObject**)&::app::Fuse::Drawing::Brushes__White,
        (uObject**)&::app::Fuse::Drawing::Brushes__Yellow,
        (uObject**)&::app::Fuse::Drawing::LinearGradientDrawable__Singleton,
        (uObject**)&::app::Fuse::Drawing::Primitives::Circle__Singleton,
        (uObject**)&::app::Fuse::Drawing::Primitives::Rectangle__Singleton,
        (uObject**)&::app::Fuse::Drawing::Primitives::Wedge__Singleton,
        (uObject**)&::app::Fuse::Elements::Cache__cacheHelper,
        (uObject**)&::app::Fuse::Elements::Element__AlignmentProperty,
        (uObject**)&::app::Fuse::Elements::Element__AnchorProperty,
        (uObject**)&::app::Fuse::Elements::Element__CachingModeProperty,
        (uObject**)&::app::Fuse::Elements::Element__ClipToBoundsProperty,
        (uObject**)&::app::Fuse::Elements::Element__HeightProperty,
        (uObject**)&::app::Fuse::Elements::Element__HitTestModeProperty,
        (uObject**)&::app::Fuse::Elements::Element__MarginProperty,
        (uObject**)&::app::Fuse::Elements::Element__MaxHeightProperty,
        (uObject**)&::app::Fuse::Elements::Element__MaxWidthProperty,
        (uObject**)&::app::Fuse::Elements::Element__MinHeightProperty,
        (uObject**)&::app::Fuse::Elements::Element__MinWidthProperty,
        (uObject**)&::app::Fuse::Elements::Element__OffsetProperty,
        (uObject**)&::app::Fuse::Elements::Element__OpacityProperty,
        (uObject**)&::app::Fuse::Elements::Element__PaddingProperty,
        (uObject**)&::app::Fuse::Elements::Element__VisibilityProperty,
        (uObject**)&::app::Fuse::Elements::Element__WidthProperty,
        (uObject**)&::app::Fuse::Elements::Element__XProperty,
        (uObject**)&::app::Fuse::Elements::Element__YProperty,
        (uObject**)&::app::Fuse::Elements::ElementAtlasFramebufferPool___poolImpl,
        (uObject**)&::app::Fuse::Elements::ElementAtlasFramebufferPool__AtlasSizeChanged,
        (uObject**)&::app::Fuse::Elements::Internal::ElementDraw__Impl,
        (uObject**)&::app::Fuse::Elements::Internal::Scale9Rectangle__Impl,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitHeightProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitHeightUnitProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitWidthProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitWidthUnitProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing__Singleton,
        (uObject**)&::app::Fuse::Elements::NoImplicitMaxBoxSizing__Singleton_1,
        (uObject**)&::app::Fuse::Elements::ShadowBoxSizing___shadowDataProperty,
        (uObject**)&::app::Fuse::Elements::ShadowBoxSizing__Singleton,
        (uObject**)&::app::Fuse::Elements::StandardBoxSizing__Singleton,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__Anchor,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__Center,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__HorizontalBoxCenter,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__TopLeft,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__VerticalBoxCenter,
        (uObject**)&::app::Fuse::Entities::Designer::PreloadedResources__resources,
        (uObject**)&::app::Fuse::Font___fontFaces,
        (uObject**)&::app::Fuse::Fonts___fallback,
        (uObject**)&::app::Fuse::FramebufferPool__framebufferPool,
        (uObject**)&::app::Fuse::Gestures::Clicker___clickerProperty,
        (uObject**)&::app::Fuse::Gestures::Internal::EdgeSwiper___leftRightSwipe,
        (uObject**)&::app::Fuse::Gestures::Internal::EdgeSwiper___upDownSwipe,
        (uObject**)&::app::Fuse::Gestures::Scroller___horizontalGesture,
        (uObject**)&::app::Fuse::Gestures::Scroller___verticalGesture,
        (uObject**)&::app::Fuse::GraphicsTheme___singleton,
        (uObject**)&::app::Fuse::Input::Focus___focusDelegatorHandle,
        (uObject**)&::app::Fuse::Input::Focus___focusedObject,
        (uObject**)&::app::Fuse::Input::Focus___gained,
        (uObject**)&::app::Fuse::Input::Focus___isFoucsableChanged,
        (uObject**)&::app::Fuse::Input::Focus___lastFocusedNode,
        (uObject**)&::app::Fuse::Input::Focus___lost,
        (uObject**)&::app::Fuse::Input::Focus__FocusDelegateProperty,
        (uObject**)&::app::Fuse::Input::Focus__IsFocusableProperty,
        (uObject**)&::app::Fuse::Input::Keyboard___keyboardHandle,
        (uObject**)&::app::Fuse::Input::Keyboard___keyPressed,
        (uObject**)&::app::Fuse::Input::Keyboard___keyReleased,
        (uObject**)&::app::Fuse::Input::Keyboard___keysDown,
        (uObject**)&::app::Fuse::Input::Pointer___entered,
        (uObject**)&::app::Fuse::Input::Pointer___hardCapturers,
        (uObject**)&::app::Fuse::Input::Pointer___lastHitNodes,
        (uObject**)&::app::Fuse::Input::Pointer___left,
        (uObject**)&::app::Fuse::Input::Pointer___moved,
        (uObject**)&::app::Fuse::Input::Pointer___pointersDown,
        (uObject**)&::app::Fuse::Input::Pointer___pressed,
        (uObject**)&::app::Fuse::Input::Pointer___released,
        (uObject**)&::app::Fuse::Input::Pointer___softCapturers,
        (uObject**)&::app::Fuse::Input::Pointer___wheelMoved,
        (uObject**)&::app::Fuse::Input::TextService___textEntered,
        (uObject**)&::app::Fuse::Internal::BlenderMap___blenders,
        (uObject**)&::app::Fuse::Internal::Drawing::SolidRectangle__Impl,
        (uObject**)&::app::Fuse::iOS::Blitter__Singleton,
        (uObject**)&::app::Fuse::iOS::Controls::Button__DisabledColorProperty,
        (uObject**)&::app::Fuse::iOS::Controls::Button__HighlightedColorProperty,
        (uObject**)&::app::Fuse::iOS::Controls::Button__NormalColorProperty,
        (uObject**)&::app::Fuse::iOS::Controls::Button__SelectedColorProperty,
        (uObject**)&::app::Fuse::iOS::Controls::ControlProperties__TintColorProperty,
        (uObject**)&::app::Fuse::iOS::Controls::ImageCache___cache,
        (uObject**)&::app::Fuse::iOS::FontCache___fontNameCache,
        (uObject**)&::app::Fuse::iOS::InputDispatch___listeners,
        (uObject**)&::app::Fuse::iOS::InputDispatch___touchEvents,
        (uObject**)&::app::Fuse::iOS::NativeViews::NativeView___viewHandle,
        (uObject**)&::app::Fuse::iOS::RootView___rootContainer,
        (uObject**)&::app::Fuse::iOS::RootView___rootView,
        (uObject**)&::app::Fuse::iOS::StatusBarConfig___stack,
        (uObject**)&::app::Fuse::Layouts::DockLayout___dockProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___actualColumnProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___actualRowProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___columnProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___columnSpanProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___rowProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___rowSpanProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___staticDefaultColumn,
        (uObject**)&::app::Fuse::Layouts::GridLayout___staticDefaultRow,
        (uObject**)&::app::Fuse::Layouts::Layout___fillPaddingProperty,
        (uObject**)&::app::Fuse::Layouts::Layout___layerProperty,
        (uObject**)&::app::Fuse::Layouts::Layout___layoutRoleProperty,
        (uObject**)&::app::Fuse::Layouts::Layouts__Default,
        (uObject**)&::app::Fuse::Navigation::DirectNavigation___indexProperty,
        (uObject**)&::app::Fuse::Navigation::EdgeNavigation___edgeHandle,
        (uObject**)&::app::Fuse::Navigation::Navigation___contextHandle,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationHandler,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationProgress,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationStateHandler,
        (uObject**)&::app::Fuse::Navigation::NavigationPageProperty___pageProperty,
        (uObject**)&::app::Fuse::Navigation::NavigationPageProperty__RootedBindings,
        (uObject**)&::app::Fuse::Node___addedHandle,
        (uObject**)&::app::Fuse::Node___isEnabledChangedHandle,
        (uObject**)&::app::Fuse::Node___isVisibleChangedHandle,
        (uObject**)&::app::Fuse::Node___nameHandle,
        (uObject**)&::app::Fuse::Node___needsStyling,
        (uObject**)&::app::Fuse::Node___removedHandle,
        (uObject**)&::app::Fuse::Node___resourcesHandle,
        (uObject**)&::app::Fuse::Node___rootedHandle,
        (uObject**)&::app::Fuse::Node___styleHandle,
        (uObject**)&::app::Fuse::Node___unrootedHandle,
        (uObject**)&::app::Fuse::Node__IsEnabledProperty,
        (uObject**)&::app::Fuse::Node__NameProperty,
        (uObject**)&::app::Fuse::Node__SnapToPixelsProperty,
        (uObject**)&::app::Fuse::NodeBounds___empty,
        (uObject**)&::app::Fuse::NodeBounds___infinite,
        (uObject**)&::app::Fuse::Physics::Body___frictionHandle,
        (uObject**)&::app::Fuse::Physics::World___globalWorld,
        (uObject**)&::app::Fuse::Physics::World___worldHandle,
        (uObject**)&::app::Fuse::Preview::SelectionManager___Selection,
        (uObject**)&::app::Fuse::Preview::SelectionManager__SelectionChanged,
        (uObject**)&::app::Fuse::Properties__NoValue,
        (uObject**)&::app::Fuse::Reactive::Dispatcher___uiThread,
        (uObject**)&::app::Fuse::Reactive::FuseJS::InterApp___cachedUris,
        (uObject**)&::app::Fuse::Reactive::FuseJS::InterApp___onReceivedUri,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___enteringBackground,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___enteringForeground,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___enteringInteractive,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___exitedInteractive,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___terminating,
        (uObject**)&::app::Fuse::Reactive::JavaScript___exceptionHandler,
        (uObject**)&::app::Fuse::Reactive::JavaScript___rootedScripts,
        (uObject**)&::app::Fuse::Reactive::JavaScript___worker,
        (uObject**)&::app::Fuse::Reactive::ScriptEvents___propHandle,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___context,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___observable,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___subscriberProxy,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___timer,
        (uObject**)&::app::Fuse::Resources::DisposalManager___items,
        (uObject**)&::app::Fuse::Resources::DisposalManager___softDisposables,
        (uObject**)&::app::Fuse::Resources::FileImageSourceCache___cache,
        (uObject**)&::app::Fuse::Resources::HttpImageSourceCache___cache,
        (uObject**)&::app::Fuse::Resources::MemoryPolicy__PreloadRetain,
        (uObject**)&::app::Fuse::Resources::MemoryPolicy__UnloadUnused,
        (uObject**)&::app::Fuse::Resources::ResourceRegistry___handlers,
        (uObject**)&::app::Fuse::Scripting::Duktape::Context___emptyArgs,
        (uObject**)&::app::Fuse::Scripting::NameRegistry___listeners,
        (uObject**)&::app::Fuse::Scripting::NameRegistry___names,
        (uObject**)&::app::Fuse::Shapes::Rectangle__CornerRadiusProperty,
        (uObject**)&::app::Fuse::Shapes::Shape__FillProperty,
        (uObject**)&::app::Fuse::Shapes::Shape__SmoothnessProperty,
        (uObject**)&::app::Fuse::Shapes::Shape__StrokeProperty,
        (uObject**)&::app::Fuse::StyleProperty__All,
        (uObject**)&::app::Fuse::TranslationModes__Local,
        (uObject**)&::app::Fuse::TranslationModes__ParentSize,
        (uObject**)&::app::Fuse::TranslationModes__Size,
        (uObject**)&::app::Fuse::Triggers::Actions::GiveFocus__Singleton,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation___positionChange,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation___sizeChange,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation__PositionChange,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation__SizeChange,
        (uObject**)&::app::Fuse::Triggers::WhileFailed___whileFailedProp,
        (uObject**)&::app::Fuse::Triggers::WhileKeyboardVisible__Keyboard,
        (uObject**)&::app::Fuse::Triggers::WhileLoading___whileLoadingProp,
        (uObject**)&::app::Fuse::UpdateManager___deferredActions,
        (uObject**)&::app::Fuse::UpdateManager___stages,
        (uObject**)&::app::Fuse::UpdateManager__PrimaryDispatcher,
        (uObject**)&::app::Uno::Application___Current,
        (uObject**)&::app::Uno::CharPunctuationChecker__punctuationRangeList,
        (uObject**)&::app::Uno::CharPunctuationChecker__singlePunctuationChars,
        (uObject**)&::app::Uno::Data::Json::Boolean___false,
        (uObject**)&::app::Uno::Data::Json::Boolean___true,
        (uObject**)&::app::Uno::Data::Json::Null___singleton,
        (uObject**)&::app::Uno::Diagnostics::Debug___assertionHandler,
        (uObject**)&::app::Uno::Diagnostics::Debug___indentStr,
        (uObject**)&::app::Uno::Diagnostics::Debug___logHandler,
        (uObject**)&::app::Uno::EventArgs__Empty,
        (uObject**)&::app::Uno::Net::Http::HostInfoParser___invalidChars,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__ClientErrors,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__Informational,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__Redirection,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__ServerErrors,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__Success,
        (uObject**)&::app::Uno::Net::Http::UriScheme___defaultPorts,
        (uObject**)&::app::Uno::Net::Http::UriScheme__KnownInternetSchemes,
        (uObject**)&::app::Uno::Net::Http::UriScheme__KnownNonInternetSchemes,
        (uObject**)&::app::Uno::Platform::iOS::StatusBar__SettingsChanged,
        (uObject**)&::app::Uno::Platform::SystemUI__BottomFrameWillResize,
        (uObject**)&::app::Uno::Platform::SystemUI__TopFrameWillResize,
        (uObject**)&::app::Uno::Platform2::Application__DelayedUri,
        (uObject**)&::app::Uno::Platform2::Application__EnteringBackground,
        (uObject**)&::app::Uno::Platform2::Application__EnteringForeground,
        (uObject**)&::app::Uno::Platform2::Application__EnteringInteractive,
        (uObject**)&::app::Uno::Platform2::Application__ExitedInteractive,
        (uObject**)&::app::Uno::Platform2::Application__KeyDown,
        (uObject**)&::app::Uno::Platform2::Application__KeyUp,
        (uObject**)&::app::Uno::Platform2::Application__ReceivedLowMemoryWarning,
        (uObject**)&::app::Uno::Platform2::Application__ReceivedURI,
        (uObject**)&::app::Uno::Platform2::Application__Started,
        (uObject**)&::app::Uno::Platform2::Application__Terminating,
        (uObject**)&::app::Uno::Runtime::Implementation::Internal::BundleRegistry___data,
        (uObject**)&::app::Uno::Runtime::Implementation::Internal::NumericFormatter___decimalPoint,
        (uObject**)&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall___boundAttributes,
        (uObject**)&::app::Uno::String__Empty,
        (uObject**)&::app::Uno::Threading::POSIXThread___callbacks,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoHegirae,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoMartyrum,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoMundi,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoPersico,
        (uObject**)&::app::Uno::Time::Calendars::Era__BeforeCommon,
        (uObject**)&::app::Uno::Time::Calendars::Era__Common,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MaxDaysPerMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MaxTotalTicksByMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MinDaysPerMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MinTotalTicksByMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MonthLengths,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MonthStartTicks,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__YearStartDays,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__YearStartTicks,
        (uObject**)&::app::Uno::Time::CalendarSystem___gregorianCalendarSystem,
        (uObject**)&::app::Uno::Time::DateTimeZone__UtcZone,
        (uObject**)&::app::Uno::Time::Period__Zero,
        (uObject**)&::app::Uno::Time::Text::LocalDateTimePattern__General,
        (uObject**)&::app::Uno::Time::Text::LocalTimePattern__General,
        (uObject**)&::app::Uno::Time::Text::OffsetPattern__General,
        (uObject**)&::app::Uno::UX::Resource___globals,
        NULL
    };

    return result;
}

uWeakObject*** uGetGlobalWeakRefs()
{
    static uWeakObject** result[] =
    {
        
        NULL
    };

    return result;
}

#ifdef U_DEBUG_MEM

const char** uGetGlobalStrongNames()
{
    static const char* result[] =
    {
        "Experimental.Http.HttpLoader._cache",
        "Experimental.Http.LoaderConst.Handler",
        "Fuse.Android.Blitter.Singleton",
        "Fuse.Android.Button.TextColorProperty",
        "Fuse.Animations.ConverterDouble.Singleton",
        "Fuse.Animations.ConverterFloat.Singleton",
        "Fuse.Animations.ConverterFloat2.Singleton",
        "Fuse.Animations.ConverterFloat3.Singleton",
        "Fuse.Animations.ConverterFloat4.Singleton",
        "Fuse.Animations.DiscreteSingleTrack.Singleton",
        "Fuse.Animations.EasingTrack.Singleton",
        "Fuse.Animations.MasterTransform.identity",
        "Fuse.Animations.Mixer._default",
        "Fuse.Animations.Mixer._defaultDiscrete",
        "Fuse.Animations.Mixer.PostMasters",
        "Fuse.Animations.Mixer.PreMasters",
        "Fuse.BasicTheme.BasicStyle.Amber",
        "Fuse.BasicTheme.BasicStyle.Blue",
        "Fuse.BasicTheme.BasicStyle.BlueGrey",
        "Fuse.BasicTheme.BasicStyle.Brown",
        "Fuse.BasicTheme.BasicStyle.ColorCodes",
        "Fuse.BasicTheme.BasicStyle.Cyan",
        "Fuse.BasicTheme.BasicStyle.DeepOrange",
        "Fuse.BasicTheme.BasicStyle.DeepPurple",
        "Fuse.BasicTheme.BasicStyle.Green",
        "Fuse.BasicTheme.BasicStyle.Grey",
        "Fuse.BasicTheme.BasicStyle.Indigo",
        "Fuse.BasicTheme.BasicStyle.LightBlue",
        "Fuse.BasicTheme.BasicStyle.LightGreen",
        "Fuse.BasicTheme.BasicStyle.Lime",
        "Fuse.BasicTheme.BasicStyle.Orange",
        "Fuse.BasicTheme.BasicStyle.Pink",
        "Fuse.BasicTheme.BasicStyle.Purple",
        "Fuse.BasicTheme.BasicStyle.Red",
        "Fuse.BasicTheme.BasicStyle.RobotoBlack",
        "Fuse.BasicTheme.BasicStyle.RobotoBlackItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoBold",
        "Fuse.BasicTheme.BasicStyle.RobotoBoldItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedBold",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedBoldItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedLight",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedLightItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedRegular",
        "Fuse.BasicTheme.BasicStyle.RobotoItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoLight",
        "Fuse.BasicTheme.BasicStyle.RobotoLightItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoMedium",
        "Fuse.BasicTheme.BasicStyle.RobotoMediumItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoRegular",
        "Fuse.BasicTheme.BasicStyle.RobotoThin",
        "Fuse.BasicTheme.BasicStyle.RobotoThinItalic",
        "Fuse.BasicTheme.BasicStyle.Teal",
        "Fuse.BasicTheme.BasicStyle.Yellow",
        "Fuse.BasicTheme.BasicTheme._singleton_1",
        "Fuse.Camera.iOSCameraImpl._pendingTask",
        "Fuse.Camera.iOSCameraImpl.MEDIA_METADATA",
        "Fuse.Camera.iOSCameraImpl.ORIENTATION",
        "Fuse.Camera.iOSCameraImpl.ORIGINAL_IMAGE",
        "Fuse.Controls.Button.TextProperty",
        "Fuse.Controls.Control.BackgroundProperty",
        "Fuse.Controls.Graphics.DefaultTextVisual._textRenderers",
        "Fuse.Controls.Graphics.GraphicsStyle.Default",
        "Fuse.Controls.Graphics.ImageElementDraw.Impl",
        "Fuse.Controls.Graphics.LinearSliderBehavior._horizontalGesture",
        "Fuse.Controls.GraphicsView.BackgroundProperty_1",
        "Fuse.Controls.Grid.CellSpacingProperty",
        "Fuse.Controls.Image.ContentAlignmentProperty",
        "Fuse.Controls.Image.MemoryPolicyProperty",
        "Fuse.Controls.Image.StretchDirectionProperty",
        "Fuse.Controls.Image.StretchModeProperty",
        "Fuse.Controls.Image.StretchSizingProperty",
        "Fuse.Controls.Internal.DefaultTextRenderer._bitmapFonts",
        "Fuse.Controls.Internal.DefaultTextRenderer._renderer",
        "Fuse.Controls.Number.FormatProperty",
        "Fuse.Controls.Number.ValueProperty",
        "Fuse.Controls.PageIndicator.DotFactoryProperty",
        "Fuse.Controls.Panel.AppearanceProperty",
        "Fuse.Controls.Panel.LayoutProperty",
        "Fuse.Controls.PlainTextEdit.NativeEditProperty",
        "Fuse.Controls.PlainTextEdit.NativeTextProperty",
        "Fuse.Controls.RangeControl.MaximumProperty",
        "Fuse.Controls.RangeControl.MinimumProperty",
        "Fuse.Controls.RangeControl.ValueProperty",
        "Fuse.Controls.Rectangle.CornerRadiusProperty",
        "Fuse.Controls.ScrollView.AllowedScrollDirectionsProperty",
        "Fuse.Controls.Shape.FillProperty",
        "Fuse.Controls.Shape.SmoothnessProperty",
        "Fuse.Controls.Shape.StrokeProperty",
        "Fuse.Controls.StackPanel.ItemSpacingProperty",
        "Fuse.Controls.StackPanel.OrientationProperty",
        "Fuse.Controls.TextControl.FontProperty",
        "Fuse.Controls.TextControl.FontSizeProperty",
        "Fuse.Controls.TextControl.LineSpacingProperty",
        "Fuse.Controls.TextControl.TextAlignmentProperty",
        "Fuse.Controls.TextControl.TextColorProperty",
        "Fuse.Controls.TextControl.TextWrappingProperty",
        "Fuse.Controls.TextControl.ValueProperty",
        "Fuse.Controls.TextEdit.TextEditVisual._horizontalGesture",
        "Fuse.Controls.TextEdit.TextEditVisual._verticalGesture",
        "Fuse.Controls.TextEdit.TextPosition.Default",
        "Fuse.Controls.TextInput.CaretColorProperty",
        "Fuse.Controls.TextInput.InputHintProperty",
        "Fuse.Controls.TextInput.IsMultilineProperty",
        "Fuse.Controls.TextInput.IsPasswordProperty",
        "Fuse.Controls.TextInput.IsReadOnlyProperty",
        "Fuse.Controls.TextInput.SelectionColorProperty",
        "Fuse.Controls.ToggleControl.ValueProperty",
        "Fuse.DrawHelpers._instance",
        "Fuse.Drawing.BlendModeHelpers._invalidBlendMode",
        "Fuse.Drawing.Brushes.Aqua",
        "Fuse.Drawing.Brushes.Black",
        "Fuse.Drawing.Brushes.Blue",
        "Fuse.Drawing.Brushes.Fuchsia",
        "Fuse.Drawing.Brushes.Gray",
        "Fuse.Drawing.Brushes.Green",
        "Fuse.Drawing.Brushes.Lime",
        "Fuse.Drawing.Brushes.Maroon",
        "Fuse.Drawing.Brushes.Navy",
        "Fuse.Drawing.Brushes.Olive",
        "Fuse.Drawing.Brushes.Purple",
        "Fuse.Drawing.Brushes.Red",
        "Fuse.Drawing.Brushes.Silver",
        "Fuse.Drawing.Brushes.Teal",
        "Fuse.Drawing.Brushes.Transparent",
        "Fuse.Drawing.Brushes.White",
        "Fuse.Drawing.Brushes.Yellow",
        "Fuse.Drawing.LinearGradientDrawable.Singleton",
        "Fuse.Drawing.Primitives.Circle.Singleton",
        "Fuse.Drawing.Primitives.Rectangle.Singleton",
        "Fuse.Drawing.Primitives.Wedge.Singleton",
        "Fuse.Elements.Cache.cacheHelper",
        "Fuse.Elements.Element.AlignmentProperty",
        "Fuse.Elements.Element.AnchorProperty",
        "Fuse.Elements.Element.CachingModeProperty",
        "Fuse.Elements.Element.ClipToBoundsProperty",
        "Fuse.Elements.Element.HeightProperty",
        "Fuse.Elements.Element.HitTestModeProperty",
        "Fuse.Elements.Element.MarginProperty",
        "Fuse.Elements.Element.MaxHeightProperty",
        "Fuse.Elements.Element.MaxWidthProperty",
        "Fuse.Elements.Element.MinHeightProperty",
        "Fuse.Elements.Element.MinWidthProperty",
        "Fuse.Elements.Element.OffsetProperty",
        "Fuse.Elements.Element.OpacityProperty",
        "Fuse.Elements.Element.PaddingProperty",
        "Fuse.Elements.Element.VisibilityProperty",
        "Fuse.Elements.Element.WidthProperty",
        "Fuse.Elements.Element.XProperty",
        "Fuse.Elements.Element.YProperty",
        "Fuse.Elements.ElementAtlasFramebufferPool._poolImpl",
        "Fuse.Elements.ElementAtlasFramebufferPool.AtlasSizeChanged",
        "Fuse.Elements.Internal.ElementDraw.Impl",
        "Fuse.Elements.Internal.Scale9Rectangle.Impl",
        "Fuse.Elements.LimitBoxSizing._limitHeightProperty",
        "Fuse.Elements.LimitBoxSizing._limitHeightUnitProperty",
        "Fuse.Elements.LimitBoxSizing._limitWidthProperty",
        "Fuse.Elements.LimitBoxSizing._limitWidthUnitProperty",
        "Fuse.Elements.LimitBoxSizing.Singleton",
        "Fuse.Elements.NoImplicitMaxBoxSizing.Singleton_1",
        "Fuse.Elements.ShadowBoxSizing._shadowDataProperty",
        "Fuse.Elements.ShadowBoxSizing.Singleton",
        "Fuse.Elements.StandardBoxSizing.Singleton",
        "Fuse.Elements.TransformOrigins.Anchor",
        "Fuse.Elements.TransformOrigins.Center",
        "Fuse.Elements.TransformOrigins.HorizontalBoxCenter",
        "Fuse.Elements.TransformOrigins.TopLeft",
        "Fuse.Elements.TransformOrigins.VerticalBoxCenter",
        "Fuse.Entities.Designer.PreloadedResources.resources",
        "Fuse.Font._fontFaces",
        "Fuse.Fonts._fallback",
        "Fuse.FramebufferPool.framebufferPool",
        "Fuse.Gestures.Clicker._clickerProperty",
        "Fuse.Gestures.Internal.EdgeSwiper._leftRightSwipe",
        "Fuse.Gestures.Internal.EdgeSwiper._upDownSwipe",
        "Fuse.Gestures.Scroller._horizontalGesture",
        "Fuse.Gestures.Scroller._verticalGesture",
        "Fuse.GraphicsTheme._singleton",
        "Fuse.Input.Focus._focusDelegatorHandle",
        "Fuse.Input.Focus._focusedObject",
        "Fuse.Input.Focus._gained",
        "Fuse.Input.Focus._isFoucsableChanged",
        "Fuse.Input.Focus._lastFocusedNode",
        "Fuse.Input.Focus._lost",
        "Fuse.Input.Focus.FocusDelegateProperty",
        "Fuse.Input.Focus.IsFocusableProperty",
        "Fuse.Input.Keyboard._keyboardHandle",
        "Fuse.Input.Keyboard._keyPressed",
        "Fuse.Input.Keyboard._keyReleased",
        "Fuse.Input.Keyboard._keysDown",
        "Fuse.Input.Pointer._entered",
        "Fuse.Input.Pointer._hardCapturers",
        "Fuse.Input.Pointer._lastHitNodes",
        "Fuse.Input.Pointer._left",
        "Fuse.Input.Pointer._moved",
        "Fuse.Input.Pointer._pointersDown",
        "Fuse.Input.Pointer._pressed",
        "Fuse.Input.Pointer._released",
        "Fuse.Input.Pointer._softCapturers",
        "Fuse.Input.Pointer._wheelMoved",
        "Fuse.Input.TextService._textEntered",
        "Fuse.Internal.BlenderMap._blenders",
        "Fuse.Internal.Drawing.SolidRectangle.Impl",
        "Fuse.iOS.Blitter.Singleton",
        "Fuse.iOS.Controls.Button.DisabledColorProperty",
        "Fuse.iOS.Controls.Button.HighlightedColorProperty",
        "Fuse.iOS.Controls.Button.NormalColorProperty",
        "Fuse.iOS.Controls.Button.SelectedColorProperty",
        "Fuse.iOS.Controls.ControlProperties.TintColorProperty",
        "Fuse.iOS.Controls.ImageCache._cache",
        "Fuse.iOS.FontCache._fontNameCache",
        "Fuse.iOS.InputDispatch._listeners",
        "Fuse.iOS.InputDispatch._touchEvents",
        "Fuse.iOS.NativeViews.NativeView._viewHandle",
        "Fuse.iOS.RootView._rootContainer",
        "Fuse.iOS.RootView._rootView",
        "Fuse.iOS.StatusBarConfig._stack",
        "Fuse.Layouts.DockLayout._dockProperty",
        "Fuse.Layouts.GridLayout._actualColumnProperty",
        "Fuse.Layouts.GridLayout._actualRowProperty",
        "Fuse.Layouts.GridLayout._columnProperty",
        "Fuse.Layouts.GridLayout._columnSpanProperty",
        "Fuse.Layouts.GridLayout._rowProperty",
        "Fuse.Layouts.GridLayout._rowSpanProperty",
        "Fuse.Layouts.GridLayout._staticDefaultColumn",
        "Fuse.Layouts.GridLayout._staticDefaultRow",
        "Fuse.Layouts.Layout._fillPaddingProperty",
        "Fuse.Layouts.Layout._layerProperty",
        "Fuse.Layouts.Layout._layoutRoleProperty",
        "Fuse.Layouts.Layouts.Default",
        "Fuse.Navigation.DirectNavigation._indexProperty",
        "Fuse.Navigation.EdgeNavigation._edgeHandle",
        "Fuse.Navigation.Navigation._contextHandle",
        "Fuse.Navigation.Navigation._navigationHandler",
        "Fuse.Navigation.Navigation._navigationProgress",
        "Fuse.Navigation.Navigation._navigationStateHandler",
        "Fuse.Navigation.NavigationPageProperty._pageProperty",
        "Fuse.Navigation.NavigationPageProperty.RootedBindings",
        "Fuse.Node._addedHandle",
        "Fuse.Node._isEnabledChangedHandle",
        "Fuse.Node._isVisibleChangedHandle",
        "Fuse.Node._nameHandle",
        "Fuse.Node._needsStyling",
        "Fuse.Node._removedHandle",
        "Fuse.Node._resourcesHandle",
        "Fuse.Node._rootedHandle",
        "Fuse.Node._styleHandle",
        "Fuse.Node._unrootedHandle",
        "Fuse.Node.IsEnabledProperty",
        "Fuse.Node.NameProperty",
        "Fuse.Node.SnapToPixelsProperty",
        "Fuse.NodeBounds._empty",
        "Fuse.NodeBounds._infinite",
        "Fuse.Physics.Body._frictionHandle",
        "Fuse.Physics.World._globalWorld",
        "Fuse.Physics.World._worldHandle",
        "Fuse.Preview.SelectionManager._Selection",
        "Fuse.Preview.SelectionManager.SelectionChanged",
        "Fuse.Properties.NoValue",
        "Fuse.Reactive.Dispatcher._uiThread",
        "Fuse.Reactive.FuseJS.InterApp._cachedUris",
        "Fuse.Reactive.FuseJS.InterApp._onReceivedUri",
        "Fuse.Reactive.FuseJS.Lifecycle._enteringBackground",
        "Fuse.Reactive.FuseJS.Lifecycle._enteringForeground",
        "Fuse.Reactive.FuseJS.Lifecycle._enteringInteractive",
        "Fuse.Reactive.FuseJS.Lifecycle._exitedInteractive",
        "Fuse.Reactive.FuseJS.Lifecycle._terminating",
        "Fuse.Reactive.JavaScript._exceptionHandler",
        "Fuse.Reactive.JavaScript._rootedScripts",
        "Fuse.Reactive.JavaScript._worker",
        "Fuse.Reactive.ScriptEvents._propHandle",
        "Fuse.Reactive.ThreadWorker._context",
        "Fuse.Reactive.ThreadWorker._observable",
        "Fuse.Reactive.ThreadWorker._subscriberProxy",
        "Fuse.Reactive.ThreadWorker._timer",
        "Fuse.Resources.DisposalManager._items",
        "Fuse.Resources.DisposalManager._softDisposables",
        "Fuse.Resources.FileImageSourceCache._cache",
        "Fuse.Resources.HttpImageSourceCache._cache",
        "Fuse.Resources.MemoryPolicy.PreloadRetain",
        "Fuse.Resources.MemoryPolicy.UnloadUnused",
        "Fuse.Resources.ResourceRegistry._handlers",
        "Fuse.Scripting.Duktape.Context._emptyArgs",
        "Fuse.Scripting.NameRegistry._listeners",
        "Fuse.Scripting.NameRegistry._names",
        "Fuse.Shapes.Rectangle.CornerRadiusProperty",
        "Fuse.Shapes.Shape.FillProperty",
        "Fuse.Shapes.Shape.SmoothnessProperty",
        "Fuse.Shapes.Shape.StrokeProperty",
        "Fuse.StyleProperty.All",
        "Fuse.TranslationModes.Local",
        "Fuse.TranslationModes.ParentSize",
        "Fuse.TranslationModes.Size",
        "Fuse.Triggers.Actions.GiveFocus.Singleton",
        "Fuse.Triggers.LayoutAnimation._positionChange",
        "Fuse.Triggers.LayoutAnimation._sizeChange",
        "Fuse.Triggers.LayoutAnimation.PositionChange",
        "Fuse.Triggers.LayoutAnimation.SizeChange",
        "Fuse.Triggers.WhileFailed._whileFailedProp",
        "Fuse.Triggers.WhileKeyboardVisible.Keyboard",
        "Fuse.Triggers.WhileLoading._whileLoadingProp",
        "Fuse.UpdateManager._deferredActions",
        "Fuse.UpdateManager._stages",
        "Fuse.UpdateManager.PrimaryDispatcher",
        "Uno.Application._Current",
        "Uno.CharPunctuationChecker.punctuationRangeList",
        "Uno.CharPunctuationChecker.singlePunctuationChars",
        "Uno.Data.Json.Boolean._false",
        "Uno.Data.Json.Boolean._true",
        "Uno.Data.Json.Null._singleton",
        "Uno.Diagnostics.Debug._assertionHandler",
        "Uno.Diagnostics.Debug._indentStr",
        "Uno.Diagnostics.Debug._logHandler",
        "Uno.EventArgs.Empty",
        "Uno.Net.Http.HostInfoParser._invalidChars",
        "Uno.Net.Http.HttpStatusReasonPhrase.ClientErrors",
        "Uno.Net.Http.HttpStatusReasonPhrase.Informational",
        "Uno.Net.Http.HttpStatusReasonPhrase.Redirection",
        "Uno.Net.Http.HttpStatusReasonPhrase.ServerErrors",
        "Uno.Net.Http.HttpStatusReasonPhrase.Success",
        "Uno.Net.Http.UriScheme._defaultPorts",
        "Uno.Net.Http.UriScheme.KnownInternetSchemes",
        "Uno.Net.Http.UriScheme.KnownNonInternetSchemes",
        "Uno.Platform.iOS.StatusBar.SettingsChanged",
        "Uno.Platform.SystemUI.BottomFrameWillResize",
        "Uno.Platform.SystemUI.TopFrameWillResize",
        "Uno.Platform2.Application.DelayedUri",
        "Uno.Platform2.Application.EnteringBackground",
        "Uno.Platform2.Application.EnteringForeground",
        "Uno.Platform2.Application.EnteringInteractive",
        "Uno.Platform2.Application.ExitedInteractive",
        "Uno.Platform2.Application.KeyDown",
        "Uno.Platform2.Application.KeyUp",
        "Uno.Platform2.Application.ReceivedLowMemoryWarning",
        "Uno.Platform2.Application.ReceivedURI",
        "Uno.Platform2.Application.Started",
        "Uno.Platform2.Application.Terminating",
        "Uno.Runtime.Implementation.Internal.BundleRegistry._data",
        "Uno.Runtime.Implementation.Internal.NumericFormatter._decimalPoint",
        "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall._boundAttributes",
        "string.Empty",
        "Uno.Threading.POSIXThread._callbacks",
        "Uno.Time.Calendars.Era.AnnoHegirae",
        "Uno.Time.Calendars.Era.AnnoMartyrum",
        "Uno.Time.Calendars.Era.AnnoMundi",
        "Uno.Time.Calendars.Era.AnnoPersico",
        "Uno.Time.Calendars.Era.BeforeCommon",
        "Uno.Time.Calendars.Era.Common",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MaxDaysPerMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MaxTotalTicksByMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MinDaysPerMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MinTotalTicksByMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MonthLengths",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MonthStartTicks",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.YearStartDays",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.YearStartTicks",
        "Uno.Time.CalendarSystem._gregorianCalendarSystem",
        "Uno.Time.DateTimeZone.UtcZone",
        "Uno.Time.Period.Zero",
        "Uno.Time.Text.LocalDateTimePattern.General",
        "Uno.Time.Text.LocalTimePattern.General",
        "Uno.Time.Text.OffsetPattern.General",
        "Uno.UX.Resource._globals",
        NULL
    };

    return result;
}

const char** uGetGlobalWeakNames()
{
    static const char* result[] =
    {
        
        NULL
    };

    return result;
}

#endif
