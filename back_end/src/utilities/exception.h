#ifndef SHERLOCK_UTILITIES_EXCEPTION_H_
#define SHERLOCK_UTILITIES_EXCEPTION_H_

#include <stdexcept>

namespace sherlock {

class Exception : public std::runtime_error
{
public:
    explicit Exception(const std::string& msg) : std::runtime_error(msg) {}
};

} // end namespace sherlock
#endif // SHERLOCK_UTILITIES_EXCEPTION_H_