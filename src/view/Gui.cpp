#include "Gui.hpp"
#include "qt/MainWindow.hpp"
#include <QApplication>
#include <QCoreApplication>
#include <QMessageBox>
#include <QWidget>
#include <QVBoxLayout>
#include <string>

Gui::Gui() {
    this->pInfectedStatusLabel = 0;
    this->pReinfectPushButton = 0;
}

void Gui::setController(Controller * pController) {
	this->pController = pController;
}

int Gui::init(int &argc, char **argv) {
	QApplication a(argc, argv);
	MainWindow w;
    this->pInfectedStatusLabel = new QLabel();
    this->pReinfectPushButton = new QPushButton();
    w.setController(pController);

    this->pController->initGui();

    w.init(pReinfectPushButton);
    QWidget * wdg = new QWidget(&w);
    QVBoxLayout *vlay = new QVBoxLayout(wdg);
    vlay->addWidget(pInfectedStatusLabel);
    vlay->addWidget(pReinfectPushButton);
    wdg->setLayout(vlay);
    w.setCentralWidget(wdg);

	w.show();


    return a.exec();
}

void Gui::showException(Exception & e) {
    QMessageBox * pExceptionQMessageBox = new QMessageBox();
    std::string * exceptionAsString = e.toString();
    QString qstring = QString(exceptionAsString->c_str());
    delete exceptionAsString;
    pExceptionQMessageBox->setText(qstring);
    pExceptionQMessageBox->show();
}

void Gui::update(bool isInfected) {
    setInfectedState(isInfected);
}

void Gui::setInfectedState(bool isInfected) {
    QString text = QString("Is BIOS code infected: ");
    if (isInfected)
        text.append("infected");
    else
        text.append("not infected");
    pInfectedStatusLabel->setText(text);
}

Gui::~Gui() {	
}

