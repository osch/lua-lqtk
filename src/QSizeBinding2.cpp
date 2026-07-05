/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QMetaMethod>
#include <QSize>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "ObjectUdata.hpp"
#include "ToLua.hpp"
#include "QSizeBinding.hpp"
#include "QSizeBinding2.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

void QSizeBinding2::delegate_equals(lua_State* L, int argOffs, 
                                                  int nargs, 
                                                  ToLua<bool>* rslt, QSize* arg1, QSize* arg2)
{
    if (arg1 && arg2) {
        *rslt = (*arg1 == *arg2);
    }
    else {
        *rslt = (arg1 == arg2);
    }
    rslt->push(L);
}

void QSizeBinding2::delegate_toString(lua_State* L, int argOffs, 
                                                    int nargs, 
                                                    ToLua<QString>* rslt, QSize* size)
{
    *rslt = QString::asprintf("QSize(%d,%d)", size->width(),
                                              size->height());
    rslt->push(L);
}
