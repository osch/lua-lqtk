class = "QContextMenuEvent"

baseClass = "QInputEvent"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "Reason",
        values = {
            { "Mouse",    cmt = "The mouse caused the event to be sent. Normally this means the right mouse button was clicked, but this is platform dependent." },
            { "Keyboard", cmt = "The keyboard caused this event to be sent. On Windows, this means the menu button was pressed." },
            { "Other",    cmt = "The event was sent by some other means (i.e. not by the mouse or keyboard)." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QContextMenuEvent*", { "QContextMenuEvent::Reason", "QPoint", "QPoint" } },
            { "QContextMenuEvent*", { "QContextMenuEvent::Reason", "QPoint", "QPoint", "Qt::KeyboardModifiers" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "globalPos",
        binding   = {
            { "QPoint", {} },
        }
    },
    {
        method    = "globalX",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "globalY",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "pos",
        binding   = {
            { "QPoint", {} },
        }
    },
    {
        method    = "reason",
        binding   = {
            { "QContextMenuEvent::Reason", {} },
        }
    },
    {
        method    = "x",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "y",
        binding   = {
            { "int", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

