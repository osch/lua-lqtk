class = "QWidget"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        intercept = true,
        binding   = {
            { "QWidget*", {} },
            { "QWidget*", { "QWidget?" } },
            { "QWidget*", { "QWidget?", "Qt::WindowFlags" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "keyboardGrabber",
        binding   = {
            { "QWidget*", {} },
        }
    },
    {
        func      = "mouseGrabber",
        binding   = {
            { "QWidget*", {} },
        }
    },
    {
        func      = "setTabOrder",
        binding   = {
            { "void", { "QWidget*", "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "acceptDrops",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "accessibleDescription",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "accessibleIdentifier",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "accessibleName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "addActions",
        binding   = {
            { "void", { "QList<QAction*>" } },
        }
    },
    {
        method    = "close",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "closeEvent",
        binding   = {
            { "void", { "QCloseEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "event",
        binding   = {
            { "bool", { "QEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "font",
        binding   = {
            { "QFont", {} },
        }
    },
    {
        method    = "geometry",
        binding   = {
            { "QRect", {} },
        }
    },
    {
        method    = "hasHeightForWidth",
        binding   = {
            { "bool", {}, "virtual", "const" },
        }
    },
    {
        method    = "height",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "heightForWidth",
        binding   = {
            { "int", { "int" }, "virtual", "const" },
        }
    },
    {
        method    = "hide",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "mouseDoubleClickEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "protected" },
        }
    },
    {
        method    = "mouseMoveEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "protected" },
        }
    },
    {
        method    = "mousePressEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "protected" },
        }
    },
    {
        method    = "mouseReleaseEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "protected" },
        }
    },
    {
        method    = "move",
        binding   = {
            { "void", { "QPoint" } },
            { "void", { "int", "int" } },
        }
    },
    {
        method    = "paintEvent",
        binding   = {
            { "void", { "QPaintEvent~" }, "protected" },
        }
    },
    {
        method    = "palette",
        binding   = {
            { "QPalette", {} },
        }
    },
    {
        method    = "parentWidget",
        binding   = {
            { "QWidget*", {} },
        }
    },
    {
        method    = "resize",
        binding   = {
            { "void", { "QSize" } },
            { "void", { "int", "int" } },
        }
    },
    {
        method    = "resizeEvent",
        binding   = {
            { "void", { "QResizeEvent~" }, "protected" },
        }
    },
    {
        method    = "setBackgroundRole",
        binding   = {
            { "void", { "QPalette::ColorRole" } },
        }
    },
    {
        method    = "setFont",
        binding   = {
            { "void", { "QFont" } },
        }
    },
    {
        method    = "setGeometry",
        binding   = {
            { "void", { "QRect" } },
        }
    },
    {
        method    = "setLayout",
        binding   = {
            { "void", { "QLayout*" } },
        }
    },
    {
        method    = "setSizePolicy",
        binding   = {
            { "void", { "QSizePolicy" } },
        }
    },
    {
        method    = "setWindowTitle",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "show",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "size",
        binding   = {
            { "QSize", {} },
        }
    },
    {
        method    = "sizeHint",
        binding   = {
            { "QSize", {} },
        }
    },
    {
        method    = "sizePolicy",
        binding   = {
            { "QSizePolicy", {} },
        }
    },
    {
        method    = "update",
        binding   = {
            { "void", {} },
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

