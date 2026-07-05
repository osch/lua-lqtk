class = "QAbstractScrollArea"

baseClass = "QFrame"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "SizeAdjustPolicy",
        values = {
            { "AdjustIgnored",               cmt = "The scroll area will behave like before - and not do any adjust." },
            { "AdjustToContents",            cmt = "The scroll area will always adjust to the viewport" },
            { "AdjustToContentsOnFirstShow", cmt = "The scroll area will adjust to its viewport the first time it is shown." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QAbstractScrollArea*", {} },
            { "QAbstractScrollArea*", { "QWidget?" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "resizeEvent",
        binding   = {
            { "void", { "QResizeEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "setSizeAdjustPolicy",
        binding   = {
            { "void", { "QAbstractScrollArea::SizeAdjustPolicy" } },
        }
    },
    {
        method    = "sizeAdjustPolicy",
        binding   = {
            { "QAbstractScrollArea::SizeAdjustPolicy", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

