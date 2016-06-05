#ifndef IBIOSIO_HPP
#define IBIOSIO_HPP

#include <vector>

class IBiosIO
{
public:
    virtual char readBiosByte(int offset) = 0;
    virtual void writeBiosByte(int offset, char b) = 0;
    virtual std::vector<char> readAsBytes() = 0;
    virtual void writeFromBytesArray(std::vector<char> bytes) = 0;
    virtual ~IBiosIO() {}
};

#endif // IBIOSIO_HPP
