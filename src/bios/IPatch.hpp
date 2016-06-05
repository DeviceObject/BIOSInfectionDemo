#ifndef IPATCH_HPP
#define IPATCH_HPP

#include "BiosVector.hpp"

class IPatch
{
public:
    virtual void patch(BiosVector & biosBytesVector) = 0;
    virtual void unpatch(BiosVector & biosBytesVector) = 0;
    virtual bool isPatched(BiosVector & biosBytesVector) = 0;
};

#endif // IPATCH_HPP
