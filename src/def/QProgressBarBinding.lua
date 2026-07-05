class = "QProgressBar"

baseClass = "QWidget"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "Direction",
        values = {
            { "TopToBottom", cmt = "The text is rotated 90 degrees clockwise." },
            { "BottomToTop", cmt = "The text is rotated 90 degrees counter-clockwise." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QProgressBar*", {} },
            { "QProgressBar*", { "QWidget?" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "alignment",
        binding   = {
            { "Qt::Alignment", {} },
        }
    },
    {
        method    = "event",
        binding   = {
            { "bool", { "QEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "format",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "invertedAppearance",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isTextVisible",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "maximum",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "minimum",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "minimumSizeHint",
        binding   = {
            { "QSize", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "orientation",
        binding   = {
            { "Qt::Orientation", {} },
        }
    },
    {
        method    = "paintEvent",
        binding   = {
            { "void", { "QPaintEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "reset",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "resetFormat",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "setAlignment",
        binding   = {
            { "void", { "Qt::Alignment" } },
        }
    },
    {
        method    = "setFormat",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setInvertedAppearance",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setMaximum",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setMinimum",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setOrientation",
        binding   = {
            { "void", { "Qt::Orientation" } },
        }
    },
    {
        method    = "setRange",
        binding   = {
            { "void", { "int", "int" } },
        }
    },
    {
        method    = "setTextDirection",
        binding   = {
            { "void", { "QProgressBar::Direction" } },
        }
    },
    {
        method    = "setTextVisible",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setValue",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "sizeHint",
        binding   = {
            { "QSize", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "text",
        binding   = {
            { "QString", {}, "virtual", "const" },
        }
    },
    {
        method    = "textDirection",
        binding   = {
            { "QProgressBar::Direction", {} },
        }
    },
    {
        method    = "value",
        binding   = {
            { "int", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

