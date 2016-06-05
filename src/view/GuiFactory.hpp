#ifndef VIEW_GUIFACTORY_HPP_
#define VIEW_GUIFACTORY_HPP_

#include "Gui.hpp"

class GuiFactory {
public:
	GuiFactory();
	Gui * create();
	virtual ~GuiFactory();
};

#endif /* VIEW_GUIFACTORY_HPP_ */
