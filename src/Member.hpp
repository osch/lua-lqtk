#ifndef LQTK_MEMBER_HPP
#define LQTK_MEMBER_HPP

namespace lqtk
{

struct Member
{
    enum Type {
        NONE,
        INTEGER,
        NORMAL_FUNCTION,
        VIRTUAL_FUNCTION
    };
    
    bool isFunction() const {
        return type == NORMAL_FUNCTION || type == VIRTUAL_FUNCTION;
    }
    
    bool isVirtual() const {
        return type == VIRTUAL_FUNCTION;
    }
    
    void push(lua_State* L) const;

    const char* name;
    Type        type;
    void*       value;
};

} // namespace lqtk

#endif // LQTK_MEMBER_HPP