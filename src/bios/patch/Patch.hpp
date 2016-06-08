#ifndef PATCH_HPP
#define PATCH_HPP

#include "IPatch.hpp"
#include "../../logs/ILog.hpp"

class Patch : public IPatch {
private:
    ILog * pLog;
public:
    Patch();
    void setLog(ILog * pLog);
    virtual void patch(IBiosVector & biosBytesVector);
    virtual void unpatch(IBiosVector & biosBytesVector);
    virtual bool isPatched(IBiosVector & biosBytesVector);
};

#endif // PATCH_HPP
