class = "QInputMethodEvent"

baseClass = "QEvent"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "AttributeType",
        values = {
            { "TextFormat", cmt = "A QTextCharFormat for the part of the preedit string specified by start and length. value contains a QVariant of type QTextFormat specifying rendering of this part of the preedit string. There should be at most one format for every part of the preedit string. If several are specified for any character in the string the behaviour is undefined. A conforming implementation has to at least honor the backgroundColor, textColor and fontUnderline properties of the format." },
            { "Cursor",     cmt = "If set, a cursor should be shown inside the preedit string at position start. The length variable determines whether the cursor is visible or not. If the length is 0 the cursor is invisible. If value is a QVariant of type QColor this color will be used for rendering the cursor, otherwise the color of the surrounding text will be used. There should be at most one Cursor attribute per event. If several are specified the behaviour is undefined." },
            { "Language",   cmt = "The variant contains a QLocale object specifying the language of a certain part of the preedit string. There should be at most one language set for every part of the preedit string. If several are specified for any character in the string the behavior is undefined." },
            { "Ruby",       cmt = "The ruby text for a part of the preedit string. There should be at most one ruby text set for every part of the preedit string. If several are specified for any character in the string the behaviour is undefined." },
            { "Selection",  cmt = "If set, the edit cursor should be moved to the specified position in the editor text contents. In contrast with Cursor, this attribute does not work on the preedit text, but on the surrounding text. The cursor will be moved after the commit string has been committed, and the preedit string will be located at the new edit position. The start position specifies the new position and the length variable can be used to set a selection starting from that point. The value is unused." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QInputMethodEvent*", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "commitString",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "preeditString",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "replacementLength",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "replacementStart",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "setCommitString",
        binding   = {
            { "void", { "QString" } },
            { "void", { "QString", "int" } },
            { "void", { "QString", "int", "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

