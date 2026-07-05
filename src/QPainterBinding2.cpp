/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QPainter>
#include <QWidget>
#include <QMetaMethod>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "ObjectGuard.hpp"
#include "ObjectUdata.hpp"
#include "QPixmapWrapper.hpp"
#include "QPixmapWrapperBase.hpp"
#include "QPainterWrapperBase.hpp"
#include "ToLua.hpp"
#include "QPainterBinding.hpp"
#include "QPainterBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QPainterBinding2::delegate_begin(lua_State* L, int argOffs, 
                                                    int nargs, 
                                                    ToLua<bool>* rslt, QPainterWrapperBase* painter, QWidget* widget)
{
    *rslt = painter->lqtk_begin(widget);
    rslt->push(L);
}

void QPainterBinding2::delegate_begin(lua_State* L, int argOffs, 
                                                    int nargs, 
                                                    ToLua<bool>* rslt, QPainterWrapperBase* painter, QPixmapWrapperBase* widget)
{
    *rslt = painter->lqtk_begin(widget);
    rslt->push(L);
}

void QPainterBinding2::delegate_finish(lua_State* L, int argOffs, 
                                                     int nargs, 
                                                     ToLua<bool>* rslt, QPainterWrapperBase* painter)
{
    *rslt = painter->end();
    rslt->push(L);
}

void QPainterBinding2::delegate_drawConvexPolygon(lua_State* L, int argOffs, 
                                                                int nargs, 
                                                                QPainterWrapperBase* painter,
                                                                QList<QPoint>        list)
{
    painter->drawConvexPolygon(list.data(), list.count());
}
