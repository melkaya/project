# -------------------------------------------------
# Project created by QtCreator 2014-11-08T12:55:04
# -------------------------------------------------
QT += opengl
INCLUDEPATH += /usr/include/qwt-qt4
LIBS += -l \
    qwt-qt4
TARGET = diplom
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    deviceview.cpp \
    plotview.cpp \
    colormapdialog.cpp \
    deviceview_2.cpp \
    deviceview_3.cpp
HEADERS += mainwindow.h \
    deviceview.h \
    plotview.h \
    colormapdialog.h \
    ColorMap.h \
    deviceview_2.h \
    deviceview_3.h
FORMS += mainwindow.ui \
    colormapdialog.ui
RESOURCES += resources.qrc
