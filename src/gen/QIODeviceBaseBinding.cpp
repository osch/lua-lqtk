// Type: QIODeviceBase
// Base: nil

/* ============================================================================================ */

#include <QIODeviceBase>
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
#include "QIODeviceBaseBinding.hpp"
#include "QObjectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QIODeviceBaseBinding::QType* ptr = static_cast<QIODeviceBaseBinding::QType*>(objectPtr);
        if (targetClassInfo == &QIODeviceBaseBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

ObjectUdata* QIODeviceBaseBinding::pushObject(lua_State* L, QIODeviceBase* objPtr, OwnerType ownerType)
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
        udata = ObjectUdata::pushNew<QIODeviceBase>(L, hasUserValue);     // -> uval?, udata
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
    { "Append",       Member::INTEGER,              (void*) QIODeviceBase::Append },
    { "ExistingOnly", Member::INTEGER,              (void*) QIODeviceBase::ExistingOnly },
    { "NewOnly",      Member::INTEGER,              (void*) QIODeviceBase::NewOnly },
    { "NotOpen",      Member::INTEGER,              (void*) QIODeviceBase::NotOpen },
    { "ReadOnly",     Member::INTEGER,              (void*) QIODeviceBase::ReadOnly },
    { "ReadWrite",    Member::INTEGER,              (void*) QIODeviceBase::ReadWrite },
    { "Text",         Member::INTEGER,              (void*) QIODeviceBase::Text },
    { "Truncate",     Member::INTEGER,              (void*) QIODeviceBase::Truncate },
    { "Unbuffered",   Member::INTEGER,              (void*) QIODeviceBase::Unbuffered },
    { "WriteOnly",    Member::INTEGER,              (void*) QIODeviceBase::WriteOnly },
    { NULL,           Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QIODeviceBaseBinding::classInfo = 
{
    "QIODeviceBase",

    NULL,

    false, // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    NULL, // deleteFunction
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    10,
    members
};

/* ============================================================================================ */

int QIODeviceBaseBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
