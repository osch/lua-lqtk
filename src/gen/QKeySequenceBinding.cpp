// Type: QKeySequence
// Base: nil

/* ============================================================================================ */

#include <QKeySequence>
#include <QObject>
#include <QString>

#include <QPointer>
#include <stdexcept>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"
#include "ClassInfo.hpp"
#include "BindingUtil.hpp"
#include "ObjectUdata.hpp"
#include "ClassUdata.hpp"
#include "trace.hpp"
#include "FromLua.hpp"
#include "ToLua.hpp"
#include "registry.hpp"
#include "StateGuard.hpp"
#include "QKeySequenceBinding.hpp"
#include "QObjectBinding.hpp"
#include "QStringBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QKeySequenceBinding::QType* ptr = static_cast<QKeySequenceBinding::QType*>(objectPtr);
        if (targetClassInfo == &QKeySequenceBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QKeySequence* ptr = (QKeySequence*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */


struct lqtk_QKeySequence_new_Args
{
    explicit lqtk_QKeySequence_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QKeySequence::StandardKey> arg_1_1;
    FromLua<QString> arg_2_1;
    FromLua<QKeySequence::SequenceFormat> arg_3_1;
    ToLua<QKeySequence*> rslt_1;
};

static int lqtk_QKeySequence_new_doLua(lua_State* L)
{
    lqtk_QKeySequence_new_Args* args = (lqtk_QKeySequence_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QKeySequenceBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QKeySequence> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 1) { do {
            if (!args->arg_1_1.test(L, argOffs+1)) break;
            {
                QKeySequence* rslt = 
                    new QKeySequence(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            if (!args->arg_2_1.test(L, argOffs+1)) break;
            {
                QKeySequence* rslt = 
                    new QKeySequence(args->arg_2_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (nargs == 1) {
            args->arg_1_1.check(L, argOffs+1);
            assert(false);
        }
        if (nargs == 2) { do {
            args->arg_2_1.check(L, argOffs+1);
            args->arg_3_1.check(L, argOffs+2);
            {
                QKeySequence* rslt = 
                    new QKeySequence(args->arg_2_1.getValue(), args->arg_3_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setRawPtr(L, -1, rslt, IS_OWNER);               // -> udata
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QKeySequence", "new", nargs, "2,3");
        } else {
            return util::argCountError(L, "QKeySequence", nullptr, nargs, "1,2");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QKeySequence_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QKeySequence_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QKeySequence_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QKeySequence_new(lua_State* L)
{
    return lqtk_QKeySequence_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QKeySequenceBinding::pushObject(lua_State* L, QKeySequence* objPtr, OwnerType ownerType)
{
    StateGuard::pushWeakUdataRef(L, objPtr);                             // -> udata?
    ObjectUdata* udata = ObjectUdata::testArg(L, -1);  
                                                                         // -> udata?
    if (!udata || udata->classInfo != &classInfo  
               || udata->getObjectPtr() != objPtr)
    {                                                                    // -> xxx
        lua_pop(L, 1);                                                   // -> 
        bool hasUserValue = false;
        if (StateGuard::pushWeakUserValue(L, objPtr) == LUA_TTABLE) {    // -> uval?
            hasUserValue = true;
        }
        udata = ObjectUdata::pushNew<QKeySequence>(L, hasUserValue);     // -> uval?, udata
        udata->setRawPtr(L, -1, objPtr, ownerType);                      // -> uval?, udata
        if (hasUserValue) {
            udata->setUserValue(L, -1, -2);                              // -> uval,  udata, 
        }                                                                // -> uval?, udata
        lua_remove(L, -2);                                               // -> udata
    }                                                                    // -> udata
    return udata;
}

/* ============================================================================================ */

static const Member members[] =
{
    { "AddTab",                   Member::INTEGER,              (void*) QKeySequence::AddTab },
    { "Back",                     Member::INTEGER,              (void*) QKeySequence::Back },
    { "Backspace",                Member::INTEGER,              (void*) QKeySequence::Backspace },
    { "Bold",                     Member::INTEGER,              (void*) QKeySequence::Bold },
    { "Cancel",                   Member::INTEGER,              (void*) QKeySequence::Cancel },
    { "Close",                    Member::INTEGER,              (void*) QKeySequence::Close },
    { "Copy",                     Member::INTEGER,              (void*) QKeySequence::Copy },
    { "Cut",                      Member::INTEGER,              (void*) QKeySequence::Cut },
    { "Delete",                   Member::INTEGER,              (void*) QKeySequence::Delete },
    { "DeleteCompleteLine",       Member::INTEGER,              (void*) QKeySequence::DeleteCompleteLine },
    { "DeleteEndOfLine",          Member::INTEGER,              (void*) QKeySequence::DeleteEndOfLine },
    { "DeleteEndOfWord",          Member::INTEGER,              (void*) QKeySequence::DeleteEndOfWord },
    { "DeleteStartOfWord",        Member::INTEGER,              (void*) QKeySequence::DeleteStartOfWord },
    { "Deselect",                 Member::INTEGER,              (void*) QKeySequence::Deselect },
    { "Find",                     Member::INTEGER,              (void*) QKeySequence::Find },
    { "FindNext",                 Member::INTEGER,              (void*) QKeySequence::FindNext },
    { "FindPrevious",             Member::INTEGER,              (void*) QKeySequence::FindPrevious },
    { "Forward",                  Member::INTEGER,              (void*) QKeySequence::Forward },
    { "FullScreen",               Member::INTEGER,              (void*) QKeySequence::FullScreen },
    { "HelpContents",             Member::INTEGER,              (void*) QKeySequence::HelpContents },
    { "InsertLineSeparator",      Member::INTEGER,              (void*) QKeySequence::InsertLineSeparator },
    { "InsertParagraphSeparator", Member::INTEGER,              (void*) QKeySequence::InsertParagraphSeparator },
    { "Italic",                   Member::INTEGER,              (void*) QKeySequence::Italic },
    { "MoveToEndOfBlock",         Member::INTEGER,              (void*) QKeySequence::MoveToEndOfBlock },
    { "MoveToEndOfDocument",      Member::INTEGER,              (void*) QKeySequence::MoveToEndOfDocument },
    { "MoveToEndOfLine",          Member::INTEGER,              (void*) QKeySequence::MoveToEndOfLine },
    { "MoveToNextChar",           Member::INTEGER,              (void*) QKeySequence::MoveToNextChar },
    { "MoveToNextLine",           Member::INTEGER,              (void*) QKeySequence::MoveToNextLine },
    { "MoveToNextPage",           Member::INTEGER,              (void*) QKeySequence::MoveToNextPage },
    { "MoveToNextWord",           Member::INTEGER,              (void*) QKeySequence::MoveToNextWord },
    { "MoveToPreviousChar",       Member::INTEGER,              (void*) QKeySequence::MoveToPreviousChar },
    { "MoveToPreviousLine",       Member::INTEGER,              (void*) QKeySequence::MoveToPreviousLine },
    { "MoveToPreviousPage",       Member::INTEGER,              (void*) QKeySequence::MoveToPreviousPage },
    { "MoveToPreviousWord",       Member::INTEGER,              (void*) QKeySequence::MoveToPreviousWord },
    { "MoveToStartOfBlock",       Member::INTEGER,              (void*) QKeySequence::MoveToStartOfBlock },
    { "MoveToStartOfDocument",    Member::INTEGER,              (void*) QKeySequence::MoveToStartOfDocument },
    { "MoveToStartOfLine",        Member::INTEGER,              (void*) QKeySequence::MoveToStartOfLine },
    { "NativeText",               Member::INTEGER,              (void*) QKeySequence::NativeText },
    { "New",                      Member::INTEGER,              (void*) QKeySequence::New },
    { "NextChild",                Member::INTEGER,              (void*) QKeySequence::NextChild },
    { "Open",                     Member::INTEGER,              (void*) QKeySequence::Open },
    { "Paste",                    Member::INTEGER,              (void*) QKeySequence::Paste },
    { "PortableText",             Member::INTEGER,              (void*) QKeySequence::PortableText },
    { "Preferences",              Member::INTEGER,              (void*) QKeySequence::Preferences },
    { "PreviousChild",            Member::INTEGER,              (void*) QKeySequence::PreviousChild },
    { "Print",                    Member::INTEGER,              (void*) QKeySequence::Print },
    { "Quit",                     Member::INTEGER,              (void*) QKeySequence::Quit },
    { "Redo",                     Member::INTEGER,              (void*) QKeySequence::Redo },
    { "Refresh",                  Member::INTEGER,              (void*) QKeySequence::Refresh },
    { "Replace",                  Member::INTEGER,              (void*) QKeySequence::Replace },
    { "Save",                     Member::INTEGER,              (void*) QKeySequence::Save },
    { "SaveAs",                   Member::INTEGER,              (void*) QKeySequence::SaveAs },
    { "SelectAll",                Member::INTEGER,              (void*) QKeySequence::SelectAll },
    { "SelectEndOfBlock",         Member::INTEGER,              (void*) QKeySequence::SelectEndOfBlock },
    { "SelectEndOfDocument",      Member::INTEGER,              (void*) QKeySequence::SelectEndOfDocument },
    { "SelectEndOfLine",          Member::INTEGER,              (void*) QKeySequence::SelectEndOfLine },
    { "SelectNextChar",           Member::INTEGER,              (void*) QKeySequence::SelectNextChar },
    { "SelectNextLine",           Member::INTEGER,              (void*) QKeySequence::SelectNextLine },
    { "SelectNextPage",           Member::INTEGER,              (void*) QKeySequence::SelectNextPage },
    { "SelectNextWord",           Member::INTEGER,              (void*) QKeySequence::SelectNextWord },
    { "SelectPreviousChar",       Member::INTEGER,              (void*) QKeySequence::SelectPreviousChar },
    { "SelectPreviousLine",       Member::INTEGER,              (void*) QKeySequence::SelectPreviousLine },
    { "SelectPreviousPage",       Member::INTEGER,              (void*) QKeySequence::SelectPreviousPage },
    { "SelectPreviousWord",       Member::INTEGER,              (void*) QKeySequence::SelectPreviousWord },
    { "SelectStartOfBlock",       Member::INTEGER,              (void*) QKeySequence::SelectStartOfBlock },
    { "SelectStartOfDocument",    Member::INTEGER,              (void*) QKeySequence::SelectStartOfDocument },
    { "SelectStartOfLine",        Member::INTEGER,              (void*) QKeySequence::SelectStartOfLine },
    { "Underline",                Member::INTEGER,              (void*) QKeySequence::Underline },
    { "Undo",                     Member::INTEGER,              (void*) QKeySequence::Undo },
    { "UnknownKey",               Member::INTEGER,              (void*) QKeySequence::UnknownKey },
    { "WhatsThis",                Member::INTEGER,              (void*) QKeySequence::WhatsThis },
    { "ZoomIn",                   Member::INTEGER,              (void*) QKeySequence::ZoomIn },
    { "ZoomOut",                  Member::INTEGER,              (void*) QKeySequence::ZoomOut },
    { NULL,                       Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QKeySequenceBinding::classInfo = 
{
    "QKeySequence",

    NULL,

    false, // isQObject
    false, // needsGuard
    lqtk_QKeySequence_constructor,
    lqtk_QKeySequence_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    73,
    members
};

/* ============================================================================================ */

int QKeySequenceBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
