/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QMetaMethod>
#include <QRect>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "ToLua.hpp"
#include "QRectBinding.hpp"
#include "QRectBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QRectBinding2::delegate_equals(lua_State* L, int argOffs, 
                                                  int nargs, 
                                                  ToLua<bool>* rslt, QRect* arg1, QRect* arg2)
{
    if (arg1 && arg2) {
        *rslt = (*arg1 == *arg2);
    }
    else {
        *rslt = (arg1 == arg2);
    }
    rslt->push(L);
}

void QRectBinding2::delegate_toString(lua_State* L, int argOffs, 
                                                    int nargs, 
                                                    ToLua<QString>* rslt, QRect* rect)
{
    *rslt = QString::asprintf("QRect(%d,%d,%d,%d)", rect->x(), 
                                                    rect->y(),
                                                    rect->width(),
                                                    rect->height());
    rslt->push(L);
}
