class = "QIODeviceBase"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        flag   = "OpenMode",
        values = {
            { "NotOpen",      cmt = "The device is not open." },
            { "ReadOnly",     cmt = "The device is open for reading." },
            { "WriteOnly",    cmt = "The device is open for writing. Note that, for file-system subclasses (e.g. QFile), this mode implies Truncate unless combined with ReadOnly, Append or NewOnly." },
            { "ReadWrite",    cmt = "| WriteOnly The device is open for reading and writing." },
            { "Append",       cmt = "The device is opened in append mode so that all data is written to the end of the file." },
            { "Truncate",     cmt = "If possible, the device is truncated before it is opened. All earlier contents of the device are lost." },
            { "Text",         cmt = "When reading, the end-of-line terminators are translated to '\\n'. When writing, the end-of-line terminators are translated to the local encoding, for example '\\r\\n' for Win32." },
            { "Unbuffered",   cmt = "Any buffer in the device is bypassed." },
            { "NewOnly",      cmt = "Fail if the file to be opened already exists. Create and open the file only if it does not exist. There is a guarantee from the operating system that you are the only one creating and opening the file. Note that this mode implies WriteOnly, and combining it with ReadWrite is allowed. This flag currently only affects QFile. Other classes might use this flag in the future, but until then using this flag with any classes other than QFile may result in undefined behavior. (since Qt 5.11)" },
            { "ExistingOnly", cmt = "Fail if the file to be opened does not exist. This flag must be specified alongside ReadOnly, WriteOnly, or ReadWrite. Note that using this flag with ReadOnly alone is redundant, as ReadOnly already fails when the file does not exist. This flag currently only affects QFile. Other classes might use this flag in the future, but until then using this flag with any classes other than QFile may result in undefined behavior. (since Qt 5.11)" },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

