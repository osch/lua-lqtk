class = "QGridLayout"

baseClass = "QLayout"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QGridLayout@", {} },
            { "QGridLayout*", { "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addItem",
        binding   = {
            { "void", { "QLayoutItem*" }, "protected" },
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

