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
#include "QPixmapWrapper.hpp"
#include "QPixmapWrapperBase.hpp"
#include "QPainterWrapperBase.hpp"
#include "QPainterBinding.hpp"

/* ============================================================================================ */

using namespace lqtk;

/* ============================================================================================ */

bool QPainterBinding::delegate_begin(QPainterWrapperBase* painter, QWidget* widget)
{
    return painter->lqtk_begin(widget);
}

bool QPainterBinding::delegate_begin(QPainterWrapperBase* painter, QPixmapWrapperBase* widget)
{
    return painter->lqtk_begin(widget);
}

bool QPainterBinding::delegate_finish(QPainterWrapperBase* painter)
{
    return painter->end();
}

void QPainterBinding::delegate_drawConvexPolygon(QPainterWrapperBase* painter,
                                                 QList<QPoint>        list)
{
    painter->drawConvexPolygon(list.data(), list.count());
}


