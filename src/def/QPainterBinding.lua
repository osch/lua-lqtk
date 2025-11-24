class = "QPainter"

needsValidityCheck = true
onlyWrapped        = true

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "CompositionMode",
        values = {
            { "CompositionMode_SourceOver",          cmt = "This is the default mode. The alpha of the source is used to blend the pixel on top of the destination." },
            { "CompositionMode_DestinationOver",     cmt = "The alpha of the destination is used to blend it on top of the source pixels. This mode is the inverse of CompositionMode_SourceOver." },
            { "CompositionMode_Clear",               cmt = "The pixels in the destination are cleared (set to fully transparent) independent of the source." },
            { "CompositionMode_Source",              cmt = "The output is the source pixel. (This means a basic copy operation and is identical to SourceOver when the source pixel is opaque)." },
            { "CompositionMode_Destination",         cmt = "The output is the destination pixel. This means that the blending has no effect. This mode is the inverse of CompositionMode_Source." },
            { "CompositionMode_SourceIn",            cmt = "The output is the source, where the alpha is reduced by that of the destination." },
            { "CompositionMode_DestinationIn",       cmt = "The output is the destination, where the alpha is reduced by that of the source. This mode is the inverse of CompositionMode_SourceIn." },
            { "CompositionMode_SourceOut",           cmt = "The output is the source, where the alpha is reduced by the inverse of destination." },
            { "CompositionMode_DestinationOut",      cmt = "The output is the destination, where the alpha is reduced by the inverse of the source. This mode is the inverse of CompositionMode_SourceOut." },
            { "CompositionMode_SourceAtop",          cmt = "The source pixel is blended on top of the destination, with the alpha of the source pixel reduced by the alpha of the destination pixel." },
            { "CompositionMode_DestinationAtop",     cmt = "The destination pixel is blended on top of the source, with the alpha of the destination pixel is reduced by the alpha of the destination pixel. This mode is the inverse of CompositionMode_SourceAtop." },
            { "CompositionMode_Xor",                 cmt = "The source, whose alpha is reduced with the inverse of the destination alpha, is merged with the destination, whose alpha is reduced by the inverse of the source alpha. CompositionMode_Xor is not the same as the bitwise Xor." },
            { "CompositionMode_Plus",                cmt = "Both the alpha and color of the source and destination pixels are added together." },
            { "CompositionMode_Multiply",            cmt = "The output is the source color multiplied by the destination. Multiplying a color with white leaves the color unchanged, while multiplying a color with black produces black." },
            { "CompositionMode_Screen",              cmt = "The source and destination colors are inverted and then multiplied. Screening a color with white produces white, whereas screening a color with black leaves the color unchanged." },
            { "CompositionMode_Overlay",             cmt = "Multiplies or screens the colors depending on the destination color. The destination color is mixed with the source color to reflect the lightness or darkness of the destination." },
            { "CompositionMode_Darken",              cmt = "The darker of the source and destination colors is selected." },
            { "CompositionMode_Lighten",             cmt = "The lighter of the source and destination colors is selected." },
            { "CompositionMode_ColorDodge",          cmt = "The destination color is brightened to reflect the source color. A black source color leaves the destination color unchanged." },
            { "CompositionMode_ColorBurn",           cmt = "The destination color is darkened to reflect the source color. A white source color leaves the destination color unchanged." },
            { "CompositionMode_HardLight",           cmt = "Multiplies or screens the colors depending on the source color. A light source color will lighten the destination color, whereas a dark source color will darken the destination color." },
            { "CompositionMode_SoftLight",           cmt = "Darkens or lightens the colors depending on the source color. Similar to CompositionMode_HardLight." },
            { "CompositionMode_Difference",          cmt = "Subtracts the darker of the colors from the lighter. Painting with white inverts the destination color, whereas painting with black leaves the destination color unchanged." },
            { "CompositionMode_Exclusion",           cmt = "Similar to CompositionMode_Difference, but with a lower contrast. Painting with white inverts the destination color, whereas painting with black leaves the destination color unchanged." },
            { "RasterOp_SourceOrDestination",        cmt = "Does a bitwise OR operation on the source and destination pixels (src OR dst)." },
            { "RasterOp_SourceAndDestination",       cmt = "Does a bitwise AND operation on the source and destination pixels (src AND dst)." },
            { "RasterOp_SourceXorDestination",       cmt = "Does a bitwise XOR operation on the source and destination pixels (src XOR dst)." },
            { "RasterOp_NotSourceAndNotDestination", cmt = "Does a bitwise NOR operation on the source and destination pixels ((NOT src) AND (NOT dst))." },
            { "RasterOp_NotSourceOrNotDestination",  cmt = "Does a bitwise NAND operation on the source and destination pixels ((NOT src) OR (NOT dst))." },
            { "RasterOp_NotSourceXorDestination",    cmt = "Does a bitwise operation where the source pixels are inverted and then XOR'ed with the destination ((NOT src) XOR dst)." },
            { "RasterOp_NotSource",                  cmt = "Does a bitwise operation where the source pixels are inverted (NOT src)." },
            { "RasterOp_NotSourceAndDestination",    cmt = "Does a bitwise operation where the source is inverted and then AND'ed with the destination ((NOT src) AND dst)." },
            { "RasterOp_SourceAndNotDestination",    cmt = "Does a bitwise operation where the source is AND'ed with the inverted destination pixels (src AND (NOT dst))." },
            { "RasterOp_NotSourceOrDestination",     cmt = "Does a bitwise operation where the source is inverted and then OR'ed with the destination ((NOT src) OR dst)." },
            { "RasterOp_ClearDestination",           cmt = "The pixels in the destination are cleared (set to 0) independent of the source." },
            { "RasterOp_SetDestination",             cmt = "The pixels in the destination are set (set to 1) independent of the source." },
            { "RasterOp_NotDestination",             cmt = "Does a bitwise operation where the destination pixels are inverted (NOT dst)." },
            { "RasterOp_SourceOrNotDestination",     cmt = "Does a bitwise operation where the source is OR'ed with the inverted destination pixels (src OR (NOT dst))." },
        }
    },
    {
        flag   = "PixmapFragmentHints",
        values = {
            { "OpaqueHint", cmt = "Indicates that the pixmap fragments to be drawn are opaque. Opaque fragments are potentially faster to draw." },
        }
    },
    {
        flag   = "RenderHints",
        values = {
            { "Antialiasing",                cmt = "Indicates that the engine should antialias edges of primitives if possible." },
            { "TextAntialiasing",            cmt = "Indicates that the engine should antialias text if possible. To forcibly disable antialiasing for text, do not use this hint. Instead, set QFont::NoAntialias on your font's style strategy." },
            { "SmoothPixmapTransform",       cmt = "Indicates that the engine should use a smooth pixmap transformation algorithm (such as bilinear) rather than nearest neighbor." },
            { "VerticalSubpixelPositioning", cmt = "Allow text to be positioned at fractions of pixels vertically as well as horizontally, if this is supported by the font engine. This is currently supported by Freetype on all platforms when the hinting preference is QFont::PreferNoHinting, and also on macOS. For most use cases this will not improve visual quality, but may increase memory consumption and some reduction in text rendering performance. Therefore, enabling this is not recommended unless the use case requires it. One such use case could be aligning glyphs with other visual primitives. This value was added in Qt 6.1." },
            { "LosslessImageRendering",      cmt = "Use a lossless image rendering, whenever possible. Currently, this hint is only used when QPainter is employed to output a PDF file through QPrinter or QPdfWriter, where drawImage()/drawPixmap() calls will encode images using a lossless compression algorithm instead of lossy JPEG compression. This value was added in Qt 5.13." },
            { "NonCosmeticBrushPatterns",    cmt = "When painting with a brush with one of the predefined pattern styles, transform the pattern too, along with the object being painted. The default is to treat the pattern as cosmetic, so that the pattern pixels will map directly to device pixels, independently of any active transformations. This value was added in Qt 6.4." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QPainter@", {} },
            { "QPainter@", { "QWidget*" } },
            { "QPainter@", { "QPixmap*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "backgroundMode",
        binding   = {
            { "Qt::BGMode", {} },
        }
    },
    {
        method    = "begin",
        delegate  = {
            { "bool", { "QWidget*" } },
            { "bool", { "QPixmap*" } },
        }
    },
    {
        method    = "clipPath",
        binding   = {
            { "QPainterPath", {} },
        }
    },
    {
        method    = "clipRegion",
        binding   = {
            { "QRegion", {} },
        }
    },
    {
        method    = "combinedTransform",
        binding   = {
            { "QTransform", {} },
        }
    },
    {
        method    = "compositionMode",
        binding   = {
            { "QPainter::CompositionMode", {} },
        }
    },
    {
        method    = "drawConvexPolygon",
        delegate  = {
            { "void", { "QList<QPoint>" } },
        }
    },
    {
        method    = "drawEllipse",
        binding   = {
            { "void", { "QRect" } },
            { "void", { "QPoint", "int", "int" } },
            { "void", { "int", "int", "int", "int" } },
        }
    },
    {
        method    = "drawPath",
        binding   = {
            { "void", { "QPainterPath" } },
        }
    },
    {
        method    = "drawPie",
        binding   = {
            { "void", { "QRectF", "int", "int" } },
            { "void", { "QRect", "int", "int" } },
            { "void", { "int", "int", "int", "int", "int", "int" } },
        }
    },
    {
        method    = "drawPixmap",
        binding   = {
            { "void", { "int", "int", "QPixmap" } },
            { "void", { "QRectF", "QPixmap", "QRectF" } },
            { "void", { "QPoint", "QPixmap" } },
            { "void", { "QPointF", "QPixmap" } },
            { "void", { "QRect", "QPixmap" } },
            { "void", { "QPoint", "QPixmap", "QRect" } },
            { "void", { "QPointF", "QPixmap", "QRectF" } },
            { "void", { "QRect", "QPixmap", "QRect" } },
            { "void", { "int", "int", "int", "int", "QPixmap" } },
            { "void", { "int", "int", "QPixmap", "int", "int", "int", "int" } },
            { "void", { "int", "int", "int", "int", "QPixmap", "int", "int", "int", "int" } },
        }
    },
    {
        method    = "drawRect",
        binding   = {
            { "void", { "QRect" } },
            { "void", { "int", "int", "int", "int" } },
        }
    },
    {
        method    = "fillPath",
        binding   = {
            { "void", { "QPainterPath", "QBrush" } },
        }
    },
    {
        method    = "fillRect",
        binding   = {
            { "void", { "QRectF", "QBrush" } },
            { "void", { "QRect", "QGradient::Preset" } },
            { "void", { "QRect", "Qt::BrushStyle" } },
            { "void", { "QRect", "Qt::GlobalColor" } },
            { "void", { "QRect", "QBrush" } },
            { "void", { "QRect", "QColor" } },
            { "void", { "QRectF", "QGradient::Preset" } },
            { "void", { "QRectF", "Qt::BrushStyle" } },
            { "void", { "QRectF", "Qt::GlobalColor" } },
            { "void", { "QRectF", "QColor" } },
            { "void", { "int", "int", "int", "int", "QGradient::Preset" } },
            { "void", { "int", "int", "int", "int", "Qt::BrushStyle" } },
            { "void", { "int", "int", "int", "int", "Qt::GlobalColor" } },
            { "void", { "int", "int", "int", "int", "QBrush" } },
            { "void", { "int", "int", "int", "int", "QColor" } },
        }
    },
    {
        method    = "finish",
        delegate  = {
            { "bool", {} },
        }
    },
    {
        method    = "restore",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "rotate",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "save",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "scale",
        binding   = {
            { "void", { "double", "double" } },
        }
    },
    {
        method    = "setBrush",
        binding   = {
            { "void", { "QColor" } },
            { "void", { "QBrush" } },
            { "void", { "QGradient" } },
        }
    },
    {
        method    = "setPen",
        binding   = {
            { "void", { "Qt::PenStyle" } },
        }
    },
    {
        method    = "setRenderHint",
        binding   = {
            { "void", { "QPainter::RenderHint" } },
        }
    },
    {
        method    = "translate",
        binding   = {
            { "void", { "double", "double" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

