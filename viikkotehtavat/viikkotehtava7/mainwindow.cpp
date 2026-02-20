#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //yhdistetään laskimen näppäimet funkioihin
    connect(ui->enter, &QPushButton::clicked,
            this, [this](){handleEnter();});

    connect(ui->clear, &QPushButton::clicked,
            this, [this](){handleClear();});

    connect(ui->B0, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B0);});
    connect(ui->B1, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B1);});
    connect(ui->B2, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B2);});
    connect(ui->B3, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B3);});
    connect(ui->B4, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B4);});
    connect(ui->B5, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B5);});
    connect(ui->B6, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B6);});
    connect(ui->B7, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B7);});
    connect(ui->B8, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B8);});
    connect(ui->B9, &QPushButton::clicked,
            this, [this](){handleNumbers(ui->B9);});


    connect(ui->BAdd, &QPushButton::clicked,
            this,[this](){handleOperation(ui->BAdd);});
    connect(ui->BSub, &QPushButton::clicked,
            this,[this](){handleOperation(ui->BSub);});
    connect(ui->BMul, &QPushButton::clicked,
            this,[this](){handleOperation(ui->BMul);});
    connect(ui->BDiv, &QPushButton::clicked,
            this,[this](){handleOperation(ui->BDiv);});

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleEnter()
{
    //muunnetaan LineEditeistä saadut numerot floateiksi,
    //jotta niillä voidaan laskea
    a = num1.toFloat();
    b = num2.toFloat();

    switch(op)
    {
        case 0:
            result = a + b;
            break;

        case 1:
            result = a - b;
            break;

        case 2:
            result = a * b;
            break;

        case 3:
            result = a / b;
            break;
    }

    //muunnetaan takaisin QStringiksi, jotta LineEdit voi
    //näyttää sen
    ui->dis3->setText(QString::number(result));
    qDebug()<<result;
    state = 0;
}

void MainWindow::handleClear()
{
    //tyhjennetään LineEditit seuraavaa laskua varten
    ui->dis1->setText("");
    ui->dis2->setText("");
    ui->dis3->setText("");
    state = 0;
}

void MainWindow::handleNumbers(QPushButton * ptr)
{
    //otetaan LineEditiin kirjoitettu teksti talteen
    //muuttujiin num1 ja num2
    if(state == 0) //dis1
    {
        num1 = ui->dis1->text();
        num1 = num1 + ptr->text();
        ui->dis1->setText(num1);
    }
    else if(state == 1) //dis2
    {
        num2 = ui->dis2->text();
        num2 = num2 + ptr->text();
        ui->dis2->setText(num2);
    }
}

void MainWindow::handleOperation(QPushButton * ptr)
{
    //otetaan operaatio talteen
    operation = ptr->text();
    if(operation == '+')
    {
        op = 0;
    }
    else if(operation == '-')
    {
        op = 1;
    }
    else if(operation == '*')
    {
        op = 2;
    }
    else if(operation == '/')
    {
        op = 3;
    }

    state = 1;
    //muutetaan state, jotta siirrytään
    //seuraavaan LineEditiin
}



