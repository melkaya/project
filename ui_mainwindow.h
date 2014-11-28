/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "deviceview.h"
#include "plotview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionStep_back;
    QAction *action_3;
    QAction *action_9;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QAction *action_13;
    QAction *action_16;
    QAction *action_17;
    QAction *action_18;
    QAction *action_19;
    QAction *action_20;
    QAction *action_21;
    QAction *action_22;
    QAction *action_23;
    QAction *action_24;
    QAction *action_25;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_L1;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_L2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_L3;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_phi;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    DeviceView *deviceView;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    PlotView *widget_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_7;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/book-question.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionStart->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/control.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/icons/icons/control-pause.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStart->setIcon(icon1);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/control-pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStep_back = new QAction(MainWindow);
        actionStep_back->setObjectName(QStringLiteral("actionStep_back"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/control-double-180.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_back->setIcon(icon3);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QStringLiteral("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QStringLiteral("action_11"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QStringLiteral("action_12"));
        action_13 = new QAction(MainWindow);
        action_13->setObjectName(QStringLiteral("action_13"));
        action_16 = new QAction(MainWindow);
        action_16->setObjectName(QStringLiteral("action_16"));
        action_17 = new QAction(MainWindow);
        action_17->setObjectName(QStringLiteral("action_17"));
        action_18 = new QAction(MainWindow);
        action_18->setObjectName(QStringLiteral("action_18"));
        action_19 = new QAction(MainWindow);
        action_19->setObjectName(QStringLiteral("action_19"));
        action_20 = new QAction(MainWindow);
        action_20->setObjectName(QStringLiteral("action_20"));
        action_21 = new QAction(MainWindow);
        action_21->setObjectName(QStringLiteral("action_21"));
        action_22 = new QAction(MainWindow);
        action_22->setObjectName(QStringLiteral("action_22"));
        action_23 = new QAction(MainWindow);
        action_23->setObjectName(QStringLiteral("action_23"));
        action_24 = new QAction(MainWindow);
        action_24->setObjectName(QStringLiteral("action_24"));
        action_25 = new QAction(MainWindow);
        action_25->setObjectName(QStringLiteral("action_25"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(100, 0));
        widget_3->setMaximumSize(QSize(200, 16777215));
        widget_3->setBaseSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        doubleSpinBox_L1 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_L1->setObjectName(QStringLiteral("doubleSpinBox_L1"));
        doubleSpinBox_L1->setDecimals(2);
        doubleSpinBox_L1->setMaximum(100000);
        doubleSpinBox_L1->setValue(60);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_L1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        doubleSpinBox_L2 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_L2->setObjectName(QStringLiteral("doubleSpinBox_L2"));
        doubleSpinBox_L2->setMaximum(100000);
        doubleSpinBox_L2->setValue(100);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_L2);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        doubleSpinBox_L3 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_L3->setObjectName(QStringLiteral("doubleSpinBox_L3"));
        doubleSpinBox_L3->setMaximum(100000);
        doubleSpinBox_L3->setValue(100);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_L3);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        doubleSpinBox_phi = new QDoubleSpinBox(widget_3);
        doubleSpinBox_phi->setObjectName(QStringLiteral("doubleSpinBox_phi"));
        doubleSpinBox_phi->setMaximum(360);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_phi);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        doubleSpinBox = new QDoubleSpinBox(widget_3);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMaximum(100000);

        formLayout->setWidget(5, QFormLayout::FieldRole, doubleSpinBox);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout->addWidget(widget_3);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        deviceView = new DeviceView(tab);
        deviceView->setObjectName(QStringLiteral("deviceView"));

        horizontalLayout_2->addWidget(deviceView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget_2 = new PlotView(tab_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        horizontalLayout_3->addWidget(widget_2);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menu_5);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_7 = new QMenu(menu_5);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu->addAction(action);
        menu->addSeparator();
        menu->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_3->addAction(action_7);
        menu_3->addAction(action_8);
        menu_4->addAction(action_3);
        menu_4->addAction(action_9);
        menu_4->addAction(action_11);
        menu_4->addAction(action_10);
        menu_4->addAction(action_12);
        menu_4->addAction(action_13);
        menu_5->addAction(menu_7->menuAction());
        menu_5->addAction(menu_6->menuAction());
        menu_5->addAction(action_16);
        menu_5->addAction(action_17);
        menu_5->addAction(action_18);
        menu_5->addAction(action_19);
        menu_6->addAction(action_20);
        menu_6->addAction(action_21);
        menu_6->addAction(action_22);
        menu_7->addAction(action_23);
        menu_7->addAction(action_24);
        menu_7->addAction(action_25);
        mainToolBar->addAction(actionStep_back);
        mainToolBar->addAction(actionStart);

        retranslateUi(MainWindow);
        QObject::connect(doubleSpinBox_L1, SIGNAL(valueChanged(double)), deviceView, SLOT(setL1(double)));
        QObject::connect(doubleSpinBox_L2, SIGNAL(valueChanged(double)), deviceView, SLOT(setL2(double)));
        QObject::connect(doubleSpinBox_L3, SIGNAL(valueChanged(double)), deviceView, SLOT(setL3(double)));
        QObject::connect(doubleSpinBox_phi, SIGNAL(valueChanged(double)), deviceView, SLOT(setPhi(double)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_5->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
        action_6->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\320\276\320\275\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        action_7->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        action_8->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        actionStart->setText(QApplication::translate("MainWindow", "Start", 0));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0));
        actionStep_back->setText(QApplication::translate("MainWindow", "step back", 0));
#ifndef QT_NO_TOOLTIP
        actionStep_back->setToolTip(QApplication::translate("MainWindow", "Step back", 0));
#endif // QT_NO_TOOLTIP
        action_3->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270 \320\272\320\260\320\264\321\200", 0));
        action_9->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", 0));
        action_10->setText(QApplication::translate("MainWindow", "\320\232\321\200\321\203\321\202\320\270\321\202\321\214 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274 \320\262 \320\264\321\200\321\203\320\263\321\203\321\216 \321\201\321\202\320\276\321\200\320\276\320\275\321\203", 0));
        action_11->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \320\272\320\260\320\264\321\200", 0));
        action_12->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", 0));
        action_13->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", 0));
        action_16->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\265\321\202\320\272\321\203", 0));
        action_17->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", 0));
        action_18->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\202\321\200\320\260\320\265\320\272\321\202\320\276\321\200\320\270\321\216", 0));
        action_19->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\202\320\276\321\207\320\265\320\272", 0));
        action_20->setText(QApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214", 0));
        action_21->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", 0));
        action_22->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\204\320\276\321\200\320\274\320\260\321\202", 0));
        action_23->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\210\321\202\320\260\320\261", 0));
        action_24->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\270\320\274\320\260\321\206\320\270\321\217", 0));
        action_25->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", 0));
        label->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274\320\260", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L1", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L2", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L3", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 phi ", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", 0));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\220\320\275\320\270\320\274\320\260\321\206\320\270\321\217", 0));
        menu_5->setTitle(QApplication::translate("MainWindow", "\320\222\320\270\320\264", 0));
        menu_6->setTitle(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", 0));
        menu_7->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
