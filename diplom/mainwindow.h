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
    QwtPlotCurve * speedingup_curve1;
    QwtPlotCurve * speedingup_curve2;
    QwtPlotCurve * speedingup_curve3;
    ColorMap cmap;


private slots:
    void on_action_2_triggered();
    void on_save_triggered();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_actionGrid_triggered(bool);
    void on_actionNext_frame_triggered();
    void on_actionStep_back_triggered();
    void on_actionInitial_data_toggled(bool );
    void on_actionChar_letter_triggered(bool checked);
    void on_colorsAction_triggered();
    void on_actionInitial_format_triggered();
    void on_actionZoom_out_triggered();
    void on_actionZoom_triggered();
    void on_actionStart_triggered(bool checked);
    void on_doubleSpinBox_L1_valueChanged(double );
    void  redrawPlots();

};

#endif // MAINWINDOW_H
