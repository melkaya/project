#ifndef PLOTVIEW_H
#define PLOTVIEW_H

#include <QWidget>

class PlotView : public QWidget
{
Q_OBJECT
public:
    explicit PlotView(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);

signals:

public slots:

};

#endif // PLOTVIEW_H
