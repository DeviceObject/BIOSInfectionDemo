#ifndef ILLEGALSTATEEXCEPTION_HPP
#define ILLEGALSTATEEXCEPTION_HPP

#include "Exception.hpp"
#include <string>

class IllegalStateException : public Exception
{
public:
    IllegalStateException();
    IllegalStateException(std::string message);
};

#endif // ILLEGALSTATEEXCEPTION_HPP
