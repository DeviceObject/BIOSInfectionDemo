
#ifndef BIOSNOTWRITEABLEEXCEPTION_H_
#define BIOSNOTWRITEABLEEXCEPTION_H_

#include "Exception.h"

class BiosNotWriteableException : public Exception {
public:
	BiosNotWriteableException();
	virtual ~BiosNotWriteableException();
};

#endif /* BIOSNOTWRITEABLEEXCEPTION_H_ */
