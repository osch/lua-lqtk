// Type: QAbstractScrollArea
// Base: QFrame

/* ============================================================================================ */

#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QCloseEvent>
#include <QEvent>
#include <QFrame>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
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
#include "QAbstractItemViewBinding.hpp"
#include "QAbstractScrollAreaBinding.hpp"
#include "QCloseEventBinding.hpp"
#include "QEventBinding.hpp"
#include "QFrameBinding.hpp"
#include "QMouseEventBinding.hpp"
#include "QObjectBinding.hpp"
#include "QPaintEventBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QObjectWrapper.hpp"
#include "QWidgetWrapper.hpp"
#include "QFrameWrapper.hpp"
#include "QAbstractScrollAreaWrapper.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */

    QAbstractScrollAreaWrapper::QAbstractScrollAreaWrapper()
        : QAbstractScrollArea(),
          lqtk_stateGuard(nullptr)
    {}
    QAbstractScrollAreaWrapper::QAbstractScrollAreaWrapper(
                   QWidget* arg1) 
        : QAbstractScrollArea(
                   arg1),
          lqtk_stateGuard(nullptr)
    {}

/* -------------------------------------------------------------------------------------------- */

    int QAbstractScrollAreaWrapper::lqtk_destruct(lua_State* L) {
        QAbstractScrollArea* objPtr = (QAbstractScrollArea*)lua_touserdata(L, 1);
        StateGuard::clearWeakUserValue(L, objPtr);
        StateGuard::clearStrongUserValue(L, objPtr);
        return 0;
    }
    QAbstractScrollAreaWrapper::~QAbstractScrollAreaWrapper() {
        trace::printf("Deleting lqtk::QAbstractScrollAreaWrapper: %p\n", this);
        if (lqtk_stateGuard) {
            lua_State* L = lqtk_stateGuard->L;
            if (L) {
                QAbstractScrollArea* objPtr = this;
                BindingUtil::callLuaDestructor(L, lqtk_destruct, objPtr, "QAbstractScrollArea");
            }
            StateGuard::releaseRef(&lqtk_stateGuard, StateGuard::FOR_QT_OBJECT);
        }
    }

    void QAbstractScrollAreaWrapper::lqtk_QWidget_closeEvent(
                   QCloseEvent* arg1) 
    {
        return QWidget::closeEvent(
                   arg1); 
    }

    bool QAbstractScrollAreaWrapper::lqtk_QWidget_event(
                   QEvent* arg1) 
    {
        return QWidget::event(
                   arg1); 
    }

    void QAbstractScrollAreaWrapper::lqtk_QWidget_mouseDoubleClickEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseDoubleClickEvent(
                   arg1); 
    }

    void QAbstractScrollAreaWrapper::lqtk_QWidget_mouseMoveEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseMoveEvent(
                   arg1); 
    }

    void QAbstractScrollAreaWrapper::lqtk_QWidget_mousePressEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mousePressEvent(
                   arg1); 
    }

    void QAbstractScrollAreaWrapper::lqtk_QWidget_mouseReleaseEvent(
                   QMouseEvent* arg1) 
    {
        return QWidget::mouseReleaseEvent(
                   arg1); 
    }

    void QAbstractScrollAreaWrapper::lqtk_QWidget_paintEvent(
                   QPaintEvent* arg1) 
    {
        return QWidget::paintEvent(
                   arg1); 
    }

    void QAbstractScrollAreaWrapper::lqtk_QWidget_resizeEvent(
                   QResizeEvent* arg1) 
    {
        return QWidget::resizeEvent(
                   arg1); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractScrollAreaWrapper::closeEvent(
                   QCloseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::closeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::closeEvent1_doLua, &args, "QAbstractScrollArea", "closeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractScrollArea::closeEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QAbstractScrollAreaWrapper::event(
                   QEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::event1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::event1_doLua, &args, "QAbstractScrollArea", "event");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractScrollArea", "event", msg);
                }
            }
        }
        return QAbstractScrollArea::event(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    bool QAbstractScrollAreaWrapper::hasHeightForWidth() const
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::hasHeightForWidth1CallArgs args(
                    const_cast<QAbstractScrollAreaWrapper*>(this)

            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::hasHeightForWidth1_doLua, &args, "QAbstractScrollArea", "hasHeightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "a boolean value";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractScrollArea", "hasHeightForWidth", msg);
                }
            }
        }
        return QAbstractScrollArea::hasHeightForWidth();
    }

/* -------------------------------------------------------------------------------------------- */
    int QAbstractScrollAreaWrapper::heightForWidth(
                   int arg2) const 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::heightForWidth1CallArgs args(
                    const_cast<QAbstractScrollAreaWrapper*>(this),

                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::heightForWidth1_doLua, &args, "QAbstractScrollArea", "heightForWidth");
            }
            if (args.wasCalled) {
                if (args.hasValidResult) {
                    return args.rslt;
                } else {
                    const char* msg = "an integer";
                    BindingUtil::throwMethodImplRsltError(L, args.arg1, "QAbstractScrollArea", "heightForWidth", msg);
                }
            }
        }
        return QAbstractScrollArea::heightForWidth(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractScrollAreaWrapper::mouseDoubleClickEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseDoubleClickEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseDoubleClickEvent1_doLua, &args, "QAbstractScrollArea", "mouseDoubleClickEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractScrollArea::mouseDoubleClickEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractScrollAreaWrapper::mouseMoveEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseMoveEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseMoveEvent1_doLua, &args, "QAbstractScrollArea", "mouseMoveEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractScrollArea::mouseMoveEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractScrollAreaWrapper::mousePressEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mousePressEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mousePressEvent1_doLua, &args, "QAbstractScrollArea", "mousePressEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractScrollArea::mousePressEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractScrollAreaWrapper::mouseReleaseEvent(
                   QMouseEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::mouseReleaseEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::mouseReleaseEvent1_doLua, &args, "QAbstractScrollArea", "mouseReleaseEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractScrollArea::mouseReleaseEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractScrollAreaWrapper::paintEvent(
                   QPaintEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::paintEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::paintEvent1_doLua, &args, "QAbstractScrollArea", "paintEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractScrollArea::paintEvent(
                    arg2); 
    }

/* -------------------------------------------------------------------------------------------- */
    void QAbstractScrollAreaWrapper::resizeEvent(
                   QResizeEvent* arg2) 
    {
        lua_State* L = getL();
        if (L) {
            QWidgetWrapper::resizeEvent1CallArgs args(
                    this,
                    arg2 
            );
            {
                BindingUtil::callLuaMethodImpl(L, QWidgetWrapper::resizeEvent1_doLua, &args, "QAbstractScrollArea", "resizeEvent");
            }
            if (args.wasCalled) {
                return;
            }
        }
        return QAbstractScrollArea::resizeEvent(
                    arg2); 
    }

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QWidget_keyboardGrabber(lua_State* L);
    int lqtk_QWidget_mouseGrabber(lua_State* L);
    int lqtk_QWidget_setTabOrder(lua_State* L);
    int lqtk_QWidget_acceptDrops(lua_State* L);
    int lqtk_QWidget_accessibleDescription(lua_State* L);
    int lqtk_QWidget_accessibleIdentifier(lua_State* L);
    int lqtk_QWidget_accessibleName(lua_State* L);
    int lqtk_QWidget_addActions(lua_State* L);
    int lqtk_QWidget_close(lua_State* L);
    int lqtk_QWidget_closeEvent(lua_State* L);
    int lqtk_QWidget_event(lua_State* L);
    int lqtk_QWidget_font(lua_State* L);
    int lqtk_QWidget_geometry(lua_State* L);
    int lqtk_QWidget_hasHeightForWidth(lua_State* L);
    int lqtk_QWidget_height(lua_State* L);
    int lqtk_QWidget_heightForWidth(lua_State* L);
    int lqtk_QWidget_hide(lua_State* L);
    int lqtk_QWidget_mouseDoubleClickEvent(lua_State* L);
    int lqtk_QWidget_mouseMoveEvent(lua_State* L);
    int lqtk_QWidget_mousePressEvent(lua_State* L);
    int lqtk_QWidget_mouseReleaseEvent(lua_State* L);
    int lqtk_QWidget_move(lua_State* L);
    int lqtk_QWidget_paintEvent(lua_State* L);
    int lqtk_QWidget_palette(lua_State* L);
    int lqtk_QWidget_parentWidget(lua_State* L);
    int lqtk_QWidget_resize(lua_State* L);
    int lqtk_QWidget_resizeEvent(lua_State* L);
    int lqtk_QWidget_setBackgroundRole(lua_State* L);
    int lqtk_QWidget_setFont(lua_State* L);
    int lqtk_QWidget_setGeometry(lua_State* L);
    int lqtk_QWidget_setLayout(lua_State* L);
    int lqtk_QWidget_setSizePolicy(lua_State* L);
    int lqtk_QWidget_setWindowTitle(lua_State* L);
    int lqtk_QWidget_show(lua_State* L);
    int lqtk_QWidget_size(lua_State* L);
    int lqtk_QWidget_sizeHint(lua_State* L);
    int lqtk_QWidget_sizePolicy(lua_State* L);
    int lqtk_QWidget_update(lua_State* L);
    int lqtk_QWidget_width(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
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
        QAbstractScrollAreaBinding::QType* ptr = static_cast<QAbstractScrollAreaBinding::QType*>(objectPtr);
        if (targetClassInfo == &QAbstractScrollAreaBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QFrameBinding::classInfo) {
            return static_cast<QFrameBinding::QType*>(ptr);
        }
        if (targetClassInfo == &QWidgetBinding::classInfo) {
            return static_cast<QWidgetBinding::QType*>(ptr);
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
        QAbstractScrollArea* ptr = (QAbstractScrollArea*) objectPtr;
        delete ptr;
    }
}

/* ============================================================================================ */

static bool setUserValueFunction(void* objectPtr, StateGuard* guard)
{
    if (objectPtr) {
        QAbstractScrollArea* obj = (QAbstractScrollArea*) objectPtr;
        
        QAbstractScrollAreaWrapper* wrapper = dynamic_cast<QAbstractScrollAreaWrapper*>(obj);
        if (wrapper) {
            wrapper->lqtk_stateGuard = StateGuard::acquireRef(guard, StateGuard::FOR_QT_OBJECT);
            return true;
        }
    }
    return false;
}

/* ============================================================================================ */


struct lqtk_QAbstractScrollArea_new_Args
{
    FromLua<QWidget*> arg_1_1;
    ToLua<QAbstractScrollArea*> rslt_1;
};

extern "C" int lqtk_QAbstractScrollArea_constructor(lua_State* L, bool explicitNew)
{
    lqtk_QAbstractScrollArea_new_Args  argValues;
    lqtk_QAbstractScrollArea_new_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L) - 1;
        ObjectUdata* udata = ObjectUdata::checkArg(L, 1, ObjectUdata::INITIAL);

        if (udata->classInfo != &QAbstractScrollAreaBinding::classInfo)
        {
            return util::argError(L, 1, "initial object of type lqtk.Object<QAbstractScrollArea> expected");
        }

        lua_pushvalue(L, 1); // -> objUdata

        if (explicitNew) {
            argOffs = 1;
        } else {
            lua_remove(L, 1);
        }

        QWidgetBinding::intercept_new();

        if (nargs == 0) { do {
            {
                QAbstractScrollAreaWrapper* rslt = 
                    new QAbstractScrollAreaWrapper();
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (nargs == 1) { do {
          if (!lua_isnil(L, argOffs+1)) {
            args->arg_1_1.check(L, argOffs+1);
          }
            {
                QAbstractScrollAreaWrapper* rslt = 
                    new QAbstractScrollAreaWrapper(args->arg_1_1.getValue());
                if (!rslt) {
                    return luaL_error(L, "memory error");
                }
                udata->setQObjectPtr(L, -1, rslt, IS_OWNER);
                return 1;
            }
        } while (false); }
        if (explicitNew) {
            return util::argCountError(L, "QAbstractScrollArea", "new", nargs, "1,2");
        } else {
            return util::argCountError(L, "QAbstractScrollArea", nullptr, nargs, "0,1");
        }
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */

extern "C" int lqtk_QAbstractScrollArea_new(lua_State* L)
{
    return lqtk_QAbstractScrollArea_constructor(L, true /*explicitNew*/);
}

/* ============================================================================================ */

ObjectUdata* QAbstractScrollAreaBinding::pushObject(lua_State* L, QAbstractScrollArea* objPtr, OwnerType ownerType)
{
    QAbstractScrollAreaWrapper* wrapper = dynamic_cast<QAbstractScrollAreaWrapper*>(objPtr);
    if (!wrapper) {
        QAbstractItemView* ptr1 = dynamic_cast<QAbstractItemView*>(objPtr);
        if (ptr1) {
            return QAbstractItemViewBinding::pushObject(L, ptr1, ownerType);
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
        udata = ObjectUdata::pushNew<QAbstractScrollArea>(L, hasUserValue);     // -> uval?, udata
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
    { "acceptDrops",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription", Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "children",              Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_close },
    { "closeEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_closeEvent },
    { "connect",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_event },
    { "font",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_font },
    { "geometry",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_geometry },
    { "hasHeightForWidth",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_hasHeightForWidth },
    { "height",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_height },
    { "heightForWidth",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_heightForWidth },
    { "hide",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_hide },
    { "keyboardGrabber",       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_keyboardGrabber },
    { "mouseDoubleClickEvent", Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseDoubleClickEvent },
    { "mouseGrabber",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_mouseGrabber },
    { "mouseMoveEvent",        Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseMoveEvent },
    { "mousePressEvent",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mousePressEvent },
    { "mouseReleaseEvent",     Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseReleaseEvent },
    { "move",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_move },
    { "objectName",            Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "paintEvent",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_paintEvent },
    { "palette",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_palette },
    { "parent",                Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_parentWidget },
    { "resize",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_resize },
    { "resizeEvent",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_resizeEvent },
    { "setBackgroundRole",     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setFont",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setGeometry",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setLayout",             Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setObjectName",         Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",             Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setSizePolicy",         Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
    { "setTabOrder",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setTabOrder },
    { "setWindowTitle",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "size",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeHint",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizeHint },
    { "sizePolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "update",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "width",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { NULL,                    Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QAbstractScrollAreaBinding::classInfo = 
{
    "QAbstractScrollArea",

    &QFrameBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    lqtk_QAbstractScrollArea_constructor,
    lqtk_QAbstractScrollArea_new,
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    setUserValueFunction,
    45,
    members
};

/* ============================================================================================ */

int QAbstractScrollAreaBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
