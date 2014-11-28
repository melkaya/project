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

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_doubleSpinBox_L1_valueChanged(double v)
{
    ui->doubleSpinBox_L2->setRange(v, 100000);
    ui->doubleSpinBox_L3->setRange(v, 100000);
}

void MainWindow::on_actionStart_triggered(bool checked)
{
    if (checked)
        ui->deviceView->start();
    else
        ui->deviceView->stop();
}
