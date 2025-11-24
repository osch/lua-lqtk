class = "QBrush"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QBrush*", {} },
            { "QBrush*", { "Qt::BrushStyle" } },
            { "QBrush*", { "QGradient" } },
            { "QBrush*", { "QColor" } },
            { "QBrush*", { "QColor", "Qt::BrushStyle" } },
            { "QBrush*", { "QBrush" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "color",
        binding   = {
            { "QColor", {} },
        }
    },
    {
        method    = "isOpaque",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "setColor",
        binding   = {
            { "void", { "QColor" } },
            { "void", { "Qt::GlobalColor" } },
        }
    },
    {
        method    = "setStyle",
        binding   = {
            { "void", { "Qt::BrushStyle" } },
        }
    },
    {
        method    = "setTransform",
        binding   = {
            { "void", { "QTransform" } },
        }
    },
    {
        method    = "style",
        binding   = {
            { "Qt::BrushStyle", {} },
        }
    },
    {
        method    = "transform",
        binding   = {
            { "QTransform", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

