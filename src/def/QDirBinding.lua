class = "QDir"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        flag   = "Filters",
        values = {
            { "Dirs",           cmt = "List directories that match the filters." },
            { "AllDirs",        cmt = "List all directories; i.e. don't apply the filters to directory names." },
            { "Files",          cmt = "List files." },
            { "Drives",         cmt = "List disk drives (ignored under Unix)." },
            { "NoSymLinks",     cmt = "Do not list symbolic links (ignored by operating systems that don't support symbolic links)." },
            { "NoDotAndDotDot", cmt = "| NoDotDot Do not list the special entries \".\" and \"..\"." },
            { "NoDot",          cmt = "Do not list the special entry \".\"." },
            { "NoDotDot",       cmt = "Do not list the special entry \"..\"." },
            { "AllEntries",     cmt = "| Files | Drives List directories, files, drives and symlinks (this does not list broken symlinks unless you specify System)." },
            { "Readable",       cmt = "List files for which the application has read access. The Readable value needs to be combined with Dirs or Files." },
            { "Writable",       cmt = "List files for which the application has write access. The Writable value needs to be combined with Dirs or Files." },
            { "Executable",     cmt = "List files for which the application has execute access. The Executable value needs to be combined with Dirs or Files." },
            { "Modified",       cmt = "Only list files that have been modified (ignored on Unix)." },
            { "Hidden",         cmt = "List hidden files (on Unix, files starting with a \".\")." },
            { "System",         cmt = "List system files (on Unix, FIFOs, sockets and device files are included; on Windows, .lnk files are included)" },
            { "CaseSensitive",  cmt = "The filter should be case sensitive." },
        }
    },
    {
        flag   = "SortFlags",
        values = {
            { "Name",        cmt = "Sort by name." },
            { "Time",        cmt = "Sort by time (modification time)." },
            { "Size",        cmt = "Sort by file size." },
            { "Type",        cmt = "Sort by file type (extension)." },
            { "Unsorted",    cmt = "Do not sort." },
            { "NoSort",      cmt = "Not sorted by default." },
            { "DirsFirst",   cmt = "Put the directories first, then the files." },
            { "DirsLast",    cmt = "Put the files first, then the directories." },
            { "Reversed",    cmt = "Reverse the sort order." },
            { "IgnoreCase",  cmt = "Sort case-insensitively." },
            { "LocaleAware", cmt = "Sort items appropriately using the current locale settings." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QDir*", {} },
            { "QDir*", { "QString" } },
            { "QDir*", { "QString", "QString" } },
            { "QDir*", { "QString", "QString", "QDir::SortFlags" } },
            { "QDir*", { "QString", "QString", "QDir::SortFlags", "QDir::Filters" } },
            { "QDir*", { "QDir" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "addSearchPath",
        binding   = {
            { "void", { "QString", "QString" } },
        }
    },
    {
        func      = "cleanPath",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    {
        func      = "current",
        binding   = {
            { "QDir", {} },
        }
    },
    {
        func      = "currentPath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "drives",
        binding   = {
            { "QList<QFileInfo>", {} },
        }
    },
    {
        func      = "fromNativeSeparators",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    {
        func      = "home",
        binding   = {
            { "QDir", {} },
        }
    },
    {
        func      = "homePath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "isAbsolutePath",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        func      = "isRelativePath",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        func      = "listSeparator",
        binding   = {
            { "QChar", {} },
        }
    },
    {
        func      = "match",
        binding   = {
            { "bool", { "QString", "QString" } },
            { "bool", { "QStringList", "QString" } },
        }
    },
    {
        func      = "root",
        binding   = {
            { "QDir", {} },
        }
    },
    {
        func      = "rootPath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "searchPaths",
        binding   = {
            { "QStringList", { "QString" } },
        }
    },
    {
        func      = "separator",
        binding   = {
            { "QChar", {} },
        }
    },
    {
        func      = "setCurrent",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        func      = "setSearchPaths",
        binding   = {
            { "void", { "QString", "QStringList" } },
        }
    },
    {
        func      = "temp",
        binding   = {
            { "QDir", {} },
        }
    },
    {
        func      = "tempPath",
        binding   = {
            { "QString", {} },
        }
    },
    {
        func      = "toNativeSeparators",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "absoluteFilePath",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    {
        method    = "absolutePath",
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
        method    = "cd",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        method    = "cdUp",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "count",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "dirName",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "entryInfoList",
        binding   = {
            { "QList<QFileInfo>", {} },
            { "QList<QFileInfo>", { "QStringList" } },
            { "QList<QFileInfo>", { "QStringList", "QDir::Filters" } },
            { "QList<QFileInfo>", { "QStringList", "QDir::Filters", "QDir::SortFlags" } },
            { "QList<QFileInfo>", { "QDir::Filters" } },
            { "QList<QFileInfo>", { "QDir::Filters", "QDir::SortFlags" } },
        }
    },
    {
        method    = "entryList",
        binding   = {
            { "QStringList", { "QStringList" } },
            { "QStringList", { "QStringList", "QDir::Filters" } },
            { "QStringList", { "QStringList", "QDir::Filters", "QDir::SortFlags" } },
            { "QStringList", {} },
            { "QStringList", { "QDir::Filters" } },
            { "QStringList", { "QDir::Filters", "QDir::SortFlags" } },
        }
    },
    {
        method    = "exists",
        binding   = {
            { "bool", { "QString" } },
            { "bool", {} },
        }
    },
    {
        method    = "filePath",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    {
        method    = "filter",
        binding   = {
            { "QDir::Filters", {} },
        }
    },
    {
        method    = "isAbsolute",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "isEmpty",
        binding   = {
            { "bool", {} },
            { "bool", { "QDir::Filters" } },
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
        method    = "makeAbsolute",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "mkdir",
        binding   = {
            { "bool", { "QString", "QFileDevice::Permissions" } },
            { "bool", { "QString" } },
        }
    },
    {
        method    = "mkpath",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        method    = "nameFilters",
        binding   = {
            { "QStringList", {} },
        }
    },
    {
        method    = "path",
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
        method    = "relativeFilePath",
        binding   = {
            { "QString", { "QString" } },
        }
    },
    {
        method    = "remove",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        method    = "removeRecursively",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "rename",
        binding   = {
            { "bool", { "QString", "QString" } },
        }
    },
    {
        method    = "rmdir",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        method    = "rmpath",
        binding   = {
            { "bool", { "QString" } },
        }
    },
    {
        method    = "setFilter",
        binding   = {
            { "void", { "QDir::Filters" } },
        }
    },
    {
        method    = "setNameFilters",
        binding   = {
            { "void", { "QStringList" } },
        }
    },
    {
        method    = "setPath",
        binding   = {
            { "void", { "QString" } },
        }
    },
    {
        method    = "setSorting",
        binding   = {
            { "void", { "QDir::SortFlags" } },
        }
    },
    {
        method    = "sorting",
        binding   = {
            { "QDir::SortFlags", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

