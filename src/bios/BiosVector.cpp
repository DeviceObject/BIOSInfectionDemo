#include "BiosVector.hpp"

BiosVector::BiosVector() {
    modified = false;
}
void BiosVector::init(std::vector<char> bytes) {
    clear();
    bytesVector = std::vector<char>(bytes.begin(), bytes.end());
    modified = false;
}
void BiosVector::setAt(int i, char b) {
    if (bytesVector.at(i) == b) {
        return;
    }
    bytesVector.at(i) = b;
    modified = true;
}
char BiosVector::getAt(int i) {
    return bytesVector.at(i);
}
bool BiosVector::isModified() {
    return modified;
}
bool BiosVector::isEmpty() {
    return bytesVector.size() == 0;
}
int BiosVector::size() {
    return bytesVector.size();
}
void BiosVector::clear() {
    bytesVector.clear();
}
std::vector<char> BiosVector::asArray() {
    return std::vector<char>(bytesVector.begin(), bytesVector.end());;
}
