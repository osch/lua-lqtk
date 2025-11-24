class = "QKeyEvent"

baseClass = "QInputEvent"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers" } },
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers", "QString" } },
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers", "QString", "bool" } },
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers", "QString", "bool", "int" } },
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers", "int", "int", "int" } },
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers", "int", "int", "int", "QString" } },
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers", "int", "int", "int", "QString", "bool" } },
            { "QKeyEvent*", { "QEvent::Type", "int", "Qt::KeyboardModifiers", "int", "int", "int", "QString", "bool", "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "count",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "isAutoRepeat",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "key",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "keyCombination",
        binding   = {
            { "QKeyCombination", {} },
        }
    },
    {
        method    = "matches",
        binding   = {
            { "bool", { "QKeySequence::StandardKey" } },
        }
    },
    {
        method    = "modifiers",
        binding   = {
            { "Qt::KeyboardModifiers", {} },
        }
    },
    {
        method    = "nativeModifiers",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "nativeScanCode",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "nativeVirtualKey",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "text",
        binding   = {
            { "QString", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

