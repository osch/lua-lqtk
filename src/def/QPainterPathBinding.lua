class = "QPainterPath"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "ElementType",
        values = {
            { "MoveToElement",      cmt = "A new subpath. See also moveTo()." },
            { "LineToElement",      cmt = "A line. See also lineTo()." },
            { "CurveToElement",     cmt = "A curve. See also cubicTo() and quadTo()." },
            { "CurveToDataElement", cmt = "The extra data required to describe a curve in a CurveToElement element." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QPainterPath*", {} },
            { "QPainterPath*", { "QPointF" } },
            { "QPainterPath*", { "QPainterPath" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addEllipse",
        binding   = {
            { "void", { "QRectF" } },
            { "void", { "QPointF", "double", "double" } },
            { "void", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "addPath",
        binding   = {
            { "void", { "QPainterPath" } },
        }
    },
    {
        method    = "addPolygon",
        binding   = {
            { "void", { "QPolygonF" } },
        }
    },
    {
        method    = "addRect",
        binding   = {
            { "void", { "QRectF" } },
            { "void", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "addRegion",
        binding   = {
            { "void", { "QRegion" } },
        }
    },
    {
        method    = "addRoundedRect",
        binding   = {
            { "void", { "QRectF", "double", "double" } },
            { "void", { "QRectF", "double", "double", "Qt::SizeMode" } },
            { "void", { "double", "double", "double", "double", "double", "double" } },
            { "void", { "double", "double", "double", "double", "double", "double", "Qt::SizeMode" } },
        }
    },
    {
        method    = "addText",
        binding   = {
            { "void", { "QPointF", "QFont", "QString" } },
            { "void", { "double", "double", "QFont", "QString" } },
        }
    },
    {
        method    = "angleAtPercent",
        binding   = {
            { "double", { "double" } },
        }
    },
    {
        method    = "arcMoveTo",
        binding   = {
            { "void", { "QRectF", "double" } },
            { "void", { "double", "double", "double", "double", "double" } },
        }
    },
    {
        method    = "arcTo",
        binding   = {
            { "void", { "QRectF", "double", "double" } },
            { "void", { "double", "double", "double", "double", "double", "double" } },
        }
    },
    {
        method    = "boundingRect",
        binding   = {
            { "QRectF", {} },
        }
    },
    {
        method    = "capacity",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "clear",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "closeSubpath",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "connectPath",
        binding   = {
            { "void", { "QPainterPath" } },
        }
    },
    {
        method    = "contains",
        binding   = {
            { "bool", { "QPainterPath" } },
            { "bool", { "QPointF" } },
            { "bool", { "QRectF" } },
        }
    },
    {
        method    = "controlPointRect",
        binding   = {
            { "QRectF", {} },
        }
    },
    {
        method    = "cubicTo",
        binding   = {
            { "void", { "QPointF", "QPointF", "QPointF" } },
            { "void", { "double", "double", "double", "double", "double", "double" } },
        }
    },
    {
        method    = "currentPosition",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "elementCount",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "fillRule",
        binding   = {
            { "Qt::FillRule", {} },
        }
    },
    {
        method    = "intersected",
        binding   = {
            { "QPainterPath", { "QPainterPath" } },
        }
    },
    {
        method    = "intersects",
        binding   = {
            { "bool", { "QPainterPath" } },
            { "bool", { "QRectF" } },
        }
    },
    {
        method    = "isEmpty",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "length",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "lineTo",
        binding   = {
            { "void", { "QPointF" } },
            { "void", { "double", "double" } },
        }
    },
    {
        method    = "moveTo",
        binding   = {
            { "void", { "QPointF" } },
            { "void", { "double", "double" } },
        }
    },
    {
        method    = "percentAtLength",
        binding   = {
            { "double", { "double" } },
        }
    },
    {
        method    = "pointAtPercent",
        binding   = {
            { "QPointF", { "double" } },
        }
    },
    {
        method    = "quadTo",
        binding   = {
            { "void", { "QPointF", "QPointF" } },
            { "void", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "reserve",
        binding   = {
            { "void", { "int" } },
        }
    },
    {
        method    = "setElementPositionAt",
        binding   = {
            { "void", { "int", "double", "double" } },
        }
    },
    {
        method    = "setFillRule",
        binding   = {
            { "void", { "Qt::FillRule" } },
        }
    },
    {
        method    = "simplified",
        binding   = {
            { "QPainterPath", {} },
        }
    },
    {
        method    = "slopeAtPercent",
        binding   = {
            { "double", { "double" } },
        }
    },
    {
        method    = "subtracted",
        binding   = {
            { "QPainterPath", { "QPainterPath" } },
        }
    },
    {
        method    = "toFillPolygon",
        binding   = {
            { "QPolygonF", {} },
            { "QPolygonF", { "QTransform" } },
        }
    },
    {
        method    = "toFillPolygons",
        binding   = {
            { "QList<QPolygonF>", {} },
            { "QList<QPolygonF>", { "QTransform" } },
        }
    },
    {
        method    = "toReversed",
        binding   = {
            { "QPainterPath", {} },
        }
    },
    {
        method    = "toSubpathPolygons",
        binding   = {
            { "QList<QPolygonF>", {} },
            { "QList<QPolygonF>", { "QTransform" } },
        }
    },
    {
        method    = "translate",
        binding   = {
            { "void", { "double", "double" } },
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "translated",
        binding   = {
            { "QPainterPath", { "double", "double" } },
            { "QPainterPath", { "QPointF" } },
        }
    },
    {
        method    = "united",
        binding   = {
            { "QPainterPath", { "QPainterPath" } },
        }
    },
    cmt = [=====[
    {
        method    = "elementAt",
        binding   = {
            { "QPainterPath::Element", { "int" } },
        }
    },
    ]=====]
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

