#ifndef DEVICEVIEW_H
#define DEVICEVIEW_H
#include "ColorMap.h"
#include <QWidget>

class DeviceView : public QWidget
{
Q_OBJECT
public:
    explicit DeviceView(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void wheelEvent(QWheelEvent *event);

signals:

public slots:
    void setL1(double);
    void setL2(double);
    void setL3(double);
    void setPhi(double);
    void setFrequency(double);
    void start();
    void stop();
    void zoom();
    void zoom_out();
    void initial_format();
    void setColorMap(ColorMap);
    void setTextVisibility(bool);
    void setDirection(bool);
    void step(double);
    void setGridVisibility(bool);

private:
    double scale;
    double L1;
    double L2;
    double L3;
    double Phi;
    double Frequency;
    int timerid;
    ColorMap color_map;
    bool text_visibility;
    double speed;
    bool grid_visibility;
};

#endif // DEVICEVIEW_H
