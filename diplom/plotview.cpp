#include "plotview.h"
#include <QPainter>

PlotView::PlotView(QWidget *parent) :
    QWidget(parent)
{
}

void PlotView::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.drawLine(5, 5, 100, 100);
}
