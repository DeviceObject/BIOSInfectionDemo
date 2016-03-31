#include<iostream>
#include "Log.h"

void Log::printMessage(string * message) {
	cout << message << endl;
}
void Log::printMessage(char const * message) {
	cout << message << endl;
}
void Log::printEndLine() {
	cout << endl;
}
void Log::printException(Exception& e) {
	printMessage("Exception as string: ");
	string * toString = e.toString();
	printMessage(toString);
	delete toString;
}




