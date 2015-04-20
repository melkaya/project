#include <QtGui/QApplication>
#include "mainwindow.h"
#include "startdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartDialog d;
    d.exec();
    int selected = d.getSelected();
    MainWindow w(selected);
    w.show();
    return a.exec();
}
