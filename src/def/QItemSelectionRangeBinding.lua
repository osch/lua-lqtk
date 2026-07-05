class = "QItemSelectionRange"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QItemSelectionRange*", {} },
            { "QItemSelectionRange*", { "QModelIndex" } },
            { "QItemSelectionRange*", { "QModelIndex", "QModelIndex" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "bottom",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "contains",
        binding   = {
            { "bool", { "QModelIndex" } },
            { "bool", { "int", "int", "QModelIndex" } },
        }
    },
    {
        method    = "height",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "indexes",
        binding   = {
            { "QList<QModelIndex>", {} },
        }
    },
    {
        method    = "intersected",
        binding   = {
            { "QItemSelectionRange", { "QItemSelectionRange" } },
        }
    },
    {
        method    = "intersects",
        binding   = {
            { "bool", { "QItemSelectionRange" } },
        }
    },
    {
        method    = "isEmpty",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isValid",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "left",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "parent",
        binding   = {
            { "QModelIndex", {} },
        }
    },
    {
        method    = "right",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "top",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "width",
        binding   = {
            { "int", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

