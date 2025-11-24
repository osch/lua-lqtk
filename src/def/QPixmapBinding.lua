class = "QPixmap"

onlyWrapped = true
needsGuard  = true

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QPixmap*", {} },
            { "QPixmap*", { "int", "int" } },
            { "QPixmap*", { "QString" } },
            { "QPixmap*", { "QSize" } },
            { "QPixmap*", { "QPixmap" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "defaultDepth",
        binding   = {
            { "int", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "deviceIndependentSize",
        binding   = {
            { "QSizeF", {} },
        }
    },
    {
        method    = "devicePixelRatio",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "fill",
        binding   = {
            { "void", {} },
            { "void", { "QColor" } },
            { "void", { "Qt::GlobalColor" } },
        }
    },
    {
        method    = "hasAlpha",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "hasAlphaChannel",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "height",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "isNull",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "rect",
        binding   = {
            { "QRect", {} },
        }
    },
    {
        method    = "setDevicePixelRatio",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "size",
        binding   = {
            { "QSize", {} },
        }
    },
    {
        method    = "width",
        binding   = {
            { "int", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

