#include "Log.hpp"
#include "LogLevel.hpp"
#include <iostream>
#include <string>

void Log::logMessage(LogLevel logPriorityLevel, string * message) {
	cout << logLevelAsString(logPriorityLevel) << ": " << message << endl;
}
void Log::logMessage(LogLevel logPriorityLevel, char const * message) {
	cout << logLevelAsString(logPriorityLevel) << ": " << message << endl;
}
void Log::printEndLine() {
	cout << endl;
}
void Log::logException(LogLevel logPriorityLevel, Exception & e) {
	logMessage(logPriorityLevel, "Exception as string: ");
	string * toString = e.toString();
	logMessage(logPriorityLevel, toString);
	delete toString;
}




