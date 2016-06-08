#include "BiosIO.hpp"

BiosIO::BiosIO() {

}

void BiosIO::setLog(ILog *pLog) {
    this->pLog = pLog;
}

char BiosIO::readBiosByte(int offset) {
    //TODO asm instructions here
}
void BiosIO::writeBiosByte(int offset, char b) {
    //TODO asm instructions here
}
std::vector<char> BiosIO::readAsBytes() {
    pLog->logMessage(INFO, "starting to read BIOS code from chip");
    //TODO implement
    const int START_OFFSET = 0;
    const int END_OFFSET = 0;
    std::vector<char> v;
    for (int i = START_OFFSET; i < END_OFFSET; i++) {
        char b = readBiosByte(i);
        v.push_back(b);
    }
    return v;
}
void BiosIO::writeFromBytesArray(std::vector<char> bytes) {
    pLog->logMessage(INFO, "writing BIOS code to chip");
    //TODO implement
    const int START_OFFSET = 0;
    const int END_OFFSET = 0;
    for (int i = START_OFFSET; i < END_OFFSET; i++) {
        char b = bytes.at(i);
        writeBiosByte(i, b);
    }
}
