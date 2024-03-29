#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <log4cplus/initializer.h>

int main()
{
    log4cplus::Initializer initializer;
    log4cplus::BasicConfigurator config;
    config.configure();
    log4cplus::Logger logger = log4cplus::Logger::getRoot();
    LOG4CPLUS_DEBUG(logger, "Test log4cplus logging");
    return 0;
}