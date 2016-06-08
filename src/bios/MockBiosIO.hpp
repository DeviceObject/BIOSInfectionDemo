#ifndef MOCKBIOSIO_HPP
#define MOCKBIOSIO_HPP

#include "IBiosIO.hpp"
#include "../logs/ILog.hpp"

class MockBiosIO: public IBiosIO {
private:
    ILog * pLog;
public:
    MockBiosIO();

    void setLog(ILog * pLog);

    virtual char readBiosByte(int offset);
    virtual void writeBiosByte(int offset, char b);
    virtual std::vector<char> readAsBytes();
    virtual void writeFromBytesArray(std::vector<char> bytes);
};

#endif // MOCKBIOSIO_HPP
