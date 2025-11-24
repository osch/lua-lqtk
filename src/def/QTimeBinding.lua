class = "QTime"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QTime*", { "int", "int" } },
            { "QTime*", { "int", "int", "int" } },
            { "QTime*", { "int", "int", "int", "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "currentTime",
        binding   = {
            { "QTime", {} },
        }
    },
    {
        func      = "fromMSecsSinceStartOfDay",
        binding   = {
            { "QTime", { "int" } },
        }
    },
    {
        func      = "fromString",
        binding   = {
            { "QTime", { "QString" } },
            { "QTime", { "QString", "Qt::DateFormat" } },
            { "QTime", { "QString", "QString" } },
        }
    },
    {
        func      = "isValid",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int", "int", "int" } },
            { "bool", { "int", "int", "int", "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addMSecs",
        binding   = {
            { "QTime", { "int" } },
        }
    },
    {
        method    = "addSecs",
        binding   = {
            { "QTime", { "int" } },
        }
    },
    {
        method    = "hour",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "isNull",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "minute",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "msec",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "msecsSinceStartOfDay",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "msecsTo",
        binding   = {
            { "int", { "QTime" } },
        }
    },
    {
        method    = "second",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "secsTo",
        binding   = {
            { "int", { "QTime" } },
        }
    },
    {
        method    = "setHMS",
        binding   = {
            { "bool", { "int", "int", "int" } },
            { "bool", { "int", "int", "int", "int" } },
        }
    },
    {
        method    = "toString",
        binding   = {
            { "QString", {} },
            { "QString", { "Qt::DateFormat" } },
            { "QString", { "QString" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

