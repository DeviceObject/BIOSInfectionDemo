#ifndef MOCKBIOS_H
#define MOCKBIOS_H

#include "IBios.hpp"
#include "../logs/ILog.hpp"

class MockBios : public IBios {
private:
    ILog * pLog;
public:
    MockBios();

    void setLog(ILog * pLog);

    virtual void read();
    virtual bool isReaded();
    virtual void write();
    virtual bool isInfected();
    virtual void infect();
    virtual void ensureInfected();
    virtual void clear();
};

#endif // MOCKBIOS_H
