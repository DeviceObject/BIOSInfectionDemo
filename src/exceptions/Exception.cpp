#include "Exception.hpp"

#include <string>

Exception::~Exception() {}
std::string * Exception::toString() {
	return new std::string("default exception toString value");
}
