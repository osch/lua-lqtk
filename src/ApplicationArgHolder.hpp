#ifndef APPLICATION_ARG_HOLDER_HPP
#define APPLICATION_ARG_HOLDER_HPP

namespace lqtk
{

class ApplicationArgHolder 
{
public:
    ApplicationArgHolder(int argc, char** argData)
        : argc(argc),
          argData(argData)
    {}
    
    ~ApplicationArgHolder() {
        if (argData) {
            free(argData);
            argData = NULL;
        }
    }
    
    int    argc; // QApplication holds reference to this argc member
    char** argData;
};

} // namespace lqtk

#endif // APPLICATION_ARG_HOLDER_HPP
