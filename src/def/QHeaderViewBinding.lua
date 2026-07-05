class = "QHeaderView"

baseClass = "QAbstractItemView"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "ResizeMode",
        values = {
            { "Interactive",      cmt = "The user can resize the section. The section can also be resized programmatically using resizeSection(). The section size defaults to defaultSectionSize. (See also cascadingSectionResizes.)" },
            { "Fixed",            cmt = "The user cannot resize the section. The section can only be resized programmatically using resizeSection(). The section size defaults to defaultSectionSize." },
            { "Stretch",          cmt = "QHeaderView will automatically resize the section to fill the available space. The size cannot be changed by the user or programmatically." },
            { "ResizeToContents", cmt = "QHeaderView will automatically resize the section to its optimal size based on the contents of the entire column or row. The size cannot be changed by the user or programmatically. (This value was introduced in 4.2)" },
            { "Custom",           cmt = "Use Fixed instead." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QHeaderView*", { "Qt::Orientation" } },
            { "QHeaderView*", { "Qt::Orientation", "QWidget?" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "resizeSection",
        binding   = {
            { "void", { "int", "int" } },
        }
    },
    {
        method    = "resizeSections",
        binding   = {
            { "void", {}, "protected" },
            { "void", { "QHeaderView::ResizeMode" } },
        }
    },
    {
        method    = "sectionSize",
        binding   = {
            { "int", { "int" } },
        }
    },
    {
        method    = "sectionSizeFromContents",
        binding   = {
            { "QSize", { "int" }, "virtual", "protected", "const" },
        }
    },
    {
        method    = "sectionSizeHint",
        binding   = {
            { "int", { "int" } },
        }
    },
    {
        method    = "setResizeContentsPrecision",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setStretchLastSection",
        binding   = {
            { "void", { "bool" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

