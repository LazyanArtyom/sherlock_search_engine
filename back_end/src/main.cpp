#include "service/sherlockservice.h"
#include "resource/sherlockresourcefactory.h"
#include "service/sherlockservicesettingsfactory.h"

int main()
{
    auto resourceFactory = std::make_shared<sherlock::SherlockResourceFactory>();
    auto settingsFactory = std::make_shared<sherlock::SherlockServiceSettingsFactory>();

    sherlock::SherlockService service{resourceFactory, settingsFactory};

    service.start();

    return EXIT_SUCCESS;
}