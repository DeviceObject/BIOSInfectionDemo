
#ifndef VIEW_QT_MAINWINDOW_HPP_
#define VIEW_QT_MAINWINDOW_HPP_

#include "../../controller/Controller.hpp"
#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setController(Controller * pController);
    void init(QPushButton * pReinfectPushButton);
    ~MainWindow();
public slots:
        virtual void handleButton();

private:
    Controller * pController;
    Ui::MainWindow *ui;
};


#endif /* VIEW_QT_MAINWINDOW_HPP_ */
