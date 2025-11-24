#include "init.h"
#include "ClassInfo.hpp"

using namespace lqtk;

const Member* ClassInfo::findMember(const char* name) const
{
    int i0 = 0;
    int i1 = memberCount;
    while (i1 > i0) {
        int i = i0 + ((i1 - i0) / 2);
        const Member* member = members + i;
        int cmp = strcmp(name, member->name);
        if (cmp == 0) {
            return member;
        }
        else if (cmp < 0) {
            i1 = i;
        }
        else {
            i0 = i + 1;
        }
    }
    return nullptr;
}
