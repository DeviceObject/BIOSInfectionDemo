#ifndef LOG_H_
#define LOG_H_

#include<string>
#include "../exceptions/Exception.h"
using namespace std;

class Log {
public:
	void printMessage(string * message);
	void printMessage(char const * message);
	void printException(Exception& e);
	void printEndLine();
};

#endif
