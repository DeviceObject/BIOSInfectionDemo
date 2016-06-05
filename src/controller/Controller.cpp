#include "Controller.hpp"
#include "../view/Gui.hpp"
#include "../exceptions/BiosNotReadableException.hpp"
#include "../exceptions/BiosNotWriteableException.hpp"

Controller::Controller() {
	this->pBios = 0;
	this->pGui = 0;
}
void Controller::setGui (Gui * pGui)  {
	this->pGui = pGui;
}
void Controller::setBios (Bios * pBios)  {
	this->pBios = pBios;
}
void Controller::initGui() {
    bool isInfected = pBios->isInfected();
    pGui->update(isInfected);
}
void Controller::ensureBiosInfected() {
	try {
        pBios->ensureInfected();
        bool isInfected = pBios->isInfected();
        pGui->update(isInfected);
	} catch (BiosNotReadableException& e) {
		pGui->showException(e);
	} catch (BiosNotWriteableException& e) {
		pGui->showException(e);
	}
}

Controller::~Controller() {
}

