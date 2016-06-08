#include "MockPatch.hpp"

MockPatch::MockPatch() {
}

void MockPatch::setLog(ILog * pLog) {
    this->pLog = pLog;
}

void MockPatch::patch(IBiosVector & biosBytesVector) {
    pLog->logMessage("MockPatch::patch");
}
void MockPatch::unpatch(IBiosVector & biosBytesVector) {
    pLog->logMessage("MockPatch::unpatch");
}
bool MockPatch::isPatched(IBiosVector & biosBytesVector) {
    pLog->logMessage("MockPatch::isPatched");
}
