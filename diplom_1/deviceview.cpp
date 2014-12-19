#include "deviceview.h"
#include <QPainter>
#include <QWheelEvent>
#include <cmath>

DeviceView::DeviceView(QWidget *parent) :
    QWidget(parent)
{
    this->L1 = 60;
    this->L2 = 100;
    this->L3 = 100;
    this->Phi = 0;
    this->Frequency = 0;
    this->scale = 1.0;
}

void DeviceView::setL1(double L1) {
    this->L1 = L1;
    this->repaint();
}

void DeviceView::setL2(double L2) {
    this->L2 = L2;
    this->repaint();
}

void DeviceView::setL3(double L3) {
    this->L3 = L3;
    this->repaint();
}

void DeviceView::setPhi(double Phi) {
    this->Phi = Phi;
    this->repaint();
}

void  DeviceView::setFrequency(double Frequency){
    this->Frequency = Frequency;
    this->repaint();
}

void DeviceView::start(){
    timerid = this->startTimer(30);
}

void DeviceView::stop(){
    this->killTimer(timerid);
}

void DeviceView::timerEvent(QTimerEvent *) {
    Phi = Phi + 1;
    repaint();
}

void DeviceView::zoom(){
     scale *= 1.25;
     repaint();
 }

void DeviceView::zoom_out(){
     scale *= 0.8;
     repaint();
 }

void DeviceView::initial_format(){
     scale = 1.0;
     repaint();
}

void DeviceView::wheelEvent(QWheelEvent *event) {
    scale *= 1.0 + event->delta() / 10000.0;
    repaint();
}

void DeviceView::setColorMap(ColorMap c){
    color_map = c;
    repaint();
}

void DeviceView::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    double center_x = width() / 2;
    double center_y = height() * 0.75;

    painter.setBrush(QBrush(color_map.triangle));
    QPolygonF polygon_triangle;
    polygon_triangle.append(QPointF(center_x, center_y));
    polygon_triangle.append(QPointF(center_x  - 15 * scale, center_y + 15 * scale));
    polygon_triangle.append(QPointF(center_x + 15 * scale, center_y + 15 * scale));
    painter.drawPolygon(polygon_triangle);

    painter.setBrush(QBrush(color_map.rectangle));
    QPolygonF polygon_rectangle;
    polygon_rectangle.append(QPointF(center_x - 15 * scale, center_y + 15 * scale));
    polygon_rectangle.append(QPointF(center_x - 15 * scale, center_y + 20 * scale));
    polygon_rectangle.append(QPointF(center_x + 15 * scale, center_y + 20 * scale));
    polygon_rectangle.append(QPointF(center_x + 15 * scale, center_y + 15 * scale));
    painter.drawPolygon(polygon_rectangle);

    painter.setPen(QPen(color_map.Line));
    painter.drawLine(center_x, center_y, center_x + 1000 * cos(M_PI/4) * scale, center_y - 1000 * sin(M_PI/4) * scale);
    painter.drawLine(center_x, center_y, center_x - 1000 * cos(M_PI/4) * scale, center_y - 1000 * sin(M_PI/4) * scale);

    double phi_radian = Phi * M_PI / 180;
    double B = (sqrt(L2*L2 - L1*L1*sin(phi_radian)*sin(phi_radian)) + L1*cos(phi_radian));
    double Bx = center_x - B/sqrt(2) * scale;
    double By = center_y - B/sqrt(2) * scale;

    double amega_radian = (90 - Phi) * M_PI / 180;
    double C = (sqrt(L3*L3 - L1*L1*sin(amega_radian)*sin(amega_radian)) + L1*cos(amega_radian));
    double Cx = center_x + C/sqrt(2) * scale;
    double Cy = center_y - C/sqrt(2) * scale;
    const double n = 20;

    painter.setPen(QPen(color_map.L1, 2));
    painter.setBrush(QBrush(Qt::gray));

    QPolygonF polygon_B;
    polygon_B.append(QPointF(Bx - n * scale - 10 * scale, By - 10 * scale));
    polygon_B.append(QPointF(Bx - 10 * scale, By - n * scale - 10 * scale));
    polygon_B.append(QPointF(Bx + n * scale + 10 * scale, By+10 * scale));
    polygon_B.append(QPointF(Bx + 10 * scale, By + n *scale + 10 * scale));
    painter.drawPolygon(polygon_B);

    QPolygonF polygon_C;
    polygon_C.append(QPointF(Cx+10 * scale, Cy-n * scale -10 * scale));
    polygon_C.append(QPointF(Cx+n * scale+10 * scale, Cy-10 * scale));
    polygon_C.append(QPointF(Cx-10 * scale, Cy+n * scale +10 * scale));
    polygon_C.append(QPointF(Cx-n * scale -10 * scale, Cy+10 * scale));
    painter.drawPolygon(polygon_C);

    double X1A = L1 * cos((135 - Phi)*M_PI/180) * scale;
    double Y1A = L1 * sin((135 - Phi)*M_PI/180) * scale;
    painter.setPen(QPen(Qt::black, 3));
    painter.drawLine(center_x, center_y, X1A + center_x, center_y - Y1A);

    painter.setPen(QPen(Qt::red, 3));
    painter.drawLine(X1A + center_x, center_y - Y1A, Bx, By);

    painter.setPen(QPen(Qt::green, 3));
    painter.drawLine(X1A + center_x, center_y - Y1A, Cx, Cy);

    painter.setPen(QPen(color_map.L1, 2));
    painter.setBrush(QBrush(Qt::yellow));
    painter.drawEllipse(center_x - 5 * scale, center_y - 5 * scale, 10 * scale, 10 * scale);
    painter.drawEllipse(X1A + center_x - 5 * scale, center_y - Y1A - 5 * scale, 10 * scale, 10 * scale);
    painter.drawEllipse(Bx - 5 * scale, By - 5 * scale, 10 * scale, 10 * scale);
    painter.drawEllipse(Cx - 5 * scale, Cy - 5 * scale, 10 * scale, 10 * scale);

     //Буквы
    painter.setPen(QPen(Qt::blue, 3));
    painter.drawText(center_x + 10 * scale, center_y - 5 * scale, "O");
    painter.drawText(X1A + center_x + 5 * scale, center_y - Y1A - 10 * scale, "A");
    painter.drawText(Bx + 20 * scale, By - 10 * scale, "B");
    painter.drawText(Cx - 20 * scale, Cy - 10 * scale, "C");
}



