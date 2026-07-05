class = "QAbstractItemView"

baseClass = "QAbstractScrollArea"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "ScrollHint",
        values = {
            { "EnsureVisible",    cmt = "Scroll to ensure that the item is visible." },
            { "PositionAtTop",    cmt = "Scroll to position the item at the top of the viewport." },
            { "PositionAtBottom", cmt = "Scroll to position the item at the bottom of the viewport." },
            { "PositionAtCenter", cmt = "Scroll to position the item at the center of the viewport." },
        }
    },
    {
        enum   = "ScrollMode",
        values = {
            { "ScrollPerItem",  cmt = "The view will scroll the contents one item at a time." },
            { "ScrollPerPixel", cmt = "The view will scroll the contents one pixel at a time." },
        }
    },
    {
        method    = "horizontalScrollMode",
        binding   = {
            { "QAbstractItemView::ScrollMode", {} },
        }
    },
    {
        method    = "model",
        binding   = {
            { "QAbstractItemModel*", {} },
        }
    },
    {
        method    = "resetHorizontalScrollMode",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "resetVerticalScrollMode",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "resizeEvent",
        binding   = {
            { "void", { "QResizeEvent~" }, "virtual", "protected" },
        }
    },
    {
        method    = "setAlternatingRowColors",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setHorizontalScrollMode",
        binding   = {
            { "void", { "QAbstractItemView::ScrollMode" } },
        }
    },
    {
        method    = "setModel",
        binding   = {
            { "void", { "QAbstractItemModel?" }, "virtual" },
        }
    },
    {
        method    = "setSelectionModel",
        binding   = {
            { "void", { "QItemSelectionModel*" }, "virtual" },
        }
    },
    {
        method    = "setVerticalScrollMode",
        binding   = {
            { "void", { "QAbstractItemView::ScrollMode" } },
        }
    },
    {
        method    = "verticalScrollMode",
        binding   = {
            { "QAbstractItemView::ScrollMode", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

