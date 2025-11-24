class = "QChar"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "Category",
        values = {
            { "Mark_NonSpacing",          cmt = "Unicode class name Mn" },
            { "Mark_SpacingCombining",    cmt = "Unicode class name Mc" },
            { "Mark_Enclosing",           cmt = "Unicode class name Me" },
            { "Number_DecimalDigit",      cmt = "Unicode class name Nd" },
            { "Number_Letter",            cmt = "Unicode class name Nl" },
            { "Number_Other",             cmt = "Unicode class name No" },
            { "Separator_Space",          cmt = "Unicode class name Zs" },
            { "Separator_Line",           cmt = "Unicode class name Zl" },
            { "Separator_Paragraph",      cmt = "Unicode class name Zp" },
            { "Other_Control",            cmt = "Unicode class name Cc" },
            { "Other_Format",             cmt = "Unicode class name Cf" },
            { "Other_Surrogate",          cmt = "Unicode class name Cs" },
            { "Other_PrivateUse",         cmt = "Unicode class name Co" },
            { "Other_NotAssigned",        cmt = "Unicode class name Cn" },
            { "Letter_Uppercase",         cmt = "Unicode class name Lu" },
            { "Letter_Lowercase",         cmt = "Unicode class name Ll" },
            { "Letter_Titlecase",         cmt = "Unicode class name Lt" },
            { "Letter_Modifier",          cmt = "Unicode class name Lm" },
            { "Letter_Other",             cmt = "Unicode class name Lo" },
            { "Punctuation_Connector",    cmt = "Unicode class name Pc" },
            { "Punctuation_Dash",         cmt = "Unicode class name Pd" },
            { "Punctuation_Open",         cmt = "Unicode class name Ps" },
            { "Punctuation_Close",        cmt = "Unicode class name Pe" },
            { "Punctuation_InitialQuote", cmt = "Unicode class name Pi" },
            { "Punctuation_FinalQuote",   cmt = "Unicode class name Pf" },
            { "Punctuation_Other",        cmt = "Unicode class name Po" },
            { "Symbol_Math",              cmt = "Unicode class name Sm" },
            { "Symbol_Currency",          cmt = "Unicode class name Sc" },
            { "Symbol_Modifier",          cmt = "Unicode class name Sk" },
            { "Symbol_Other",             cmt = "Unicode class name So" },
        }
    },
    {
        enum   = "Decomposition",
        values = {
            "NoDecomposition",
            "Canonical",
            "Circle",
            "Compat",
            "Final",
            "Font",
            "Fraction",
            "Initial",
            "Isolated",
            "Medial",
            "Narrow",
            "NoBreak",
            "Small",
            "Square",
            "Sub",
            "Super",
            "Vertical",
            "Wide",
        }
    },
    {
        enum   = "Direction",
        values = {
            "DirAL",
            "DirAN",
            "DirB",
            "DirBN",
            "DirCS",
            "DirEN",
            "DirES",
            "DirET",
            "DirFSI",
            "DirL",
            "DirLRE",
            "DirLRI",
            "DirLRO",
            "DirNSM",
            "DirON",
            "DirPDF",
            "DirPDI",
            "DirR",
            "DirRLE",
            "DirRLI",
            "DirRLO",
            "DirS",
            "DirWS",
        }
    },
    {
        enum   = "JoiningType",
        values = {
            "Joining_None",
            "Joining_Causing",
            "Joining_Dual",
            "Joining_Right",
            "Joining_Left",
            "Joining_Transparent",
        }
    },
    {
        enum   = "Script",
        values = {
            { "Script_Unknown",               cmt = "For unassigned, private-use, noncharacter, and surrogate code points." },
            { "Script_Inherited",             cmt = "For characters that may be used with multiple scripts and that inherit their script from the preceding characters. These include nonspacing marks, enclosing marks, and zero width joiner/non-joiner characters." },
            { "Script_Common",                cmt = "For characters that may be used with multiple scripts and that do not inherit their script from the preceding characters." },
            { "Script_Adlam"                  },
            { "Script_Ahom"                   },
            { "Script_AnatolianHieroglyphs"   },
            { "Script_Arabic"                 },
            { "Script_Armenian"               },
            { "Script_Avestan"                },
            { "Script_Balinese"               },
            { "Script_Bamum"                  },
            { "Script_BassaVah"               },
            { "Script_Batak"                  },
            { "Script_Bengali"                },
            { "Script_Bhaiksuki"              },
            { "Script_Bopomofo"               },
            { "Script_Brahmi"                 },
            { "Script_Braille"                },
            { "Script_Buginese"               },
            { "Script_Buhid"                  },
            { "Script_CanadianAboriginal"     },
            { "Script_Carian"                 },
            { "Script_CaucasianAlbanian"      },
            { "Script_Chakma"                 },
            { "Script_Cham"                   },
            { "Script_Cherokee"               },
            { "Script_Chorasmian"             },
            { "Script_Coptic"                 },
            { "Script_Cuneiform"              },
            { "Script_Cypriot"                },
            { "Script_CyproMinoan"            },
            { "Script_Cyrillic"               },
            { "Script_Deseret"                },
            { "Script_Devanagari"             },
            { "Script_DivesAkuru"             },
            { "Script_Dogra"                  },
            { "Script_Duployan"               },
            { "Script_EgyptianHieroglyphs"    },
            { "Script_Elbasan"                },
            { "Script_Elymaic"                },
            { "Script_Ethiopic"               },
            { "Script_Garay"                  },
            { "Script_Georgian"               },
            { "Script_Glagolitic"             },
            { "Script_Gothic"                 },
            { "Script_Grantha"                },
            { "Script_Greek"                  },
            { "Script_Gujarati"               },
            { "Script_GunjalaGondi"           },
            { "Script_Gurmukhi"               },
            { "Script_GurungKhema"            },
            { "Script_Han"                    },
            { "Script_Hangul"                 },
            { "Script_HanifiRohingya"         },
            { "Script_Hanunoo"                },
            { "Script_Hatran"                 },
            { "Script_Hebrew"                 },
            { "Script_Hiragana"               },
            { "Script_ImperialAramaic"        },
            { "Script_InscriptionalPahlavi"   },
            { "Script_InscriptionalParthian"  },
            { "Script_Javanese"               },
            { "Script_Kaithi"                 },
            { "Script_Kannada"                },
            { "Script_Katakana"               },
            { "Script_Kawi"                   },
            { "Script_KayahLi"                },
            { "Script_Kharoshthi"             },
            { "Script_KhitanSmallScript"      },
            { "Script_Khmer"                  },
            { "Script_Khojki"                 },
            { "Script_Khudawadi"              },
            { "Script_KiratRai"               },
            { "Script_Lao"                    },
            { "Script_Latin"                  },
            { "Script_Lepcha"                 },
            { "Script_Limbu"                  },
            { "Script_LinearA"                },
            { "Script_LinearB"                },
            { "Script_Lisu"                   },
            { "Script_Lycian"                 },
            { "Script_Lydian"                 },
            { "Script_Mahajani"               },
            { "Script_Makasar"                },
            { "Script_Malayalam"              },
            { "Script_Mandaic"                },
            { "Script_Manichaean"             },
            { "Script_Marchen"                },
            { "Script_MasaramGondi"           },
            { "Script_Medefaidrin"            },
            { "Script_MeeteiMayek"            },
            { "Script_MendeKikakui"           },
            { "Script_MeroiticCursive"        },
            { "Script_MeroiticHieroglyphs"    },
            { "Script_Miao"                   },
            { "Script_Modi"                   },
            { "Script_Mongolian"              },
            { "Script_Mro"                    },
            { "Script_Multani"                },
            { "Script_Myanmar"                },
            { "Script_Nabataean"              },
            { "Script_NagMundari"             },
            { "Script_Nandinagari"            },
            { "Script_Newa"                   },
            { "Script_NewTaiLue"              },
            { "Script_Nko"                    },
            { "Script_Nushu"                  },
            { "Script_NyiakengPuachueHmong"   },
            { "Script_Ogham"                  },
            { "Script_OlChiki"                },
            { "Script_OlOnal"                 },
            { "Script_OldHungarian"           },
            { "Script_OldItalic"              },
            { "Script_OldNorthArabian"        },
            { "Script_OldPermic"              },
            { "Script_OldPersian"             },
            { "Script_OldSogdian"             },
            { "Script_OldSouthArabian"        },
            { "Script_OldTurkic"              },
            { "Script_OldUyghur"              },
            { "Script_Oriya"                  },
            { "Script_Osage"                  },
            { "Script_Osmanya"                },
            { "Script_PahawhHmong"            },
            { "Script_Palmyrene"              },
            { "Script_PauCinHau"              },
            { "Script_PhagsPa"                },
            { "Script_Phoenician"             },
            { "Script_PsalterPahlavi"         },
            { "Script_Rejang"                 },
            { "Script_Runic"                  },
            { "Script_Samaritan"              },
            { "Script_Saurashtra"             },
            { "Script_Sharada"                },
            { "Script_Shavian"                },
            { "Script_Siddham"                },
            { "Script_SignWriting"            },
            { "Script_Sinhala"                },
            { "Script_Sogdian"                },
            { "Script_SoraSompeng"            },
            { "Script_Soyombo"                },
            { "Script_Sundanese"              },
            { "Script_Sunuwar"                },
            { "Script_SylotiNagri"            },
            { "Script_Syriac"                 },
            { "Script_Tagalog"                },
            { "Script_Tagbanwa"               },
            { "Script_TaiLe"                  },
            { "Script_TaiTham"                },
            { "Script_TaiViet"                },
            { "Script_Takri"                  },
            { "Script_Tamil"                  },
            { "Script_Tangut"                 },
            { "Script_Tangsa"                 },
            { "Script_Telugu"                 },
            { "Script_Thaana"                 },
            { "Script_Thai"                   },
            { "Script_Tibetan"                },
            { "Script_Tifinagh"               },
            { "Script_Tirhuta"                },
            { "Script_Todhri"                 },
            { "Script_Toto"                   },
            { "Script_TuluTigalari"           },
            { "Script_Ugaritic"               },
            { "Script_Vai"                    },
            { "Script_Vithkuqi"               },
            { "Script_Wancho"                 },
            { "Script_WarangCiti"             },
            { "Script_Yezidi"                 },
            { "Script_Yi"                     },
            { "Script_ZanabazarSquare"        },
        }
    },
    {
        enum   = "SpecialCharacter",
        values = {
            { "Null",                       cmt = "A QChar with this value isNull()." },
            { "Tabulation",                 cmt = "Character tabulation." },
            { "LineFeed"                    },
            { "FormFeed"                    },
            { "CarriageReturn"              },
            { "Space"                       },
            { "Nbsp",                       cmt = "Non-breaking space." },
            { "SoftHyphen"                  },
            { "ReplacementCharacter",       cmt = "The character shown when a font has no glyph for a certain codepoint. A special question mark character is often used. Codecs use this codepoint when input data cannot be represented in Unicode." },
            { "ObjectReplacementCharacter", cmt = "Used to represent an object such as an image when such objects cannot be presented." },
            { "ByteOrderMark"               },
            { "ByteOrderSwapped"            },
            { "ParagraphSeparator"          },
            { "LineSeparator"               },
            { "VisualTabCharacter",         cmt = "Used to represent a tabulation as a horizontal arrow." },
            { "LastValidCodePoint"          },
        }
    },
    {
        enum   = "UnicodeVersion",
        values = {
            { "Unicode_1_1",        cmt = "Version 1.1" },
            { "Unicode_2_0",        cmt = "Version 2.0" },
            { "Unicode_2_1_2",      cmt = "Version 2.1.2" },
            { "Unicode_3_0",        cmt = "Version 3.0" },
            { "Unicode_3_1",        cmt = "Version 3.1" },
            { "Unicode_3_2",        cmt = "Version 3.2" },
            { "Unicode_4_0",        cmt = "Version 4.0" },
            { "Unicode_4_1",        cmt = "Version 4.1" },
            { "Unicode_5_0",        cmt = "Version 5.0" },
            { "Unicode_5_1",        cmt = "Version 5.1" },
            { "Unicode_5_2",        cmt = "Version 5.2" },
            { "Unicode_6_0",        cmt = "Version 6.0" },
            { "Unicode_6_1",        cmt = "Version 6.1" },
            { "Unicode_6_2",        cmt = "Version 6.2" },
            { "Unicode_6_3",        cmt = "Version 6.3" },
            { "Unicode_7_0",        cmt = "Version 7.0" },
            { "Unicode_8_0",        cmt = "Version 8.0" },
            { "Unicode_9_0",        cmt = "Version 9.0" },
            { "Unicode_10_0",       cmt = "Version 10.0" },
            { "Unicode_11_0",       cmt = "Version 11.0" },
            { "Unicode_12_0",       cmt = "Version 12.0" },
            { "Unicode_12_1",       cmt = "Version 12.1" },
            { "Unicode_13_0",       cmt = "Version 13.0" },
            { "Unicode_14_0",       cmt = "Version 14.0" },
            { "Unicode_15_0",       cmt = "Version 15.0" },
            { "Unicode_15_1",       cmt = "Version 15.1" },
            { "Unicode_16_0",       cmt = "Version 16.0" },
            { "Unicode_Unassigned", cmt = "The value is not assigned to any character in version 8.0 of Unicode." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QChar*", {} },
            { "QChar*", { "int" } },
            { "QChar*", { "char" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "category",
        binding   = {
            { "QChar::Category", {}, "isMethod" },
            { "QChar::Category", { "int" } },
        }
    },
    {
        func      = "combiningClass",
        binding   = {
            { "int", {}, "isMethod" },
            { "int", { "int" } },
        }
    },
    {
        func      = "currentUnicodeVersion",
        binding   = {
            { "QChar::UnicodeVersion", {} },
        }
    },
    {
        func      = "decomposition",
        binding   = {
            { "QString", {}, "isMethod" },
            { "QString", { "int" } },
        }
    },
    {
        func      = "decompositionTag",
        binding   = {
            { "QChar::Decomposition", {}, "isMethod" },
            { "QChar::Decomposition", { "int" } },
        }
    },
    {
        func      = "digitValue",
        binding   = {
            { "int", {}, "isMethod" },
            { "int", { "int" } },
        }
    },
    {
        func      = "direction",
        binding   = {
            { "QChar::Direction", {}, "isMethod" },
            { "QChar::Direction", { "int" } },
        }
    },
    {
        func      = "fromLatin1",
        binding   = {
            { "QChar", { "int" } },
        }
    },
    {
        func      = "fromUcs2",
        binding   = {
            { "QChar", { "int" } },
        }
    },
    {
        func      = "fromUcs4",
    },
    {
        func      = "hasMirrored",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "highSurrogate",
        binding   = {
            { "int", { "int" } },
        }
    },
    {
        func      = "isDigit",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isHighSurrogate",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isLetter",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isLetterOrNumber",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isLowSurrogate",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isLower",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isMark",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isNonCharacter",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isNumber",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isPrint",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isPunct",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isSpace",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isSurrogate",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isSymbol",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isTitleCase",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "isUpper",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int" } },
        }
    },
    {
        func      = "joiningType",
        binding   = {
            { "QChar::JoiningType", {}, "isMethod" },
            { "QChar::JoiningType", { "int" } },
        }
    },
    {
        func      = "lowSurrogate",
        binding   = {
            { "int", { "int" } },
        }
    },
    {
        func      = "mirroredChar",
        binding   = {
            { "QChar", {}, "isMethod" },
            { "int", { "int" } },
        }
    },
    {
        func      = "requiresSurrogates",
        binding   = {
            { "bool", { "int" } },
        }
    },
    {
        func      = "script",
        binding   = {
            { "QChar::Script", {}, "isMethod" },
            { "QChar::Script", { "int" } },
        }
    },
    {
        func      = "surrogateToUcs4",
        binding   = {
            { "int", { "int", "int" } },
            { "int", { "QChar", "QChar" } },
        }
    },
    {
        func      = "toCaseFolded",
        binding   = {
            { "QChar", {}, "isMethod" },
            { "int", { "int" } },
        }
    },
    {
        func      = "toLower",
        binding   = {
            { "QChar", {}, "isMethod" },
            { "int", { "int" } },
        }
    },
    {
        func      = "toTitleCase",
        binding   = {
            { "QChar", {}, "isMethod" },
            { "int", { "int" } },
        }
    },
    {
        func      = "toUpper",
        binding   = {
            { "QChar", {}, "isMethod" },
            { "int", { "int" } },
        }
    },
    {
        func      = "unicodeVersion",
        binding   = {
            { "QChar::UnicodeVersion", {}, "isMethod" },
            { "QChar::UnicodeVersion", { "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "cell",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "isNull",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "row",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "toLatin1",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "unicode",
        binding   = {
            { "int", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

