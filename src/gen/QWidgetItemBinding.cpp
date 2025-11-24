// Type: QWidgetItem
// Base: QLayoutItem

/* ============================================================================================ */

#include <QLayoutItem>
#include <QObject>
#include <QWidget>
#include <QWidgetItem>

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
#include "QLayoutItemBinding.hpp"
#include "QObjectBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QWidgetItemBinding.hpp"
#include "QWidgetItemWrapperBase.hpp"
#include "QWidgetItemWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QWidgetItemWrapper::QWidgetItemWrapper(
                   QWidget* arg1) 
        : QWidgetItemWrapperBase(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QWidgetItemWrapper::lqtk_destruct(lua_State* L) {
        QWidgetItem* objPtr = (QWidgetItem*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QWidgetItemWrapper::~QWidgetItemWrapper() {
        trace::printf("Deleting lqtk::QWidgetItemWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QWidgetItem* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QWidgetItem");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetItemWrapper::hasHeightForWidth1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        hasHeightForWidth1CallArgs* args = (hasHeightForWidth1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "hasHeightForWidth") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }

    bool QWidgetItemWrapper::hasHeightForWidth() const
    {
        lqtk_checkValidity();
        lua_State* L = getL();
        if (L) {
            hasHeightForWidth1CallArgs args(
                    const_cast<QWidgetItemWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, hasHeightForWidth1_doLua, &args, "QWidgetItem", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWidgetItem", "hasHeightForWidth", msg);
                }
            }
        }
        return QWidgetItemWrapperBase::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetItemWrapper::heightForWidth1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        heightForWidth1CallArgs* args = (heightForWidth1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "heightForWidth") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }

    int QWidgetItemWrapper::heightForWidth(
                   int arg2) const 
    {
        lqtk_checkValidity();
        lua_State* L = getL();
        if (L) {
            heightForWidth1CallArgs args(
                    const_cast<QWidgetItemWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, heightForWidth1_doLua, &args, "QWidgetItem", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWidgetItem", "heightForWidth", msg);
                }
            }
        }
        return QWidgetItemWrapperBase::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QWidgetItemWrapper::widget1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        widget1CallArgs* args = (widget1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "widget") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                } else {
                    args->hasValidResult = args->rslt.test(L, -1);
            }
        }
        return 0;
    }

    QWidget* QWidgetItemWrapper::widget() const
    {
        lqtk_checkValidity();
        lua_State* L = getL();
        if (L) {
            widget1CallArgs args(
                    const_cast<QWidgetItemWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, widget1_doLua, &args, "QWidgetItem", "widget");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QWidget*'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QWidgetItem", "widget", msg);
                }
            }
        }
        return QWidgetItemWrapperBase::widget();
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
}

/* ============================================================================================ */


struct lqtk_QWidgetItem_hasHeightForWidth_Args
{
    FromLua<QWidgetItem*> arg_1_1;
    ToLua<bool> rslt_1;
};

extern "C" int lqtk_QWidgetItem_hasHeightForWidth(lua_State* L)
{
    lqtk_QWidgetItem_hasHeightForWidth_Args  argValues;
    lqtk_QWidgetItem_hasHeightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidgetItem::hasHeightForWidth();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidgetItem", "hasHeightForWidth", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidgetItem_heightForWidth_Args
{
    FromLua<QWidgetItem*> arg_1_1;
    FromLua<int> arg_2_1;
    ToLua<int> rslt_1;
};

extern "C" int lqtk_QWidgetItem_heightForWidth(lua_State* L)
{
    lqtk_QWidgetItem_heightForWidth_Args  argValues;
    lqtk_QWidgetItem_heightForWidth_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QWidgetItem::heightForWidth(args->arg_2_1.getValue());
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidgetItem", "heightForWidth", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QWidgetItem_widget_Args
{
    FromLua<QWidgetItem*> arg_1_1;
    ToLua<QWidget*> rslt_1;
};

extern "C" int lqtk_QWidgetItem_widget(lua_State* L)
{
    lqtk_QWidgetItem_widget_Args  argValues;
    lqtk_QWidgetItem_widget_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QWidgetItem::widget();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QWidgetItem", "widget", nargs, "1");
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
        QWidgetItemBinding::QType* ptr = static_cast<QWidgetItemBinding::QType*>(objectPtr);
        if (targetClassInfo == &QWidgetItemBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QLayoutItemBinding::classInfo) {
            return static_cast<QLayoutItemBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QWidgetItem* ptr = (QWidgetItem*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static const char* validityErrorFunction(void* objectPtr)
{
    if (objectPtr) {
        QWidgetItem* obj = (QWidgetItem*) objectPtr;
        QWidgetItemWrapper* wrapper = dynamic_cast<QWidgetItemWrapper*>(obj);
        if (wrapper) {
            return wrapper->lqtk_validityError();
        }
    }
    return nullptr;
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QWidgetItem* obj = (QWidgetItem*) objectPtr;
        
        QWidgetItemWrapper* wrapper = dynamic_cast<QWidgetItemWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QWidgetItem_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QWidgetItem*> rslt_1;
};

extern "C" int lqtk_QWidgetItem_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QWidgetItem_new_Args  argValues;
    lqtk_QWidgetItem_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QWidgetItemBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QWidgetItem> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QWidgetItemWrapper* rslt = 
                    new QWidgetItemWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setObjectGuard(L, -1, rslt->lqtk_initObjectGuard((QWidgetItem*)rslt),
                                             IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QWidgetItem", "new", nargs, "2");
        } else {
            return util::argCountError(L, "QWidgetItem", nullptr, nargs, "1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QWidgetItem_new(lua_State* L)
{
    return lqtk_QWidgetItem_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QWidgetItemBinding::pushObject(lua_State* L, QWidgetItem* objPtr, OwnerType ownerType)
{
    QWidgetItemWrapper* wrapper = dynamic_cast<QWidgetItemWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QWidgetItem>(L, hasUserValue);     // -> uval?, udata
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
    { "hasHeightForWidth", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidgetItem_hasHeightForWidth },
    { "heightForWidth",    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidgetItem_heightForWidth },
    { "widget",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidgetItem_widget },
    { NULL,                Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QWidgetItemBinding::classInfo = 
{
    "QWidgetItem",

    &QLayoutItemBinding::classInfo,

    false, // isQObject
    true,  // needsGuard
    lqtk_QWidgetItem_constructor,
    lqtk_QWidgetItem_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    validityErrorFunction,
    setUserValueFunction,
    3,
    members
};

/* ============================================================================================ */

int QWidgetItemBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
