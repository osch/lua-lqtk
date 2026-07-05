class = "QDateTime"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QDateTime*", {} },
            { "QDateTime*", { "QDateTime" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "currentDateTime",
        binding   = {
            { "QDateTime", {} },
            { "QDateTime", { "QTimeZone::Initialization" } },
            { "QDateTime", { "QTimeZone" } },
        }
    },
    {
        func      = "currentDateTimeUtc",
        binding   = {
            { "QDateTime", {} },
        }
    },
    {
        func      = "currentMSecsSinceEpoch",
        binding   = {
            { "qint64", {} },
        }
    },
    {
        func      = "currentSecsSinceEpoch",
        binding   = {
            { "qint64", {} },
        }
    },
    {
        func      = "fromMSecsSinceEpoch",
        binding   = {
            { "QDateTime", { "qint64" } },
            { "QDateTime", { "qint64", "QTimeZone" } },
            { "QDateTime", { "qint64", "QTimeZone::Initialization" } },
        }
    },
    {
        func      = "fromSecsSinceEpoch",
        binding   = {
            { "QDateTime", { "qint64" } },
            { "QDateTime", { "qint64", "QTimeZone" } },
            { "QDateTime", { "qint64", "QTimeZone::Initialization" } },
        }
    },
    {
        func      = "fromString",
        binding   = {
            { "QDateTime", { "QString" } },
            { "QDateTime", { "QString", "Qt::DateFormat" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addDays",
        binding   = {
            { "QDateTime", { "qint64" } },
        }
    },
    {
        method    = "addMSecs",
        binding   = {
            { "QDateTime", { "qint64" } },
        }
    },
    {
        method    = "addMonths",
        binding   = {
            { "QDateTime", { "int" } },
        }
    },
    {
        method    = "addSecs",
        binding   = {
            { "QDateTime", { "qint64" } },
        }
    },
    {
        method    = "addYears",
        binding   = {
            { "QDateTime", { "int" } },
        }
    },
    {
        method    = "date",
        binding   = {
            { "QDate", {} },
        }
    },
    {
        method    = "daysTo",
        binding   = {
            { "qint64", { "QDateTime" } },
        }
    },
    {
        method    = "isDaylightTime",
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
        method    = "msecsTo",
        binding   = {
            { "qint64", { "QDateTime" } },
        }
    },
    {
        method    = "offsetFromUtc",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "secsTo",
        binding   = {
            { "qint64", { "QDateTime" } },
        }
    },
    {
        method    = "setDate",
        binding   = {
            { "void", { "QDate" } },
        }
    },
    {
        method    = "setMSecsSinceEpoch",
        binding   = {
            { "void", { "qint64" } },
        }
    },
    {
        method    = "setSecsSinceEpoch",
        binding   = {
            { "void", { "qint64" } },
        }
    },
    {
        method    = "setTime",
        binding   = {
            { "void", { "QTime" } },
        }
    },
    {
        method    = "setTimeZone",
        binding   = {
            { "void", { "QTimeZone::Initialization" } },
            { "void", { "QTimeZone" } },
        }
    },
    {
        method    = "time",
        binding   = {
            { "QTime", {} },
        }
    },
    {
        method    = "timeRepresentation",
        binding   = {
            { "QTimeZone", {} },
        }
    },
    {
        method    = "timeZone",
        binding   = {
            { "QTimeZone", {} },
        }
    },
    {
        method    = "timeZoneAbbreviation",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "toMSecsSinceEpoch",
        binding   = {
            { "qint64", {} },
        }
    },
    {
        method    = "toOffsetFromUtc",
        binding   = {
            { "QDateTime", { "int" } },
        }
    },
    {
        method    = "toSecsSinceEpoch",
        binding   = {
            { "qint64", {} },
        }
    },
    {
        method    = "toString",
        binding   = {
            { "QString", {} },
            { "QString", { "Qt::DateFormat" } },
            { "QString", { "QString" } },
        }
    },
    {
        method    = "toUTC",
        binding   = {
            { "QDateTime", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

