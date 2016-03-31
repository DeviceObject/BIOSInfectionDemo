#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <string>
#include "Exception.h"
using namespace std;

Exception::~Exception() {}
string * Exception::toString() {
	return new string("default exception toString value");
}

#endif



