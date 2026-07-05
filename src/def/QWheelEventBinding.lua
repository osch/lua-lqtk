class = "QWheelEvent"

baseClass = "QSinglePointEvent"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QWheelEvent*", { "QPointF", "QPointF", "QPoint", "QPoint", "Qt::MouseButtons", "Qt::KeyboardModifiers", "Qt::ScrollPhase", "bool" } },
            { "QWheelEvent*", { "QPointF", "QPointF", "QPoint", "QPoint", "Qt::MouseButtons", "Qt::KeyboardModifiers", "Qt::ScrollPhase", "bool", "Qt::MouseEventSource" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "angleDelta",
        binding   = {
            { "QPoint", {} },
        }
    },
    {
        method    = "inverted",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isBeginEvent",
        binding   = {
            { "bool", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "isEndEvent",
        binding   = {
            { "bool", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "isUpdateEvent",
        binding   = {
            { "bool", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "phase",
        binding   = {
            { "Qt::ScrollPhase", {} },
        }
    },
    {
        method    = "pixelDelta",
        binding   = {
            { "QPoint", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

