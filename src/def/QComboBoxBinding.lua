class = "QComboBox"

baseClass = "QWidget"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "InsertPolicy",
        values = {
            { "NoInsert",             cmt = "The string will not be inserted into the combobox." },
            { "InsertAtTop",          cmt = "The string will be inserted as the first item in the combobox." },
            { "InsertAtCurrent",      cmt = "The current item will be replaced by the string." },
            { "InsertAtBottom",       cmt = "The string will be inserted after the last item in the combobox." },
            { "InsertAfterCurrent",   cmt = "The string is inserted after the current item in the combobox." },
            { "InsertBeforeCurrent",  cmt = "The string is inserted before the current item in the combobox." },
            { "InsertAlphabetically", cmt = "The string is inserted in the alphabetic order in the combobox." },
        }
    },
    {
        enum   = "SizeAdjustPolicy",
        values = {
            { "AdjustToContents",                      cmt = "The combobox will always adjust to the contents" },
            { "AdjustToContentsOnFirstShow",           cmt = "The combobox will adjust to its contents the first time it is shown." },
            { "AdjustToMinimumContentsLengthWithIcon", cmt = "The combobox will adjust to minimumContentsLength plus space for an icon. For performance reasons use this policy on large models." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QComboBox*", {} },
            { "QComboBox*", { "QWidget?" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addItem",
        binding   = {
            { "void", { "QString" } },
            { "void", { "QString", "QVariant" } },
            { "void", { "QIcon", "QString" } },
            { "void", { "QIcon", "QString", "QVariant" } },
        }
    },
    {
        method    = "addItems",
        binding   = {
            { "void", { "QStringList" } },
        }
    },
    {
        method    = "changeEvent",
        binding   = {
            { "void", { "QEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "clear",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "clearEditText",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "completer",
        binding   = {
            { "QCompleter*", {} },
        }
    },
    {
        method    = "contextMenuEvent",
        binding   = {
            { "void", { "QContextMenuEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "count",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "currentData",
        binding   = {
            { "QVariant", {} },
            { "QVariant", { "int" } },
        }
    },
    {
        method    = "currentIndex",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "currentText",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "duplicatesEnabled",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "event",
        binding   = {
            { "bool", { "QEvent~" }, "virtual", "override" },
        }
    },
    {
        method    = "findData",
        binding   = {
            { "int", { "QVariant" } },
            { "int", { "QVariant", "int" } },
            { "int", { "QVariant", "int", "Qt::MatchFlags" } },
        }
    },
    {
        method    = "findText",
        binding   = {
            { "int", { "QString" } },
            { "int", { "QString", "Qt::MatchFlags" } },
        }
    },
    {
        method    = "focusInEvent",
        binding   = {
            { "void", { "QFocusEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "focusOutEvent",
        binding   = {
            { "void", { "QFocusEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "hasFrame",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "hideEvent",
        binding   = {
            { "void", { "QHideEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "hidePopup",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "iconSize",
        binding   = {
            { "QSize", {} },
        }
    },
    {
        method    = "inputMethodEvent",
        binding   = {
            { "void", { "QInputMethodEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "inputMethodQuery",
        binding   = {
            { "QVariant", { "Qt::InputMethodQuery" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "insertItem",
        binding   = {
            { "void", { "int", "QString" } },
            { "void", { "int", "QString", "QVariant" } },
        }
    },
    {
        method    = "insertItems",
        binding   = {
            { "void", { "int", "QStringList" } },
        }
    },
    {
        method    = "insertPolicy",
        binding   = {
            { "QComboBox::InsertPolicy", {} },
        }
    },
    {
        method    = "insertSeparator",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "isEditable",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "itemData",
        binding   = {
            { "QVariant", { "int" } },
            { "QVariant", { "int", "int" } },
        }
    },
    {
        method    = "itemIcon",
        binding   = {
            { "QIcon", { "int" } },
        }
    },
    {
        method    = "itemText",
        binding   = {
            { "QString", { "int" } },
        }
    },
    {
        method    = "keyPressEvent",
        binding   = {
            { "void", { "QKeyEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "keyReleaseEvent",
        binding   = {
            { "void", { "QKeyEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "lineEdit",
        binding   = {
            { "QLineEdit*", {} },
        }
    },
    {
        method    = "maxCount",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "maxVisibleItems",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "minimumContentsLength",
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
        method    = "model",
        binding   = {
            { "QAbstractItemModel*", {} },
        }
    },
    {
        method    = "modelColumn",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "mousePressEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "mouseReleaseEvent",
        binding   = {
            { "void", { "QMouseEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "paintEvent",
        binding   = {
            { "void", { "QPaintEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "placeholderText",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "removeItem",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "resizeEvent",
        binding   = {
            { "void", { "QResizeEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "rootModelIndex",
        binding   = {
            { "QModelIndex", {} },
        }
    },
    {
        method    = "setCompleter",
        binding   = {
            { "void", { "QCompleter*" } },
        }
    },
    {
        method    = "setCurrentIndex",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setCurrentText",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setDuplicatesEnabled",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setEditText",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setEditable",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setFrame",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setIconSize",
        binding   = {
            { "void", { "QSize" } },
        }
    },
    {
        method    = "setInsertPolicy",
        binding   = {
            { "void", { "QComboBox::InsertPolicy" } },
        }
    },
    {
        method    = "setItemData",
        binding   = {
            { "void", { "int", "QVariant" } },
            { "void", { "int", "QVariant", "int" } },
        }
    },
    {
        method    = "setItemIcon",
        binding   = {
            { "void", { "int", "QIcon" } },
        }
    },
    {
        method    = "setItemText",
        binding   = {
            { "void", { "int", "QString" } },
        }
    },
    {
        method    = "setLineEdit",
        binding   = {
            { "void", { "QLineEdit*" } },
        }
    },
    {
        method    = "setMaxCount",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setMaxVisibleItems",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setMinimumContentsLength",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setModel",
        binding   = {
            { "void", { "QAbstractItemModel*" }, "virtual" },
        }
    },
    {
        method    = "setModelColumn",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setPlaceholderText",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setRootModelIndex",
        binding   = {
            { "void", { "QModelIndex" } },
        }
    },
    {
        method    = "setSizeAdjustPolicy",
        binding   = {
            { "void", { "QComboBox::SizeAdjustPolicy" } },
        }
    },
    {
        method    = "setView",
        binding   = {
            { "void", { "QAbstractItemView*" } },
        }
    },
    {
        method    = "showEvent",
        binding   = {
            { "void", { "QShowEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "showPopup",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "sizeAdjustPolicy",
        binding   = {
            { "QComboBox::SizeAdjustPolicy", {} },
        }
    },
    {
        method    = "sizeHint",
        binding   = {
            { "QSize", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "view",
        binding   = {
            { "QAbstractItemView*", {} },
        }
    },
    {
        method    = "wheelEvent",
        binding   = {
            { "void", { "QWheelEvent~" }, "virtual", "override", "protected" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

