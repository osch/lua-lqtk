#ifndef LQTK_NAMESPACE_UDATA_HPP
#define LQTK_NAMESPACE_UDATA_HPP

namespace lqtk
{

class NamespaceInfo;

class NamespaceUdata
{
public:
    NamespaceUdata(const NamespaceInfo* namespaceInfo);

    static int pushBinding(lua_State* L, const NamespaceInfo* namespaceInfo);
    
    static NamespaceUdata* testArg(lua_State* L, int arg);
    static NamespaceUdata* checkArg(lua_State* L, int arg);
    
public:
    const NamespaceInfo* const namespaceInfo;

private:
    class Impl;
};

} // namespace lqtk

#endif // LQTK_NAMESPACE_UDATA_HPP
