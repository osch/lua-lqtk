class = "QItemSelectionModel"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        flag   = "SelectionFlags",
        values = {
            { "NoUpdate",       cmt = "No selection will be made." },
            { "Clear",          cmt = "The complete selection will be cleared." },
            { "Select",         cmt = "All specified indexes will be selected." },
            { "Deselect",       cmt = "All specified indexes will be deselected." },
            { "Toggle",         cmt = "All specified indexes will be selected or deselected depending on their current state." },
            { "Current",        cmt = "The current selection will be updated." },
            { "Rows",           cmt = "All indexes will be expanded to span rows." },
            { "Columns",        cmt = "All indexes will be expanded to span columns." },
            { "SelectCurrent",  cmt = "| Current A combination of Select and Current, provided for convenience." },
            { "ToggleCurrent",  cmt = "| Current A combination of Toggle and Current, provided for convenience." },
            { "ClearAndSelect", cmt = "| Select A combination of Clear and Select, provided for convenience." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QItemSelectionModel*", {} },
            { "QItemSelectionModel*", { "QAbstractItemModel?" } },
            { "QItemSelectionModel*", { "QAbstractItemModel?", "QObject?" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "clear",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "clearCurrentIndex",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "clearSelection",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "columnIntersectsSelection",
        binding   = {
            { "bool", { "int" } },
            { "bool", { "int", "QModelIndex" } },
        }
    },
    {
        method    = "currentIndex",
        binding   = {
            { "QModelIndex", {} },
        }
    },
    {
        method    = "emitSelectionChanged",
        binding   = {
            { "void", { "QItemSelection", "QItemSelection" }, "protected" },
        }
    },
    {
        method    = "hasSelection",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isColumnSelected",
        binding   = {
            { "bool", { "int" } },
            { "bool", { "int", "QModelIndex" } },
        }
    },
    {
        method    = "isRowSelected",
        binding   = {
            { "bool", { "int" } },
            { "bool", { "int", "QModelIndex" } },
        }
    },
    {
        method    = "isSelected",
        binding   = {
            { "bool", { "QModelIndex" } },
        }
    },
    {
        method    = "model",
        binding   = {
            { "QAbstractItemModel*", {} },
        }
    },
    {
        method    = "reset",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "rowIntersectsSelection",
        binding   = {
            { "bool", { "int" } },
            { "bool", { "int", "QModelIndex" } },
        }
    },
    {
        method    = "select",
        binding   = {
            { "void", { "QItemSelection", "QItemSelectionModel::SelectionFlags" }, "virtual" },
            { "void", { "QModelIndex", "QItemSelectionModel::SelectionFlags" }, "virtual" },
        }
    },
    {
        method    = "selectedColumns",
        binding   = {
            { "QList<QModelIndex>", {} },
            { "QList<QModelIndex>", { "int" } },
        }
    },
    {
        method    = "selectedIndexes",
        binding   = {
            { "QList<QModelIndex>", {} },
        }
    },
    {
        method    = "selectedRows",
        binding   = {
            { "QList<QModelIndex>", {} },
            { "QList<QModelIndex>", { "int" } },
        }
    },
    {
        method    = "setCurrentIndex",
        binding   = {
            { "void", { "QModelIndex", "QItemSelectionModel::SelectionFlags" }, "virtual" },
        }
    },
    {
        method    = "setModel",
        binding   = {
            { "void", { "QAbstractItemModel*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

