class = "QSizeF"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QSizeF*", {} },
            { "QSizeF*", { "QSize" } },
            { "QSizeF*", { "double", "double" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "boundedTo",
        binding   = {
            { "QSizeF", { "QSizeF" } },
        }
    },
    {
        method    = "expandedTo",
        binding   = {
            { "QSizeF", { "QSizeF" } },
        }
    },
    {
        method    = "height",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "isEmpty",
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
        method    = "isValid",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "scale",
        binding   = {
            { "void", { "double", "double", "Qt::AspectRatioMode" } },
            { "void", { "QSizeF", "Qt::AspectRatioMode" } },
        }
    },
    {
        method    = "scaled",
        binding   = {
            { "QSizeF", { "double", "double", "Qt::AspectRatioMode" } },
            { "QSizeF", { "QSizeF", "Qt::AspectRatioMode" } },
        }
    },
    {
        method    = "setHeight",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setWidth",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "toSize",
        binding   = {
            { "QSize", {} },
        }
    },
    {
        method    = "transpose",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "transposed",
        binding   = {
            { "QSizeF", {} },
        }
    },
    {
        method    = "width",
        binding   = {
            { "double", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

