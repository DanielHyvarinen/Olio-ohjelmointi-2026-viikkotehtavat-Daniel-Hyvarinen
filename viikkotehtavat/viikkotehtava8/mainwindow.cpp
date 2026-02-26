#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);

    connect(ui->switch1, &QPushButton::clicked,
            this, &MainWindow::handleSwitch1);

    connect(ui->switch2, &QPushButton::clicked,
            this, &MainWindow::handleSwitch2);

    connect(ui->start, &QPushButton::clicked,
            this, &MainWindow::handleStart);

    connect(ui->stop, &QPushButton::clicked,
            this, &MainWindow::handleStop);

    connect(ui->time120, &QPushButton::clicked,
            this, &MainWindow::handleTime120);

    connect(ui->time300, &QPushButton::clicked,
            this, &MainWindow::handleTime300);

    connect(pQTimer, &QTimer::timeout,
            this, &MainWindow::clockStart);

    // connect(pQTimer, &QTimer::timeout,
    //         this, &MainWindow::handleSwitch2);

    //lambdafunktiolla
    // connect(ui->switch1, &QPushButton::clicked,
    //         this, [this](){handleSwitch1(ui->switch1);});

    // connect(ui->switch2, &QPushButton::clicked,
    //         this, [this](){handleSwitch2(ui->switch2);});

    // connect(ui->start, &QPushButton::clicked,
    //         this, [this](){handleStart(ui->start);});

    // connect(ui->stop, &QPushButton::clicked,
    //         this, [this](){handleStop(ui->stop);});

    // connect(ui->time120, &QPushButton::clicked,
    //         this, [this](){handleTime120(ui->time120);});

    // connect(ui->time300, &QPushButton::clicked,
    //         this, [this](){handleTime300(ui->time300);});

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleSwitch1()
{
    qDebug()<<"toimii";
    // player1Time = player1Time - 1;
    // ui->progress1->setValue(player1Time);
    currentPlayer = 2;
    ui->label->setText("Player 2 turn");
}


void MainWindow::handleSwitch2()
{
    qDebug()<<"toimii";
    // player2Time = player2Time - 1;
    // ui->progress2->setValue(player2Time);
    currentPlayer = 1;
    ui->label->setText("Player 1 turn");
}


void MainWindow::handleStart()
{
    qDebug()<<"toimii";
    currentPlayer = 1;
    pQTimer->start(1000);
    ui->label->setText("Game ongoing");

}


void MainWindow::handleStop()
{
    qDebug()<<"toimii";
    pQTimer->stop();
    ui->label->setText("Game stopped");
}


void MainWindow::handleTime120()
{
    qDebug()<<"toimii";
    player1Time = 120;
    player2Time = 120;
    ui->progress1->setMaximum(120);
    ui->progress2->setMaximum(120);
    ui->progress1->setValue(120);
    ui->progress2->setValue(120);
    ui->label->setText("Press start");
}


void MainWindow::handleTime300()
{
    qDebug()<<"toimii";
    player1Time = 300;
    player2Time = 300;
    ui->progress1->setMaximum(300);
    ui->progress2->setMaximum(300);
    ui->progress1->setValue(300);
    ui->progress2->setValue(300);
    ui->label->setText("Press start");
}

void MainWindow::clockStart()
{

    if(currentPlayer == 1)
    {
        player1Time = player1Time - 1;
        ui->progress1->setValue(player1Time);
        if(player1Time == 0)
        {
            ui->label->setText("Player 2 won!");
        }
    }

    else
    {
        player2Time = player2Time - 1;
        ui->progress2->setValue(player2Time);
        if(player2Time == 0)
        {
            ui->label->setText("Player 1 won!");
        }
    }
}

