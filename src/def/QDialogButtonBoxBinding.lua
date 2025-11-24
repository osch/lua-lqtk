class = "QDialogButtonBox"

baseClass = "QWidget"

elements = {
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        enum   = "ButtonRole",
        values = {
            { "InvalidRole",     cmt = "The button is invalid." },
            { "AcceptRole",      cmt = "Clicking the button causes the dialog to be accepted (e.g. OK)." },
            { "RejectRole",      cmt = "Clicking the button causes the dialog to be rejected (e.g. Cancel)." },
            { "DestructiveRole", cmt = "Clicking the button causes a destructive change (e.g. for Discarding Changes) and closes the dialog." },
            { "ActionRole",      cmt = "Clicking the button causes changes to the elements within the dialog." },
            { "HelpRole",        cmt = "The button can be clicked to request help." },
            { "YesRole",         cmt = "The button is a \"Yes\"-like button." },
            { "NoRole",          cmt = "The button is a \"No\"-like button." },
            { "ApplyRole",       cmt = "The button applies current changes." },
            { "ResetRole",       cmt = "The button resets the dialog's fields to default values.        " },
        }
    },
    {
        enum   = "StandardButton",
        values = {
            { "Ok",              cmt = "An \"OK\" button defined with the AcceptRole." },
            { "Open",            cmt = "An \"Open\" button defined with the AcceptRole." },
            { "Save",            cmt = "A \"Save\" button defined with the AcceptRole." },
            { "Cancel",          cmt = "A \"Cancel\" button defined with the RejectRole." },
            { "Close",           cmt = "A \"Close\" button defined with the RejectRole." },
            { "Discard",         cmt = "A \"Discard\" or \"Don't Save\" button, depending on the platform, defined with the DestructiveRole." },
            { "Apply",           cmt = "An \"Apply\" button defined with the ApplyRole." },
            { "Reset",           cmt = "A \"Reset\" button defined with the ResetRole." },
            { "RestoreDefaults", cmt = "A \"Restore Defaults\" button defined with the ResetRole." },
            { "Help",            cmt = "A \"Help\" button defined with the HelpRole." },
            { "SaveAll",         cmt = "A \"Save All\" button defined with the AcceptRole." },
            { "Yes",             cmt = "A \"Yes\" button defined with the YesRole." },
            { "YesToAll",        cmt = "A \"Yes to All\" button defined with the YesRole." },
            { "No",              cmt = "A \"No\" button defined with the NoRole." },
            { "NoToAll",         cmt = "A \"No to All\" button defined with the NoRole." },
            { "Abort",           cmt = "An \"Abort\" button defined with the RejectRole." },
            { "Retry",           cmt = "A \"Retry\" button defined with the AcceptRole." },
            { "Ignore",          cmt = "An \"Ignore\" button defined with the AcceptRole." },
            { "NoButton",        cmt = "An invalid button." },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        func      = "new",
        binding   = {
            { "QDialogButtonBox@", {} },
            { "QDialogButtonBox@", { "QWidget*" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
    {
        method    = "addButton",
        binding   = {
            { "void", { "QAbstractButton@", "QDialogButtonBox::ButtonRole" } },
            { "QPushButton*", { "QDialogButtonBox::StandardButton" } },
            { "QPushButton*", { "QString", "QDialogButtonBox::ButtonRole" } },
        }
    },
    {
        method    = "buttons",
        binding   = {
            { "QList<QAbstractButton*>", {} },
        }
    },
    {
        method    = "centerButtons",
        binding   = {
            { "bool", {} },
        }
    },
    {
        method    = "setCenterButtons",
        binding   = {
            { "void", { "bool" } },
        }
    },
    --------------------------------------------------------------------------------------------------------------------------------------------------
}

