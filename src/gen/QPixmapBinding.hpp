#ifndef LQTK_QPixmapBinding_HPP
#define LQTK_QPixmapBinding_HPP

#include "util.hpp"
#include "OwnerType.hpp"
#include "Binding.hpp"
#include "ObjectGuard.hpp"
#include "QPixmapWrapperBase.hpp"

namespace lqtk
{

class ObjectUdata;

struct QPixmapBinding
{
    typedef QPixmapWrapperBase QType;

    static bool hasOwner(QType* obj);


    static const ClassInfo classInfo;
    
    static int pushBinding(lua_State* L);
};

template<> struct Binding<QPixmap> : public QPixmapBinding
{};

} // namespace lqtk

#endif // LQTK_QPixmapBinding_HPP
