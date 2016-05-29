#include "Bios.hpp"

#include "logs/LogLevel.hpp"

Bios::Bios(Log * pLog) {
	this->pLog = pLog;
}

void Bios::read() {
	pLog->printMessage(INFO, "starting to read BIOS code from chip");
}

void Bios::write() {
	pLog->printMessage(INFO, "writing BIOS code to chip");
}

bool Bios::isInfected() {
	pLog->printMessage(INFO, "checking whether BIOS code is infected");
	pLog->printMessage(INFO, "BIOS code is not infected");
	pLog->printMessage(INFO, "BIOS code is already infected");

	return false;
}

void Bios::infect() {
	pLog->printMessage(INFO, "infecting BIOS code");

//	bool old;
//	asm (
//			"btsl %2,%1\n\t" // Turn on zero-based bit #Offset in Base.
//			"sbb %0,%0"      // Use the CF to calculate old.
//			: "=r" (old), "+rm" (*Base)
//	        : "Ir" (Offset)
//	        : "cc"
//	);
}


