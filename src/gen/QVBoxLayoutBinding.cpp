// Type: QVBoxLayout
// Base: QBoxLayout

/* ============================================================================================ */

#include <QBoxLayout>
#include <QEvent>
#include <QHBoxLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QVBoxLayout>
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
#include "QHBoxLayoutBinding.hpp"
#include "QLayoutBinding.hpp"
#include "QLayoutItemBinding.hpp"
#include "QObjectBinding.hpp"
#include "QRectBinding.hpp"
#include "QSizeBinding.hpp"
#include "QVBoxLayoutBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QLayoutWrapper.hpp"
#include "QBoxLayoutWrapper.hpp"
#include "QVBoxLayoutWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QVBoxLayoutWrapper::QVBoxLayoutWrapper()
        : QVBoxLayout(),
          lqtk_stateGuard(nullptr)
    {}
    QVBoxLayoutWrapper::QVBoxLayoutWrapper(
                   QWidget* arg1) 
        : QVBoxLayout(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QVBoxLayoutWrapper::lqtk_destruct(lua_State* L) {
        QVBoxLayout* objPtr = (QVBoxLayout*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QVBoxLayoutWrapper::~QVBoxLayoutWrapper() {
        trace::printf("Deleting lqtk::QVBoxLayoutWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QVBoxLayout* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QVBoxLayout");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

/* -------------------------------------------------------------------------------------------- */
    void QVBoxLayoutWrapper::addItem(
                   QLayoutItem* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QBoxLayoutWrapper::addItem1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QBoxLayoutWrapper::addItem1_doLua, &args, "QVBoxLayout", "addItem");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QVBoxLayout::addItem(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    int QVBoxLayoutWrapper::count() const
    {
        lua_State* L = getL();
        if (L) {
            QBoxLayoutWrapper::count1CallArgs args(
                    const_cast<QVBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QBoxLayoutWrapper::count1_doLua, &args, "QVBoxLayout", "count");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "count", msg);
                }
            }
        }
        return QVBoxLayout::count();
    }

/* -------------------------------------------------------------------------------------------- */
    bool QVBoxLayoutWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QBoxLayoutWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QVBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QBoxLayoutWrapper::hasHeightForWidth1_doLua, &args, "QVBoxLayout", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "hasHeightForWidth", msg);
                }
            }
        }
        return QVBoxLayout::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QVBoxLayoutWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QBoxLayoutWrapper::heightForWidth1CallArgs args(
                    const_cast<QVBoxLayoutWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QBoxLayoutWrapper::heightForWidth1_doLua, &args, "QVBoxLayout", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "heightForWidth", msg);
                }
            }
        }
        return QVBoxLayout::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QLayoutItem* QVBoxLayoutWrapper::itemAt(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QBoxLayoutWrapper::itemAt1CallArgs args(
                    const_cast<QVBoxLayoutWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QBoxLayoutWrapper::itemAt1_doLua, &args, "QVBoxLayout", "itemAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem*?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "itemAt", msg);
                }
            }
        }
        return QVBoxLayout::itemAt(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QSize QVBoxLayoutWrapper::sizeHint() const
    {
        lua_State* L = getL();
        if (L) {
            QBoxLayoutWrapper::sizeHint1CallArgs args(
                    const_cast<QVBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QBoxLayoutWrapper::sizeHint1_doLua, &args, "QVBoxLayout", "sizeHint");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QSize'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "sizeHint", msg);
                }
            }
        }
        return QVBoxLayout::sizeHint();
    }

/* -------------------------------------------------------------------------------------------- */
    QLayoutItem* QVBoxLayoutWrapper::takeAt(
                   int arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QBoxLayoutWrapper::takeAt1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QBoxLayoutWrapper::takeAt1_doLua, &args, "QVBoxLayout", "takeAt");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QLayoutItem@?'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "takeAt", msg);
                }
            }
        }
        return QVBoxLayout::takeAt(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    QRect QVBoxLayoutWrapper::geometry() const
    {
        lua_State* L = getL();
        if (L) {
            QLayoutWrapper::geometry1CallArgs args(
                    const_cast<QVBoxLayoutWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QLayoutWrapper::geometry1_doLua, &args, "QVBoxLayout", "geometry");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an object of type 'QRect'";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "geometry", msg);
                }
            }
        }
        return QVBoxLayout::geometry();
    }

/* -------------------------------------------------------------------------------------------- */
    void QVBoxLayoutWrapper::setGeometry(
                   const QRect& arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QLayoutWrapper::setGeometry1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QLayoutWrapper::setGeometry1_doLua, &args, "QVBoxLayout", "setGeometry");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QVBoxLayout::setGeometry(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QVBoxLayoutWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QObjectWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QObjectWrapper::event1_doLua, &args, "QVBoxLayout", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QVBoxLayout", "event", msg);
                }
            }
        }
        return QVBoxLayout::event(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QBoxLayout_addItem(lua_State* L);
    int lqtk_QBoxLayout_addLayout(lua_State* L);
    int lqtk_QBoxLayout_addWidget(lua_State* L);
    int lqtk_QBoxLayout_count(lua_State* L);
    int lqtk_QBoxLayout_hasHeightForWidth(lua_State* L);
    int lqtk_QBoxLayout_heightForWidth(lua_State* L);
    int lqtk_QBoxLayout_itemAt(lua_State* L);
    int lqtk_QBoxLayout_sizeHint(lua_State* L);
    int lqtk_QBoxLayout_takeAt(lua_State* L);
    int lqtk_QLayout_geometry(lua_State* L);
    int lqtk_QLayout_parentWidget(lua_State* L);
    int lqtk_QLayout_setGeometry(lua_State* L);
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
        QVBoxLayoutBinding::QType* ptr = static_cast<QVBoxLayoutBinding::QType*>(objectPtr);
        if (targetClassInfo == &QVBoxLayoutBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QBoxLayoutBinding::classInfo) {
            return static_cast<QBoxLayoutBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QLayoutBinding::classInfo) {
            return static_cast<QLayoutBinding::QType*>(ptr);
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
        QVBoxLayout* ptr = (QVBoxLayout*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QVBoxLayout* obj = (QVBoxLayout*) objectPtr;
        
        QVBoxLayoutWrapper* wrapper = dynamic_cast<QVBoxLayoutWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QVBoxLayout_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QHBoxLayout*> rslt_1;
};

extern "C" int lqtk_QVBoxLayout_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QVBoxLayout_new_Args  argValues;
    lqtk_QVBoxLayout_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QVBoxLayoutBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QVBoxLayout> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }
        if (nargs == 0) { do {
            {
                QVBoxLayoutWrapper* rslt = 
                    new QVBoxLayoutWrapper();
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
                QVBoxLayoutWrapper* rslt = 
                    new QVBoxLayoutWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QVBoxLayout", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QVBoxLayout", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QVBoxLayout_new(lua_State* L)
{
    return lqtk_QVBoxLayout_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QVBoxLayoutBinding::pushObject(lua_State* L, QVBoxLayout* objPtr, OwnerType ownerType)
{
    QVBoxLayoutWrapper* wrapper = dynamic_cast<QVBoxLayoutWrapper*>(objPtr);
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
        udata = ObjectUdata::pushNew<QVBoxLayout>(L, hasUserValue);     // -> uval?, udata
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
    { "BottomToTop",       Member::INTEGER,              (void*) QVBoxLayout::BottomToTop },
    { "LeftToRight",       Member::INTEGER,              (void*) QVBoxLayout::LeftToRight },
    { "RightToLeft",       Member::INTEGER,              (void*) QVBoxLayout::RightToLeft },
    { "TopToBottom",       Member::INTEGER,              (void*) QVBoxLayout::TopToBottom },
    { "addItem",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_addItem },
    { "addLayout",         Member::NORMAL_FUNCTION,      (void*) lqtk_QBoxLayout_addLayout },
    { "addWidget",         Member::NORMAL_FUNCTION,      (void*) lqtk_QBoxLayout_addWidget },
    { "children",          Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "connect",           Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "count",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_count },
    { "event",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QObject_event },
    { "geometry",          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_geometry },
    { "hasHeightForWidth", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_hasHeightForWidth },
    { "heightForWidth",    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_heightForWidth },
    { "itemAt",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_itemAt },
    { "objectName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "parent",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",      Member::NORMAL_FUNCTION,      (void*) lqtk_QLayout_parentWidget },
    { "setGeometry",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QLayout_setGeometry },
    { "setObjectName",     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "sizeHint",          Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_sizeHint },
    { "takeAt",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QBoxLayout_takeAt },
    { NULL,                Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QVBoxLayoutBinding::classInfo = 
{
    "QVBoxLayout",

    &QBoxLayoutBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QVBoxLayout_constructor,
    lqtk_QVBoxLayout_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    23,
    members
};

/* ============================================================================================ */

int QVBoxLayoutBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
