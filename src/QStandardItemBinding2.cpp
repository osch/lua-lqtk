#include <QStandardItem>
#include <QPointer>

#include "init.h"
#include "util.hpp"
#include "ClassInfo.hpp"
#include "ClassUdata.hpp"
#include "ObjectUdata.hpp"
#include "QStandardItemBinding.hpp"

using namespace lqtk;

bool QStandardItemBinding::hasOwner(QStandardItem* item)
{
    return item && (item->model() || item->parent());
}
