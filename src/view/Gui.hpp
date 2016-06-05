#ifndef VIEW_GUI_HPP_
#define VIEW_GUI_HPP_

#include "../controller/Controller.hpp"
#include "../exceptions/Exception.hpp"
#include <QLabel>
#include <QPushButton>

class Gui {

private:
	Controller * pController;
    QLabel* pInfectedStatusLabel;
    QPushButton * pReinfectPushButton;
public:
	Gui();
	void setController(Controller * pController);
    int init(int & argc, char **argv);

    void setInfectedState(bool isInfected);
    void update(bool isInfected);
	void showException(Exception & e);

	virtual ~Gui();
};

#endif /* VIEW_GUI_HPP_ */
