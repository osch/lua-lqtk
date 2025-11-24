class = "QBoxLayout"

baseClass = "QLayout"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "Direction",
        values = {
            "LeftToRight",
            "RightToLeft",
            "TopToBottom",
            "BottomToTop",
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QBoxLayout@", { "QBoxLayout::Direction" } },
            { "QBoxLayout*", { "QBoxLayout::Direction", "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addItem",
        binding   = {
            { "void", { "QLayoutItem@" }, "override" },
        }
    },
    {
        method    = "addLayout",
        binding   = {
            { "void", { "QLayout*" } },
            { "void", { "QLayout*", "int" } },
        }
    },
    {
        method    = "addWidget",
        binding   = {
            { "void", { "QWidget*" } },
            { "void", { "QWidget*", "int" } },
            { "void", { "QWidget*", "int", "Qt::Alignment" } },
        }
    },
    {
        method    = "count",
        binding   = {
            { "int", {}, "override", "const" },
        }
    },
    {
        method    = "hasHeightForWidth",
        binding   = {
            { "bool", {}, "override", "const" },
        }
    },
    {
        method    = "heightForWidth",
        binding   = {
            { "int", { "int" }, "override", "const" },
        }
    },
    {
        method    = "itemAt",
        binding   = {
            { "QLayoutItem*?", { "int" }, "override", "const" },
        }
    },
    {
        method    = "sizeHint",
        binding   = {
            { "QSize", {}, "override", "const" },
        }
    },
    {
        method    = "takeAt",
        binding   = {
            { "QLayoutItem@?", { "int" }, "override" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

