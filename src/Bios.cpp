#include "Bios.h"

Bios::Bios(Log * log) {
	this->log = log;
}

void Bios::read() {
	log->printMessage("info: starting to readBios");
}

void Bios::write() {
	log->printMessage("info: writing bios");
}

bool Bios::isInfected() {
	log->printMessage("info: checking whether Bios is infected");
	log->printMessage("info: Bios is not infected");
	log->printMessage("info: Bios already infected");

	return false;
}

void Bios::infect() {
	log->printMessage("info: infecting bios");

	bool old;
//	asm (
//			"btsl %2,%1\n\t" // Turn on zero-based bit #Offset in Base.
//			"sbb %0,%0"      // Use the CF to calculate old.
//			: "=r" (old), "+rm" (*Base)
//	        : "Ir" (Offset)
//	        : "cc"
//	);
}


