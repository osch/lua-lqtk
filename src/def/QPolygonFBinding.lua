class = "QPolygonF"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QPolygonF*", {} },
            { "QPolygonF*", { "QList<QPointF>" } },
            { "QPolygonF*", { "QRectF" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "boundingRect",
        binding   = {
            { "QRectF", {} },
        }
    },
    {
        method    = "containsPoint",
        binding   = {
            { "bool", { "QPointF", "Qt::FillRule" } },
        }
    },
    {
        method    = "intersected",
        binding   = {
            { "QPolygonF", { "QPolygonF" } },
        }
    },
    {
        method    = "intersects",
        binding   = {
            { "bool", { "QPolygonF" } },
        }
    },
    {
        method    = "isClosed",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "subtracted",
        binding   = {
            { "QPolygonF", { "QPolygonF" } },
        }
    },
    {
        method    = "translate",
        binding   = {
            { "void", { "QPointF" } },
            { "void", { "qreal", "qreal" } },
        }
    },
    {
        method    = "translated",
        binding   = {
            { "QPolygonF", { "QPointF" } },
            { "QPolygonF", { "qreal", "qreal" } },
        }
    },
    {
        method    = "united",
        binding   = {
            { "QPolygonF", { "QPolygonF" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

