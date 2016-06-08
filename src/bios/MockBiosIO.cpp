#include "MockBiosIO.hpp"

MockBiosIO::MockBiosIO() {

}
void MockBiosIO::setLog(ILog * pLog) {
    this->pLog = pLog;
}

char MockBiosIO::readBiosByte(int offset) {
    pLog->logMessage("MockBiosIO::readBiosByte(...)");
    return '1';
}
void MockBiosIO::writeBiosByte(int offset, char b) {
    pLog->logMessage("MockBiosIO::writeBiosByte(...)");
}
std::vector<char> MockBiosIO::readAsBytes() {
    pLog->logMessage("MockBiosIO::readAsBytes()");
    return std::vector<char>();
}
void MockBiosIO::writeFromBytesArray(std::vector<char> bytes) {
    pLog->logMessage("MockBiosIO::writeFromBytesArray(...)");
}
