/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QAbstractButton>
#include <QMetaMethod>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "ToLua.hpp"
#include "QPointBinding.hpp"
#include "QPointBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QPointBinding2::delegate_equals(lua_State* L, int argOffs, 
                                                   int nargs, 
                                                   ToLua<bool>* rslt, QPoint* arg1, QPoint* arg2)
{
    if (arg1 && arg2) {
        *rslt = (*arg1 == *arg2);
    }
    else {
        *rslt = (arg1 == arg2);
    }
    rslt->push(L);
}

void QPointBinding2::delegate_toString(lua_State* L, int argOffs, 
                                                     int nargs, 
                                                     ToLua<QString>* rslt, QPoint* point)
{
    *rslt = QString::asprintf("QPoint(%d,%d)", point->x(), 
                                               point->y());
    rslt->push(L);
}
