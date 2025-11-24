#ifndef LQTK_TRACE_HPP
#define LQTK_TRACE_HPP

namespace lqtk::trace
{

    bool setTraceFile(FILE* file);
    
    void printf(const char* fmt, ...);

} // namespace lqtk::trace

#endif // LQTK_TRACE_HPP
