#include "GuiFactory.hpp"

GuiFactory::GuiFactory() {
}

Gui * GuiFactory::create() {
	Gui * gui = new Gui();
	return gui;
}

GuiFactory::~GuiFactory() {	
}

