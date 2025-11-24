class = "QRectF"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QRectF*", {} },
            { "QRectF*", { "QRect" } },
            { "QRectF*", { "QPointF", "QPointF" } },
            { "QRectF*", { "QPointF", "QSizeF" } },
            { "QRectF*", { "double", "double", "double", "double" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "adjust",
        binding   = {
            { "void", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "adjusted",
        binding   = {
            { "QRectF", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "bottom",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "bottomLeft",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "bottomRight",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "center",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "contains",
        binding   = {
            { "bool", { "QPointF" } },
            { "bool", { "QRectF" } },
            { "bool", { "double", "double" } },
        }
    },
    {
        method    = "getCoords",
    },
    {
        method    = "getRect",
    },
    {
        method    = "height",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "intersected",
        binding   = {
            { "QRectF", { "QRectF" } },
        }
    },
    {
        method    = "intersects",
        binding   = {
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
        method    = "isNull",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isValid",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "left",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "moveBottom",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "moveBottomLeft",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "moveBottomRight",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "moveCenter",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "moveLeft",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "moveRight",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "moveTo",
        binding   = {
            { "void", { "double", "double" } },
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "moveTop",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "moveTopLeft",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "moveTopRight",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "normalized",
        binding   = {
            { "QRectF", {} },
        }
    },
    {
        method    = "right",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "setBottom",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setBottomLeft",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "setBottomRight",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "setCoords",
        binding   = {
            { "void", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "setHeight",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setLeft",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setRect",
        binding   = {
            { "void", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "setRight",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setSize",
        binding   = {
            { "void", { "QSizeF" } },
        }
    },
    {
        method    = "setTop",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setTopLeft",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "setTopRight",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "setWidth",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setX",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setY",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "size",
        binding   = {
            { "QSizeF", {} },
        }
    },
    {
        method    = "toAlignedRect",
        binding   = {
            { "QRect", {} },
        }
    },
    {
        method    = "toRect",
        binding   = {
            { "QRect", {} },
        }
    },
    {
        method    = "top",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "topLeft",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "topRight",
        binding   = {
            { "QPointF", {} },
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
            { "QRectF", { "double", "double" } },
            { "QRectF", { "QPointF" } },
        }
    },
    {
        method    = "transposed",
        binding   = {
            { "QRectF", {} },
        }
    },
    {
        method    = "united",
        binding   = {
            { "QRectF", { "QRectF" } },
        }
    },
    {
        method    = "width",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "x",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "y",
        binding   = {
            { "double", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

