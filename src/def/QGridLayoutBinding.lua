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
            { "void", { "QLayoutItem*" }, "virtual", "protected" },
        }
    },
    {
        method    = "addLayout",
        binding   = {
            { "void", { "QLayout*", "int", "int" } },
            { "void", { "QLayout*", "int", "int", "Qt::Alignment" } },
            { "void", { "QLayout*", "int", "int", "int", "int" } },
            { "void", { "QLayout*", "int", "int", "int", "int", "Qt::Alignment" } },
        }
    },
    {
        method    = "addWidget",
        binding   = {
            { "void", { "QWidget*", "int", "int" } },
            { "void", { "QWidget*", "int", "int", "Qt::Alignment" } },
            { "void", { "QWidget*", "int", "int", "int", "int" } },
            { "void", { "QWidget*", "int", "int", "int", "int", "Qt::Alignment" } },
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

