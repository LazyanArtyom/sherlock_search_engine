#include "sherlockservice.h"

namespace sherlock
{

SherlockService::SherlockService(
    SherlockService::ResourceFactoryPtrType resourceFactory,
    SherlockService::ServiceSettingsFactoryPtrType settingsFactory)
{
    service_.publish(resourceFactory->getResource());
    settingsFactory_ = settingsFactory;
}

void SherlockService::start()
{
    service_.start(settingsFactory_->getSettings());
}

} // end namespace sherlock