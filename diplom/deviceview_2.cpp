#include "deviceview_2.h"
#include <QPainter>
#include <QWheelEvent>
#include <cmath>
#include <QFont>


deviceview_2::deviceview_2(QWidget *parent) :
    QWidget(parent)
{
    this->L1 = 60;
    this->L2 = 100;
    /*this->L3 = 100;
    this->Phi = 0;
    this->Frequency = 0;
    this->scale = 1.0;
    this->text_visibility = false;
    this->speed = 1;*/
}

void deviceview_2::setL1(double L1) {
    this->L1 = L1;
    this->repaint();
}

void deviceview_2::setL2(double L2) {
    this->L2 = L2;
    this->repaint();
}

void deviceview_2::setLoa(double Loa) {
    this->Loa = Loa;
    this->repaint();
}

void deviceview_2::setLbc(double Lbc) {
    this->Lbc = Lbc;
    this->repaint();
}

void deviceview_2::setLdc(double Ldc) {
    this->Ldc = Ldc;
    this->repaint();
}

void deviceview_2::setPhi(double Phi) {
    this->Phi = Phi;
    this->repaint();
}

void  deviceview_2::setFrequency(double Frequency){
    this->Frequency = Frequency;
    this->repaint();
}

void deviceview_2::start(){
    timerid = this->startTimer(30);
}

void deviceview_2::stop(){
    this->killTimer(timerid);
}

void deviceview_2::setDirection(bool v){
    speed = v ? 1 : -1;
}

void deviceview_2::step(double v) {
    Phi += v;
    repaint();
}

void deviceview_2::timerEvent(QTimerEvent *) {
    Phi = Phi + speed * Frequency * 0.18;
    repaint();
}

void deviceview_2::zoom(){
     scale *= 1.25;
     repaint();
 }

void deviceview_2::zoom_out(){
     scale *= 0.8;
     repaint();
 }

void deviceview_2::initial_format(){
     scale = 1.0;
     repaint();
}

void deviceview_2::wheelEvent(QWheelEvent *event) {
    scale *= 1.0 + event->delta() / 10000.0;
    repaint();
}

void deviceview_2::setColorMap(ColorMap c){
    color_map = c;
    repaint();
}

void deviceview_2::setTextVisibility(bool TextVisibility){
    text_visibility = TextVisibility;
    repaint();
}

void deviceview_2::setGridVisibility(bool grid_visibility){
    this->grid_visibility = grid_visibility;
    repaint();
}

void deviceview_2::paintEvent(QPaintEvent *) {
    QPainter painter(this);
        double center_x = width() / 2;
        //double center_y = height() * 0.75;
    painter.drawLine(center_x, 0, center_x, height());

    /*QPainter painter(this);
    double center_x = width() / 2;
    double center_y = height() * 0.75;

    if (grid_visibility){
         painter.setPen(QPen(QColor(200,200,200)));
        for (int i = -width() / (50 * scale)/2; i <= width() / (50 * scale)/2; ++i)
              painter.drawLine(center_x + i * 50 * scale, 0, center_x + i * 50 * scale, height());

         for (int j = -height() / ( 50 * scale )*0.75; j <= height() / ( 50 * scale )*0.25; ++j)
              painter.drawLine(0, center_y + j * 50 * scale, width(), center_y + j * 50 * scale);
    }
    //оси
    painter.setPen(QPen(Qt::red, 2));
    painter.setBrush(Qt::NoBrush);
    painter.drawLine(center_x, 0, center_x, height());
    painter.drawLine(0, center_y, width(), center_y);

    //траектория
    painter.setPen(QPen(Qt::black, 2));
    painter.setBrush(Qt::NoBrush);
    painter.drawEllipse(QPointF(center_x, center_y), L1 * scale, L1 * scale);

    painter.setPen(QPen(QColor(color_map.Contour)));
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

    painter.setPen(QPen(color_map.Contour, 2));
    painter.setBrush(QBrush(color_map.Piston));
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

    painter.setPen(QPen(color_map.L1, 3));
    painter.drawLine(center_x, center_y, X1A + center_x, center_y - Y1A);

    painter.setPen(QPen(color_map.L2, 3));
    painter.drawLine(X1A + center_x, center_y - Y1A, Bx, By);

    painter.setPen(QPen(color_map.L3, 3));
    painter.drawLine(X1A + center_x, center_y - Y1A, Cx, Cy);

    painter.setPen(QPen(color_map.Contour, 2));
    painter.setBrush(QBrush(color_map.Hinge));
    painter.drawEllipse(center_x - 5 * scale, center_y - 5 * scale, 10 * scale, 10 * scale);
    painter.drawEllipse(X1A + center_x - 5 * scale, center_y - Y1A - 5 * scale, 10 * scale, 10 * scale);
    painter.drawEllipse(Bx - 5 * scale, By - 5 * scale, 10 * scale, 10 * scale);
    painter.drawEllipse(Cx - 5 * scale, Cy - 5 * scale, 10 * scale, 10 * scale);


     //Буквы
    if (text_visibility){

        painter.setPen(QPen(Qt::black, 3));
        QString str = QString::fromLocal8Bit("Точка A: X : %1, Y : %2").arg(L1 * cos((135 - Phi)*M_PI/180)).arg( L1 * sin((135 - Phi)*M_PI/180));
        painter.drawText(0, height()-50, str);
        str = QString::fromLocal8Bit("Точка B: X : %1, Y : %2").arg(center_x - B/sqrt(2)).arg(center_y - B/sqrt(2));
        painter.drawText(0, height()-35, str);
        str = QString::fromLocal8Bit("Точка C: X : %1, Y : %2").arg(center_x + C/sqrt(2)).arg( center_x - C/sqrt(2));
        painter.drawText(0, height()-20, str);


        painter.setPen(QPen(Qt::blue, 3));
        QFont font = painter.font();
        font.setPointSize(12 * scale);
        painter.setFont(font);
        painter.drawText(center_x + 10 * scale, center_y - 5 * scale, "O");
        painter.drawText(X1A + center_x + 5 * scale, center_y - Y1A - 10 * scale, "A");
        painter.drawText(Bx + 20 * scale, By - 10 * scale, "B");
        painter.drawText(Cx - 20 * scale, Cy - 10 * scale, "C");
    }
    */

}
