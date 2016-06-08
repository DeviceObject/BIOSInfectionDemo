#include "Patch.hpp"

Patch::Patch() {
}

void Patch::setLog(ILog *pLog) {
    this->pLog = pLog;
}

void Patch::patch(IBiosVector & biosBytesVector) {
    pLog->logMessage(INFO, "Patch::patch(...)");
    //	bool old;
    //	asm (
    //			"btsl %2,%1\n\t" // Turn on zero-based bit #Offset in Base.
    //			"sbb %0,%0"      // Use the CF to calculate old.
    //			: "=r" (old), "+rm" (*Base)
    //	        : "Ir" (Offset)
    //	        : "cc"
    //	);
}
void Patch::unpatch(IBiosVector & biosBytesVector) {

}
bool Patch::isPatched(IBiosVector & biosBytesVector) {
    pLog->logMessage(INFO, "Patch::isPatched(");
    //TODO implement
    bool isInfected = false;
    if(isInfected) {
        pLog->logMessage(INFO, "BIOS code is already infected");
    } else {
        pLog->logMessage(INFO, "BIOS code is not infected");
    }
    return isInfected;
}
