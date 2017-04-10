#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent* event) {
    qDebug() << "Mouse event!: x,y = " << event->x() << "," << event->y();
    if (event->x() < 400) {
        qDebug() << "LEFT";
        ui->label->setText("left");
        ui->centralWidget->setStyleSheet("background-color:red;");
    } else {
        qDebug() << "RIGHT";
        ui->label->setText("right");
        ui->centralWidget->setStyleSheet("background-color:green;");
    }
}
