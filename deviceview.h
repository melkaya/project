#ifndef DEVICEVIEW_H
#define DEVICEVIEW_H

#include <QWidget>

class DeviceView : public QWidget
{
Q_OBJECT
public:
    explicit DeviceView(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);

signals:

public slots:
    void setL1(double);
    void setL2(double);
    void setL3(double);
    void setPhi(double);
    void start();
    void stop();


private:
    double L1;
    double L2;
    double L3;
    double Phi;
    int timerid;
};

#endif // DEVICEVIEW_H
