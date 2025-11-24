class = "QTransform"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "TransformationType",
        values = {
            "TxNone",
            "TxTranslate",
            "TxScale",
            "TxRotate",
            "TxShear",
            "TxProject",
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QTransform*", {} },
            { "QTransform*", { "double", "double", "double", "double", "double", "double" } },
            { "QTransform*", { "double", "double", "double", "double", "double", "double", "double", "double", "double" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "fromScale",
        binding   = {
            { "QTransform", { "double", "double" } },
        }
    },
    {
        func      = "fromTranslate",
        binding   = {
            { "QTransform", { "double", "double" } },
        }
    },
    {
        func      = "quadToQuad",
    },
    {
        func      = "quadToSquare",
    },
    {
        func      = "squareToQuad",
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "adjoint",
        binding   = {
            { "QTransform", {} },
        }
    },
    {
        method    = "determinant",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "dx",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "dy",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "inverted",
    },
    {
        method    = "isAffine",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isIdentity",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isInvertible",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isRotating",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isScaling",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isTranslating",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "m11",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m12",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m13",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m21",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m22",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m23",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m31",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m32",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "m33",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "map",
        binding   = {
            { "QLineF", { "QLineF" } },
            { "QPainterPath", { "QPainterPath" } },
            { "QPoint", { "QPoint" } },
            { "QPointF", { "QPointF" } },
            { "QPolygonF", { "QPolygonF" } },
            { "QRegion", { "QRegion" } },
        }
    },
    {
        method    = "mapRect",
        binding   = {
            { "QRectF", { "QRectF" } },
            { "QRect", { "QRect" } },
        }
    },
    {
        method    = "mapXY",
    },
    {
        method    = "reset",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "rotate",
        binding   = {
            { "this", { "double", "Qt::Axis", "double" } },
            { "this", { "double" } },
            { "this", { "double", "Qt::Axis" } },
        }
    },
    {
        method    = "rotateRadians",
        binding   = {
            { "this", { "double", "Qt::Axis", "double" } },
            { "this", { "double" } },
            { "this", { "double", "Qt::Axis" } },
        }
    },
    {
        method    = "scale",
        binding   = {
            { "this", { "double", "double" } },
        }
    },
    {
        method    = "setMatrix",
        binding   = {
            { "void", { "double", "double", "double", "double", "double", "double", "double", "double", "double" } },
        }
    },
    {
        method    = "shear",
        binding   = {
            { "this", { "double", "double" } },
        }
    },
    {
        method    = "translate",
        binding   = {
            { "this", { "double", "double" } },
        }
    },
    {
        method    = "transposed",
        binding   = {
            { "QTransform", {} },
        }
    },
    {
        method    = "type",
        binding   = {
            { "QTransform::TransformationType", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

