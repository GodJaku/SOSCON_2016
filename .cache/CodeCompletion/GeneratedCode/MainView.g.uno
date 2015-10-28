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
    MainView.Fuse_Reactive_Each_object_Items_Property temp_Items_inst;
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
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new MainView.Fuse_Reactive_Each_object_Items_Property(temp);
        var temp1 = new Fuse.Reactive.JavaScript();
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.StatusBarBackground();
        var temp4 = new Fuse.Controls.BottomFrameBackground();
        var temp5 = new Fuse.Controls.StackPanel();
        var temp6 = new Fuse.Controls.Grid();
        var temp7 = new Fuse.Controls.Panel();
        topRectangle = new Fuse.Controls.Rectangle();
        topMenuTranslation = new Fuse.Translation();
        topMenuRotation = new Fuse.Rotation();
        var temp8 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        middleRectangle = new Fuse.Controls.Rectangle();
        var temp9 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        bottomRectangle = new Fuse.Controls.Rectangle();
        bottomMenuTranslation = new Fuse.Translation();
        bottomMenuRotation = new Fuse.Rotation();
        var temp10 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Controls.Panel();
        var temp13 = new Fuse.Controls.Rectangle();
        var temp14 = new Fuse.Drawing.StaticSolidColor(float4(0.2666667f, 0.2666667f, 0.2666667f, 1f));
        var temp15 = new Fuse.Controls.ScrollView();
        var temp16 = new Fuse.Controls.StackPanel();
        var temp17 = new Factory(this);
        var temp18 = new Factory1(this);
        var temp19 = new Factory2(this);
        var temp20 = new Factory3(this);
        var temp21 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "data.responseData.feed.entries");
        temp1.LineNumber = 2;
        temp1.FileName = "MainView.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../es5.js"));
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp15);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Top);
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp13);
        temp6.ColumnData = "auto, 1*, auto";
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp11);
        temp6.Children.Add(temp12);
        temp7.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp7.Width = 32f;
        temp7.Height = 32f;
        temp7.Margin = float4(7f, 5f, 5f, 5f);
        temp7.Children.Add(topRectangle);
        temp7.Children.Add(middleRectangle);
        temp7.Children.Add(bottomRectangle);
        topRectangle.Width = 26f;
        topRectangle.Height = 2f;
        topRectangle.Name = "topRectangle";
        topRectangle.Fill = temp8;
        topRectangle.Transforms.Add(topMenuTranslation);
        topRectangle.Transforms.Add(topMenuRotation);
        topMenuTranslation.Y = -9f;
        middleRectangle.Width = 26f;
        middleRectangle.Height = 2f;
        middleRectangle.Name = "middleRectangle";
        middleRectangle.Fill = temp9;
        bottomRectangle.Width = 26f;
        bottomRectangle.Height = 2f;
        bottomRectangle.Name = "bottomRectangle";
        bottomRectangle.Fill = temp10;
        bottomRectangle.Transforms.Add(bottomMenuTranslation);
        bottomRectangle.Transforms.Add(bottomMenuRotation);
        bottomMenuTranslation.Y = 9f;
        temp11.Value = "NewsFeed";
        temp11.FontSize = 22f;
        temp11.TextAlignment = Fuse.Elements.TextAlignment.Center;
        temp11.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp11.Padding = float4(2f, 2f, 2f, 2f);
        temp12.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp12.Width = 32f;
        temp12.Height = 32f;
        temp12.Margin = float4(7f, 5f, 5f, 5f);
        temp13.Height = 1f;
        temp13.Margin = float4(0f, 5f, 0f, 0f);
        temp13.Fill = temp14;
        temp15.Content = temp16;
        temp16.Alignment = Fuse.Elements.Alignment.Top;
        temp16.Behaviors.Add(temp21);
        temp16.Behaviors.Add(temp);
        temp.Factories.Add(temp17);
        temp.Factories.Add(temp18);
        temp.Factories.Add(temp19);
        temp.Factories.Add(temp20);
        this.RootNode = temp2;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp1);
    }
}
