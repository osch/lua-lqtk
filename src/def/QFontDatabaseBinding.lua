class = "QFontDatabase"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "SystemFont",
        values = {
            { "GeneralFont",          cmt = "The default system font." },
            { "FixedFont",            cmt = "The fixed font that the system recommends." },
            { "TitleFont",            cmt = "The system standard font for titles." },
            { "SmallestReadableFont", cmt = "The smallest readable system font." },
        }
    },
    {
        enum   = "WritingSystem",
        values = {
            { "Any"                 },
            { "Latin"               },
            { "Greek"               },
            { "Cyrillic"            },
            { "Armenian"            },
            { "Hebrew"              },
            { "Arabic"              },
            { "Syriac"              },
            { "Thaana"              },
            { "Devanagari"          },
            { "Bengali"             },
            { "Gurmukhi"            },
            { "Gujarati"            },
            { "Oriya"               },
            { "Tamil"               },
            { "Telugu"              },
            { "Kannada"             },
            { "Malayalam"           },
            { "Sinhala"             },
            { "Thai"                },
            { "Lao"                 },
            { "Tibetan"             },
            { "Myanmar"             },
            { "Georgian"            },
            { "Khmer"               },
            { "SimplifiedChinese"   },
            { "TraditionalChinese"  },
            { "Japanese"            },
            { "Korean"              },
            { "Vietnamese"          },
            { "Symbol"              },
            { "Other",              cmt = "(the same as Symbol)" },
            { "Ogham"               },
            { "Runic"               },
            { "Nko"                 },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "addApplicationEmojiFontFamily",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        func      = "addApplicationFallbackFontFamily",
        binding   = {
            { "void", { "QChar::Script", "QString" } },
        }
    },
    {
        func      = "addApplicationFont",
        binding   = {
            { "int", { "QString" } },
        }
    },
    {
        func      = "addApplicationFontFromData",
        binding   = {
            { "int", { "QByteArray" } },
        }
    },
    {
        func      = "applicationEmojiFontFamilies",
        binding   = {
            { "QStringList", {} },
        }
    },
    {
        func      = "applicationFallbackFontFamilies",
        binding   = {
            { "QStringList", { "QChar::Script" } },
        }
    },
    {
        func      = "applicationFontFamilies",
        binding   = {
            { "QStringList", { "int" } },
        }
    },
    {
        func      = "bold",
        binding   = {
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "families",
        binding   = {
            { "QStringList", {} },
            { "QStringList", { "QFontDatabase::WritingSystem" } },
        }
    },
    {
        func      = "font",
        binding   = {
            { "QFont", { "QString", "QString", "int" } },
        }
    },
    {
        func      = "isBitmapScalable",
        binding   = {
            { "bool", { "QString" } },
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "isFixedPitch",
        binding   = {
            { "bool", { "QString" } },
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "isPrivateFamily",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        func      = "isScalable",
        binding   = {
            { "bool", { "QString" } },
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "isSmoothlyScalable",
        binding   = {
            { "bool", { "QString" } },
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "italic",
        binding   = {
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "pointSizes",
        binding   = {
            { "QList<int>", { "QString" } },
            { "QList<int>", { "QString", "QString" } },
        }
    },
    {
        func      = "removeAllApplicationFonts",
        binding   = {
            { "bool", {} },
        }
    },
    {
        func      = "removeApplicationEmojiFontFamily",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        func      = "removeApplicationFallbackFontFamily",
        binding   = {
            { "bool", { "QChar::Script", "QString" } },
        }
    },
    {
        func      = "removeApplicationFont",
        binding   = {
            { "bool", { "int" } },
        }
    },
    {
        func      = "setApplicationEmojiFontFamilies",
        binding   = {
            { "void", { "QStringList" } },
        }
    },
    {
        func      = "setApplicationFallbackFontFamilies",
        binding   = {
            { "void", { "QChar::Script", "QStringList" } },
        }
    },
    {
        func      = "smoothSizes",
        binding   = {
            { "QList<int>", { "QString", "QString" } },
        }
    },
    {
        func      = "standardSizes",
        binding   = {
            { "QList<int>", {} },
        }
    },
    {
        func      = "styleString",
        binding   = {
            { "QString", { "QFont" } },
        }
    },
    {
        func      = "styles",
        binding   = {
            { "QStringList", { "QString" } },
        }
    },
    {
        func      = "systemFont",
        binding   = {
            { "QFont", { "QFontDatabase::SystemFont" } },
        }
    },
    {
        func      = "weight",
        binding   = {
            { "int", { "QString", "QString" } },
        }
    },
    {
        func      = "writingSystemName",
        binding   = {
            { "QString", { "QFontDatabase::WritingSystem" } },
        }
    },
    {
        func      = "writingSystemSample",
        binding   = {
            { "QString", { "QFontDatabase::WritingSystem" } },
        }
    },
    {
        func      = "writingSystems",
        binding   = {
            { "QList<QFontDatabase::WritingSystem>", {} },
            { "QList<QFontDatabase::WritingSystem>", { "QString" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

