class = "QFont"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "Capitalization",
        values = {
            { "MixedCase",    cmt = "This is the normal text rendering option where no capitalization change is applied." },
            { "AllUppercase", cmt = "This alters the text to be rendered in all uppercase type." },
            { "AllLowercase", cmt = "This alters the text to be rendered in all lowercase type." },
            { "SmallCaps",    cmt = "This alters the text to be rendered in small-caps type." },
            { "Capitalize",   cmt = "This alters the text to be rendered with the first character of each word as an uppercase character." },
        }
    },
    {
        enum   = "HintingPreference",
        values = {
            { "PreferDefaultHinting",  cmt = "Use the default hinting level for the target platform." },
            { "PreferNoHinting",       cmt = "If possible, render text without hinting the outlines of the glyphs. The text layout will be typographically accurate and scalable, using the same metrics as are used e.g. when printing." },
            { "PreferVerticalHinting", cmt = "If possible, render text with no horizontal hinting, but align glyphs to the pixel grid in the vertical direction. The text will appear crisper on displays where the density is too low to give an accurate rendering of the glyphs. But since the horizontal metrics of the glyphs are unhinted, the text's layout will be scalable to higher density devices (such as printers) without impacting details such as line breaks." },
            { "PreferFullHinting",     cmt = "If possible, render text with hinting in both horizontal and vertical directions. The text will be altered to optimize legibility on the target device, but since the metrics will depend on the target size of the text, the positions of glyphs, line breaks, and other typographical detail will not scale, meaning that a text layout may look different on devices with different pixel densities." },
        }
    },
    {
        enum   = "SpacingType",
        values = {
            { "PercentageSpacing", cmt = "A value of 100 will keep the spacing unchanged; a value of 200 will enlarge the spacing after a character by the width of the character itself." },
            { "AbsoluteSpacing",   cmt = "A positive value increases the letter spacing by the corresponding pixels; a negative value decreases the spacing." },
        }
    },
    {
        enum   = "Stretch",
        values = {
            { "AnyStretch",     cmt = "0 Accept any stretch matched using the other QFont properties" },
            { "UltraCondensed", cmt = "50" },
            { "ExtraCondensed", cmt = "62" },
            { "Condensed",      cmt = "75" },
            { "SemiCondensed",  cmt = "87" },
            { "Unstretched",    cmt = "100" },
            { "SemiExpanded",   cmt = "112" },
            { "Expanded",       cmt = "125" },
            { "ExtraExpanded",  cmt = "150" },
            { "UltraExpanded",  cmt = "200" },
        }
    },
    {
        enum   = "Style",
        values = {
            { "StyleNormal",  cmt = "Normal glyphs used in unstyled text." },
            { "StyleItalic",  cmt = "Italic glyphs that are specifically designed for the purpose of representing italicized text." },
            { "StyleOblique", cmt = "Glyphs with an italic appearance that are typically based on the unstyled glyphs, but are not fine-tuned for the purpose of representing italicized text." },
        }
    },
    {
        enum   = "StyleHint",
        values = {
            { "AnyStyle",   cmt = "leaves the font matching algorithm to choose the family. This is the default." },
            { "SansSerif",  cmt = "the font matcher prefer sans serif fonts." },
            { "Helvetica",  cmt = "is a synonym for SansSerif." },
            { "Serif",      cmt = "the font matcher prefers serif fonts." },
            { "Times",      cmt = "is a synonym for Serif." },
            { "TypeWriter", cmt = "the font matcher prefers fixed pitch fonts." },
            { "Courier",    cmt = "a synonym for TypeWriter." },
            { "OldEnglish", cmt = "the font matcher prefers decorative fonts." },
            { "Decorative", cmt = "is a synonym for OldEnglish." },
            { "Monospace",  cmt = "the font matcher prefers fonts that map to the CSS generic font-family 'monospace'." },
            { "Fantasy",    cmt = "the font matcher prefers fonts that map to the CSS generic font-family 'fantasy'." },
            { "Cursive",    cmt = "the font matcher prefers fonts that map to the CSS generic font-family 'cursive'." },
            { "System",     cmt = "the font matcher prefers system fonts." },
        }
    },
    {
        enum   = "StyleStrategy",
        values = {
            { "PreferDefault",         cmt = "the default style strategy. It does not prefer any type of font." },
            { "PreferBitmap",          cmt = "prefers bitmap fonts (as opposed to outline fonts)." },
            { "PreferDevice",          cmt = "prefers device fonts." },
            { "PreferOutline",         cmt = "prefers outline fonts (as opposed to bitmap fonts)." },
            { "ForceOutline",          cmt = "forces the use of outline fonts." },
            { "NoAntialias",           cmt = "don't antialias the fonts." },
            { "NoSubpixelAntialias",   cmt = "avoid subpixel antialiasing on the fonts if possible." },
            { "PreferAntialias",       cmt = "antialias if possible." },
            { "ContextFontMerging",    cmt = "If the selected font does not contain a certain character, then Qt automatically chooses a similar-looking fallback font that contains the character. By default this is done on a character-by-character basis. This means that in certain uncommon cases, multiple fonts may be used to represent one string of text even if it's in the same script. Setting ContextFontMerging will try finding the fallback font that matches the largest subset of the input string instead. This will be more expensive for strings where missing glyphs occur, but may give more consistent results. If NoFontMerging is set, then ContextFontMerging will have no effect." },
            { "PreferTypoLineMetrics", cmt = "For compatibility reasons, OpenType fonts contain two competing sets of the vertical line metrics that provide the ascent, descent and leading of the font. These are often referred to as the win (Windows) metrics and the typo (typographical) metrics. While the specification recommends using the typo metrics for line spacing, many applications prefer the win metrics unless the USE_TYPO_METRICS flag is set in the fsSelection field of the font. For backwards-compatibility reasons, this is also the case for Qt applications. This is not an issue for fonts that set the USE_TYPO_METRICS flag to indicate that the typo metrics are valid, nor for fonts where the win metrics and typo metrics match up. However, for certain fonts the win metrics may be larger than the preferable line spacing and the USE_TYPO_METRICS flag may be unset by mistake. For such fonts, setting PreferTypoLineMetrics may give superior results." },
            { "NoFontMerging",         cmt = "If the font selected for a certain writing system does not contain a character requested to draw, then Qt automatically chooses a similar looking font that contains the character. The NoFontMerging flag disables this feature. Please note that enabling this flag will not prevent Qt from automatically picking a suitable font when the selected font does not support the writing system of the text." },
            { "PreferNoShaping",       cmt = "Sometimes, a font will apply complex rules to a set of characters in order to display them correctly. In some writing systems, such as Brahmic scripts, this is required in order for the text to be legible, but in e.g. Latin script, it is merely a cosmetic feature. The PreferNoShaping flag will disable all such features when they are not required, which will improve performance in most cases (since Qt 5.10)." },
            { "PreferMatch",           cmt = "prefer an exact match. The font matcher will try to use the exact font size that has been specified." },
            { "PreferQuality",         cmt = "prefer the best quality font. The font matcher will use the nearest standard point size that the font supports." },
        }
    },
    {
        enum   = "Weight",
        values = {
            { "Thin",       cmt = "100" },
            { "ExtraLight", cmt = "200" },
            { "Light",      cmt = "300" },
            { "Normal",     cmt = "400" },
            { "Medium",     cmt = "500" },
            { "DemiBold",   cmt = "600" },
            { "Bold",       cmt = "700" },
            { "ExtraBold",  cmt = "800" },
            { "Black",      cmt = "900" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QFont@", {} },
            { "QFont@", { "QFont" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "bold",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "pointSize",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "setBold",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setPointSize",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setStyleHint",
        binding   = {
            { "void", { "QFont::StyleHint" } },
            { "void", { "QFont::StyleHint", "QFont::StyleStrategy" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

