#ifndef LQTK_NAMESPACE_INFO_HPP
#define LQTK_NAMESPACE_INFO_HPP

#include "Member.hpp"

namespace lqtk
{

struct NamespaceInfo
{
    const char*            namespaceName;
    int                    memberCount;
    const Member*          members;
};

} // namespace lqtk

#endif // LQTK_NAMESPACE_INFO_HPP
