class = "QIcon"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "Mode",
        values = {
            { "Normal",   cmt = "Display the pixmap when the user is not interacting with the icon, but the functionality represented by the icon is available." },
            { "Disabled", cmt = "Display the pixmap when the functionality represented by the icon is not available." },
            { "Active",   cmt = "Display the pixmap when the functionality represented by the icon is available and the user is interacting with the icon, for example, moving the mouse over it or clicking it." },
            { "Selected", cmt = "Display the pixmap when the item represented by the icon is selected." },
        }
    },
    {
        enum   = "State",
        values = {
            { "On",  cmt = "Display the pixmap when the widget is in an \"on\" state" },
            { "Off", cmt = "Display the pixmap when the widget is in an \"off\" state" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QIcon*", {} },
            { "QIcon*", { "QPixmap" } },
            { "QIcon*", { "QString" } },
            { "QIcon*", { "QIcon" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "fallbackSearchPaths",
        binding   = {
            { "QStringList", {} },
        }
    },
    {
        func      = "fallbackThemeName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "fromTheme",
        binding   = {
            { "QIcon", { "QString" } },
            { "QIcon", { "QString", "QIcon" } },
        }
    },
    {
        func      = "hasThemeIcon",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        func      = "setFallbackSearchPaths",
        binding   = {
            { "void", { "QStringList" } },
        }
    },
    {
        func      = "setFallbackThemeName",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        func      = "setThemeName",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        func      = "setThemeSearchPaths",
        binding   = {
            { "void", { "QStringList" } },
        }
    },
    {
        func      = "themeName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "themeSearchPaths",
        binding   = {
            { "QStringList", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "actualSize",
        binding   = {
            { "QSize", { "QSize" } },
            { "QSize", { "QSize", "QIcon::Mode" } },
            { "QSize", { "QSize", "QIcon::Mode", "QIcon::State" } },
        }
    },
    {
        method    = "addFile",
        binding   = {
            { "void", { "QString" } },
            { "void", { "QString", "QSize" } },
            { "void", { "QString", "QSize", "QIcon::Mode" } },
            { "void", { "QString", "QSize", "QIcon::Mode", "QIcon::State" } },
        }
    },
    {
        method    = "addPixmap",
        binding   = {
            { "void", { "QPixmap" } },
            { "void", { "QPixmap", "QIcon::Mode" } },
            { "void", { "QPixmap", "QIcon::Mode", "QIcon::State" } },
        }
    },
    {
        method    = "availableSizes",
        binding   = {
            { "QList<QSize>", {} },
            { "QList<QSize>", { "QIcon::Mode" } },
            { "QList<QSize>", { "QIcon::Mode", "QIcon::State" } },
        }
    },
    {
        method    = "cacheKey",
        binding   = {
            { "qint64", {} },
        }
    },
    {
        method    = "isMask",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isNull",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "name",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "setIsMask",
        binding   = {
            { "void", { "bool" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

