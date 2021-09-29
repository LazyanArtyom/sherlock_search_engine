#ifndef SHERLOCK_SERVICE_SHERLOCKSERVICE_H_
#define SHERLOCK_SERVICE_SHERLOCKSERVICE_H_

#include "service.h"
#include "servicesettingsfactory.h"
#include "../resource/resourcefactory.h"

namespace sherlock
{

class SherlockService : public impl::IService
{
    using ServiceType = restbed::Service;
    using ResourceFactoryPtrType = std::shared_ptr<impl::IResourceFactory>;
    using ServiceSettingsFactoryPtrType = std::shared_ptr<impl::IServiceSettingsFactory>;

public:
    SherlockService(
        ResourceFactoryPtrType resourceFactory,
        ServiceSettingsFactoryPtrType settingsFactory);

    void start() override final;

private:
    ServiceType service_;
    ServiceSettingsFactoryPtrType settingsFactory_;
};

} // end namespace sherlock
#endif // SHERLOCK_SERVICE_SHERLOCKSERVICE_H_