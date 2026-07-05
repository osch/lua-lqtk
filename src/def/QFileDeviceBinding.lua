class = "QFileDevice"

baseClass = "QIODevice"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "FileError",
        values = {
            { "NoError",          cmt = "No error occurred." },
            { "ReadError",        cmt = "An error occurred when reading from the file." },
            { "WriteError",       cmt = "An error occurred when writing to the file." },
            { "FatalError",       cmt = "A fatal error occurred." },
            { "ResourceError",    cmt = "Out of resources (e.g., too many open files, out of memory, etc.)" },
            { "OpenError",        cmt = "The file could not be opened." },
            { "AbortError",       cmt = "The operation was aborted." },
            { "TimeOutError",     cmt = "A timeout occurred." },
            { "UnspecifiedError", cmt = "An unspecified error occurred." },
            { "RemoveError",      cmt = "The file could not be removed." },
            { "RenameError",      cmt = "The file could not be renamed." },
            { "PositionError",    cmt = "The position in the file could not be changed." },
            { "ResizeError",      cmt = "The file could not be resized." },
            { "PermissionsError", cmt = "The file could not be accessed." },
            { "CopyError",        cmt = "The file could not be copied." },
        }
    },
    {
        flag   = "FileHandleFlags",
        values = {
            { "AutoCloseHandle", cmt = "The file handle passed into open() should be closed by close(), the default behavior is that close just flushes the file and the application is responsible for closing the file handle. When opening a file by name, this flag is ignored as Qt always owns the file handle and must close it." },
            { "DontCloseHandle", cmt = "If not explicitly closed, the underlying file handle is left open when the QFile object is destroyed." },
        }
    },
    {
        enum   = "FileTime",
        values = {
            { "FileAccessTime",         cmt = "When the file was most recently accessed (e.g. read or written to)." },
            { "FileBirthTime",          cmt = "When the file was created (may not be not supported on UNIX)." },
            { "FileMetadataChangeTime", cmt = "When the file's metadata was last changed." },
            { "FileModificationTime",   cmt = "When the file was most recently modified." },
        }
    },
    {
        flag   = "MemoryMapFlags",
        values = {
            { "NoOptions",        cmt = "No options." },
            { "MapPrivateOption", cmt = "The mapped memory will be private, so any modifications will not be visible to other processes and will not be written to disk. Any such modifications will be lost when the memory is unmapped. It is unspecified whether modifications made to the file made after the mapping is created will be visible through the mapped memory. This enum value was introduced in Qt 5.4." },
        }
    },
    {
        flag   = "Permissions",
        values = {
            { "ReadOwner",  cmt = "The file is readable by the owner of the file." },
            { "WriteOwner", cmt = "The file is writable by the owner of the file." },
            { "ExeOwner",   cmt = "The file is executable by the owner of the file." },
            { "ReadUser",   cmt = "The file is readable by the user." },
            { "WriteUser",  cmt = "The file is writable by the user." },
            { "ExeUser",    cmt = "The file is executable by the user." },
            { "ReadGroup",  cmt = "The file is readable by the group." },
            { "WriteGroup", cmt = "The file is writable by the group." },
            { "ExeGroup",   cmt = "The file is executable by the group." },
            { "ReadOther",  cmt = "The file is readable by others." },
            { "WriteOther", cmt = "The file is writable by others." },
            { "ExeOther",   cmt = "The file is executable by others." },
        }
    },
    {
        method    = "atEnd",
        binding   = {
            { "bool", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "close",
        binding   = {
            { "void", {}, "virtual", "override" },
        }
    },
    {
        method    = "error",
        binding   = {
            { "QFileDevice::FileError", {} },
        }
    },
    {
        method    = "fileName",
        binding   = {
            { "QString", {}, "virtual", "const" },
        }
    },
    {
        method    = "fileTime",
        binding   = {
            { "QDateTime", { "QFileDevice::FileTime" } },
        }
    },
    {
        method    = "flush",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "handle",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "isSequential",
        binding   = {
            { "bool", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "permissions",
        binding   = {
            { "QFileDevice::Permissions", {}, "virtual", "const" },
        }
    },
    {
        method    = "pos",
        binding   = {
            { "qint64", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "resize",
        binding   = {
            { "bool", { "qint64" }, "virtual" },
        }
    },
    {
        method    = "seek",
        binding   = {
            { "bool", { "qint64" }, "virtual", "override" },
        }
    },
    {
        method    = "setFileTime",
        binding   = {
            { "bool", { "QDateTime", "QFileDevice::FileTime" } },
        }
    },
    {
        method    = "setPermissions",
        binding   = {
            { "bool", { "QFileDevice::Permissions" }, "virtual" },
        }
    },
    {
        method    = "size",
        binding   = {
            { "qint64", {}, "virtual", "override", "const" },
        }
    },
    {
        method    = "unsetError",
        binding   = {
            { "void", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

