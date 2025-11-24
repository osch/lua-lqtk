class = "QWidgetItem"

baseClass = "QLayoutItem"

needsValidityCheck = true
needsGuard         = true

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QWidgetItem@", { "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "hasHeightForWidth",
        binding   = {
            { "bool", {}, "override", "const" },
        }
    },
    {
        method    = "heightForWidth",
        binding   = {
            { "int", { "int" }, "override", "const" },
        }
    },
    {
        method    = "widget",
        binding   = {
            { "QWidget*", {}, "override", "const" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

