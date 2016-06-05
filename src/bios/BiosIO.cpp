#include "BiosIO.hpp"

BiosIO::BiosIO() {

}

char BiosIO::readBiosByte(int offset) {
    //TODO asm instructions here
}
void BiosIO::writeBiosByte(int offset, char b) {
    //TODO asm instructions here
}
std::vector<char> BiosIO::readAsBytes() {
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
    //TODO implement
    const int START_OFFSET = 0;
    const int END_OFFSET = 0;
    for (int i = START_OFFSET; i < END_OFFSET; i++) {
        char b = bytes.at(i);
        writeBiosByte(i, b);
    }
}
