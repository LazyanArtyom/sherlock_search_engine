#ifndef SHERLOCK_SERVICE_SERVICE_H_
#define SHERLOCK_SERVICE_SERVICE_H_

namespace sherlock {
namespace impl {

class IService
{
public:
    /**
    * Every concrete service class which implements this interface must get resources
    * and settings objects and then initialize a web service, and when the start function is called,
    * it must ignite the web service.
    */
    virtual void start() = 0;
};

} // end namespace impl
} // end namespace sherlock
#endif // SHERLOCK_SERVICE_SERVICE_H_