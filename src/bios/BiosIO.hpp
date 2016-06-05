#ifndef BIOSIO_H
#define BIOSIO_H

#include "IBiosIO.hpp"
#include<vector>

class BiosIO : public IBiosIO
{
public:
    BiosIO();
    virtual char readBiosByte(int offset);
    virtual void writeBiosByte(int offset, char b);
    virtual std::vector<char> readAsBytes();
    virtual void writeFromBytesArray(std::vector<char> bytes);
};

#endif // BIOSIO_H
