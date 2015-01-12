#include "mainwindow.h"
#include "qinputdialog.h"
#include "ui_mainwindow.h"
#include <qwt_plot_curve.h>
#include <qwt_scale_engine.h>
#include "colormapdialog.h"
#include <cstdio>
#include <QMovie>
#include <QFileDialog>
#include "deviceview.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QStringList devices;
    //devices << "dev1" << "dev2" << "dev3";
    //QString device = QInputDialog::getItem(this, "Select device", "Device:", devices);


    QMovie *movie = new QMovie(ui->mech3d);
    movie->setFileName("animation/res.gif");
    movie->setScaledSize(QSize(100, 100));
    movie->start();
    ui->label_6->setMovie(movie);

    movie = new QMovie(ui->mech3d);
    movie->setFileName("animation/rotation.gif");
    movie->setScaledSize(QSize(100, 100));
    movie->start();
    ui->label_8->setMovie(movie);

    movie = new QMovie(ui->mech3d);
    movie->setFileName("animation/top.gif");
    movie->setScaledSize(QSize(100, 100));
    movie->start();
    ui->label_9->setMovie(movie);

    cmap.L1 = Qt::black;
    cmap.L2 = Qt::green;
    cmap.L3 = Qt::red;
    cmap.triangle = Qt::yellow;
    cmap.rectangle = Qt::blue;
    cmap.Line = Qt::green;
    ui->deviceView->setColorMap(cmap);

    ui->doubleSpinBox_L2->setRange(ui->doubleSpinBox_L1->value(), 100000);
    ui->doubleSpinBox_L3->setRange(ui->doubleSpinBox_L1->value(), 100000);

    speed_curve1 = new QwtPlotCurve();
    speed_curve2 = new QwtPlotCurve();
    speed_curve3 = new QwtPlotCurve();
    speed_curve1->setPen(QPen(Qt::green));
    speed_curve2->setPen(QPen(Qt::blue));
    speed_curve3->setPen(QPen(Qt::red));
    speed_curve1->attach(ui->speedPlot);
    speed_curve2->attach(ui->speedPlot);
    speed_curve3->attach(ui->speedPlot);
    speedingup_curve1 = new QwtPlotCurve();
    speedingup_curve2 = new QwtPlotCurve();
    speedingup_curve3 = new QwtPlotCurve();
    speedingup_curve1->setPen(QPen(Qt::green));
    speedingup_curve2->setPen(QPen(Qt::blue));
    speedingup_curve3->setPen(QPen(Qt::red));
    speedingup_curve1->attach(ui->speedingupPlot);
    speedingup_curve2->attach(ui->speedingupPlot);
    speedingup_curve3->attach(ui->speedingupPlot);
    redrawPlots();

}

void MainWindow::redrawPlots(){
    double L1 = ui->doubleSpinBox_L1->value();
    double L2 = ui->doubleSpinBox_L2->value();
    double L3 = ui->doubleSpinBox_L3->value();
    double phi = ui->doubleSpinBox_phi->value();
    double frequency = ui->frequencySpinBox->value();


    QPolygonF points; //график точки В для механизма 1
    QPolygonF points2;//график точки С для механизма 1
    QPolygonF points3; //график точки А для механизма 1

    QPolygonF points_1; //ускорение
    QPolygonF points_2;
    QPolygonF points_3;

    for (int i = 0; i < 1000; i++){
        double t =  360.0/999 * i; //60.0/1000 * i;
        double x = t / 180 * M_PI; //t * frequency * M_PI / 30;
        double alpha1 = phi/180*M_PI + x;
        double alpha2 = M_PI/2 - alpha1;
        double b_sqrt1 = L2 * L2 - L1 * L1 * sin(alpha1)*sin(alpha1);
        double b_sqrt2 = L3 * L3 - L1 * L1 * sin(alpha2)*sin(alpha2);
        double y1 = - L1 * sin(alpha1) * (1.0 + L1 * cos(alpha1) / sqrt(b_sqrt1));
        y1 *= frequency * M_PI / 30;
        points << QPointF (t, y1);
        double y2 = L1 * sin(alpha2) * (1.0 + L1 * cos(alpha2) / sqrt(b_sqrt2));
        y2 *= frequency * M_PI / 30;
        points2 << QPointF (t, y2);
        points3 << QPointF (t, L1 * frequency * M_PI / 30);
        points_3 << QPointF (t, L1 * frequency * frequency * M_PI * M_PI / 900);


        /*double speedingup_1 = -L1 * cos(alpha1) - L1*L1 * (
                    -sin(alpha1)*sin(alpha1)/sqrt(b_sqrt1) + cos(alpha1) * (
                            L1*L1*cos(alpha1)*sin(alpha1)*sin(alpha1)/b_sqrt1/sqrt(b_sqrt1) +
                            cos(alpha1)/sqrt(b_sqrt1)
                ));
        double speedingup_2 = -L1 * cos(alpha2) - L1*L1 * (
                    -sin(alpha2)*sin(alpha2)/sqrt(b_sqrt2) + cos(alpha2) * (
                            L1*L1*cos(alpha1)*sin(alpha2)*sin(alpha2)/b_sqrt2/sqrt(b_sqrt2) +
                            cos(alpha2)/sqrt(b_sqrt2)
                ));
        speedingup_1 *= frequency * M_PI / 30;
        speedingup_2 *= -frequency * M_PI / 30;*/
        if (i>0) {
            double cx = (points[i].x() + points[i-1].x()) / 2;
            double speedingup_1 = (points[i].y() - points[i-1].y()) / (points[i].x() - points[i-1].x());
            double speedingup_2 = (points2[i].y() - points2[i-1].y()) / (points2[i].x() - points2[i-1].x());
            if (speedingup_1 < 0) speedingup_1 *= -1;
            if (speedingup_2 < 0) speedingup_2 *= -1;
            points_1 << QPointF (cx, speedingup_1 * frequency * 6);
            points_2 << QPointF (cx, speedingup_2 * frequency * 6);
        }
    }
    for (int i = 0; i<1000; ++i) {
        QPointF& p1 = points[i];
        if (p1.y() < 0) p1.setY(-p1.y());
        QPointF& p2 = points2[i];
        if (p2.y() < 0) p2.setY(-p2.y());
    }
    speed_curve1->setData(points);
    speed_curve2->setData(points2);
    speed_curve3->setData(points3);

    speedingup_curve1->setData(points_1);
    speedingup_curve2->setData(points_2);
    speedingup_curve3->setData(points_3);

    ui->speedPlot->axisScaleEngine(QwtPlot::xBottom)->setAttribute(QwtScaleEngine::Floating, true);
    ui->speedingupPlot->axisScaleEngine(QwtPlot::xBottom)->setAttribute(QwtScaleEngine::Floating, true);
    ui->speedPlot->replot();
    ui->speedingupPlot->replot();   
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

void MainWindow::on_actionChar_letter_triggered(bool checked)
{
    ui->deviceView->setTextVisibility(checked);
}

void MainWindow::on_actionInitial_data_toggled(bool c)
{
    ui->deviceView->setDirection(!c);
}

void MainWindow::on_actionStep_back_triggered()
{
     ui->deviceView->step(-15);
}

void MainWindow::on_actionNext_frame_triggered()
{
    ui->deviceView->step(15);
}

void MainWindow::on_actionGrid_triggered(bool c)
{
     ui->deviceView->setGridVisibility(c);
}

void MainWindow::on_pushButton_clicked()
{
    QLabel* l = new QLabel();
    QMovie *movie = new QMovie(this);
    movie->setFileName("animation/res.gif");
    movie->start();
    l->setMovie(movie);
    l->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QLabel* l = new QLabel();
    QMovie *movie = new QMovie(this);
    movie->setFileName("animation/rotation.gif");
    movie->start();
    l->setMovie(movie);
    l->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    QLabel* l = new QLabel();
    QMovie *movie = new QMovie(this);
    movie->setFileName("animation/top.gif");
    movie->start();
    l->setMovie(movie);
    l->show();
}

void MainWindow::on_save_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, QString("Save As"), QString("data.txt"));
    FILE* f = fopen(filename.toStdString().c_str(), "w");
    fprintf(f, "L1=%lf\n", ui->doubleSpinBox_L1->value());
    fprintf(f, "L2=%lf\n", ui->doubleSpinBox_L2->value());
    fprintf(f, "L3=%lf\n", ui->doubleSpinBox_L3->value());
    fprintf(f, "Угол phi=%lf\n", ui->doubleSpinBox_phi->value());
    fprintf(f, "Частота=%lf\n", ui->frequencySpinBox->value());
    fclose(f);
}

void MainWindow::on_action_2_triggered()
{
     QString filename = QFileDialog::getOpenFileName(this, QString("File upload"), QString("data.txt"));
     FILE* f = fopen(filename.toStdString().c_str(), "r");
     double L1, L2, L3, phi, frequency;
     fscanf(f, "L1=%lf\n", &L1);
     fscanf(f, "L2=%lf\n", &L2);
     fscanf(f, "L3=%lf\n", &L3);
     fscanf(f, "Угол phi=%lf\n", &phi);
     fscanf(f, "Частота=%lf\n", &frequency);
     fclose(f);
     ui->doubleSpinBox_L1->setValue(L1);
     ui->doubleSpinBox_L2->setValue(L2);
     ui->doubleSpinBox_L3->setValue(L3);
     ui->doubleSpinBox_phi->setValue(phi);
     ui->frequencySpinBox->setValue(frequency);
}
