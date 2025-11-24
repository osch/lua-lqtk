// Type: QLayoutItem
// Base: nil

/* ============================================================================================ */

#include <QLayoutItem>
#include <QObject>
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
#include "QWidgetItemBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

static void* castFunction(const ClassInfo* targetClassInfo, void* objectPtr)
{
    if (objectPtr)
    {
        QLayoutItemBinding::QType* ptr = static_cast<QLayoutItemBinding::QType*>(objectPtr);
        if (targetClassInfo == &QLayoutItemBinding::classInfo) {
            return ptr;
        }
    }
    return NULL;
}

/* ============================================================================================ */

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QLayoutItem* ptr = (QLayoutItem*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

ObjectUdata* QLayoutItemBinding::pushObject(lua_State* L, QLayoutItem* objPtr, OwnerType ownerType)
{
        QWidgetItem* ptr1 = dynamic_cast<QWidgetItem*>(objPtr);
        if (ptr1) {
            return QWidgetItemBinding::pushObject(L, ptr1, ownerType);
        }
        luaL_error(L, "object of type '%s' cannot be bound to lua", classInfo.className);
        return NULL;
}

/* ============================================================================================ */

static const Member members[] =
{
    { NULL, Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QLayoutItemBinding::classInfo = 
{
    "QLayoutItem",

    NULL,

    false, // isQObject
    true,  // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    0,
    members
};

/* ============================================================================================ */

int QLayoutItemBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
