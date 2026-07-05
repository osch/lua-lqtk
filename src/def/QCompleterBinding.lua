class = "QCompleter"

baseClass = "QObject"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "CompletionMode",
        values = {
            { "PopupCompletion",           cmt = "Current completions are displayed in a popup window." },
            { "InlineCompletion",          cmt = "Completions appear inline (as selected text)." },
            { "UnfilteredPopupCompletion", cmt = "All possible completions are displayed in a popup window with the most likely suggestion indicated as current." },
        }
    },
    {
        enum   = "ModelSorting",
        values = {
            { "UnsortedModel",                cmt = "The model is unsorted." },
            { "CaseSensitivelySortedModel",   cmt = "The model is sorted case sensitively." },
            { "CaseInsensitivelySortedModel", cmt = "The model is sorted case insensitively." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QCompleter*", {} },
            { "QCompleter*", { "QObject?" } },
            { "QCompleter*", { "QAbstractItemModel*" } },
            { "QCompleter*", { "QAbstractItemModel*", "QObject?" } },
            { "QCompleter*", { "QStringList" } },
            { "QCompleter*", { "QStringList", "QObject?" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "caseSensitivity",
        binding   = {
            { "Qt::CaseSensitivity", {} },
        }
    },
    {
        method    = "complete",
        binding   = {
            { "void", { } },
            { "void", { "QRect" } },
        }
    },
    {
        method    = "completionColumn",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "completionCount",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "completionMode",
        binding   = {
            { "QCompleter::CompletionMode", {} },
        }
    },
    {
        method    = "completionModel",
        binding   = {
            { "QAbstractItemModel*", {} },
        }
    },
    {
        method    = "completionPrefix",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "completionRole",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "currentCompletion",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "currentIndex",
        binding   = {
            { "QModelIndex", {} },
        }
    },
    {
        method    = "currentRow",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "event",
        binding   = {
            { "bool", { "QEvent~" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "eventFilter",
        binding   = {
            { "bool", { "QObject*", "QEvent*" }, "virtual", "override", "protected" },
        }
    },
    {
        method    = "filterMode",
        binding   = {
            { "Qt::MatchFlags", {} },
        }
    },
    {
        method    = "maxVisibleItems",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "model",
        binding   = {
            { "QAbstractItemModel*", {} },
        }
    },
    {
        method    = "modelSorting",
        binding   = {
            { "QCompleter::ModelSorting", {} },
        }
    },
    {
        method    = "pathFromIndex",
        binding   = {
            { "QString", { "QModelIndex" }, "virtual", "const" },
        }
    },
    {
        method    = "popup",
        binding   = {
            { "QAbstractItemView*", {} },
        }
    },
    {
        method    = "setCaseSensitivity",
        binding   = {
            { "void", { "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "setCompletionColumn",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setCompletionMode",
        binding   = {
            { "void", { "QCompleter::CompletionMode" } },
        }
    },
    {
        method    = "setCompletionPrefix",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setCompletionRole",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setCurrentRow",
        binding   = {
            { "bool", { "int" } },
        }
    },
    {
        method    = "setFilterMode",
        binding   = {
            { "void", { "Qt::MatchFlags" } },
        }
    },
    {
        method    = "setMaxVisibleItems",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setModel",
        binding   = {
            { "void", { "QAbstractItemModel*" } },
        }
    },
    {
        method    = "setModelSorting",
        binding   = {
            { "void", { "QCompleter::ModelSorting" } },
        }
    },
    {
        method    = "setPopup",
        binding   = {
            { "void", { "QAbstractItemView*" } },
        }
    },
    {
        method    = "setWidget",
        binding   = {
            { "void", { "QWidget*" } },
        }
    },
    {
        method    = "setWrapAround",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "splitPath",
        binding   = {
            { "QStringList", { "QString" }, "virtual", "const" },
        }
    },
    {
        method    = "widget",
        binding   = {
            { "QWidget*", {} },
        }
    },
    {
        method    = "wrapAround",
        binding   = {
            { "bool", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

