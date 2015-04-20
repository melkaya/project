#include "colormapdialog.h"
#include "ui_colormapdialog.h"
#include <qcolordialog.h>

QColor invert(QColor c) {
    return QColor(255-c.red(), 255-c.green(), 255-c.blue(), c.alpha());
}

ColorMapDialog::ColorMapDialog(ColorMap cmap, QWidget *parent):
    QDialog(parent),
    ui(new Ui::ColorMapDialog)
{
    ui->setupUi(this);
    this->cmap = cmap;
    ui->pushButton->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.L1.name(), invert(cmap.L1).name()));
    ui->pushButton_2->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.L2.name(), invert(cmap.L2).name()));
    ui->pushButton_3->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.L3.name(), invert(cmap.L3).name()));
    ui->pushButton_4->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.triangle.name(), invert(cmap.triangle).name()));
    ui->pushButton_5->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.rectangle.name(), invert(cmap.rectangle).name()));
    ui->pushButton_6->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Line.name(), invert(cmap.Line).name()));
    ui->pushButton_7->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Hinge.name(), invert(cmap.Hinge).name()));
    ui->pushButton_8->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Piston.name(), invert(cmap.Piston).name()));
    ui->pushButton_9->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Contour.name(), invert(cmap.Contour).name()));
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
    ui->pushButton->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.L1.name(), invert(cmap.L1).name()));
}

void ColorMapDialog::on_pushButton_2_clicked()
{
    cmap.L2 = QColorDialog::getColor(Qt::green, this);
    ui->pushButton_2->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.L2.name(), invert(cmap.L2).name()));
}

void ColorMapDialog::on_pushButton_3_clicked()
{
    cmap.L3 = QColorDialog::getColor(Qt::magenta, this);
    ui->pushButton_3->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.L3.name(), invert(cmap.L3).name()));
}

void ColorMapDialog::on_pushButton_4_clicked()
{
    cmap.triangle = QColorDialog::getColor(Qt::black, this);
    ui->pushButton_4->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.triangle.name(), invert(cmap.triangle).name()));
}

void ColorMapDialog::on_pushButton_5_clicked()
{
    cmap.rectangle = QColorDialog::getColor(Qt::black, this);
    ui->pushButton_5->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.rectangle.name(), invert(cmap.rectangle).name()));
}

void ColorMapDialog::on_pushButton_6_clicked()
{
    cmap.Line = QColorDialog::getColor(Qt::black, this);
    ui->pushButton_6->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Line.name(), invert(cmap.Line).name()));
}

void ColorMapDialog::on_pushButton_7_clicked()
{
    cmap.Hinge = QColorDialog::getColor(Qt::black, this);
    ui->pushButton_7->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Hinge.name(), invert(cmap.Hinge).name()));
}

void ColorMapDialog::on_pushButton_8_clicked()
{
    cmap.Piston = QColorDialog::getColor(Qt::black, this);
    ui->pushButton_8->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Piston.name(), invert(cmap.Piston).name()));
}

void ColorMapDialog::on_pushButton_9_clicked()
{
    cmap.Contour = QColorDialog::getColor(Qt::black, this);
    ui->pushButton_9->setStyleSheet(QString("background-color:%1; color: %2").arg(cmap.Contour.name(), invert(cmap.Contour).name()));
}

ColorMap ColorMapDialog::getColorMap(){
    return cmap;
}



