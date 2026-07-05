class = "QAbstractTableModel"

baseClass = "QAbstractItemModel"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QAbstractTableModel*", {} },
            { "QAbstractTableModel*", { "QObject?" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "flags",
        binding   = {
            { "Qt::ItemFlags", { "QModelIndex" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "index",
        binding   = {
            { "QModelIndex", { "int", "int" } },
            { "QModelIndex", { "int", "int", "QModelIndex" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "parent",
        binding   = {
            { "QModelIndex!", { "QModelIndex" }, "private", "virtual", "override", "const" },
        }
    },
    {
        method    = "sibling",
        binding   = {
            { "QModelIndex", { "int", "int", "QModelIndex" }, "virtual", "override", "const" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

