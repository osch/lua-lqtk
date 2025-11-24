#ifndef LQTK_OBJECT_GUARD_HPP
#define LQTK_OBJECT_GUARD_HPP

namespace lqtk
{

struct ObjectGuard
{
    ObjectGuard()
        : refCount(1),
          objectPtr(nullptr)
    {}
    
    ObjectGuard* incRef() {
        refCount += 1;
        return this;
    }
    
    static void decRef(ObjectGuard** guardp) {
        ObjectGuard* guard = *guardp;
        if (guard) {
            guard->refCount -= 1;
            if (guard->refCount <= 0) {
                delete guard;
            }
            *guardp = nullptr;
        }
    }
    
    int refCount;
    void* objectPtr;
    
    template<class QType
            >
    struct Holder
    {
        Holder()
            : guard(new ObjectGuard())
        {}
        
        ~Holder() {
            if (guard)  {
                guard->objectPtr = nullptr;
                guard->refCount -= 1;
                if (guard->refCount <= 0) {
                    delete guard;
                }
                guard = nullptr;
            }
        }
        
        ObjectGuard* lqtk_initObjectGuard(QType* objectPtr) {
            guard->objectPtr = objectPtr;
            return guard;
        }
        
        ObjectGuard* lqtk_getObjectGuard() const {
            return guard;
        }
        
    private:    
        ObjectGuard* guard;
    };
};

} // namespace lqtk

#endif // LQTK_OBJECT_GUARD_HPP
