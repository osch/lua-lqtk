#ifndef LQTK_CLASS_UDATA_HPP
#define LQTK_CLASS_UDATA_HPP

extern const char* const LQTK_CLASS_TYPE_NAME;

namespace lqtk
{

class ClassUdata
{
public:

    static const int CTABLE_UVIDX   = 1;
    static const int OMETA_UVIDX    = 2;
    static const int NEWFUNC_UVIDX  = 3;
    
    ClassUdata(const ClassInfo* classInfo);
    
    ~ClassUdata() {
        destructed = true;
    }
    
    int getDebugId() const {
        return debugId;
    }
    
    static bool isEqual(lua_State* L, int udataIdx1, const ClassUdata* udata1, 
                                      int udataIdx2, const ClassUdata* udata2);
    
    static int newClass(lua_State* L);
    
    static int pushBinding(lua_State* L, const ClassInfo* classInfo);
    
    const char* pushClassName(lua_State* L, int udataIdx);

    ClassUdata* pushBaseClass(lua_State* L, int udataIdx);

    const ClassInfo* const classInfo;

    bool                destructed:1;
    bool                isDerived:1;
    bool                hasName:1;
    
    int                 debugId;
    
};

} // namespace lqtk

#endif // LQTK_CLASS_UDATA_HPP
