#include "bios/Bios.hpp"
#include "bios/BiosIO.hpp"

//#include "bios/MockBios.hpp"
#include "bios/MockBiosIO.hpp"
#include "bios/MockBiosVector.hpp"
#include "bios/patch/MockPatch.hpp"

#include "concurrency/ReentrantLock.hpp"

#include "logs/LogLevel.hpp"
#include "controller/Controller.hpp"
#include "view/GuiFactory.hpp"
#include "view/Gui.hpp"

const int ERROR_CODE_OK = 0;

int main(int argc, char **argv) {
	int returnValue = ERROR_CODE_OK;

	Log log;
//    BiosIO biosIO;
    MockBiosIO biosIO;
    biosIO.setLog(&log);
//    Patch patch;
    MockPatch patch;
    patch.setLog(&log);
//    BiosVector biosBytesVector;
    MockBiosVector biosBytesVector;
    biosBytesVector.setLog(&log);
    ReentrantLock lock;
    Bios bios;
    bios.setLock(&lock);
    bios.setLog(&log);
    bios.setBiosBytesVector(&biosBytesVector);
    bios.setBiosIO(&biosIO);
    bios.setPatch(&patch);
    //MockBios mockBios;
    //mockBios.setLog(&log);
	GuiFactory guiFactory = GuiFactory();
	Controller controller = Controller();

    controller.setBios(&bios);
//    controller.setBios(&mockBios);
    Gui * pGui = guiFactory.create();

	try {

        pGui->setController(&controller);
        controller.setGui(pGui);

        pGui->init(argc, argv);
	} catch (Exception & e) {
		log.logException(INFO, e);
	}

    delete pGui;

	return returnValue;
}

