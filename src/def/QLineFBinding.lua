class = "QLineF"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "IntersectionType",
        values = {
            { "UnboundedIntersection"  },
            { "NoIntersection",        cmt = "Indicates that the lines do not intersect; i.e. they are parallel." },
            { "UnboundedIntersection", cmt = "The two lines intersect, but not within the range defined by their lengths. This will be the case if the lines are not parallel. intersect() will also return this value if the intersect point is within the start and end point of only one of the lines." },
            { "BoundedIntersection",   cmt = "The two lines intersect with each other within the start and end points of each line." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QLineF*", {} },
            { "QLineF*", { "QPointF", "QPointF" } },
            { "QLineF*", { "double", "double", "double", "double" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "fromPolar",
        binding   = {
            { "QLineF", { "double", "double" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "angle",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "angleTo",
        binding   = {
            { "double", { "QLineF" } },
        }
    },
    {
        method    = "center",
        binding   = {
            { "QPointF", {} },
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
        method    = "intersects",
        binding   = {
            { "QLineF::IntersectionType", { "QLineF" } },
            { "QLineF::IntersectionType", { "QLineF", "QPointF*" } },
        }
    },
    {
        method    = "isNull",
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
        method    = "normalVector",
        binding   = {
            { "QLineF", {} },
        }
    },
    {
        method    = "p1",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "p2",
        binding   = {
            { "QPointF", {} },
        }
    },
    {
        method    = "pointAt",
        binding   = {
            { "QPointF", { "double" } },
        }
    },
    {
        method    = "setAngle",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setLength",
        binding   = {
            { "void", { "double" } },
        }
    },
    {
        method    = "setLine",
        binding   = {
            { "void", { "double", "double", "double", "double" } },
        }
    },
    {
        method    = "setP1",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "setP2",
        binding   = {
            { "void", { "QPointF" } },
        }
    },
    {
        method    = "setPoints",
        binding   = {
            { "void", { "QPointF", "QPointF" } },
        }
    },
    {
        method    = "translate",
        binding   = {
            { "void", { "QPointF" } },
            { "void", { "double", "double" } },
        }
    },
    {
        method    = "translated",
        binding   = {
            { "QLineF", { "QPointF" } },
            { "QLineF", { "double", "double" } },
        }
    },
    {
        method    = "unitVector",
        binding   = {
            { "QLineF", {} },
        }
    },
    {
        method    = "x1",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "x2",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "y1",
        binding   = {
            { "double", {} },
        }
    },
    {
        method    = "y2",
        binding   = {
            { "double", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

