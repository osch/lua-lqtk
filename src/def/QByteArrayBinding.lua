class = "QByteArray"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        flag   = "Base64Options",
        values = {
            { "Base64Encoding",              cmt = "(default) The regular Base64 alphabet, called simply \"base64\"" },
            { "Base64UrlEncoding",           cmt = "An alternate alphabet, called \"base64url\", which replaces two characters in the alphabet to be more friendly to URLs." },
            { "KeepTrailingEquals",          cmt = "(default) Keeps the trailing padding equal signs at the end of the encoded data, so the data is always a size multiple of four." },
            { "OmitTrailingEquals",          cmt = "Omits adding the padding equal signs at the end of the encoded data." },
            { "IgnoreBase64DecodingErrors",  cmt = "When decoding Base64-encoded data, ignores errors in the input; invalid characters are simply skipped. This enum value has been added in Qt 5.15." },
            { "AbortOnBase64DecodingErrors", cmt = "When decoding Base64-encoded data, stops at the first decoding error. This enum value has been added in Qt 5.15." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QByteArray*", {} },
            { "QByteArray*", { "QByteArray" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "fromBase64",
        binding   = {
            { "QByteArray", { "QByteArray" } },
            { "QByteArray", { "QByteArray", "QByteArray::Base64Options" } },
        }
    },
    {
        func      = "fromBase64Encoding",
        delegate  = {
            { "QByteArray@?", { "QByteArray" } },
            { "QByteArray@?", { "QByteArray", "QByteArray::Base64Options" } },
        }
    },
    {
        func      = "fromHex",
        binding   = {
            { "QByteArray", { "QByteArray" } },
        }
    },
    {
        func      = "fromPercentEncoding",
        binding   = {
            { "QByteArray", { "QByteArray" } },
            { "QByteArray", { "QByteArray", "char" } },
        }
    },
    {
        func      = "number",
        binding   = {
            { "QByteArray", { "int" } },
            { "QByteArray", { "int", "int" } },
            { "QByteArray", { "double" } },
            { "QByteArray", { "double", "char" } },
            { "QByteArray", { "double", "char", "int" } },
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
            { "this", { "QByteArray" } },
        }
    },
    {
        method    = "at",
        binding   = {
            { "int", { "int" } },
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
        method    = "compare",
        binding   = {
            { "int", { "QByteArray" } },
            { "int", { "QByteArray", "Qt::CaseSensitivity" } },
        }
    },
    {
        method    = "contains",
        binding   = {
            { "bool", { "QByteArray" } },
            { "bool", { "int" } },
        }
    },
    {
        method    = "count",
        binding   = {
            { "int", { "QByteArray" } },
            { "int", { "int" } },
        }
    },
    {
        method    = "endsWith",
        binding   = {
            { "bool", { "QByteArray" } },
            { "bool", { "char" } },
        }
    },
    {
        method    = "equals",
        delegate  = {
            { "bool", { "QByteArray*" } },
        }
    },
    {
        method    = "fill",
        binding   = {
            { "this", { "char" } },
            { "this", { "char", "int" } },
        }
    },
    {
        method    = "indexOf",
        binding   = {
            { "int", { "QByteArray" } },
            { "int", { "QByteArray", "int" } },
            { "int", { "char" } },
            { "int", { "char", "int" } },
        }
    },
    {
        method    = "insert",
        binding   = {
            { "this", { "int", "QByteArray" } },
            { "this", { "int", "char" } },
            { "this", { "int", "int", "char" } },
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
        method    = "isUpper",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isValidUtf8",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "lastIndexOf",
        binding   = {
            { "int", { "QByteArray" } },
            { "int", { "QByteArray", "int" } },
            { "int", { "char" } },
            { "int", { "char", "int" } },
        }
    },
    {
        method    = "leftJustified",
        binding   = {
            { "QByteArray", { "int" } },
            { "QByteArray", { "int", "char" } },
            { "QByteArray", { "int", "char", "bool" } },
        }
    },
    {
        method    = "length",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "max_size",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "percentDecoded",
        binding   = {
            { "QByteArray", {} },
            { "QByteArray", { "char" } },
        }
    },
    {
        method    = "prepend",
        binding   = {
            { "this", { "QByteArray" } },
            { "this", { "char" } },
            { "this", { "int", "char" } },
        }
    },
    {
        method    = "remove",
        binding   = {
            { "this", { "int", "int" } },
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
            { "QByteArray", { "int" } },
        }
    },
    {
        method    = "replace",
        binding   = {
            { "this", { "int", "int", "QByteArray" } },
            { "this", { "QByteArray", "QByteArray" } },
            { "this", { "char", "QByteArray" } },
            { "this", { "char", "char" } },
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
            { "void", { "int", "char" } },
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
            { "QByteArray", { "int" } },
            { "QByteArray", { "int", "char" } },
            { "QByteArray", { "int", "char", "bool" } },
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
            { "QByteArray", {} },
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
            { "QList<QByteArray>", { "char" } },
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
            { "bool", { "QByteArray" } },
            { "bool", { "char" } },
        }
    },
    {
        method    = "toBase64",
        binding   = {
            { "QByteArray", {} },
            { "QByteArray", { "QByteArray::Base64Options" } },
        }
    },
    {
        method    = "toDouble",
    },
    {
        method    = "toHex",
        binding   = {
            { "QByteArray", {} },
            { "QByteArray", { "char" } },
        }
    },
    {
        method    = "toInt",
    },
    {
        method    = "toLower",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        method    = "toPercentEncoding",
        binding   = {
            { "QByteArray", {} },
            { "QByteArray", { "QByteArray" } },
            { "QByteArray", { "QByteArray", "QByteArray" } },
            { "QByteArray", { "QByteArray", "QByteArray", "char" } },
        }
    },
    {
        method    = "toString",
    },
    {
        method    = "toUpper",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        method    = "trimmed",
        binding   = {
            { "QByteArray", {} },
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

