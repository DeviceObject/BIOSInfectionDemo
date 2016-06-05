#include "Exception.hpp"

#include <string>

Exception::~Exception() {}

void Exception::setMessage(std::string message) {
    this->message = message;
}

std::string * Exception::toString() {
	return new std::string("default exception toString value");
}
