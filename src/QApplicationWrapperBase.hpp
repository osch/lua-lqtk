#ifndef Q_APPLICATION_WRAPPER_BASE_HPP
#define Q_APPLICATION_WRAPPER_BASE_HPP

#include "ApplicationArgHolder.hpp"

namespace lqtk
{

class QApplicationWrapperBase : public ApplicationArgHolder,
                                public QApplication
{
public:
    QApplicationWrapperBase(int argc, char** argv)
        : ApplicationArgHolder(argc, argv),
          QApplication(ApplicationArgHolder::argc, argv) // QApplication holds reference to argc
    {}
};


} // namespace lqtk

#endif // Q_APPLICATION_WRAPPER_BASE_HPP