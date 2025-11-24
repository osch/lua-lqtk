class = "QLinearGradient"

baseClass = "QGradient"

polymorphic = false

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QLinearGradient*", {} },
            { "QLinearGradient*", { "QPointF", "QPointF" } },
            { "QLinearGradient*", { "double", "double", "double", "double" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "finalStop",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "setFinalStop",
        binding   = {
            { "void", { "QPointF" } },
            { "void", { "double", "double" } },
        }
    },
    {
        method    = "setStart",
        binding   = {
            { "void", { "QPointF" } },
            { "void", { "double", "double" } },
        }
    },
    {
        method    = "start",
        binding   = {
            { "QPointF", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

