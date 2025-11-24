class = "QCoreApplication"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
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

