class = "QAbstractItemModel"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "LayoutChangeHint",
        values = {
            { "NoLayoutChangeHint", cmt = "No hint is available." },
            { "VerticalSortHint",   cmt = "Rows are being sorted." },
            { "HorizontalSortHint", cmt = "Columns are being sorted." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QAbstractItemModel*", {} },
            { "QAbstractItemModel*", { "QObject*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "columnCount",
        binding   = {
            { "int", { "QModelIndex" }, "virtual", "const", "=0" },
        }
    },
    {
        method    = "createIndex",
        binding   = {
            { "QModelIndex!", { "int", "int" }, "protected", "const" },
            { "QModelIndex!", { "int", "int", "int" }, "protected", "const" },
        }
    },
    {
        method    = "data",
        binding   = {
            { "QVariant", { "QModelIndex", "int" }, "virtual", "const", "=0" },
        }
    },
    {
        method    = "index",
        binding   = {
            { "QModelIndex!", { "int", "int", "QModelIndex" }, "virtual", "const", "=0" },
        }
    },
    {
        method    = "parent",
        binding   = {
            { "QObject*", {} },
            { "QModelIndex!", { "QModelIndex" }, "virtual", "const", "=0" },
        }
    },
    {
        method    = "rowCount",
        binding   = {
            { "int", { "QModelIndex" }, "virtual", "const", "=0" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

