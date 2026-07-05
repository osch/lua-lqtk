class = "QWidget"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        assert    = true,
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
        method    = "inputMethodQuery",
        binding   = {
            { "QVariant", { "Qt::InputMethodQuery" }, "virtual", "const" },
        }
    },
    {
        method    = "mouseDoubleClickEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "mouseMoveEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "mousePressEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "mouseReleaseEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "virtual", "protected" },
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
            { "void", { "QPaintEvent~" }, "virtual", "protected" },
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
            { "void", { "QResizeEvent~" }, "virtual", "protected" },
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
        method    = "setStyleSheet",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setToolTip",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setToolTipDuration",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setUpdatesEnabled",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setVisible",
        binding   = {
            { "void", { "bool" }, "virtual" },
        }
    },
    {
        method    = "setWhatsThis",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setWindowFilePath",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setWindowFlag",
        binding   = {
            { "void", { "Qt::WindowType" } },
            { "void", { "Qt::WindowType", "bool" } },
        }
    },
    {
        method    = "setWindowFlags",
        binding   = {
            { "void", { "Qt::WindowFlags" } },
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
    {
        method    = "windowFlags",
        binding   = {
            { "Qt::WindowFlags", {} },
        }
    },
    {
        method    = "windowModality",
        binding   = {
            { "Qt::WindowModality", {} },
        }
    },
    {
        method    = "windowOpacity",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "windowRole",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "windowState",
        binding   = {
            { "Qt::WindowStates", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

