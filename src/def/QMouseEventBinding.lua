class = "QMouseEvent"

baseClass = "QSinglePointEvent"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QMouseEvent*", { "QEvent::Type", "QPointF", "QPointF", "Qt::MouseButton", "Qt::MouseButtons", "Qt::KeyboardModifiers" } },
            { "QMouseEvent*", { "QEvent::Type", "QPointF", "QPointF", "QPointF", "Qt::MouseButton", "Qt::MouseButtons", "Qt::KeyboardModifiers" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "flags",
        binding   = {
            { "Qt::MouseEventFlags", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

