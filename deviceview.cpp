#include "deviceview.h"
#include <QPainter>
#include <cmath>

DeviceView::DeviceView(QWidget *parent) :
    QWidget(parent)
{
    this->L1 = 60;
    this->L2 = 100;
    this->L3 = 100;
    this->Phi = 0;

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

void DeviceView::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    double center_x = width() / 2;
    double center_y = height() * 0.75;
    painter.setPen(QPen(Qt::gray));
    painter.drawLine(center_x, center_y, center_x + 1000 * cos(M_PI/4), center_y - 1000 * sin(M_PI/4));
    painter.drawLine(center_x, center_y, center_x - 1000 * cos(M_PI/4), center_y - 1000 * sin(M_PI/4));

    double phi_radian = Phi * M_PI / 180;
    double B = sqrt(L2*L2 - L1*L1*sin(phi_radian)*sin(phi_radian)) + L1*cos(phi_radian);
    double Bx = center_x - B/ sqrt(2);
    double By = center_y - B/sqrt(2);

    double amega_radian = (90 - Phi) * M_PI / 180;
    double C = sqrt(L3*L3 - L1*L1*sin(amega_radian)*sin(amega_radian)) + L1*cos(amega_radian);
    double Cx = center_x + C/ sqrt(2);
    double Cy = center_y - C/sqrt(2);
    
	const double n = 20;

    painter.setPen(QPen(Qt::black, 2));
    painter.setBrush(QBrush(Qt::gray));
    QPolygonF polygon_B;
    polygon_B.append(QPointF(Bx-n-10, By-10));
    polygon_B.append(QPointF(Bx-10, By-n-10));
    polygon_B.append(QPointF(Bx+n+10, By+10));
    polygon_B.append(QPointF(Bx+10, By+n+10));
    painter.drawPolygon(polygon_B);

    QPolygonF polygon_C;
    polygon_C.append(QPointF(Cx+10, Cy-n-10));
    polygon_C.append(QPointF(Cx+n+10, Cy-10));
    polygon_C.append(QPointF(Cx-10, Cy+n+10));
    polygon_C.append(QPointF(Cx-n-10, Cy+10));
    painter.drawPolygon(polygon_C);

    double X1A = L1 * cos((135 - Phi)*M_PI/180);
    double Y1A = L1 * sin((135 - Phi)*M_PI/180);
    painter.setPen(QPen(Qt::black, 3));
    painter.drawLine(center_x, center_y, X1A + center_x, center_y - Y1A);

    painter.setPen(QPen(Qt::red, 3));
    painter.drawLine(X1A + center_x, center_y - Y1A, Bx, By);

     painter.setPen(QPen(Qt::green, 3));
     painter.drawLine(X1A + center_x, center_y - Y1A, Cx, Cy);

     painter.setPen(QPen(Qt::black, 2));
     painter.setBrush(QBrush(Qt::yellow));
     painter.drawEllipse(center_x - 5, center_y - 5, 10, 10);
     painter.drawEllipse(X1A + center_x - 5, center_y - Y1A - 5, 10, 10);
     painter.drawEllipse(Bx - 5, By - 5, 10, 10);
     painter.drawEllipse(Cx- 5, Cy - 5, 10, 10);
}
