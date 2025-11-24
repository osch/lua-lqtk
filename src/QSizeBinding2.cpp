/* ============================================================================================ */

#include <QObject>
#include <QPointer>
#include <QMetaMethod>
#include <QSize>

/* ============================================================================================ */

#include "init.h"
#include "util.hpp"

#include "ClassInfo.hpp"
#include "QSizeBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

bool QSizeBinding::delegate_equals(QSize* arg1, QSize* arg2)
{
    if (arg1 && arg2) {
        return *arg1 == *arg2;
    }
    else {
        return arg1 == arg2;
    }
}

QString QSizeBinding::delegate_toString(QSize* size)
{
    return QString::asprintf("QSize(%d,%d)", size->width(),
                                             size->height());
}
