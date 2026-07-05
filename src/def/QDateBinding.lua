class = "QDate"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QDate*", {} },
            { "QDate*", { "QDate" } },
            { "QDate*", { "int", "int", "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "currentDate",
        binding   = {
            { "QDate", {} },
        }
    },
    {
        func      = "fromJulianDay",
        binding   = {
            { "QDate", { "qint64" } },
        }
    },
    {
        func      = "fromString",
        binding   = {
            { "QDate", { "QString" } },
            { "QDate", { "QString", "Qt::DateFormat" } },
        }
    },
    {
        func      = "isLeapYear",
        binding   = {
            { "bool", { "int" } },
        }
    },
    {
        func      = "isValid",
        binding   = {
            { "bool", {}, "isMethod" },
            { "bool", { "int", "int", "int" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addDays",
        binding   = {
            { "QDate", { "qint64" } },
        }
    },
    {
        method    = "addMonths",
        binding   = {
            { "QDate", { "int" } },
        }
    },
    {
        method    = "addYears",
        binding   = {
            { "QDate", { "int" } },
        }
    },
    {
        method    = "day",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "dayOfWeek",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "dayOfYear",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "daysInMonth",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "daysInYear",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "daysTo",
        binding   = {
            { "qint64", { "QDate" } },
        }
    },
    {
        method    = "endOfDay",
        binding   = {
            { "QDateTime", {} },
        }
    },
    {
        method    = "isNull",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "month",
        binding   = {
            { "int", {} },
        }
    },
    {
        method    = "setDate",
        binding   = {
            { "bool", { "int", "int", "int" } },
        }
    },
    {
        method    = "startOfDay",
        binding   = {
            { "QDateTime", {} },
        }
    },
    {
        method    = "toJulianDay",
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
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

