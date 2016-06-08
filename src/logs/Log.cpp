#include "Log.hpp"
#include "LogLevel.hpp"
#include <iostream>
#include <string>

void Log::logMessage(std::string * message) {
    logMessage(DEBUG, message);
}
void Log::logMessage(char const * message) {
    logMessage(DEBUG, message);
}
void Log::logMessage(LogLevel logPriorityLevel, std::string * message) {
    std::cout << logLevelAsString(logPriorityLevel) << ": " << message << std::endl;
}
void Log::logMessage(LogLevel logPriorityLevel, char const * message) {
    std::cout << logLevelAsString(logPriorityLevel) << ": " << message << std::endl;
}
void Log::printEndLine() {
    std::cout << std::endl;
}
void Log::logException(LogLevel logPriorityLevel, Exception & e) {
	logMessage(logPriorityLevel, "Exception as string: ");
    std::string * toString = e.toString();
	logMessage(logPriorityLevel, toString);
	delete toString;
}




