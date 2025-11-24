// Type: QStandardItem
// Base: nil

/* ============================================================================================ */

#include <QObject>
#include <QStandardItem>
#include <QStandardItemModel>
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
#include "ObjectGuard.hpp"
#include "QObjectBinding.hpp"
#include "QStandardItemBinding.hpp"
#include "QStandardItemModelBinding.hpp"
#include "QStringBinding.hpp"
#include "QStandardItemWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QStandardItemWrapper::QStandardItemWrapper()
        : QStandardItem()
    {}
    QStandardItemWrapper::QStandardItemWrapper(
                   QString arg1) 
        : QStandardItem(
                   arg1)
    {}

/* -------------------------------------------------------------------------------------------- */

    QStandardItemWrapper::~QStandardItemWrapper() {
        trace::printf("Deleting lqtk::QStandardItemWrapper: %p\n", this);
    }

} // namespace lqtk

/* ============================================================================================ */


struct lqtk_QStandardItem_appendRow_Args
{
    FromLua<QStandardItem*> arg_1_1;
    FromLua<QList<QStandardItem*>> arg_2_1;
};

static int lqtk_QStandardItem_appendRow_doLua(lua_State* L)
{
    lqtk_QStandardItem_appendRow_Args* args = (lqtk_QStandardItem_appendRow_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QStandardItem::appendRow(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItem", "appendRow", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QStandardItem_appendRow(lua_State* L)
{
    try {
        lqtk_QStandardItem_appendRow_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QStandardItem_appendRow_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QStandardItem_child_Args
{
    FromLua<QStandardItem*> arg_1_1;
    FromLua<int> arg_2_1;
    FromLua<int> arg_2_2;
    ToLua<QStandardItem*> rslt_1;
};

extern "C" int lqtk_QStandardItem_child(lua_State* L)
{
    lqtk_QStandardItem_child_Args  argValues;
    lqtk_QStandardItem_child_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 3) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            args->arg_2_2.check(L, argOffs+3);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QStandardItem::child(args->arg_2_1.getValue(), args->arg_2_2.getValue());
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItem", "child", nargs, "3");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QStandardItem_model_Args
{
    FromLua<QStandardItem*> arg_1_1;
    ToLua<QStandardItemModel*> rslt_1;
};

extern "C" int lqtk_QStandardItem_model(lua_State* L)
{
    lqtk_QStandardItem_model_Args  argValues;
    lqtk_QStandardItem_model_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QStandardItem::model();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItem", "model", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QStandardItem_parent_Args
{
    FromLua<QStandardItem*> arg_1_1;
    ToLua<QStandardItem*> rslt_1;
};

extern "C" int lqtk_QStandardItem_parent(lua_State* L)
{
    lqtk_QStandardItem_parent_Args  argValues;
    lqtk_QStandardItem_parent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QStandardItem::parent();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItem", "parent", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QStandardItem_text_Args
{
    FromLua<QStandardItem*> arg_1_1;
    ToLua<QString> rslt_1;
};

static int lqtk_QStandardItem_text_doLua(lua_State* L)
{
    lqtk_QStandardItem_text_Args* args = (lqtk_QStandardItem_text_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QStandardItem::text();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QStandardItem", "text", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QStandardItem_text(lua_State* L)
{
    try {
        lqtk_QStandardItem_text_Args args;
        return BindingUtil::callMethodFromLua(L, lqtk_QStandardItem_text_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QStandardItemBinding::QType* ptr = static_cast<QStandardItemBinding::QType*>(objectPtr);
        if (targetClassInfo == &QStandardItemBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QStandardItem* ptr = (QStandardItem*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool hasParentFunction(void* objectPtr)
{
    return QStandardItemBinding::hasOwner((QStandardItem*)objectPtr);
}

/* ============================================================================================ */


struct lqtk_QStandardItem_new_Args
{
    explicit lqtk_QStandardItem_new_Args(bool explicitNew)
        : explicitNew(explicitNew)
    {}
    bool explicitNew;
    FromLua<QString> arg_1_1;
    ToLua<QStandardItem*> rslt_1;
};

static int lqtk_QStandardItem_new_doLua(lua_State* L)
{
    lqtk_QStandardItem_new_Args* args = (lqtk_QStandardItem_new_Args*) lua_touserdata(L, 1);
    lua_remove(L, 1);
    bool explicitNew = args->explicitNew;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QStandardItemBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QStandardItem> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QStandardItemWrapper* rslt = 
                    new QStandardItemWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QStandardItem*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QStandardItemWrapper* rslt = 
                    new QStandardItemWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QStandardItem*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QStandardItem", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QStandardItem", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

extern "C" int lqtk_QStandardItem_constructor(lua_State* L, bool explicitNew)
{
    try {
        lqtk_QStandardItem_new_Args args(explicitNew);
        return BindingUtil::callMethodFromLua(L, lqtk_QStandardItem_new_doLua, &args);
    }    
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QStandardItem_new(lua_State* L)
{
    return lqtk_QStandardItem_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QStandardItemBinding::pushObject(lua_State* L, QStandardItem* objPtr, OwnerType ownerType)
{
    QStandardItemWrapper* wrapper = dynamic_cast<QStandardItemWrapper*>(objPtr);
    if (!wrapper) {
        luaL_error(L, "object of type '%s' cannot be bound to lua", classInfo.className);
        return NULL;
    }
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
        udata = ObjectUdata::pushNew<QStandardItem>(L, hasUserValue);     // -> uval?, udata
        udata->setObjectGuard(L, -1, wrapper->lqtk_getObjectGuard(),
                                     ownerType);
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
    { "appendRow", Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItem_appendRow },
    { "child",     Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItem_child },
    { "model",     Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItem_model },
    { "parent",    Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItem_parent },
    { "text",      Member::NORMAL_FUNCTION,      (void*) lqtk_QStandardItem_text },
    { NULL,        Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QStandardItemBinding::classInfo = 
{
    "QStandardItem",

    NULL,

    false, // isQObject
    true,  // needsGuard
    lqtk_QStandardItem_constructor,
    lqtk_QStandardItem_new,
    castFunction,
    deleteFunction,
    hasParentFunction,
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    5,
    members
};

/* ============================================================================================ */

int QStandardItemBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
