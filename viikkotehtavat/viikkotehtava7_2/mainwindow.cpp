#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->count, &QPushButton::clicked,
            this, &MainWindow::countHandler);
    connect(ui->reset, &QPushButton::clicked,
            this, &MainWindow::resetHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button -> objectName();
    qDebug()<<name<<"toimii";
    value++;
    ui->display->setText(QString::number(value));

}

void MainWindow::resetHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button -> objectName();
    qDebug()<<name<<"toimii";
    value = 0;
    ui->display->setText(QString::number(value));

}
