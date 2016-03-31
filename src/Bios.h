#ifndef BIOS_H_
#define BIOS_H_

#include "logs/Log.h"

class Bios {
private:
	Log * log;
public:
	Bios(Log * log);
	void read();
	void write();
	bool isInfected();
	void infect();
};

#endif /* BIOS_H_ */
