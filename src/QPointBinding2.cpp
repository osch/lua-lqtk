/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QAbstractButton>
#include <QMetaMethod>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QPointBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

bool QPointBinding::delegate_equals(QPoint* arg1, QPoint* arg2)
{
    if (arg1 && arg2) {
        return *arg1 == *arg2;
    }
    else {
        return arg1 == arg2;
    }
}

QString QPointBinding::delegate_toString(QPoint* point)
{
    return QString::asprintf("QPoint(%d,%d)", point->x(), 
                                              point->y());
}
