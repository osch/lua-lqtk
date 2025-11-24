class = "QStandardItem"

needsGuard      = true
needsOwnerCheck = true

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QStandardItem@", {} },
            { "QStandardItem@", { "QString" } },
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
        method    = "child",
        binding   = {
            { "QStandardItem*", { "int", "int" } },
        }
    },
    {
        method    = "model",
        binding   = {
            { "QStandardItemModel*", {} },
        }
    },
    {
        method    = "parent",
        binding   = {
            { "QStandardItem*", {} },
        }
    },
    {
        method    = "text",
        binding   = {
            { "QString", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

