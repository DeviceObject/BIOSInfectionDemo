#ifndef LOG_HPP_
#define LOG_HPP_

#include "../exceptions/Exception.hpp"
#include "LogLevel.hpp"
#include "ILog.hpp"

#include<string>

class Log : public ILog {
public:
    virtual void logMessage(std::string * message);
    virtual void logMessage(char const * message);
    virtual void logMessage(LogLevel logPriorityLevel, std::string * message);
    virtual void logMessage(LogLevel logPriorityLevel, char const * message);
    virtual void logException(LogLevel logPriorityLevel, Exception& e);
    virtual void printEndLine();
};

#endif
