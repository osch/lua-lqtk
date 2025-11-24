// Type: QGuiApplication
// Base: QCoreApplication

/* ============================================================================================ */

#include <QApplication>
#include <QCoreApplication>
#include <QGuiApplication>
#include <QObject>

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
#include "QApplicationBinding.hpp"
#include "QCoreApplicationBinding.hpp"
#include "QGuiApplicationBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

extern "C" {
    int lqtk_QCoreApplication_instance(lua_State* L);
    int lqtk_QCoreApplication_processEvents(lua_State* L);
    int lqtk_QCoreApplication_sendPostedEvents(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_event(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QGuiApplicationBinding::QType* ptr = static_cast<QGuiApplicationBinding::QType*>(objectPtr);
        if (targetClassInfo == &QGuiApplicationBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QCoreApplicationBinding::classInfo) {
            return static_cast<QCoreApplicationBinding::QType*>(ptr);
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
        QGuiApplication* ptr = (QGuiApplication*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QGuiApplicationBinding::pushObject(lua_State* L, QGuiApplication* objPtr, OwnerType ownerType)
{
        QApplication* ptr1 = dynamic_cast<QApplication*>(objPtr);
        if (ptr1) {
            return QApplicationBinding::pushObject(L, ptr1, ownerType);
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
        udata = ObjectUdata::pushNew<QGuiApplication>(L, hasUserValue);     // -> uval?, udata
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
    { "children",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "instance",         Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_instance },
    { "objectName",       Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "processEvents",    Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_processEvents },
    { "sendPostedEvents", Member::NORMAL_FUNCTION,      (void*) lqtk_QCoreApplication_sendPostedEvents },
    { "setObjectName",    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { NULL,               Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QGuiApplicationBinding::classInfo = 
{
    "QGuiApplication",

    &QCoreApplicationBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    10,
    members
};

/* ============================================================================================ */

int QGuiApplicationBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
