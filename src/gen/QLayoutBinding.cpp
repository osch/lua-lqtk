// Type: QLayout
// Base: QObject

/* ============================================================================================ */

#include <QBoxLayout>
#include <QEvent>
#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QWidget>

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
#include "QBoxLayoutBinding.hpp"
#include "QEventBinding.hpp"
#include "QGridLayoutBinding.hpp"
#include "QLayoutBinding.hpp"
#include "QLayoutItemBinding.hpp"
#include "QObjectBinding.hpp"
#include "QRectBinding.hpp"
#include "QSizeBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QLayoutWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QLayoutWrapper::QLayoutWrapper()
        : QLayout(),
          lqtk_stateGuard(nullptr)
    {}
    QLayoutWrapper::QLayoutWrapper(
                   QWidget* arg1) 
        : QLayout(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QLayoutWrapper::lqtk_destruct(lua_State* L) {
        QLayout* objPtr = (QLayout*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QLayoutWrapper::~QLayoutWrapper() {
        trace::printf("Deleting lqtk::QLayoutWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QLayout* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QLayout");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QLayoutWrapper::addItem1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        addItem1CallArgs* args = (addItem1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "addItem") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QLayoutWrapper::addItem(
                   QLayoutItem* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            addItem1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, addItem1_doLua, &args, "QLayout", "addItem");
            }
            if (args.wasCalled) {
                return;
            }
        }
        throw std::runtime_error("method 'QLayout:addItem' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QLayoutWrapper::count1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        count1CallArgs* args = (count1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "count") != LUA_TNIL) {        // -> uval, eh, member?
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

    int QLayoutWrapper::count() const
    {
        lua_State* L = getL();
        if (L) {
            count1CallArgs args(
                    const_cast<QLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, count1_doLua, &args, "QLayout", "count");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QLayout", "count", msg);
                }
            }
        }
        throw std::runtime_error("method 'QLayout:count' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QLayoutWrapper::geometry1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        geometry1CallArgs* args = (geometry1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "geometry") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                if (args->rsltPtr.test(L, -1)) {
                    args->rslt = *args->rsltPtr;
                    args->hasValidResult = true;
                } else {
                    args->hasValidResult = false;
                }
            }
        }
        return 0;
    }

    QRect QLayoutWrapper::geometry() const
    {
        lua_State* L = getL();
        if (L) {
            geometry1CallArgs args(
                    const_cast<QLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, geometry1_doLua, &args, "QLayout", "geometry");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QRect'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QLayout", "geometry", msg);
                }
            }
        }
        return QLayout::geometry();
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QLayoutWrapper::itemAt1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        itemAt1CallArgs* args = (itemAt1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "itemAt") != LUA_TNIL) {        // -> uval, eh, member?
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
                if (lua_isnil(L, -1)) {
                    args->hasValidResult = true;
                } else {
                    args->hasValidResult = args->rslt.test(L, -1);
                }
            }
        }
        return 0;
    }

    QLayoutItem* QLayoutWrapper::itemAt(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            itemAt1CallArgs args(
                    const_cast<QLayoutWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, itemAt1_doLua, &args, "QLayout", "itemAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem*?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QLayout", "itemAt", msg);
                }
            }
        }
        throw std::runtime_error("method 'QLayout:itemAt' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QLayoutWrapper::setGeometry1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        setGeometry1CallArgs* args = (setGeometry1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "setGeometry") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->arg2.push(L, IS_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 2, 0, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
            }
        }
        return 0;
    }

    void QLayoutWrapper::setGeometry(
                   const QRect& arg2) 
    {
        lua_State* L = getL();
        if (L) {
            setGeometry1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, setGeometry1_doLua, &args, "QLayout", "setGeometry");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QLayout::setGeometry(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QLayoutWrapper::sizeHint1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        sizeHint1CallArgs* args = (sizeHint1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "sizeHint") != LUA_TNIL) {        // -> uval, eh, member?
                args->wasImplFound = true;
                args->arg1.push(L, NOT_OWNER);
                args->wasCalled = true;
                int rc = lua_pcall(L, 1, 1, ehIndex);
                if (rc == LUA_OK) {
                    args->callReturned = true;
                } else {
                    return lua_error(L);
                }
                if (args->rsltPtr.test(L, -1)) {
                    args->rslt = *args->rsltPtr;
                    args->hasValidResult = true;
                } else {
                    args->hasValidResult = false;
                }
            }
        }
        return 0;
    }

    QSize QLayoutWrapper::sizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            sizeHint1CallArgs args(
                    const_cast<QLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, sizeHint1_doLua, &args, "QLayout", "sizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QLayout", "sizeHint", msg);
                }
            }
        }
        throw std::runtime_error("method 'QLayout:sizeHint' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    
    int QLayoutWrapper::takeAt1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        takeAt1CallArgs* args = (takeAt1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "takeAt") != LUA_TNIL) {        // -> uval, eh, member?
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
                if (lua_isnil(L, -1)) {
                    args->hasValidResult = true;
                } else {
                    args->hasValidResult = args->rslt.test(L, -1);
                }
            }
        }
        return 0;
    }

    QLayoutItem* QLayoutWrapper::takeAt(
                   int arg2) 
    {
        lua_State* L = getL();
        if (L) {
            takeAt1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, takeAt1_doLua, &args, "QLayout", "takeAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem@?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QLayout", "takeAt", msg);
                }
            }
        }
        throw std::runtime_error("method 'QLayout:takeAt' not implemented");
    }

/* -------------------------------------------------------------------------------------------- */
    bool QLayoutWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QLayout", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QLayout", "event", msg);
                }
            }
        }
        return QLayout::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QLayout_addWidget_Args
{
    FromLua<QLayout*> arg_1_1;
    FromLua<QWidget*> arg_2_1;
};

extern "C" int lqtk_QLayout_addWidget(lua_State* L)
{
    lqtk_QLayout_addWidget_Args  argValues;
    lqtk_QLayout_addWidget_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLayout::addWidget(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLayout", "addWidget", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLayout_geometry_Args
{
    FromLua<QLayout*> arg_1_1;
    ToLua<QRect*> rslt_1;
};

extern "C" int lqtk_QLayout_geometry(lua_State* L)
{
    lqtk_QLayout_geometry_Args  argValues;
    lqtk_QLayout_geometry_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QLayout::geometry();
                args->rslt_1.push(L, IS_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLayout", "geometry", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLayout_parentWidget_Args
{
    FromLua<QLayout*> arg_1_1;
    ToLua<QWidget*> rslt_1;
};

extern "C" int lqtk_QLayout_parentWidget(lua_State* L)
{
    lqtk_QLayout_parentWidget_Args  argValues;
    lqtk_QLayout_parentWidget_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 =
                    args->arg_1_1.getValue()->QLayout::parentWidget();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QLayout", "parentWidget", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QLayout_setGeometry_Args
{
    FromLua<QLayout*> arg_1_1;
    FromLua<QRect*> arg_2_1;
};

extern "C" int lqtk_QLayout_setGeometry(lua_State* L)
{
    lqtk_QLayout_setGeometry_Args  argValues;
    lqtk_QLayout_setGeometry_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QLayout::setGeometry(*args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QLayout", "setGeometry", nargs, "2");
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
        QLayoutBinding::QType* ptr = static_cast<QLayoutBinding::QType*>(objectPtr);
        if (targetClassInfo == &QLayoutBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QObjectBinding::classInfo) {
            return static_cast<QObjectBinding::QType*>(ptr);
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QLayout* ptr = (QLayout*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QLayout* obj = (QLayout*) objectPtr;
        
        QLayoutWrapper* wrapper = dynamic_cast<QLayoutWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QLayout_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QLayout*> rslt_1;
};

extern "C" int lqtk_QLayout_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QLayout_new_Args  argValues;
    lqtk_QLayout_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QLayoutBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QLayout> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QLayoutWrapper* rslt = 
                    new QLayoutWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                QLayoutWrapper* rslt = 
                    new QLayoutWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QLayout", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QLayout", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QLayout_new(lua_State* L)
{
    return lqtk_QLayout_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QLayoutBinding::pushObject(lua_State* L, QLayout* objPtr, OwnerType ownerType)
{
    QLayoutWrapper* wrapper = dynamic_cast<QLayoutWrapper*>(objPtr);
    if (!wrapper) {
        QBoxLayout* ptr1 = dynamic_cast<QBoxLayout*>(objPtr);
        if (ptr1) {
            return QBoxLayoutBinding::pushObject(L, ptr1, ownerType);
        }
        QGridLayout* ptr2 = dynamic_cast<QGridLayout*>(objPtr);
        if (ptr2) {
            return QGridLayoutBinding::pushObject(L, ptr2, ownerType);
        }
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
        udata = ObjectUdata::pushNew<QLayout>(L, hasUserValue);     // -> uval?, udata
        udata->setQObjectPtr(L, -1, objPtr, ownerType);
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
    { "addWidget",     Member::NORMAL_FUNCTION,      (void*) lqtk_QLayout_addWidget },
    { "children",      Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",       Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",         Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "geometry",      Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_geometry },
    { "objectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",  Member::NORMAL_FUNCTION,      (void*) lqtk_QLayout_parentWidget },
    { "setGeometry",   Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_setGeometry },
    { "setObjectName", Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,            Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QLayoutBinding::classInfo = 
{
    "QLayout",

    &QObjectBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QLayout_constructor,
    lqtk_QLayout_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    11,
    members
};

/* ============================================================================================ */

int QLayoutBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
