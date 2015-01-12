#include "colormapdialog.h"
#include "ui_colormapdialog.h"
#include <qcolordialog.h>

ColorMapDialog::ColorMapDialog(ColorMap cmap, QWidget *parent):
    QDialog(parent),
    ui(new Ui::ColorMapDialog)
{
    ui->setupUi(this);
    this->cmap = cmap;
    ui->pushButton->setStyleSheet(QString("background-color:%1").arg(cmap.L1.name()));
}

ColorMapDialog::~ColorMapDialog()
{
    delete ui;
}

void ColorMapDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void ColorMapDialog::on_pushButton_clicked()
{
    cmap.L1 = QColorDialog::getColor(Qt::red, this);
    ui->pushButton->setStyleSheet(QString("background-color:%1").arg(cmap.L1.name()));
}

ColorMap ColorMapDialog::getColorMap(){
    return cmap;
}
