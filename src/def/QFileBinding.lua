class = "QFile"

baseClass = "QFileDevice"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QFile*", {} },
            { "QFile*", { "QString" } },
            { "QFile*", { "QObject*" } },
            { "QFile*", { "QString", "QObject*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "copy",
        binding   = {
            { "bool", { "QString" }, "isMethod" },
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "decodeName",
        binding   = {
            { "QString", { "QByteArray" } },
            { "QString", { "const char*" } },
        }
    },
    {
        func      = "encodeName",
        binding   = {
            { "QByteArray", { "QString" } },
        }
    },
    {
        func      = "exists",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "QString" } },
        }
    },
    {
        func      = "link",
        binding   = {
            { "bool", { "QString" }, "isMethod" },
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "moveToTrash",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "QString" } },
            { "bool", { "QString", "QString*" } },
        }
    },
    {
        func      = "permissions",
        binding   = {
            { "QFileDevice::Permissions", {}, "isMethod", "virtual", "override", "const" },
            { "QFileDevice::Permissions", { "QString" } },
        }
    },
    {
        func      = "remove",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "QString" } },
        }
    },
    {
        func      = "rename",
        binding   = {
            { "bool", { "QString" }, "isMethod" },
            { "bool", { "QString", "QString" } },
        }
    },
    {
        func      = "resize",
        binding   = {
            { "bool", { "qint64" }, "isMethod", "virtual", "override" },
            { "bool", { "QString", "qint64" } },
        }
    },
    {
        func      = "setPermissions",
        binding   = {
            { "bool", { "QFileDevice::Permissions" }, "isMethod", "virtual", "override" },
            { "bool", { "QString", "QFileDevice::Permissions" } },
        }
    },
    {
        func      = "supportsMoveToTrash",
        binding   = {
            { "bool", {} },
        }
    },
    {
        func      = "symLinkTarget",
        binding   = {
            { "QString", {}, "isMethod" },
            { "QString", { "QString" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "fileName",
        binding   = {
            { "QString", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "open",
        binding   = {
            { "bool", { "QIODeviceBase::OpenMode", "QFileDevice::Permissions" } },
            { "bool", { "QIODeviceBase::OpenMode" }, "virtual", "override" },
        }
    },
    {
        method    = "setFileName",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "size",
        binding   = {
            { "qint64", {}, "virtual", "override", "const" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

