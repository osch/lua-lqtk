class = "QSinglePointEvent"

baseClass = "QPointerEvent"

elements = {
    {
        method    = "button",
        binding   = {
            { "Qt::MouseButton", {} },
        }
    },
    {
        method    = "buttons",
        binding   = {
            { "Qt::MouseButtons", {} },
        }
    },
    {
        method    = "exclusivePointGrabber",
        binding   = {
            { "QObject*", {} },
        }
    },
    {
        method    = "globalPosition",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "isBeginEvent",
        binding   = {
            { "bool", {}, "const" },
        }
    },
    {
        method    = "isEndEvent",
        binding   = {
            { "bool", {}, "const" },
        }
    },
    {
        method    = "isUpdateEvent",
        binding   = {
            { "bool", {}, "const" },
        }
    },
    {
        method    = "position",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "scenePosition",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "setExclusivePointGrabber",
        binding   = {
            { "void", { "QObject*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

