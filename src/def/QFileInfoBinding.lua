class = "QFileInfo"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QFileInfo*", {} },
            { "QFileInfo*", { "QFileDevice" } },
            { "QFileInfo*", { "QString" } },
            { "QFileInfo*", { "QDir", "QString" } },
            { "QFileInfo*", { "QFileInfo" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "exists",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "QString" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "absoluteDir",
        binding   = {
            { "QDir", {} },
        }
    },
    {
        method    = "absoluteFilePath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "absolutePath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "baseName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "birthTime",
        binding   = {
            { "QDateTime", {} },
            { "QDateTime", { "QTimeZone::Initialization" } },
            { "QDateTime", { "QTimeZone" } },
        }
    },
    {
        method    = "bundleName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "caching",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "canonicalFilePath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "canonicalPath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "completeBaseName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "completeSuffix",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "dir",
        binding   = {
            { "QDir", {} },
        }
    },
    {
        method    = "fileName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "filePath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "fileTime",
        binding   = {
            { "QDateTime", { "QFileDevice::FileTime" } },
            { "QDateTime", { "QFileDevice::FileTime", "QTimeZone::Initialization" } },
            { "QDateTime", { "QFileDevice::FileTime", "QTimeZone" } },
        }
    },
    {
        method    = "group",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "groupId",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "isAbsolute",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isAlias",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isBundle",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isDir",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isExecutable",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isFile",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isHidden",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isJunction",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isNativePath",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isReadable",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isRelative",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isRoot",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isShortcut",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isSymLink",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isSymbolicLink",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isWritable",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "junctionTarget",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "lastModified",
        binding   = {
            { "QDateTime", {} },
            { "QDateTime", { "QTimeZone::Initialization" } },
            { "QDateTime", { "QTimeZone" } },
        }
    },
    {
        method    = "lastRead",
        binding   = {
            { "QDateTime", {} },
            { "QDateTime", { "QTimeZone::Initialization" } },
            { "QDateTime", { "QTimeZone" } },
        }
    },
    {
        method    = "makeAbsolute",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "metadataChangeTime",
        binding   = {
            { "QDateTime", {} },
            { "QDateTime", { "QTimeZone::Initialization" } },
            { "QDateTime", { "QTimeZone" } },
        }
    },
    {
        method    = "owner",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "ownerId",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "path",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "permission",
        binding   = {
            { "bool", { "QFileDevice::Permissions" } },
        }
    },
    {
        method    = "permissions",
        binding   = {
            { "QFileDevice::Permissions", {} },
        }
    },
    {
        method    = "readSymLink",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "refresh",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "setCaching",
        binding   = {
            { "void", { "bool" } },
        }
    },
    {
        method    = "setFile",
        binding   = {
            { "void", { "QString" } },
            { "void", { "QFileDevice" } },
            { "void", { "QDir", "QString" } },
        }
    },
    {
        method    = "size",
        binding   = {
            { "qint64", {} },
        }
    },
    {
        method    = "stat",
        binding   = {
            { "void", {} },
        }
    },
    {
        method    = "suffix",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "symLinkTarget",
        binding   = {
            { "QString", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

