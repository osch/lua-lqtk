class = "QPalette"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "ColorRole",
        values = {
            { "Window",          cmt = "A general background color." },
            { "WindowText",      cmt = "A general foreground color." },
            { "Base",            cmt = "Used mostly as the background color for text entry widgets, but can also be used for other painting - such as the background of combobox drop down lists and toolbar handles. It is usually white or another light color." },
            { "AlternateBase",   cmt = "Used as the alternate background color in views with alternating row colors (see QAbstractItemView::setAlternatingRowColors())." },
            { "ToolTipBase",     cmt = "Used as the background color for QToolTip and QWhatsThis. Tool tips use the Inactive color group of QPalette, because tool tips are not active windows." },
            { "ToolTipText",     cmt = "Used as the foreground color for QToolTip and QWhatsThis. Tool tips use the Inactive color group of QPalette, because tool tips are not active windows." },
            { "PlaceholderText", cmt = "Used as the placeholder color for various text input widgets. This enum value has been introduced in Qt 5.12" },
            { "Text",            cmt = "The foreground color used with Base. This is usually the same as the WindowText, in which case it must provide good contrast with Window and Base." },
            { "Button",          cmt = "The general button background color. This background can be different from Window as some styles require a different background color for buttons." },
            { "ButtonText",      cmt = "A foreground color used with the Button color." },
            { "BrightText",      cmt = "A text color that is very different from WindowText, and contrasts well with e.g. Dark. Typically used for text that needs to be drawn where Text or WindowText would give poor contrast, such as on pressed push buttons. Note that text colors can be used for things other than just words; text colors are usually used for text, but it's quite common to use the text color roles for lines, icons, etc." },
            { "Light",           cmt = "Lighter than Button color." },
            { "Midlight",        cmt = "Between Button and Light." },
            { "Dark",            cmt = "Darker than Button." },
            { "Mid",             cmt = "Between Button and Dark." },
            { "Shadow",          cmt = "A very dark color. By default, the shadow color is Qt::black." },
            { "Highlight",       cmt = "A color to indicate a selected item or the current item. By default, the highlight color is Qt::darkBlue." },
            { "Accent",          cmt = "(since Qt 6.6) A color that typically contrasts or complements Base, Window and Button colors. It usually represents the users' choice of desktop personalisation. Styling of interactive components is a typical use case. Unless explicitly set, it defaults to Highlight." },
            { "HighlightedText", cmt = "A text color that contrasts with Highlight. By default, the highlighted text color is Qt::white." },
            { "Link",            cmt = "A text color used for unvisited hyperlinks. By default, the link color is Qt::blue." },
            { "LinkVisited",     cmt = "A text color used for already visited hyperlinks. By default, the linkvisited color is Qt::magenta." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QPalette@", {} },
            { "QPalette@", { "Qt::GlobalColor" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "color",
        binding   = {
            { "QColor", { "QPalette::ColorRole" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

