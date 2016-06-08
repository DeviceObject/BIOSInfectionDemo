#ifndef MOCKBIOSVECTOR_H
#define MOCKBIOSVECTOR_H

#include "IBiosVector.hpp"
#include "../logs/ILog.hpp"

class MockBiosVector : public IBiosVector {
private:
    ILog * pLog;
public:
    MockBiosVector();

    void setLog(ILog * pLog);

    virtual void init(std::vector<char> bytes);
    virtual void setAt(int i, char b);
    virtual char getAt(int i);
    virtual bool isModified();
    virtual bool isEmpty();
    virtual std::vector<char> asArray();
    virtual int size();
    virtual void clear();
};

#endif // MOCKBIOSVECTOR_H
