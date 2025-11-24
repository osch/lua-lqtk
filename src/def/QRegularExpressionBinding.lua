class = "QRegularExpression"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        flag   = "MatchOptions",
        values = {
            { "NoMatchOption",             cmt = "No match options are set." },
            { "AnchorAtOffsetMatchOption", cmt = "The match is constrained to start exactly at the offset passed to match() in order to be successful, even if the pattern string does not contain any metacharacter that anchors the match at that point. Note that passing this option does not anchor the end of the match to the end of the subject; if you want to fully anchor a regular expression, use anchoredPattern(). This enum value has been introduced in Qt 6.0." },
        }
    },
    {
        enum   = "MatchType",
        values = {
            { "NormalMatch",                cmt = "A normal match is done." },
            { "PartialPreferCompleteMatch", cmt = "The pattern string is matched partially against the subject string. If a partial match is found, then it is recorded, and other matching alternatives are tried as usual. If a complete match is then found, then it's preferred to the partial match; in this case only the complete match is reported. If instead no complete match is found (but only the partial one), then the partial one is reported." },
            { "PartialPreferFirstMatch",    cmt = "The pattern string is matched partially against the subject string. If a partial match is found, then matching stops and the partial match is reported. In this case, other matching alternatives (potentially leading to a complete match) are not tried. Moreover, this match type assumes that the subject string only a substring of a larger text, and that (in this text) there are other characters beyond the end of the subject string. This can lead to surprising results; see the discussion in the partial matching section for more details." },
            { "NoMatch",                    cmt = "No matching is done. This value is returned as the match type by a default constructed QRegularExpressionMatch or QRegularExpressionMatchIterator. Using this match type is not very useful for the user, as no matching ever happens. This enum value has been introduced in Qt 5.1." },
        }
    },
    {
        flag   = "PatternOptions",
        values = {
            { "NoPatternOption",             cmt = "No pattern options are set." },
            { "CaseInsensitiveOption",       cmt = "The pattern should match against the subject string in a case insensitive way. This option corresponds to the /i modifier in Perl regular expressions." },
            { "DotMatchesEverythingOption",  cmt = "The dot metacharacter (.) in the pattern string is allowed to match any character in the subject string, including newlines (normally, the dot does not match newlines). This option corresponds to the /s modifier in Perl regular expressions." },
            { "MultilineOption",             cmt = "The caret (^) and the dollar ($) metacharacters in the pattern string are allowed to match, respectively, immediately after and immediately before any newline in the subject string, as well as at the very beginning and at the very end of the subject string. This option corresponds to the /m modifier in Perl regular expressions." },
            { "ExtendedPatternSyntaxOption", cmt = "Any whitespace in the pattern string which is not escaped and outside a character class is ignored. Moreover, an unescaped sharp (#) outside a character class causes all the following characters, until the first newline (included), to be ignored. This can be used to increase the readability of a pattern string as well as put comments inside regular expressions; this is particularly useful if the pattern string is loaded from a file or written by the user, because in C++ code it is always possible to use the rules for string literals to put comments outside the pattern string. This option corresponds to the /x modifier in Perl regular expressions." },
            { "InvertedGreedinessOption",    cmt = "The greediness of the quantifiers is inverted: *, +, ?, {m,n}, etc. become lazy, while their lazy versions (*?, +?, ??, {m,n}?, etc.) become greedy. There is no equivalent for this option in Perl regular expressions." },
            { "DontCaptureOption",           cmt = "The non-named capturing groups do not capture substrings; named capturing groups still work as intended, as well as the implicit capturing group number 0 corresponding to the entire match. There is no equivalent for this option in Perl regular expressions." },
            { "UseUnicodePropertiesOption",  cmt = "The meaning of the \\w, \\d, etc., character classes, as well as the meaning of their counterparts (\\W, \\D, etc.), is changed from matching ASCII characters only to matching any character with the corresponding Unicode property. For instance, \\d is changed to match any character with the Unicode Nd (decimal digit) property; \\w to match any character with either the Unicode L (letter) or N (digit) property, plus underscore, and so on. This option corresponds to the /u modifier in Perl regular expressions." },
        }
    },
    {
        flag   = "WildcardConversionOptions",
        values = {
            { "DefaultWildcardConversion",    cmt = "No conversion options are set." },
            { "UnanchoredWildcardConversion", cmt = "The conversion will not anchor the pattern. This allows for partial string matches of wildcard expressions." },
            { "NonPathWildcardConversion",    cmt = "The conversion will not interpret the pattern as filepath globbing." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QRegularExpression*", {} },
            { "QRegularExpression*", { "QString" } },
            { "QRegularExpression*", { "QString", "QRegularExpression::PatternOptions" } },
            { "QRegularExpression*", { "QRegularExpression" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "anchoredPattern",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    {
        func      = "escape",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    {
        func      = "fromWildcard",
        binding   = {
            { "QRegularExpression", { "QString" } },
            { "QRegularExpression", { "QString", "Qt::CaseSensitivity" } },
            { "QRegularExpression", { "QString", "Qt::CaseSensitivity", "QRegularExpression::WildcardConversionOptions" } },
        }
    },
    {
        func      = "wildcardToRegularExpression",
        binding   = {
            { "QString", { "QString" } },
            { "QString", { "QString", "QRegularExpression::WildcardConversionOptions" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "captureCount",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "errorString",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "globalMatch",
        binding   = {
            { "QRegularExpressionMatchIterator", { "QString" } },
            { "QRegularExpressionMatchIterator", { "QString", "int" } },
            { "QRegularExpressionMatchIterator", { "QString", "int", "QRegularExpression::MatchType" } },
            { "QRegularExpressionMatchIterator", { "QString", "int", "QRegularExpression::MatchType", "QRegularExpression::MatchOptions" } },
        }
    },
    {
        method    = "isValid",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "match",
        binding   = {
            { "QRegularExpressionMatch", { "QString" } },
            { "QRegularExpressionMatch", { "QString", "int" } },
            { "QRegularExpressionMatch", { "QString", "int", "QRegularExpression::MatchType" } },
            { "QRegularExpressionMatch", { "QString", "int", "QRegularExpression::MatchType", "QRegularExpression::MatchOptions" } },
        }
    },
    {
        method    = "namedCaptureGroups",
        binding   = {
            { "QStringList", {} },
        }
    },
    {
        method    = "optimize",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "pattern",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "patternErrorOffset",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "patternOptions",
        binding   = {
            { "QRegularExpression::PatternOptions", {} },
        }
    },
    {
        method    = "setPattern",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setPatternOptions",
        binding   = {
            { "void", { "QRegularExpression::PatternOptions" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

