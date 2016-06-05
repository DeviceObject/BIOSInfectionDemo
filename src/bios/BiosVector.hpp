#ifndef BIOSVECTOR_HPP
#define BIOSVECTOR_HPP

#include<vector>

class BiosVector {
private:
    std::vector<char> bytesVector;
    bool modified;
public:
    BiosVector();
    void init(std::vector<char> bytes);
    void setAt(int i, char b);
    char getAt(int i);
    bool isModified();
    bool isEmpty();
    std::vector<char> asArray();
    int size();
    void clear();
};

#endif // BIOSVECTOR_H
