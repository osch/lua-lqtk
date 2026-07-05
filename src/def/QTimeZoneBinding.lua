class = "QTimeZone"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "Initialization",
        values = {
            { "LocalTime", cmt = "This time representation corresponds to the one implicitly used by system functions using time_t and struct tm value to map between local time and UTC time." },
            { "UTC",       cmt = "This time representation, Coordinated Universal Time, is the base representation to which civil time is referred in all supported time representations. It is defined by the International Telecommunication Union." },
        }
    },
    {
        enum   = "NameType",
        values = {
            { "DefaultName", cmt = "The default form of the time zone name, one of LongName, ShortName or OffsetName" },
            { "LongName",    cmt = "The long form of the time zone name, e.g. \"Central European Time\"" },
            { "ShortName",   cmt = "The short form of the time zone name, usually an abbreviation, e.g. \"CET\", in locales that have one for the zone, otherwise a compact GMT-offset form, e.g. \"GMT+1\"" },
            { "OffsetName",  cmt = "The standard ISO offset form of the time zone name, e.g. \"UTC+01:00\"" },
        }
    },
    {
        enum   = "TimeType",
        values = {
            { "StandardTime", cmt = "The standard time in a time zone, i.e. when Daylight-Saving is not in effect. For example when formatting a display name this will show something like \"Pacific Standard Time\"." },
            { "DaylightTime", cmt = "A time when Daylight-Saving is in effect. For example when formatting a display name this will show something like \"Pacific daylight-saving time\"." },
            { "GenericTime",  cmt = "A time which is not specifically Standard or Daylight-Saving time, either an unknown time or a neutral form. For example when formatting a display name this will show something like \"Pacific Time\"." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QTimeZone*", {} },
            { "QTimeZone*", { "QTimeZone::Initialization" } },
            { "QTimeZone*", { "QByteArray" } },
            { "QTimeZone*", { "int" } },
            { "QTimeZone*", { "QTimeZone" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "availableTimeZoneIds",
        binding   = {
            { "QList<QByteArray>", {} },
        }
    },
    {
        func      = "fromSecondsAheadOfUtc",
        binding   = {
            { "QTimeZone", { "int" } },
        }
    },
    {
        func      = "ianaIdToWindowsId",
        binding   = {
            { "QByteArray", { "QByteArray" } },
        }
    },
    {
        func      = "isTimeZoneIdAvailable",
        binding   = {
            { "bool", { "QByteArray" } },
        }
    },
    {
        func      = "systemTimeZone",
        binding   = {
            { "QTimeZone", {} },
        }
    },
    {
        func      = "systemTimeZoneId",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        func      = "utc",
        binding   = {
            { "QTimeZone", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "abbreviation",
        binding   = {
            { "QString", { "QDateTime" } },
        }
    },
    {
        method    = "asBackendZone",
        binding   = {
            { "QTimeZone", {} },
        }
    },
    {
        method    = "comment",
        binding   = {
            { "QString", {} },
        }
    },
    {
        method    = "daylightTimeOffset",
        binding   = {
            { "int", { "QDateTime" } },
        }
    },
    {
        method    = "displayName",
        binding   = {
            { "QString", { "QTimeZone::TimeType" } },
            { "QString", { "QTimeZone::TimeType", "QTimeZone::NameType" } },
            { "QString", { "QDateTime" } },
            { "QString", { "QDateTime", "QTimeZone::NameType" } },
        }
    },
    {
        method    = "fixedSecondsAheadOfUtc",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "hasAlternativeName",
        binding   = {
            { "bool", { "QByteArray" } },
        }
    },
    {
        method    = "hasDaylightTime",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "hasTransitions",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "id",
        binding   = {
            { "QByteArray", {} },
        }
    },
    {
        method    = "isDaylightTime",
        binding   = {
            { "bool", { "QDateTime" } },
        }
    },
    {
        method    = "isUtcOrFixedOffset",
        binding   = {
            { "bool", {} },
            { "bool", { "Qt::TimeSpec" } },
        }
    },
    {
        method    = "isValid",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "offsetFromUtc",
        binding   = {
            { "int", { "QDateTime" } },
        }
    },
    {
        method    = "standardTimeOffset",
        binding   = {
            { "int", { "QDateTime" } },
        }
    },
    {
        method    = "timeSpec",
        binding   = {
            { "Qt::TimeSpec", {} },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

