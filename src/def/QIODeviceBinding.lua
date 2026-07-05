class = "QIODevice"

baseClass = "QObject"

elements = {
    {
        method    = "close",
        binding   = {
            { "void", {}, "virtual" },
        }
    },
    {
        method    = "open",
        binding   = {
            { "bool", { "QIODeviceBase::OpenMode" }, "virtual" },
        }
    },
    {
        method    = "read",
        binding   = {
            { "QByteArray", { "qint64" } },
        }
    },
    {
        method    = "readAll",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        method    = "readLine",
        binding   = {
            { "QByteArray", {} },
            { "QByteArray", { "qint64" } },
        }
    },
    {
        method    = "write",
        binding   = {
            { "qint64", { "QByteArray" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

