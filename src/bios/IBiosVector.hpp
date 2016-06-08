#ifndef IBIOSVECTOR_HPP
#define IBIOSVECTOR_HPP

#include<vector>

class IBiosVector {
private:
public:
    virtual void init(std::vector<char> bytes) = 0;
    virtual void setAt(int i, char b) = 0;
    virtual char getAt(int i) = 0;
    virtual bool isModified() = 0;
    virtual bool isEmpty() = 0;
    virtual std::vector<char> asArray() = 0;
    virtual int size() = 0;
    virtual void clear() = 0;
    virtual ~IBiosVector() {}
};

#endif // IBIOSVECTOR_H
