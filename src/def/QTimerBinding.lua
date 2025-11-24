class = "QTimer"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QTimer@", {} },
            { "QTimer*", { "QObject*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "isActive",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isSingleShot",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "remainingTime",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "setInterval",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setSingleShot",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setTimerType",
        binding   = {
            { "void", { "Qt::TimerType" } },
        }
    },
    {
        method    = "start",
        binding   = {
            { "void", {} },
            { "void", { "int" } },
        }
    },
    {
        method    = "stop",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "timerEvent",
        binding   = {
            { "void", { "QTimerEvent~" }, "protected" },
        }
    },
    {
        method    = "timerId",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "timerType",
        binding   = {
            { "Qt::TimerType", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

