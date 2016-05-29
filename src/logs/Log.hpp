#ifndef LOG_HPP_
#define LOG_HPP_

#include<string>

#include "../exceptions/Exception.hpp"
#include "LogLevel.hpp"
using namespace std;

class Log {
public:
	void printMessage(LogLevel logPriorityLevel, string * message);
	void printMessage(LogLevel logPriorityLevel, char const * message);
	void printException(LogLevel logPriorityLevel, Exception& e);
	void printEndLine();
};

#endif
