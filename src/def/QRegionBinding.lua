class = "QRegion"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "RegionType",
        values = {
            { "Rectangle", cmt = "the region covers the entire rectangle." },
            { "Ellipse",   cmt = "the region is an ellipse inside the rectangle." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QRegion*", {} },
            { "QRegion*", { "int", "int", "int", "int" } },
            { "QRegion*", { "int", "int", "int", "int", "QRegion::RegionType" } },
            { "QRegion*", { "QRect" } },
            { "QRegion*", { "QRect", "QRegion::RegionType" } },
            { "QRegion*", { "QRegion" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "boundingRect",
        binding   = {
            { "QRect", {} },
        }
    },
    {
        method    = "contains",
        binding   = {
            { "bool", { "QPoint" } },
            { "bool", { "QRect" } },
        }
    },
    {
        method    = "intersected",
        binding   = {
            { "QRegion", { "QRect" } },
            { "QRegion", { "QRegion" } },
        }
    },
    {
        method    = "intersects",
        binding   = {
            { "bool", { "QRect" } },
            { "bool", { "QRegion" } },
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
        method    = "rectCount",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "subtracted",
        binding   = {
            { "QRegion", { "QRegion" } },
        }
    },
    {
        method    = "translate",
        binding   = {
            { "void", { "int", "int" } },
            { "void", { "QPoint" } },
        }
    },
    {
        method    = "translated",
        binding   = {
            { "QRegion", { "int", "int" } },
            { "QRegion", { "QPoint" } },
        }
    },
    {
        method    = "united",
        binding   = {
            { "QRegion", { "QRect" } },
            { "QRegion", { "QRegion" } },
        }
    },
    {
        method    = "xored",
        binding   = {
            { "QRegion", { "QRegion" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

