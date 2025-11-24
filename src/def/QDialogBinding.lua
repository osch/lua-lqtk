class = "QDialog"

baseClass = "QWidget"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "DialogCode",
        values = {
            "Accepted",
            "Rejected",
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QDialog*", {} },
            { "QDialog*", { "QWidget?" } },
            { "QDialog*", { "QWidget?", "Qt::WindowFlags" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "accept",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "closeEvent",
        binding   = {
            { "void", { "QCloseEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "contextMenuEvent",
        binding   = {
            { "void", { "QContextMenuEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "done",
        binding   = {
            { "void", { "int" }, "virtual" },
        }
    },
    {
        method    = "isSizeGripEnabled",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "keyPressEvent",
        binding   = {
            { "void", { "QKeyEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "minimumSizeHint",
        binding   = {
            { "QSize", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "open",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "reject",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "resizeEvent",
        binding   = {
            { "void", { "QResizeEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "result",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "setModal",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setResult",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setSizeGripEnabled",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setVisible",
        binding   = {
            { "void", { "bool" }, "virtual", "override" },
        }
    },
    {
        method    = "showEvent",
        binding   = {
            { "void", { "QShowEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "sizeHint",
        binding   = {
            { "QSize", {}, "virtual", "override", "const" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

