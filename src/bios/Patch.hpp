#ifndef PATCH_HPP
#define PATCH_HPP

#include "IPatch.hpp"

class Patch : public IPatch
{
public:
    Patch();
    virtual void patch(BiosVector & biosBytesVector);
    virtual void unpatch(BiosVector & biosBytesVector);
    virtual bool isPatched(BiosVector & biosBytesVector);
};

#endif // PATCH_HPP
