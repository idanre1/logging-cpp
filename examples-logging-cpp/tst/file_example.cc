#include <string>

#define LOGGING_DEFINE_EXTENDED_OUTPUT_TYPE
#include "logging/logging.h"
using namespace ::logging;

// logging levels can be disabled at compile time
//LOGGING_DISABLE_LEVEL(::logging::Error);
//LOGGING_DISABLE_LEVEL(::logging::Trace);
//LOGGING_DISABLE_LEVEL(::logging::Warning);
//LOGGING_DISABLE_LEVEL(::logging::Info);

std::string log_filename = "idan.log";
        typedef ::logging::OutputLevelSwitchDisabled <
                    ::logging::OutputStream <
                        ::logging::FileOutput<true, &log_filename>
                    >
                > FileLogType;
LOGGING_DEFINE_OUTPUT( FileLogType )


int main(int, char**) {
    log::emit() << "Hello World! with the logging framework" << log::endl;

    log::emit< Error>()   << "Logging an Error"  << log::endl;
    log::emit< Trace>()   << "Logging a Trace"   << log::endl;
    log::emit< Warning>() << "Logging a Warning" << log::endl;
    log::emit< Info>()    << "Logging an Info"   << log::endl;
    return 0;
}

