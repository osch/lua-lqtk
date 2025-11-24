// Type: QAbstractItemView
// Base: QAbstractScrollArea

/* ============================================================================================ */

#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QFrame>
#include <QHeaderView>
#include <QObject>
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
#include "QAbstractItemViewBinding.hpp"
#include "QAbstractScrollAreaBinding.hpp"
#include "QFrameBinding.hpp"
#include "QHeaderViewBinding.hpp"
#include "QObjectBinding.hpp"
#include "QTableViewBinding.hpp"
#include "QTreeViewBinding.hpp"
#include "QWidgetBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;


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

static void deleteFunction(void* objectPtr)
{
    if (objectPtr) {
        QAbstractItemView* ptr = (QAbstractItemView*) objectPtr;
        delete ptr;
    }
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

const ClassInfo QAbstractItemViewBinding::classInfo = 
{
    "QAbstractItemView",

    &QAbstractScrollAreaBinding::classInfo,

    true,  // isQObject
    false, // needsGuard
    NULL, // constructFunc
    NULL, // newFunc
    castFunction,
    deleteFunction,
    NULL, // hasParentFunction
    NULL, // validityErrorFunction
    NULL, // setUserValueFunction
    45,
    members
};

/* ============================================================================================ */

int QAbstractItemViewBinding::pushBinding(lua_State* L)
{
    return ClassUdata::pushBinding(L, &classInfo);
}

/* ============================================================================================ */
