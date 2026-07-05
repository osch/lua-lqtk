// Type: QAbstractItemView
// Base: QAbstractScrollArea

/* ============================================================================================ */

#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QFrame>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QObject>
#include <QResizeEvent>
#include <QTableView>
#include <QTreeView>
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
#include "QAbstractItemModelBinding.hpp"
#include "QAbstractItemViewBinding.hpp"
#include "QAbstractScrollAreaBinding.hpp"
#include "QFrameBinding.hpp"
#include "QHeaderViewBinding.hpp"
#include "QItemSelectionModelBinding.hpp"
#include "QObjectBinding.hpp"
#include "QResizeEventBinding.hpp"
#include "QTableViewBinding.hpp"
#include "QTreeViewBinding.hpp"
#include "QWidgetBinding.hpp"
#include "QAbstractItemViewWrapper.hpp"
#include "QWidgetBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;


/* ============================================================================================ */

namespace lqtk 
{


/* -------------------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractItemViewWrapper::setModel1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        setModel1CallArgs* args = (setModel1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "setModel") != LUA_TNIL) {        // -> uval, eh, member?
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


/* -------------------------------------------------------------------------------------------- */
    
    int QAbstractItemViewWrapper::setSelectionModel1_doLua(lua_State* L) 
    {
        luaL_checkstack(L, LUA_MINSTACK, nullptr);
        setSelectionModel1CallArgs* args = (setSelectionModel1CallArgs*)lua_touserdata(L, 1);
        if (StateGuard::pushWeakUserValue(L, args->arg1) == LUA_TTABLE) {   // -> uval?
            lua_pushcfunction(L, util::handleError);                        // -> uval, eh
            int ehIndex = lua_gettop(L);
            if (lua_getfield(L, -2, "setSelectionModel") != LUA_TNIL) {        // -> uval, eh, member?
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


/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------------------------- */

} // namespace lqtk

/* ============================================================================================ */

extern "C" {
    int lqtk_QAbstractScrollArea_setSizeAdjustPolicy(lua_State* L);
    int lqtk_QAbstractScrollArea_sizeAdjustPolicy(lua_State* L);
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
    int lqtk_QWidget_inputMethodQuery(lua_State* L);
    int lqtk_QWidget_mouseDoubleClickEvent(lua_State* L);
    int lqtk_QWidget_mouseMoveEvent(lua_State* L);
    int lqtk_QWidget_mousePressEvent(lua_State* L);
    int lqtk_QWidget_mouseReleaseEvent(lua_State* L);
    int lqtk_QWidget_move(lua_State* L);
    int lqtk_QWidget_paintEvent(lua_State* L);
    int lqtk_QWidget_palette(lua_State* L);
    int lqtk_QWidget_parentWidget(lua_State* L);
    int lqtk_QWidget_resize(lua_State* L);
    int lqtk_QWidget_setBackgroundRole(lua_State* L);
    int lqtk_QWidget_setFont(lua_State* L);
    int lqtk_QWidget_setGeometry(lua_State* L);
    int lqtk_QWidget_setLayout(lua_State* L);
    int lqtk_QWidget_setSizePolicy(lua_State* L);
    int lqtk_QWidget_setStyleSheet(lua_State* L);
    int lqtk_QWidget_setToolTip(lua_State* L);
    int lqtk_QWidget_setToolTipDuration(lua_State* L);
    int lqtk_QWidget_setUpdatesEnabled(lua_State* L);
    int lqtk_QWidget_setVisible(lua_State* L);
    int lqtk_QWidget_setWhatsThis(lua_State* L);
    int lqtk_QWidget_setWindowFilePath(lua_State* L);
    int lqtk_QWidget_setWindowFlag(lua_State* L);
    int lqtk_QWidget_setWindowFlags(lua_State* L);
    int lqtk_QWidget_setWindowTitle(lua_State* L);
    int lqtk_QWidget_show(lua_State* L);
    int lqtk_QWidget_size(lua_State* L);
    int lqtk_QWidget_sizeHint(lua_State* L);
    int lqtk_QWidget_sizePolicy(lua_State* L);
    int lqtk_QWidget_update(lua_State* L);
    int lqtk_QWidget_width(lua_State* L);
    int lqtk_QWidget_windowFlags(lua_State* L);
    int lqtk_QWidget_windowModality(lua_State* L);
    int lqtk_QWidget_windowOpacity(lua_State* L);
    int lqtk_QWidget_windowRole(lua_State* L);
    int lqtk_QWidget_windowState(lua_State* L);
    int lqtk_QObject_children(lua_State* L);
    int lqtk_QObject_connect(lua_State* L);
    int lqtk_QObject_objectName(lua_State* L);
    int lqtk_QObject_parent(lua_State* L);
    int lqtk_QObject_setObjectName(lua_State* L);
    int lqtk_QObject_setParent(lua_State* L);
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_horizontalScrollMode_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    ToLua<QAbstractItemView::ScrollMode> rslt_1;
};

extern "C" int lqtk_QAbstractItemView_horizontalScrollMode(lua_State* L)
{
    lqtk_QAbstractItemView_horizontalScrollMode_Args  argValues;
    lqtk_QAbstractItemView_horizontalScrollMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractItemView::horizontalScrollMode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "horizontalScrollMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_model_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    ToLua<QAbstractItemModel*> rslt_1;
};

extern "C" int lqtk_QAbstractItemView_model(lua_State* L)
{
    lqtk_QAbstractItemView_model_Args  argValues;
    lqtk_QAbstractItemView_model_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractItemView::model();
                args->rslt_1.push(L, NOT_OWNER);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "model", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_resetHorizontalScrollMode_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
};

extern "C" int lqtk_QAbstractItemView_resetHorizontalScrollMode(lua_State* L)
{
    lqtk_QAbstractItemView_resetHorizontalScrollMode_Args  argValues;
    lqtk_QAbstractItemView_resetHorizontalScrollMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QAbstractItemView::resetHorizontalScrollMode();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "resetHorizontalScrollMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_resetVerticalScrollMode_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
};

extern "C" int lqtk_QAbstractItemView_resetVerticalScrollMode(lua_State* L)
{
    lqtk_QAbstractItemView_resetVerticalScrollMode_Args  argValues;
    lqtk_QAbstractItemView_resetVerticalScrollMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                    args->arg_1_1.getValue()->QAbstractItemView::resetVerticalScrollMode();
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "resetVerticalScrollMode", nargs, "1");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_resizeEvent_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    FromLua<QResizeEvent*> arg_2_1;
};

extern "C" int lqtk_QAbstractItemView_resizeEvent(lua_State* L)
{
    lqtk_QAbstractItemView_resizeEvent_Args  argValues;
    lqtk_QAbstractItemView_resizeEvent_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                QAbstractItemViewExportWrapper* wrapper = dynamic_cast<QAbstractItemViewExportWrapper*>(args->arg_1_1.getValue());
                if (!wrapper) {
                    return util::argError(L, 1, "method 'resizeEvent' is protected in QAbstractItemView");
                }
                    wrapper->lqtk_QAbstractItemView_resizeEvent(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "resizeEvent", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_setAlternatingRowColors_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    FromLua<bool> arg_2_1;
};

extern "C" int lqtk_QAbstractItemView_setAlternatingRowColors(lua_State* L)
{
    lqtk_QAbstractItemView_setAlternatingRowColors_Args  argValues;
    lqtk_QAbstractItemView_setAlternatingRowColors_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QAbstractItemView::setAlternatingRowColors(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "setAlternatingRowColors", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_setHorizontalScrollMode_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    FromLua<QAbstractItemView::ScrollMode> arg_2_1;
};

extern "C" int lqtk_QAbstractItemView_setHorizontalScrollMode(lua_State* L)
{
    lqtk_QAbstractItemView_setHorizontalScrollMode_Args  argValues;
    lqtk_QAbstractItemView_setHorizontalScrollMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QAbstractItemView::setHorizontalScrollMode(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "setHorizontalScrollMode", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_setModel_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    FromLua<QAbstractItemModel*> arg_2_1;
};

extern "C" int lqtk_QAbstractItemView_setModel(lua_State* L)
{
    lqtk_QAbstractItemView_setModel_Args  argValues;
    lqtk_QAbstractItemView_setModel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
          if (!lua_isnil(L, argOffs+2)) {
            args->arg_2_1.check(L, argOffs+2);
          }
            {
                    args->arg_1_1.getValue()->QAbstractItemView::setModel(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "setModel", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_setSelectionModel_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    FromLua<QItemSelectionModel*> arg_2_1;
};

extern "C" int lqtk_QAbstractItemView_setSelectionModel(lua_State* L)
{
    lqtk_QAbstractItemView_setSelectionModel_Args  argValues;
    lqtk_QAbstractItemView_setSelectionModel_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QAbstractItemView::setSelectionModel(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "setSelectionModel", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_setVerticalScrollMode_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    FromLua<QAbstractItemView::ScrollMode> arg_2_1;
};

extern "C" int lqtk_QAbstractItemView_setVerticalScrollMode(lua_State* L)
{
    lqtk_QAbstractItemView_setVerticalScrollMode_Args  argValues;
    lqtk_QAbstractItemView_setVerticalScrollMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 2) { do {
            args->arg_1_1.check(L, argOffs+1);
            args->arg_2_1.check(L, argOffs+2);
            {
                    args->arg_1_1.getValue()->QAbstractItemView::setVerticalScrollMode(args->arg_2_1.getValue());
                return 0;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "setVerticalScrollMode", nargs, "2");
    }
    catch (...) {
        return util::handleException(L);
    }
}

/* ============================================================================================ */


struct lqtk_QAbstractItemView_verticalScrollMode_Args
{
    FromLua<QAbstractItemView*> arg_1_1;
    ToLua<QAbstractItemView::ScrollMode> rslt_1;
};

extern "C" int lqtk_QAbstractItemView_verticalScrollMode(lua_State* L)
{
    lqtk_QAbstractItemView_verticalScrollMode_Args  argValues;
    lqtk_QAbstractItemView_verticalScrollMode_Args* args = &argValues;
    try {
        int argOffs = 0;
        int nargs = lua_gettop(L);
        if (nargs == 1) { do {
            args->arg_1_1.check(L, argOffs+1);
            {
                args->rslt_1 = 
                    args->arg_1_1.getValue()->QAbstractItemView::verticalScrollMode();
                args->rslt_1.push(L);
                return 1;
            }
        } while (false); }
        return util::argCountError(L, "QAbstractItemView", "verticalScrollMode", nargs, "1");
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
        QAbstractItemViewBinding::QType* ptr = static_cast<QAbstractItemViewBinding::QType*>(objectPtr);
        if (targetClassInfo == &QAbstractItemViewBinding::classInfo) {
            return ptr;
        }
        if (targetClassInfo == &QAbstractScrollAreaBinding::classInfo) {
            return static_cast<QAbstractScrollAreaBinding::QType*>(ptr);
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

ObjectUdata* QAbstractItemViewBinding::pushObject(lua_State* L, QAbstractItemView* objPtr, OwnerType ownerType)
{
        QHeaderView* ptr1 = dynamic_cast<QHeaderView*>(objPtr);
        if (ptr1) {
            return QHeaderViewBinding::pushObject(L, ptr1, ownerType);
        }
        QTableView* ptr2 = dynamic_cast<QTableView*>(objPtr);
        if (ptr2) {
            return QTableViewBinding::pushObject(L, ptr2, ownerType);
        }
        QTreeView* ptr3 = dynamic_cast<QTreeView*>(objPtr);
        if (ptr3) {
            return QTreeViewBinding::pushObject(L, ptr3, ownerType);
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
        udata = ObjectUdata::pushNew<QAbstractItemView>(L, hasUserValue);     // -> uval?, udata
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
    { "AdjustIgnored",               Member::INTEGER,              (void*) QAbstractItemView::AdjustIgnored },
    { "AdjustToContents",            Member::INTEGER,              (void*) QAbstractItemView::AdjustToContents },
    { "AdjustToContentsOnFirstShow", Member::INTEGER,              (void*) QAbstractItemView::AdjustToContentsOnFirstShow },
    { "EnsureVisible",               Member::INTEGER,              (void*) QAbstractItemView::EnsureVisible },
    { "PositionAtBottom",            Member::INTEGER,              (void*) QAbstractItemView::PositionAtBottom },
    { "PositionAtCenter",            Member::INTEGER,              (void*) QAbstractItemView::PositionAtCenter },
    { "PositionAtTop",               Member::INTEGER,              (void*) QAbstractItemView::PositionAtTop },
    { "ScrollPerItem",               Member::INTEGER,              (void*) QAbstractItemView::ScrollPerItem },
    { "ScrollPerPixel",              Member::INTEGER,              (void*) QAbstractItemView::ScrollPerPixel },
    { "acceptDrops",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_acceptDrops },
    { "accessibleDescription",       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleDescription },
    { "accessibleIdentifier",        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleIdentifier },
    { "accessibleName",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_accessibleName },
    { "addActions",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_addActions },
    { "children",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_children },
    { "close",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_close },
    { "closeEvent",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_closeEvent },
    { "connect",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_connect },
    { "event",                       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_event },
    { "font",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_font },
    { "geometry",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_geometry },
    { "hasHeightForWidth",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_hasHeightForWidth },
    { "height",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_height },
    { "heightForWidth",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_heightForWidth },
    { "hide",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_hide },
    { "horizontalScrollMode",        Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_horizontalScrollMode },
    { "inputMethodQuery",            Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_inputMethodQuery },
    { "keyboardGrabber",             Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_keyboardGrabber },
    { "model",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_model },
    { "mouseDoubleClickEvent",       Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseDoubleClickEvent },
    { "mouseGrabber",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_mouseGrabber },
    { "mouseMoveEvent",              Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseMoveEvent },
    { "mousePressEvent",             Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mousePressEvent },
    { "mouseReleaseEvent",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_mouseReleaseEvent },
    { "move",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_move },
    { "objectName",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_objectName },
    { "paintEvent",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_paintEvent },
    { "palette",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_palette },
    { "parent",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_parent },
    { "parentWidget",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_parentWidget },
    { "resetHorizontalScrollMode",   Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_resetHorizontalScrollMode },
    { "resetVerticalScrollMode",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_resetVerticalScrollMode },
    { "resize",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_resize },
    { "resizeEvent",                 Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_resizeEvent },
    { "setAlternatingRowColors",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setAlternatingRowColors },
    { "setBackgroundRole",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setBackgroundRole },
    { "setFont",                     Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setFont },
    { "setGeometry",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setGeometry },
    { "setHorizontalScrollMode",     Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setHorizontalScrollMode },
    { "setLayout",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setLayout },
    { "setModel",                    Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_setModel },
    { "setObjectName",               Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setObjectName },
    { "setParent",                   Member::NORMAL_FUNCTION,      (void*) lqtk_QObject_setParent },
    { "setSelectionModel",           Member::VIRTUAL_FUNCTION,     (void*) lqtk_QAbstractItemView_setSelectionModel },
    { "setSizeAdjustPolicy",         Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractScrollArea_setSizeAdjustPolicy },
    { "setSizePolicy",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setSizePolicy },
    { "setStyleSheet",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setStyleSheet },
    { "setTabOrder",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setTabOrder },
    { "setToolTip",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTip },
    { "setToolTipDuration",          Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setToolTipDuration },
    { "setUpdatesEnabled",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setUpdatesEnabled },
    { "setVerticalScrollMode",       Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_setVerticalScrollMode },
    { "setVisible",                  Member::VIRTUAL_FUNCTION,     (void*) lqtk_QWidget_setVisible },
    { "setWhatsThis",                Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWhatsThis },
    { "setWindowFilePath",           Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFilePath },
    { "setWindowFlag",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlag },
    { "setWindowFlags",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowFlags },
    { "setWindowTitle",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_setWindowTitle },
    { "show",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_show },
    { "size",                        Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_size },
    { "sizeAdjustPolicy",            Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractScrollArea_sizeAdjustPolicy },
    { "sizeHint",                    Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizeHint },
    { "sizePolicy",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_sizePolicy },
    { "update",                      Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_update },
    { "verticalScrollMode",          Member::NORMAL_FUNCTION,      (void*) lqtk_QAbstractItemView_verticalScrollMode },
    { "width",                       Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_width },
    { "windowFlags",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowFlags },
    { "windowModality",              Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowModality },
    { "windowOpacity",               Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowOpacity },
    { "windowRole",                  Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowRole },
    { "windowState",                 Member::NORMAL_FUNCTION,      (void*) lqtk_QWidget_windowState },
    { NULL,                          Member::NONE,                 NULL } /* sentinel */
};

/* ============================================================================================ */

const ClassInfo QAbstractItemViewBinding::classInfo = 
{
    "QAbstractItemView",

    &QAbstractScrollAreaBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    NULL, // deleteFunction
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    81,
    members
};

/* ============================================================================================ */

int QAbstractItemViewBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
