class = "QItemSelection"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QItemSelection*", {} },
            { "QItemSelection*", { "QModelIndex", "QModelIndex" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "split",
        binding   = {
            { "void", { "QItemSelectionRange", "QItemSelectionRange", "QItemSelection*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "contains",
        binding   = {
            { "bool", { "QModelIndex" } },
        }
    },
    {
        method    = "indexes",
        binding   = {
            { "QList<QModelIndex>", {} },
        }
    },
    {
        method    = "merge",
        binding   = {
            { "void", { "QItemSelection", "QItemSelectionModel::SelectionFlags" } },
        }
    },
    {
        method    = "select",
        binding   = {
            { "void", { "QModelIndex", "QModelIndex" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

