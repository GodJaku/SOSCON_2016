public partial class HeaderView: Fuse.Controls.Text
{
    static HeaderView()
    {
    }
    public HeaderView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        this.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        this.FontSize = 18f;
        this.TextColor = float4(0.2666667f, 0.2666667f, 0.2666667f, 1f);
        this.Margin = float4(10f, 10f, 10f, 5f);
    }
}
public partial class ArticleView: Fuse.Controls.Text
{
    static ArticleView()
    {
    }
    public ArticleView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        this.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        this.FontSize = 13f;
        this.TextColor = float4(0.2666667f, 0.2666667f, 0.2666667f, 1f);
        this.Margin = float4(10f, 0f, 10f, 0f);
    }
}
public partial class DateView: Fuse.Controls.Text
{
    static DateView()
    {
    }
    public DateView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        this.FontSize = 13f;
        this.TextColor = float4(0.6f, 0.6f, 0.6f, 1f);
        this.Margin = float4(10f, 0f, 10f, 0f);
    }
}
public partial class Divider: Fuse.Controls.Panel
{
    static Divider()
    {
    }
    public Divider()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.Rectangle();
        var temp1 = new Fuse.Drawing.StaticSolidColor(float4(0.6f, 0.6f, 0.6f, 1f));
        this.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        this.Margin = float4(46f, 10f, 0f, 10f);
        temp.Height = 1f;
        temp.Fill = temp1;
        this.Children.Add(temp);
    }
}
public partial class MainView: Fuse.App
{
    public sealed class Fuse_Reactive_Each_object_Items_Property: Uno.UX.Property<object>
    {
        Fuse.Reactive.Each _obj;
        public Fuse_Reactive_Each_object_Items_Property(Fuse.Reactive.Each obj) { _obj = obj; }
        protected override object OnGet() { return _obj.Items; }
        protected override void OnSet(object v, object origin) { _obj.Items = v; }
    }
    public sealed class Fuse_Controls_TextControl_string_Value_Property: Uno.UX.Property<string>
    {
        Fuse.Controls.TextControl _obj;
        public Fuse_Controls_TextControl_string_Value_Property(Fuse.Controls.TextControl obj) { _obj = obj; }
        protected override string OnGet() { return _obj.Value; }
        protected override void OnSet(string v, object origin) { _obj.SetValue(v, origin); }
        protected override void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged += listener; }
        protected override void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged -= listener; }
    }
    public sealed class Fuse_Translation_float_X_Property: Uno.UX.Property<float>
    {
        Fuse.Translation _obj;
        public Fuse_Translation_float_X_Property(Fuse.Translation obj) { _obj = obj; }
        protected override float OnGet() { return _obj.X; }
        protected override void OnSet(float v, object origin) { _obj.X = v; }
    }
    public sealed class Fuse_Translation_float_Y_Property: Uno.UX.Property<float>
    {
        Fuse.Translation _obj;
        public Fuse_Translation_float_Y_Property(Fuse.Translation obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Y; }
        protected override void OnSet(float v, object origin) { _obj.Y = v; }
    }
    public sealed class Fuse_Elements_Element_float_Opacity_Property: Uno.UX.Property<float>
    {
        Fuse.Elements.Element _obj;
        public Fuse_Elements_Element_float_Opacity_Property(Fuse.Elements.Element obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Opacity; }
        protected override void OnSet(float v, object origin) { _obj.Opacity = v; }
    }
    public sealed class Fuse_Rotation_float_Degrees_Property: Uno.UX.Property<float>
    {
        Fuse.Rotation _obj;
        public Fuse_Rotation_float_Degrees_Property(Fuse.Rotation obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Degrees; }
        protected override void OnSet(float v, object origin) { _obj.Degrees = v; }
    }
    public sealed class Fuse_Elements_Element_float_Width_Property: Uno.UX.Property<float>
    {
        Fuse.Elements.Element _obj;
        public Fuse_Elements_Element_float_Width_Property(Fuse.Elements.Element obj) { _obj = obj; }
        protected override float OnGet() { return _obj.Width; }
        protected override void OnSet(float v, object origin) { _obj.Width = v; }
    }
    public sealed class Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property: Uno.UX.Property<Fuse.Node>
    {
        Fuse.Controls.EdgeNavigator _obj;
        public Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property(Fuse.Controls.EdgeNavigator obj) { _obj = obj; }
        protected override Fuse.Node OnGet() { return _obj.Active; }
        protected override void OnSet(Fuse.Node v, object origin) { _obj.Active = v; }
    }
    public partial class Factory: Uno.UX.IFactory
    {
        internal readonly MainView __parent;
        public Factory(MainView parent)
        {
            __parent = parent;
        }
        MainView.Fuse_Controls_TextControl_string_Value_Property self_Value_inst;
        static Factory()
        {
        }
        public object New()
        {
            var self = new HeaderView();
            self_Value_inst = new MainView.Fuse_Controls_TextControl_string_Value_Property(self);
            var temp = new Fuse.Reactive.DataBinding<string>(self_Value_inst, "title");
            self.Behaviors.Add(temp);
            return self;
        }
    }
    public partial class Factory1: Uno.UX.IFactory
    {
        internal readonly MainView __parent;
        public Factory1(MainView parent)
        {
            __parent = parent;
        }
        MainView.Fuse_Controls_TextControl_string_Value_Property self_Value_inst;
        static Factory1()
        {
        }
        public object New()
        {
            var self = new ArticleView();
            self_Value_inst = new MainView.Fuse_Controls_TextControl_string_Value_Property(self);
            var temp = new Fuse.Reactive.DataBinding<string>(self_Value_inst, "content");
            self.Behaviors.Add(temp);
            return self;
        }
    }
    public partial class Factory2: Uno.UX.IFactory
    {
        internal readonly MainView __parent;
        public Factory2(MainView parent)
        {
            __parent = parent;
        }
        MainView.Fuse_Controls_TextControl_string_Value_Property self_Value_inst;
        static Factory2()
        {
        }
        public object New()
        {
            var self = new DateView();
            self_Value_inst = new MainView.Fuse_Controls_TextControl_string_Value_Property(self);
            var temp = new Fuse.Reactive.DataBinding<string>(self_Value_inst, "publishedDate");
            self.Behaviors.Add(temp);
            return self;
        }
    }
    public partial class Factory3: Uno.UX.IFactory
    {
        internal readonly MainView __parent;
        public Factory3(MainView parent)
        {
            __parent = parent;
        }
        static Factory3()
        {
        }
        public object New()
        {
            var self = new Divider();
            return self;
        }
    }
    MainView.Fuse_Translation_float_X_Property mainAppTranslation_X_inst;
    MainView.Fuse_Translation_float_Y_Property topMenuTranslation_Y_inst;
    MainView.Fuse_Translation_float_Y_Property bottomMenuTranslation_Y_inst;
    MainView.Fuse_Elements_Element_float_Opacity_Property middleRectangle_Opacity_inst;
    MainView.Fuse_Rotation_float_Degrees_Property topMenuRotation_Degrees_inst;
    MainView.Fuse_Rotation_float_Degrees_Property bottomMenuRotation_Degrees_inst;
    MainView.Fuse_Elements_Element_float_Width_Property topRectangle_Width_inst;
    MainView.Fuse_Elements_Element_float_Width_Property bottomRectangle_Width_inst;
    MainView.Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property EdgeNavigator_Active_inst;
    MainView.Fuse_Reactive_Each_object_Items_Property temp_Items_inst;
    internal Fuse.Controls.EdgeNavigator EdgeNavigator;
    internal Sidebar drawyer;
    internal Fuse.Translation mainAppTranslation;
    internal Fuse.Controls.Rectangle topRectangle;
    internal Fuse.Translation topMenuTranslation;
    internal Fuse.Rotation topMenuRotation;
    internal Fuse.Controls.Rectangle middleRectangle;
    internal Fuse.Controls.Rectangle bottomRectangle;
    internal Fuse.Translation bottomMenuTranslation;
    internal Fuse.Rotation bottomMenuRotation;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        mainAppTranslation = new Fuse.Translation();
        mainAppTranslation_X_inst = new MainView.Fuse_Translation_float_X_Property(mainAppTranslation);
        topMenuTranslation = new Fuse.Translation();
        topMenuTranslation_Y_inst = new MainView.Fuse_Translation_float_Y_Property(topMenuTranslation);
        bottomMenuTranslation = new Fuse.Translation();
        bottomMenuTranslation_Y_inst = new MainView.Fuse_Translation_float_Y_Property(bottomMenuTranslation);
        middleRectangle = new Fuse.Controls.Rectangle();
        middleRectangle_Opacity_inst = new MainView.Fuse_Elements_Element_float_Opacity_Property(middleRectangle);
        topMenuRotation = new Fuse.Rotation();
        topMenuRotation_Degrees_inst = new MainView.Fuse_Rotation_float_Degrees_Property(topMenuRotation);
        bottomMenuRotation = new Fuse.Rotation();
        bottomMenuRotation_Degrees_inst = new MainView.Fuse_Rotation_float_Degrees_Property(bottomMenuRotation);
        topRectangle = new Fuse.Controls.Rectangle();
        topRectangle_Width_inst = new MainView.Fuse_Elements_Element_float_Width_Property(topRectangle);
        bottomRectangle = new Fuse.Controls.Rectangle();
        bottomRectangle_Width_inst = new MainView.Fuse_Elements_Element_float_Width_Property(bottomRectangle);
        EdgeNavigator = new Fuse.Controls.EdgeNavigator();
        EdgeNavigator_Active_inst = new MainView.Fuse_Controls_EdgeNavigator_Fuse_Node_Active_Property(EdgeNavigator);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new MainView.Fuse_Reactive_Each_object_Items_Property(temp);
        var temp1 = new Fuse.Reactive.JavaScript();
        drawyer = new Sidebar();
        var temp2 = new Fuse.Navigation.ActivatingAnimation();
        var temp3 = new Fuse.Animations.Change<float>(mainAppTranslation_X_inst);
        var temp4 = new Fuse.Animations.Change<float>(topMenuTranslation_Y_inst);
        var temp5 = new Fuse.Animations.Change<float>(bottomMenuTranslation_Y_inst);
        var temp6 = new Fuse.Animations.Change<float>(middleRectangle_Opacity_inst);
        var temp7 = new Fuse.Animations.Change<float>(topMenuRotation_Degrees_inst);
        var temp8 = new Fuse.Animations.Change<float>(bottomMenuRotation_Degrees_inst);
        var temp9 = new Fuse.Animations.Change<float>(topRectangle_Width_inst);
        var temp10 = new Fuse.Animations.Change<float>(bottomRectangle_Width_inst);
        var temp11 = new Fuse.Controls.DockPanel();
        var temp12 = new Fuse.Controls.StatusBarBackground();
        var temp13 = new Fuse.Controls.BottomFrameBackground();
        var temp14 = new Fuse.Controls.StackPanel();
        var temp15 = new Fuse.Controls.Grid();
        var temp16 = new Fuse.Controls.Panel();
        var temp17 = new Fuse.Gestures.Clicked();
        var temp18 = new Fuse.Triggers.Actions.Set<Fuse.Node>(EdgeNavigator_Active_inst);
        var temp19 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        var temp20 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        var temp21 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        var temp22 = new Fuse.Controls.Text();
        var temp23 = new Fuse.Controls.Panel();
        var temp24 = new Fuse.Controls.Rectangle();
        var temp25 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        var temp26 = new Fuse.Controls.ScrollView();
        var temp27 = new Fuse.Controls.StackPanel();
        var temp28 = new Factory(this);
        var temp29 = new Factory1(this);
        var temp30 = new Factory2(this);
        var temp31 = new Factory3(this);
        var temp32 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "data.responseData.feed.entries");
        temp1.LineNumber = 2;
        temp1.FileName = "MainView.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../es5.js"));
        EdgeNavigator.Name = "EdgeNavigator";
        EdgeNavigator.Children.Add(drawyer);
        EdgeNavigator.Children.Add(temp11);
        drawyer.Width = 200f;
        drawyer.Name = "drawyer";
        global::Fuse.Navigation.EdgeNavigation.SetEdge(drawyer, Fuse.Navigation.NavigationEdge.Left);
        drawyer.Behaviors.Add(temp2);
        temp2.Animators.Add(temp3);
        temp2.Animators.Add(temp4);
        temp2.Animators.Add(temp5);
        temp2.Animators.Add(temp6);
        temp2.Animators.Add(temp7);
        temp2.Animators.Add(temp8);
        temp2.Animators.Add(temp9);
        temp2.Animators.Add(temp10);
        temp3.Value = 200f;
        temp4.Value = 0f;
        temp5.Value = 0f;
        temp6.Value = 0f;
        temp6.Easing = Fuse.Animations.Easing.CircularOut;
        temp7.Value = 45f;
        temp7.Easing = Fuse.Animations.Easing.ExponentialIn;
        temp8.Value = -45f;
        temp8.Easing = Fuse.Animations.Easing.ExponentialIn;
        temp9.Value = 28f;
        temp10.Value = 28f;
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp14);
        temp11.Children.Add(temp26);
        temp11.Transforms.Add(mainAppTranslation);
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp13, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Top);
        temp14.Children.Add(temp15);
        temp14.Children.Add(temp24);
        temp15.ColumnData = "auto, 1*, auto";
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp22);
        temp15.Children.Add(temp23);
        temp16.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp16.Width = 32f;
        temp16.Height = 32f;
        temp16.Margin = float4(7f, 5f, 5f, 5f);
        temp16.Children.Add(topRectangle);
        temp16.Children.Add(middleRectangle);
        temp16.Children.Add(bottomRectangle);
        temp16.Behaviors.Add(temp17);
        temp17.Actions.Add(temp18);
        temp18.Value = drawyer;
        topRectangle.Width = 26f;
        topRectangle.Height = 2f;
        topRectangle.Name = "topRectangle";
        topRectangle.Fill = temp19;
        topRectangle.Transforms.Add(topMenuTranslation);
        topRectangle.Transforms.Add(topMenuRotation);
        topMenuTranslation.Y = -9f;
        middleRectangle.Width = 26f;
        middleRectangle.Height = 2f;
        middleRectangle.Name = "middleRectangle";
        middleRectangle.Fill = temp20;
        bottomRectangle.Width = 26f;
        bottomRectangle.Height = 2f;
        bottomRectangle.Name = "bottomRectangle";
        bottomRectangle.Fill = temp21;
        bottomRectangle.Transforms.Add(bottomMenuTranslation);
        bottomRectangle.Transforms.Add(bottomMenuRotation);
        bottomMenuTranslation.Y = 9f;
        temp22.Value = "NewsFeed";
        temp22.FontSize = 22f;
        temp22.TextAlignment = Fuse.Elements.TextAlignment.Center;
        temp22.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp22.Padding = float4(2f, 2f, 2f, 2f);
        temp23.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp23.Width = 32f;
        temp23.Height = 32f;
        temp23.Margin = float4(7f, 5f, 5f, 5f);
        temp24.Height = 1f;
        temp24.Margin = float4(0f, 5f, 0f, 0f);
        temp24.Fill = temp25;
        temp26.Content = temp27;
        temp27.Alignment = Fuse.Elements.Alignment.Top;
        temp27.Behaviors.Add(temp32);
        temp27.Behaviors.Add(temp);
        temp.Factories.Add(temp28);
        temp.Factories.Add(temp29);
        temp.Factories.Add(temp30);
        temp.Factories.Add(temp31);
        this.RootNode = EdgeNavigator;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp1);
    }
}
