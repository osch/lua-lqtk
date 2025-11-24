class = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QObject@", {} },
            { "QObject*", { "QObject*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "children",
        binding   = {
            { "QList<QObject*>", {} },
        }
    },
    {
        method    = "connect",
    },
    {
        method    = "event",
        binding   = {
            { "bool", { "QEvent~" }, "virtual" },
        }
    },
    {
        method    = "objectName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "parent",
        binding   = {
            { "QObject*", {} },
        }
    },
    {
        method    = "setObjectName",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setParent",
        binding   = {
            { "void", { "QObject*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

