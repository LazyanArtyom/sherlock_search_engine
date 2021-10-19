#include "../../sherlock.h"
#include "../../service/sherlockservice.h"
#include "../../resource/sherlockresourcefactory.h"
#include "../../service/sherlockservicesettingsfactory.h"

int main(int argc, char* argv[])
{
    // auto resourceFactory = std::make_shared<sherlock::SherlockResourceFactory>();
    // auto settingsFactory = std::make_shared<sherlock::SherlockServiceSettingsFactory>();

    // sherlock::SherlockService service{resourceFactory, settingsFactory};

    // service.start();

    if (argc == 1)
    {
        sherlock::Sherlock::runCli(); // default
    }
    else if (argc == 2)
    {
        std::string arg(argv[1]);

        if (arg == "--cli" || arg == "-c")
        {
            sherlock::Sherlock::runCli();
        }
        else if (arg == "--help" || arg == "-h")
        {
            sherlock::Sherlock::printHelp();
        }
        else
            sherlock::Sherlock::printHelp();
    }
    else if (argc == 3 || argc == 4)
    {
        std::string cmd(argv[1]);
        std::string file(argv[2]);

        if (cmd == "--batch" || cmd == "-b")
        {
            sherlock::Sherlock::runBatch(file, ( argc == 4 ? argv[3] : "" ));
        }
        else
            sherlock::Sherlock::printHelp();
    }
    else
        sherlock::Sherlock::printHelp();

    return EXIT_SUCCESS;
}