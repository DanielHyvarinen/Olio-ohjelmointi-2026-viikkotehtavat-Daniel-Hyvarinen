#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <string>
#include <iostream>
#include <QDebug>

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

private:
    Ui::MainWindow *ui;
    int state = 0;
    QString operation;
    QString num1;
    QString num2;
    float a = 0;
    float b = 0;
    float result = 0;
    int op = -1;

private slots:
    void handleEnter();
    void handleClear();
    void handleNumbers(QPushButton *);
    void handleOperation(QPushButton *);
};
#endif // MAINWINDOW_H
