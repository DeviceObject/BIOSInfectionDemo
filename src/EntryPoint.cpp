#include "bios/Bios.hpp"
#include "bios/BiosIO.hpp"
#include "logs/LogLevel.hpp"
#include "controller/Controller.hpp"
#include "view/GuiFactory.hpp"
#include "view/Gui.hpp"

const int ERROR_CODE_OK = 0;

int main(int argc, char **argv) {
	int returnValue = ERROR_CODE_OK;

	Log log;
    BiosIO biosIO;
    Patch patch;
	Bios bios(&log);
    bios.setBiosIO(&biosIO);
    bios.setPatch(&patch);

	GuiFactory guiFactory = GuiFactory();
	Controller controller = Controller();

	controller.setBios(&bios);
    Gui * pGui = guiFactory.create();

	try {

        pGui->setController(&controller);
        controller.setGui(pGui);

        int result = pGui->init(argc, argv);
	} catch (Exception & e) {
		log.logException(INFO, e);
	}

	exit:
    delete pGui;

	return returnValue;
}

