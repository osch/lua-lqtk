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
        method    = "columnCount",
        binding   = {
            { "int", {} },
            { "int", { "QModelIndex" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "data",
        binding   = {
            { "QVariant", { "QModelIndex" } },
            { "QVariant", { "QModelIndex", "int" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "index",
        binding   = {
            { "QModelIndex!", { "int", "int" } },
            { "QModelIndex!", { "int", "int", "QModelIndex" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "item",
        binding   = {
            { "QStandardItem*", { "int", "int" } },
        }
    },
    {
        method    = "parent",
        binding   = {
            { "QObject*", {} },
            { "QModelIndex!", { "QModelIndex" }, "virtual", "override", "const" },
        }
    },
    {
        method    = "rowCount",
        binding   = {
            { "int", {} },
            { "int", { "QModelIndex" }, "virtual", "override", "const" },
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

