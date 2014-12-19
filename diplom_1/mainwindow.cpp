#include "mainwindow.h"
#include "qinputdialog.h"
#include "ui_mainwindow.h"
#include <qwt_plot_curve.h>
#include "colormapdialog.h"
#include <cstdio>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList devices;
    devices << "dev1" << "dev2" << "dev3";
    QString device = QInputDialog::getItem(this, "Select device", "Device:", devices);


    cmap.L1 = Qt::black;
    cmap.L2 = Qt::green;
    cmap.L3 = Qt::red;
    cmap.triangle = Qt::yellow;
    cmap.rectangle = Qt::blue;
    cmap.Line = Qt::green;
    ui->deviceView->setColorMap(cmap);

    speed_curve1 = new QwtPlotCurve();
    speed_curve2 = new QwtPlotCurve();
    speed_curve3 = new QwtPlotCurve();
    speed_curve1->setPen(QPen(Qt::green));
    speed_curve2->setPen(QPen(Qt::blue));
    speed_curve3->setPen(QPen(Qt::red));
    speed_curve1->attach(ui->speedPlot);
    speed_curve2->attach(ui->speedPlot);
    speed_curve3->attach(ui->speedPlot);
    redrawPlots();

}

void MainWindow::redrawPlots(){
    double L1 = ui->doubleSpinBox_L1->value();
    double L2 = ui->doubleSpinBox_L2->value();
    double L3 = ui->doubleSpinBox_L3->value();
    double phi = ui->doubleSpinBox_phi->value();
    double frequency = ui->frequencySpinBox->value();


    QPolygonF points; //график точки В для механизма 1

    for (int i = 0; i < 200; i++){
        double x = 2 * M_PI / 200 * i;
        double alpha = phi + x;
        double y = - L1 * sin(alpha) * (1.0 + L1 * cos(alpha) / sqrt(L2 * L2 - L1 * L1 * sin(alpha)*sin(alpha)));
        points << QPointF (x, y);
    }
    speed_curve1->setData(points);

    QPolygonF points2;//график точки С для механизма 1

    for (int i = 0; i < 200; i++){
        double x = 2 * M_PI / 200 * i;
        double alpha = M_PI / 2 - (phi + x);
        double y = L1 * sin(alpha) * (1.0 + L1 * cos(alpha) / sqrt(L2 * L2 - L1 * L1 * sin(alpha)*sin(alpha)));
        points2 << QPointF (x, y);
    }
    speed_curve2->setData(points2);

    QPolygonF points3; //график точки А для механизма 1

    for (int i = 0; i < 200; i++){
        double x = 2 * M_PI / 200 * i;
        double alpha = phi;
        double y = - L1 * sin(alpha) * (1.0 + L1 * cos(alpha) / sqrt(L2 * L2 - L1 * L1 * sin(alpha)*sin(alpha)));
        points3 << QPointF (x, y);
    }
    speed_curve3->setData(points3);


    ui->speedPlot->replot();
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

void MainWindow::on_actionZoom_triggered()
{
    ui->deviceView->zoom();
}

void MainWindow::on_actionZoom_out_triggered()
{
    ui->deviceView->zoom_out();
}

void MainWindow::on_actionInitial_format_triggered()
{
    ui->deviceView->initial_format();
}

void MainWindow::on_colorsAction_triggered()
{
    ColorMapDialog d(cmap);
    d.exec();
    cmap = d.getColorMap();
    ui->deviceView->setColorMap(cmap);
    //QColor c = QColorDialog::getColor(Qt::red, this);
}
