#ifndef SHERLOCK_SERVICE_SHERLOCKSERVICESETTINGSFACTORY_H_
#define SHERLOCK_SERVICE_SHERLOCKSERVICESETTINGSFACTORY_H_

#include "servicesettingsfactory.h"

#include <memory>
#include <restbed>

namespace sherlock {

class SherlockServiceSettingsFactory : public impl::IServiceSettingsFactory
{
    using SettingsPtrType = std::shared_ptr<restbed::Settings>;

public:
    SherlockServiceSettingsFactory();
    SettingsPtrType getSettings() const override final;

private:
    SettingsPtrType settings_;
};

} // end namespace sherlock
#endif // SHERLOCK_SERVICE_SHERLOCKSERVICESETTINGSFACTORY_H_