class = "QKeyCombination"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QKeyCombination*", {} },
            { "QKeyCombination*", { "Qt::Key" } },
            { "QKeyCombination*", { "Qt::KeyboardModifiers" } },
            { "QKeyCombination*", { "Qt::KeyboardModifiers", "Qt::Key" } },
            { "QKeyCombination*", { "Qt::Modifiers" } },
            { "QKeyCombination*", { "Qt::Modifiers", "Qt::Key" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "fromCombined",
        binding   = {
            { "QKeyCombination", { "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "key",
        binding   = {
            { "Qt::Key", {} },
        }
    },
    {
        method    = "keyboardModifiers",
        binding   = {
            { "Qt::KeyboardModifiers", {} },
        }
    },
    {
        method    = "toCombined",
        binding   = {
            { "int", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

