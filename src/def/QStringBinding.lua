class = "QString"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "NormalizationForm",
        values = {
            { "NormalizationForm_D",  cmt = "Canonical Decomposition" },
            { "NormalizationForm_C",  cmt = "Canonical Decomposition followed by Canonical Composition" },
            { "NormalizationForm_KD", cmt = "Compatibility Decomposition" },
            { "NormalizationForm_KC", cmt = "Compatibility Decomposition followed by Canonical Composition" },
        }
    },
    {
        flag   = "SectionFlags",
        values = {
            { "SectionDefault",             cmt = "Empty fields are counted, leading and trailing separators are not included, and the separator is compared case sensitively." },
            { "SectionSkipEmpty",           cmt = "Treat empty fields as if they don't exist, i.e. they are not considered as far as start and end are concerned." },
            { "SectionIncludeLeadingSep",   cmt = "Include the leading separator (if any) in the result string." },
            { "SectionIncludeTrailingSep",  cmt = "Include the trailing separator (if any) in the result string." },
            { "SectionCaseInsensitiveSeps", cmt = "Compare the separator case-insensitively." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QString*", {} },
            { "QString*", { "QString" } },
            { "QString*", { "QByteArray" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "compare",
        binding   = {
            { "int", { "QString", "QString" } },
            { "int", { "QString", "QString", "Qt::CaseSensitivity" } },
        }
    },
    {
        func      = "fromLatin1",
        binding   = {
            { "QString", { "QByteArray" } },
        }
    },
    {
        func      = "fromLocal8Bit",
        binding   = {
            { "QString", { "QByteArray" } },
        }
    },
    {
        func      = "fromUtf8",
        binding   = {
            { "QString", { "QByteArray" } },
        }
    },
    {
        func      = "localeAwareCompare",
        binding   = {
            { "int", { "QString", "QString" } },
        }
    },
    {
        func      = "number",
        binding   = {
            { "QString", { "int" } },
            { "QString", { "int", "int" } },
            { "QString", { "double" } },
            { "QString", { "double", "char" } },
            { "QString", { "double", "char", "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "append",
        binding   = {
            { "this", { "QByteArray" } },
        }
    },
    {
        method    = "assign",
        binding   = {
            { "this", { "QString" } },
        }
    },
    {
        method    = "at",
    },
    {
        method    = "back",
        binding   = {
            { "QChar", {} },
        }
    },
    {
        method    = "capacity",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "chop",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "clear",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "contains",
        binding   = {
            { "bool", { "QString" } },
            { "bool", { "QString", "Qt::CaseSensitivity" } },
            { "bool", { "QRegularExpression" } },
            { "bool", { "QRegularExpression", "QRegularExpressionMatch?" } },
            { "bool", { "QChar" } },
            { "bool", { "QChar", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "count",
        binding   = {
            { "int", { "QString" } },
            { "int", { "QString", "Qt::CaseSensitivity" } },
            { "int", { "QRegularExpression" } },
            { "int", { "QChar" } },
            { "int", { "QChar", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "endsWith",
        binding   = {
            { "bool", { "QString" } },
            { "bool", { "QString", "Qt::CaseSensitivity" } },
            { "bool", { "QChar" } },
            { "bool", { "QChar", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "equals",
        delegate  = {
            { "bool", { "QString*" } },
            { "bool", { "QString" } },
        }
    },
    {
        method    = "fill",
        binding   = {
            { "this", { "QChar" } },
            { "this", { "QChar", "int" } },
        }
    },
    {
        method    = "indexOf",
        binding   = {
            { "int", { "QString" } },
            { "int", { "QString", "int" } },
            { "int", { "QString", "int", "Qt::CaseSensitivity" } },
            { "int", { "QRegularExpression" } },
            { "int", { "QRegularExpression", "int" } },
            { "int", { "QRegularExpression", "int", "QRegularExpressionMatch?" } },
            { "int", { "QChar" } },
            { "int", { "QChar", "int" } },
            { "int", { "QChar", "int", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "insert",
        binding   = {
            { "this", { "int", "QString" } },
            { "this", { "int", "QChar" } },
            { "this", { "int", "QByteArray" } },
        }
    },
    {
        method    = "isEmpty",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isLower",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isNull",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isRightToLeft",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isUpper",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isValidUtf16",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "lastIndexOf",
        binding   = {
            { "int", { "QString" } },
            { "int", { "QString", "Qt::CaseSensitivity" } },
            { "int", { "QString", "int" } },
            { "int", { "QString", "int", "Qt::CaseSensitivity" } },
            { "int", { "QRegularExpression" } },
            { "int", { "QRegularExpression", "QRegularExpressionMatch?" } },
            { "int", { "QRegularExpression", "int" } },
            { "int", { "QRegularExpression", "int", "QRegularExpressionMatch?" } },
            { "int", { "QChar" } },
            { "int", { "QChar", "Qt::CaseSensitivity" } },
            { "int", { "QChar", "int" } },
            { "int", { "QChar", "int", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "leftJustified",
        binding   = {
            { "QString", { "int" } },
            { "QString", { "int", "QChar" } },
            { "QString", { "int", "QChar", "bool" } },
        }
    },
    {
        method    = "length",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "normalized",
        binding   = {
            { "QString", { "QString::NormalizationForm" } },
            { "QString", { "QString::NormalizationForm", "QChar::UnicodeVersion" } },
        }
    },
    {
        method    = "prepend",
        binding   = {
            { "this", { "QString" } },
            { "this", { "QChar" } },
            { "this", { "QByteArray" } },
        }
    },
    {
        method    = "remove",
        binding   = {
            { "this", { "int", "int" } },
            { "this", { "QString" } },
            { "this", { "QString", "Qt::CaseSensitivity" } },
            { "this", { "QRegularExpression" } },
            { "this", { "QChar" } },
            { "this", { "QChar", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "removeAt",
        binding   = {
            { "this", { "int" } },
        }
    },
    {
        method    = "removeFirst",
        binding   = {
            { "this", {} },
        }
    },
    {
        method    = "removeLast",
        binding   = {
            { "this", {} },
        }
    },
    {
        method    = "repeated",
        binding   = {
            { "QString", { "int" } },
        }
    },
    {
        method    = "replace",
        binding   = {
            { "this", { "int", "int", "QString" } },
            { "this", { "QString", "QString" } },
            { "this", { "QString", "QString", "Qt::CaseSensitivity" } },
            { "this", { "QRegularExpression", "QString" } },
            { "this", { "QChar", "QChar" } },
            { "this", { "QChar", "QChar", "Qt::CaseSensitivity" } },
            { "this", { "QChar", "QString" } },
            { "this", { "QChar", "QString", "Qt::CaseSensitivity" } },
            { "this", { "int", "int", "QChar" } },
        }
    },
    {
        method    = "reserve",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "resize",
        binding   = {
            { "void", { "int" } },
            { "void", { "int", "QChar" } },
        }
    },
    {
        method    = "resizeForOverwrite",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "rightJustified",
        binding   = {
            { "QString", { "int" } },
            { "QString", { "int", "QChar" } },
            { "QString", { "int", "QChar", "bool" } },
        }
    },
    {
        method    = "section",
        binding   = {
            { "QString", { "QString", "int" } },
            { "QString", { "QString", "int", "int" } },
            { "QString", { "QString", "int", "int", "QString::SectionFlags" } },
            { "QString", { "QRegularExpression", "int" } },
            { "QString", { "QRegularExpression", "int", "int" } },
            { "QString", { "QRegularExpression", "int", "int", "QString::SectionFlags" } },
            { "QString", { "QChar", "int" } },
            { "QString", { "QChar", "int", "int" } },
            { "QString", { "QChar", "int", "int", "QString::SectionFlags" } },
        }
    },
    {
        method    = "setNum",
        binding   = {
            { "this", { "int" } },
            { "this", { "int", "int" } },
            { "this", { "double" } },
            { "this", { "double", "char" } },
            { "this", { "double", "char", "int" } },
        }
    },
    {
        method    = "simplified",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "size",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "slice",
        binding   = {
            { "this", { "int", "int" } },
            { "this", { "int" } },
        }
    },
    {
        method    = "split",
        binding   = {
            { "QStringList", { "QString" } },
            { "QStringList", { "QString", "Qt::SplitBehavior" } },
            { "QStringList", { "QString", "Qt::SplitBehavior", "Qt::CaseSensitivity" } },
            { "QStringList", { "QRegularExpression" } },
            { "QStringList", { "QRegularExpression", "Qt::SplitBehavior" } },
            { "QStringList", { "QChar" } },
            { "QStringList", { "QChar", "Qt::SplitBehavior" } },
            { "QStringList", { "QChar", "Qt::SplitBehavior", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "squeeze",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "startsWith",
        binding   = {
            { "bool", { "QString" } },
            { "bool", { "QString", "Qt::CaseSensitivity" } },
            { "bool", { "QChar" } },
            { "bool", { "QChar", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "toCaseFolded",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "toDouble",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "toHtmlEscaped",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "toInt",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "toLatin1",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        method    = "toLocal8Bit",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        method    = "toLong",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "toLongLong",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "toLower",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "toString",
        delegate  = {
            { "QString", {} },
        }
    },
    {
        method    = "toUpper",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "toUtf8",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        method    = "trimmed",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "truncate",
        binding   = {
            { "void", { "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

