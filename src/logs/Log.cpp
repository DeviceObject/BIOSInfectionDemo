#include "Log.hpp"
#include "LogLevel.hpp"
#include <iostream>
#include <string>

char const * logLevelAsString(LogLevel logPriorityLevel) {
	switch (logPriorityLevel) {
		case INFO:
			return "INFO";
		case DEBUG:
			return "DEBUG";
		case ERROR:
			return "ERROR";
	}
	return "ERROR";//never here
}

void Log::printMessage(LogLevel logPriorityLevel, string * message) {
	cout << logLevelAsString(logPriorityLevel) << ": " << message << endl;
}
void Log::printMessage(LogLevel logPriorityLevel, char const * message) {
	cout << logLevelAsString(logPriorityLevel) << ": " << message << endl;
}
void Log::printEndLine() {
	cout << endl;
}
void Log::printException(LogLevel logPriorityLevel, Exception & e) {
	printMessage(logPriorityLevel, "Exception as string: ");
	string * toString = e.toString();
	printMessage(logPriorityLevel, toString);
	delete toString;
}




