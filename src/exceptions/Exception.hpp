#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include<string>

class Exception {
private:
    std::string message;
public:
	virtual ~Exception();
    void setMessage(std::string message);
	virtual std::string * toString();
};

#endif
