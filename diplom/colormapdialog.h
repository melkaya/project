#ifndef COLORMAPDIALOG_H
#define COLORMAPDIALOG_H

#include <QDialog>
#include "ColorMap.h"

namespace Ui {
    class ColorMapDialog;
}

class ColorMapDialog : public QDialog {
    Q_OBJECT
public:
    ColorMapDialog(ColorMap, QWidget *parent = 0);
    ~ColorMapDialog();
    ColorMap getColorMap();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ColorMapDialog *ui;
    ColorMap cmap;

private slots:
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // COLORMAPDIALOG_H
