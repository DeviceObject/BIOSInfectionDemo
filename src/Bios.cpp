#include "Bios.hpp"

#include "logs/LogLevel.hpp"

Bios::Bios(Log * pLog) {
	this->pLog = pLog;
}

void Bios::read() {
	pLog->logMessage(INFO, "starting to read BIOS code from chip");
}

void Bios::write() {
	pLog->logMessage(INFO, "writing BIOS code to chip");
}

bool Bios::isInfected() {
	pLog->logMessage(INFO, "checking whether BIOS code is infected");
	pLog->logMessage(INFO, "BIOS code is not infected");
	pLog->logMessage(INFO, "BIOS code is already infected");

	return false;
}

void Bios::infect() {
	pLog->logMessage(INFO, "infecting BIOS code");

//	bool old;
//	asm (
//			"btsl %2,%1\n\t" // Turn on zero-based bit #Offset in Base.
//			"sbb %0,%0"      // Use the CF to calculate old.
//			: "=r" (old), "+rm" (*Base)
//	        : "Ir" (Offset)
//	        : "cc"
//	);
}

void Bios::ensureBiosInfected() {
	read();
	if (!isInfected()) {
		infect();
		write();
	}
}


