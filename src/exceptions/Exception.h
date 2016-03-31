#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include<string>
using namespace std;

class Exception {
public:
	virtual ~Exception();
	virtual string * toString();
};

#endif
