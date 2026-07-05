class = "QTreeView"

baseClass = "QAbstractItemView"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QTreeView*", {} },
            { "QTreeView*", { "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "header",
        binding   = {
            { "QHeaderView*", {} },
        }
    },
    {
        method    = "setItemsExpandable",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setModel",
        binding   = {
            { "void", { "QAbstractItemModel*" }, "virtual", "override" },
        }
    },
    {
        method    = "setRootIsDecorated",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setSelectionModel",
        binding   = {
            { "void", { "QItemSelectionModel*" }, "virtual", "override" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

