#ifndef LOGS_LOGLEVEL_HPP_
#define LOGS_LOGLEVEL_HPP_

enum LogLevel { INFO, ERROR, DEBUG };

char const * logLevelAsString(LogLevel logPriorityLevel);

#endif /* LOGS_LOGLEVEL_HPP_ */
