#include "MockBiosVector.hpp"

MockBiosVector::MockBiosVector() {
}

void MockBiosVector::setLog(ILog * pLog) {
    this->pLog = pLog;
}

void MockBiosVector::init(std::vector<char> bytes) {
    pLog->logMessage("MockBiosVector::init");
}
void MockBiosVector::setAt(int i, char b) {
    pLog->logMessage("MockBiosVector::setAt");
}
char MockBiosVector::getAt(int i) {
    pLog->logMessage("MockBiosVector::getAt");
    return '1';
}
bool MockBiosVector::isModified() {
    pLog->logMessage("MockBiosVector::isModified");
    return false;
}
bool MockBiosVector::isEmpty() {
    pLog->logMessage("MockBiosVector::isEmpty");
    return false;
}
std::vector<char> MockBiosVector::asArray() {
    pLog->logMessage("MockBiosVector::asArray");
    return std::vector<char>();
}
int MockBiosVector::size() {
    pLog->logMessage("MockBiosVector::size");
    return 1;
}
void MockBiosVector::clear() {
    pLog->logMessage("MockBiosVector::clear");
}
