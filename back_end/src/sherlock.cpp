#include "sherlock.h"
#include "utilities/exception.h"
#include "service/sherlockservice.h"
#include "resource/sherlockresourcefactory.h"
#include "service/sherlockservicesettingsfactory.h"

#include <iostream>

namespace sherlock
{

void Sherlock::runCli()
{
    try
    {
        auto resourceFactory = std::make_shared<sherlock::SherlockResourceFactory>();
        auto settingsFactory = std::make_shared<sherlock::SherlockServiceSettingsFactory>();

        sherlock::SherlockService service{resourceFactory, settingsFactory};

        std::cout << "Server started ...\n";
        service.start();
    }
    catch (const Exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Sherlock::runBatch(const std::string &input, const std::string &out)
{
    try
    {
        std::cout << "Batch\n";
    }
    catch (const Exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Sherlock::printHelp()
{
    std::cout << "\n"
                << "Sherlock search engine.\n"
                << "\n"
                << "\tsherlock [options]\n"
                << "\t--cli, -c: command line interface\n"
                << "\t--batch <in> [out], -b <in> [out]: batch interface (out optional)\n"
                << std::endl;

    exit(EXIT_SUCCESS);
}

} // end namespace sherlock