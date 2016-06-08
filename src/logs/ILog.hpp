#ifndef ILOG_HPP
#define ILOG_HPP

#include "../exceptions/Exception.hpp"
#include "LogLevel.hpp"

#include<string>

class ILog {
public:
    virtual void logMessage(std::string * message) = 0;
    virtual void logMessage(char const * message) = 0;
    virtual void logMessage(LogLevel logLevel, std::string * message) = 0;
    virtual void logMessage(LogLevel logLevel, char const * message) = 0;
    virtual void logException(LogLevel logLevel, Exception& e) = 0;
    virtual void printEndLine() = 0;
    virtual ~ILog() {}
};

#endif // ILOG_HPP
