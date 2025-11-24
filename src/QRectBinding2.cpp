/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QMetaMethod>
#include <QRect>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QRectBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

bool QRectBinding::delegate_equals(QRect* arg1, QRect* arg2)
{
    if (arg1 && arg2) {
        return *arg1 == *arg2;
    }
    else {
        return arg1 == arg2;
    }
}

QString QRectBinding::delegate_toString(QRect* rect)
{
    return QString::asprintf("QRect(%d,%d,%d,%d)", rect->x(), 
                                                   rect->y(),
                                                   rect->width(),
                                                   rect->height());
}
