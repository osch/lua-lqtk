class = "QTableView"

baseClass = "QAbstractItemView"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QTableView@", {} },
            { "QTableView*", { "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "horizontalHeader",
        binding   = {
            { "QHeaderView*", {} },
        }
    },
    {
        method    = "resizeColumnToContents",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "resizeColumnsToContents",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "resizeRowToContents",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "resizeRowsToContents",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "setHorizontalHeader",
        binding   = {
            { "void", { "QHeaderView*" } },
        }
    },
    {
        method    = "setModel",
        binding   = {
            { "void", { "QAbstractItemModel?" }, "virtual", "override" },
        }
    },
    {
        method    = "setShowGrid",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setWordWrap",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "verticalHeader",
        binding   = {
            { "QHeaderView*", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

