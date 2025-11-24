class = "QStandardItemModel"

baseClass = "QAbstractItemModel"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QStandardItemModel@", {} },
            { "QStandardItemModel*", { "QObject*" } },
            { "QStandardItemModel@", { "int", "int" } },
            { "QStandardItemModel*", { "int", "int", "QObject*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "appendRow",
        binding   = {
            { "void", { "QList<QStandardItem*>" } },
        }
    },
    {
        method    = "data",
        binding   = {
            { "QVariant", { "QModelIndex", "int" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "item",
        binding   = {
            { "QStandardItem*", { "int", "int" } },
        }
    },
    {
        method    = "setHorizontalHeaderLabels",
        binding   = {
            { "void", { "QStringList" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

