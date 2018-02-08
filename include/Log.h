#include <string>

#define LOGGING_DEFINE_EXTENDED_OUTPUT_TYPE
#include "logging/logging.h"
using namespace ::logging;

// logging levels can be disabled at compile time
//LOGGING_DISABLE_LEVEL(::logging::Error);
//LOGGING_DISABLE_LEVEL(::logging::Trace);
//LOGGING_DISABLE_LEVEL(::logging::Warning);
//LOGGING_DISABLE_LEVEL(::logging::Info);

//std::string log_filename;// = "idan.log";
//bool log_to_stdout;// = false;
#define LOG_FILE_CONFIG(STDOUT_EN, LOG_FILENAME)                                     \
        typedef ::logging::OutputLevelSwitchDisabled <                               \
                    ::logging::OutputStream <                                        \
                        ::logging::FileOutput<&STDOUT_EN, &LOG_FILENAME>             \
                    >                                                                \
                > FileLogType;                                                       \
LOGGING_DEFINE_OUTPUT( FileLogType )


#define LOG(TYPE) log::emit<TYPE>()
#define ENDL      log::endl

