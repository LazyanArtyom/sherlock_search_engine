#ifndef SHERLOCK_SERVICE_SERVICESETTINGSFACTORY_H_
#define SHERLOCK_SERVICE_SERVICESETTINGSFACTORY_H_

#include <memory>
#include <restbed>

namespace sherlock {
namespace impl {

class IServiceSettingsFactory
{
    using SettingsPtrType = std::shared_ptr<restbed::Settings>;

public:
    /**
    * Every concrete class which implements this interface must prepare
    * and create web service settings and then deliver settings through the getSettings function. 
    */
    virtual SettingsPtrType getSettings() const = 0;
};

} // end namespace impl
} // end namespace sherlock
#endif // SHERLOCK_SERVICE_SERVICESETTINGSFACTORY_H_