class = "QCoreApplication"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "applicationDirPath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "applicationFilePath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "applicationName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "applicationPid",
        binding   = {
            { "qint64", {} },
        }
    },
    {
        func      = "applicationVersion",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "instance",
        binding   = {
            { "QCoreApplication*", {} },
        }
    },
    {
        func      = "processEvents",
        binding   = {
            { "void", {} },
            { "void", { "QEventLoop::ProcessEventsFlags" } },
        }
    },
    {
        func      = "sendPostedEvents",
        binding   = {
            { "void", {} },
            { "void", { "QObject?" } },
            { "void", { "QObject?", "QEvent::Type" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

