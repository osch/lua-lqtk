class = "QLayout"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QLayout@", {} },
            { "QLayout*", { "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addItem",
        binding   = {
            { "void", { "QLayoutItem@" }, "=0" },
        }
    },
    {
        method    = "addWidget",
        binding   = {
            { "void", { "QWidget*" } },
        }
    },
    {
        method    = "count",
        binding   = {
            { "int", {}, "const", "=0" },
        }
    },
    {
        method    = "geometry",
        binding   = {
            { "QRect", {}, "override", "const" },
        }
    },
    {
        method    = "itemAt",
        binding   = {
            { "QLayoutItem*?", { "int" }, "const", "=0",  },
        }
    },
    {
        method    = "parentWidget",
        binding   = {
            { "QWidget*", {} },
        }
    },
    {
        method    = "setGeometry",
        binding   = {
            { "void", { "QRect" }, "override" },
        }
    },
    {
        method    = "sizeHint",
        binding   = {
            { "QSize", {}, "const", "=0" },
        }
    },
    {
        method    = "takeAt",
        binding   = {
            { "QLayoutItem@?", { "int" }, "=0" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

