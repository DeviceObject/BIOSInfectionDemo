#ifndef IPATCH_HPP
#define IPATCH_HPP

#include "../BiosVector.hpp"

class IPatch
{
public:
    virtual void patch(IBiosVector & biosBytesVector) = 0;
    virtual void unpatch(IBiosVector & biosBytesVector) = 0;
    virtual bool isPatched(IBiosVector & biosBytesVector) = 0;
};

#endif // IPATCH_HPP
