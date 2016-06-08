#ifndef MOCKPATCH_H
#define MOCKPATCH_H

#include "IPatch.hpp"
#include "../../logs/ILog.hpp"

class MockPatch : public IPatch {
private:
    ILog * pLog;
public:
    MockPatch();

    void setLog(ILog * pLog);

    virtual void patch(IBiosVector & biosBytesVector);
    virtual void unpatch(IBiosVector & biosBytesVector);
    virtual bool isPatched(IBiosVector & biosBytesVector);
};

#endif // MOCKPATCH_H
