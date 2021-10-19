#ifndef SHERLOCK_SHERLOCK_H_
#define SHERLOCK_SHERLOCK_H_

#include <string>

namespace sherlock {

class Sherlock
{
public:
    static void runCli();
    static void runBatch(const std::string& input, const std::string& out);

    static void printHelp();
};

} // end namespace sherlock
#endif // SHERLOCK_SHERLOCK_H_