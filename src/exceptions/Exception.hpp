#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include<string>

class Exception {
public:
	virtual ~Exception();
	virtual std::string * toString();
};

#endif
