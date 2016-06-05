#ifndef LOG_HPP_
#define LOG_HPP_

#include<string>

#include "../exceptions/Exception.hpp"
#include "LogLevel.hpp"
using namespace std;

class Log {
public:
	void logMessage(LogLevel logPriorityLevel, string * message);
	void logMessage(LogLevel logPriorityLevel, char const * message);
	void logException(LogLevel logPriorityLevel, Exception& e);
	void printEndLine();
};

#endif
