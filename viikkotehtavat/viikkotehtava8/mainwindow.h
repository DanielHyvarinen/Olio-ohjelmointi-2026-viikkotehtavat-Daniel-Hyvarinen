#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <string>
#include <QDebug>
//#include <QPushButton> lambdafunktiolla
#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();


private:
    Ui::MainWindow *ui;
    int player1Time;
    int player2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    QTimer * pQTimer;
    void updateProgressBar();
    void setGameInfoText();

signals:

private slots:

    void handleSwitch1();
    void handleSwitch2();
    void handleStart();
    void handleStop();
    void handleTime120();
    void handleTime300();
    void clockStart();

    //lambdafunktiolla
    // void handleSwitch1(QPushButton *);
    // void handleSwitch2(QPushButton *);
    // void handleStart(QPushButton *);
    // void handleStop(QPushButton *);
    // void handleTime120(QPushButton *);
    // void handleTime300(QPushButton *);
};
#endif // MAINWINDOW_H
