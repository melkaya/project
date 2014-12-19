#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qwt_plot_curve.h>
#include "ColorMap.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    QwtPlotCurve * speed_curve1;
    QwtPlotCurve * speed_curve2;
    QwtPlotCurve * speed_curve3;
    ColorMap cmap;


private slots:
    void on_colorsAction_triggered();
    void on_actionInitial_format_triggered();
    void on_actionZoom_out_triggered();
    void on_actionZoom_triggered();
    void on_actionStart_triggered(bool checked);
    void on_doubleSpinBox_L1_valueChanged(double );
    void  redrawPlots();

};

#endif // MAINWINDOW_H
