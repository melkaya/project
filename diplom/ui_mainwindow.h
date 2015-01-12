/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jan 11 18:14:54 2015
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "deviceview.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *save;
    QAction *action_2;
    QAction *action_4;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionStep_back;
    QAction *action_9;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QAction *action_13;
    QAction *action_17;
    QAction *action_18;
    QAction *action_19;
    QAction *action_20;
    QAction *action_21;
    QAction *action_22;
    QAction *action_23;
    QAction *action_24;
    QAction *action_25;
    QAction *action_26;
    QAction *action_27;
    QAction *action_28;
    QAction *actionNext_frame;
    QAction *actionExit;
    QAction *actionZoom;
    QAction *actionZoom_out;
    QAction *actionGrid;
    QAction *actionChar_letter;
    QAction *actionSave;
    QAction *actionInitial_data;
    QAction *actionInitial_format;
    QAction *action_14;
    QAction *colorsAction;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QHBoxLayout *horizontalLayout_4;
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
    QDoubleSpinBox *frequencySpinBox;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    DeviceView *deviceView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QwtPlot *speedPlot;
    QwtPlot *speedingupPlot;
    QWidget *tab_8;
    QGridLayout *gridLayout;
    QWidget *mech3d;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *tab_7;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_13;
    QFormLayout *formLayout_3;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_L1_3;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_L2_3;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_L3_3;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_phi_3;
    QLabel *label_18;
    QDoubleSpinBox *frequencySpinBox_3;
    QSpacerItem *verticalSpacer_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QwtPlot *speedPlot_2;
    QwtPlot *widget_6;
    QWidget *tab_9;
    QWidget *widget_5;
    QWidget *tab_5;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_19;
    QFormLayout *formLayout_4;
    QLabel *label_20;
    QDoubleSpinBox *doubleSpinBox_L1_4;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBox_L2_4;
    QLabel *label_22;
    QDoubleSpinBox *doubleSpinBox_L3_4;
    QLabel *label_23;
    QDoubleSpinBox *doubleSpinBox_phi_4;
    QLabel *label_24;
    QDoubleSpinBox *frequencySpinBox_4;
    QSpacerItem *verticalSpacer_4;
    QTabWidget *tabWidget_4;
    QWidget *tab_10;
    QWidget *widget_8;
    QWidget *tab_11;
    QwtPlot *qwtPlot;
    QwtPlot *qwtPlot_2;
    QWidget *tab_12;
    QWidget *widget_9;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_8;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(648, 400);
        save = new QAction(MainWindow);
        save->setObjectName(QString::fromUtf8("save"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/book-question.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/control.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/icons/control-pause.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStart->setIcon(icon1);
        actionStart->setIconVisibleInMenu(true);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/control-pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStep_back = new QAction(MainWindow);
        actionStep_back->setObjectName(QString::fromUtf8("actionStep_back"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/control-double-180.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_back->setIcon(icon3);
        actionStep_back->setIconVisibleInMenu(true);
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QString::fromUtf8("action_11"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QString::fromUtf8("action_12"));
        action_13 = new QAction(MainWindow);
        action_13->setObjectName(QString::fromUtf8("action_13"));
        action_17 = new QAction(MainWindow);
        action_17->setObjectName(QString::fromUtf8("action_17"));
        action_18 = new QAction(MainWindow);
        action_18->setObjectName(QString::fromUtf8("action_18"));
        action_19 = new QAction(MainWindow);
        action_19->setObjectName(QString::fromUtf8("action_19"));
        action_20 = new QAction(MainWindow);
        action_20->setObjectName(QString::fromUtf8("action_20"));
        action_21 = new QAction(MainWindow);
        action_21->setObjectName(QString::fromUtf8("action_21"));
        action_22 = new QAction(MainWindow);
        action_22->setObjectName(QString::fromUtf8("action_22"));
        action_23 = new QAction(MainWindow);
        action_23->setObjectName(QString::fromUtf8("action_23"));
        action_24 = new QAction(MainWindow);
        action_24->setObjectName(QString::fromUtf8("action_24"));
        action_25 = new QAction(MainWindow);
        action_25->setObjectName(QString::fromUtf8("action_25"));
        action_26 = new QAction(MainWindow);
        action_26->setObjectName(QString::fromUtf8("action_26"));
        action_27 = new QAction(MainWindow);
        action_27->setObjectName(QString::fromUtf8("action_27"));
        action_28 = new QAction(MainWindow);
        action_28->setObjectName(QString::fromUtf8("action_28"));
        actionNext_frame = new QAction(MainWindow);
        actionNext_frame->setObjectName(QString::fromUtf8("actionNext_frame"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/control-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext_frame->setIcon(icon4);
        actionNext_frame->setIconVisibleInMenu(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionZoom = new QAction(MainWindow);
        actionZoom->setObjectName(QString::fromUtf8("actionZoom"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/magnifier-zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom->setIcon(icon6);
        actionZoom->setIconVisibleInMenu(true);
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/magnifier-zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_out->setIcon(icon7);
        actionZoom_out->setIconVisibleInMenu(true);
        actionGrid = new QAction(MainWindow);
        actionGrid->setObjectName(QString::fromUtf8("actionGrid"));
        actionGrid->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrid->setIcon(icon8);
        actionGrid->setIconVisibleInMenu(true);
        actionChar_letter = new QAction(MainWindow);
        actionChar_letter->setObjectName(QString::fromUtf8("actionChar_letter"));
        actionChar_letter->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/edit-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChar_letter->setIcon(icon9);
        actionChar_letter->setIconVisibleInMenu(true);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/disk-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon10);
        actionInitial_data = new QAction(MainWindow);
        actionInitial_data->setObjectName(QString::fromUtf8("actionInitial_data"));
        actionInitial_data->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/arrow-180.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInitial_data->setIcon(icon11);
        actionInitial_data->setIconVisibleInMenu(true);
        actionInitial_format = new QAction(MainWindow);
        actionInitial_format->setObjectName(QString::fromUtf8("actionInitial_format"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/arrow-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInitial_format->setIcon(icon12);
        actionInitial_format->setIconVisibleInMenu(true);
        action_14 = new QAction(MainWindow);
        action_14->setObjectName(QString::fromUtf8("action_14"));
        colorsAction = new QAction(MainWindow);
        colorsAction->setObjectName(QString::fromUtf8("colorsAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget_3 = new QTabWidget(centralWidget);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        horizontalLayout_4 = new QHBoxLayout(tab_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_3 = new QWidget(tab_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(200, 0));
        widget_3->setMaximumSize(QSize(200, 16777215));
        widget_3->setBaseSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        doubleSpinBox_L1 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_L1->setObjectName(QString::fromUtf8("doubleSpinBox_L1"));
        doubleSpinBox_L1->setDecimals(2);
        doubleSpinBox_L1->setMaximum(100000);
        doubleSpinBox_L1->setValue(60);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_L1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        doubleSpinBox_L2 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_L2->setObjectName(QString::fromUtf8("doubleSpinBox_L2"));
        doubleSpinBox_L2->setMaximum(100000);
        doubleSpinBox_L2->setValue(100);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_L2);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        doubleSpinBox_L3 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_L3->setObjectName(QString::fromUtf8("doubleSpinBox_L3"));
        doubleSpinBox_L3->setMaximum(100000);
        doubleSpinBox_L3->setValue(100);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_L3);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        doubleSpinBox_phi = new QDoubleSpinBox(widget_3);
        doubleSpinBox_phi->setObjectName(QString::fromUtf8("doubleSpinBox_phi"));
        doubleSpinBox_phi->setMaximum(360);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_phi);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        frequencySpinBox = new QDoubleSpinBox(widget_3);
        frequencySpinBox->setObjectName(QString::fromUtf8("frequencySpinBox"));
        frequencySpinBox->setMaximum(100000);

        formLayout->setWidget(5, QFormLayout::FieldRole, frequencySpinBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::LabelRole, verticalSpacer);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_4->addWidget(widget_3);

        tabWidget = new QTabWidget(tab_6);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        deviceView = new DeviceView(tab);
        deviceView->setObjectName(QString::fromUtf8("deviceView"));

        horizontalLayout_2->addWidget(deviceView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        speedPlot = new QwtPlot(tab_2);
        speedPlot->setObjectName(QString::fromUtf8("speedPlot"));

        verticalLayout->addWidget(speedPlot);

        speedingupPlot = new QwtPlot(tab_2);
        speedingupPlot->setObjectName(QString::fromUtf8("speedingupPlot"));

        verticalLayout->addWidget(speedingupPlot);

        tabWidget->addTab(tab_2, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout = new QGridLayout(tab_8);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mech3d = new QWidget(tab_8);
        mech3d->setObjectName(QString::fromUtf8("mech3d"));
        gridLayout_2 = new QGridLayout(mech3d);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(mech3d);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(100, 100));

        gridLayout_2->addWidget(label_6, 0, 1, 1, 1);

        label_9 = new QLabel(mech3d);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(mech3d);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 2, 3, 1, 1);

        label_8 = new QLabel(mech3d);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButton = new QPushButton(mech3d);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(mech3d);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 5, 1, 1);


        gridLayout->addWidget(mech3d, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());

        horizontalLayout_4->addWidget(tabWidget);

        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        widget_4 = new QWidget(tab_7);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 0, 186, 286));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(100, 0));
        widget_4->setMaximumSize(QSize(200, 16777215));
        widget_4->setBaseSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_13 = new QLabel(widget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_3->addWidget(label_13);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_14 = new QLabel(widget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        doubleSpinBox_L1_3 = new QDoubleSpinBox(widget_4);
        doubleSpinBox_L1_3->setObjectName(QString::fromUtf8("doubleSpinBox_L1_3"));
        doubleSpinBox_L1_3->setDecimals(2);
        doubleSpinBox_L1_3->setMaximum(100000);
        doubleSpinBox_L1_3->setValue(60);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_L1_3);

        label_15 = new QLabel(widget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        doubleSpinBox_L2_3 = new QDoubleSpinBox(widget_4);
        doubleSpinBox_L2_3->setObjectName(QString::fromUtf8("doubleSpinBox_L2_3"));
        doubleSpinBox_L2_3->setMaximum(100000);
        doubleSpinBox_L2_3->setValue(100);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_L2_3);

        label_16 = new QLabel(widget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        doubleSpinBox_L3_3 = new QDoubleSpinBox(widget_4);
        doubleSpinBox_L3_3->setObjectName(QString::fromUtf8("doubleSpinBox_L3_3"));
        doubleSpinBox_L3_3->setMaximum(100000);
        doubleSpinBox_L3_3->setValue(100);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_L3_3);

        label_17 = new QLabel(widget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_17);

        doubleSpinBox_phi_3 = new QDoubleSpinBox(widget_4);
        doubleSpinBox_phi_3->setObjectName(QString::fromUtf8("doubleSpinBox_phi_3"));
        doubleSpinBox_phi_3->setMaximum(360);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_phi_3);

        label_18 = new QLabel(widget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_18);

        frequencySpinBox_3 = new QDoubleSpinBox(widget_4);
        frequencySpinBox_3->setObjectName(QString::fromUtf8("frequencySpinBox_3"));
        frequencySpinBox_3->setMaximum(100000);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, frequencySpinBox_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(6, QFormLayout::LabelRole, verticalSpacer_3);


        verticalLayout_3->addLayout(formLayout_3);

        tabWidget_2 = new QTabWidget(tab_7);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(190, 0, 341, 301));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_3 = new QHBoxLayout(tab_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        speedPlot_2 = new QwtPlot(tab_4);
        speedPlot_2->setObjectName(QString::fromUtf8("speedPlot_2"));

        verticalLayout_4->addWidget(speedPlot_2);

        widget_6 = new QwtPlot(tab_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));

        verticalLayout_4->addWidget(widget_6);

        tabWidget_2->addTab(tab_4, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        widget_5 = new QWidget(tab_9);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(0, 0, 331, 261));
        tabWidget_2->addTab(tab_9, QString());
        tabWidget_3->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        widget_7 = new QWidget(tab_5);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(0, 0, 200, 286));
        sizePolicy.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy);
        widget_7->setMinimumSize(QSize(100, 0));
        widget_7->setMaximumSize(QSize(200, 16777215));
        widget_7->setBaseSize(QSize(0, 0));
        verticalLayout_5 = new QVBoxLayout(widget_7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_19 = new QLabel(widget_7);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_5->addWidget(label_19);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_20 = new QLabel(widget_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_20);

        doubleSpinBox_L1_4 = new QDoubleSpinBox(widget_7);
        doubleSpinBox_L1_4->setObjectName(QString::fromUtf8("doubleSpinBox_L1_4"));
        doubleSpinBox_L1_4->setDecimals(2);
        doubleSpinBox_L1_4->setMaximum(100000);
        doubleSpinBox_L1_4->setValue(60);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_L1_4);

        label_21 = new QLabel(widget_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_21);

        doubleSpinBox_L2_4 = new QDoubleSpinBox(widget_7);
        doubleSpinBox_L2_4->setObjectName(QString::fromUtf8("doubleSpinBox_L2_4"));
        doubleSpinBox_L2_4->setMaximum(100000);
        doubleSpinBox_L2_4->setValue(100);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_L2_4);

        label_22 = new QLabel(widget_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_22);

        doubleSpinBox_L3_4 = new QDoubleSpinBox(widget_7);
        doubleSpinBox_L3_4->setObjectName(QString::fromUtf8("doubleSpinBox_L3_4"));
        doubleSpinBox_L3_4->setMaximum(100000);
        doubleSpinBox_L3_4->setValue(100);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_L3_4);

        label_23 = new QLabel(widget_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_23);

        doubleSpinBox_phi_4 = new QDoubleSpinBox(widget_7);
        doubleSpinBox_phi_4->setObjectName(QString::fromUtf8("doubleSpinBox_phi_4"));
        doubleSpinBox_phi_4->setMaximum(360);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_phi_4);

        label_24 = new QLabel(widget_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_24);

        frequencySpinBox_4 = new QDoubleSpinBox(widget_7);
        frequencySpinBox_4->setObjectName(QString::fromUtf8("frequencySpinBox_4"));
        frequencySpinBox_4->setMaximum(100000);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, frequencySpinBox_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(6, QFormLayout::LabelRole, verticalSpacer_4);


        verticalLayout_5->addLayout(formLayout_4);

        tabWidget_4 = new QTabWidget(tab_5);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(190, 0, 351, 301));
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        widget_8 = new QWidget(tab_10);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(10, 10, 331, 251));
        tabWidget_4->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        qwtPlot = new QwtPlot(tab_11);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));
        qwtPlot->setGeometry(QRect(0, 0, 341, 121));
        qwtPlot_2 = new QwtPlot(tab_11);
        qwtPlot_2->setObjectName(QString::fromUtf8("qwtPlot_2"));
        qwtPlot_2->setGeometry(QRect(0, 120, 341, 141));
        tabWidget_4->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        widget_9 = new QWidget(tab_12);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(0, 0, 341, 261));
        widget_9->setMaximumSize(QSize(341, 261));
        tabWidget_4->addTab(tab_12, QString());
        tabWidget_3->addTab(tab_5, QString());

        horizontalLayout->addWidget(tabWidget_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 648, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_8 = new QMenu(menu_2);
        menu_8->setObjectName(QString::fromUtf8("menu_8"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menu_5);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu->addAction(save);
        menu->addSeparator();
        menu->addAction(action_4);
        menu_2->addAction(menu_8->menuAction());
        menu_2->addAction(action_6);
        menu_8->addAction(colorsAction);
        menu_3->addAction(action_7);
        menu_3->addAction(action_8);
        menu_4->addAction(actionStep_back);
        menu_4->addAction(actionStart);
        menu_4->addAction(actionNext_frame);
        menu_4->addAction(actionInitial_data);
        menu_4->addAction(action_12);
        menu_5->addAction(menu_6->menuAction());
        menu_5->addAction(actionGrid);
        menu_5->addAction(actionChar_letter);
        menu_5->addAction(action_18);
        menu_6->addAction(actionZoom);
        menu_6->addAction(actionZoom_out);
        menu_6->addAction(actionInitial_format);
        mainToolBar->addAction(actionStep_back);
        mainToolBar->addAction(actionStart);
        mainToolBar->addAction(actionNext_frame);
        mainToolBar->addAction(actionInitial_data);
        mainToolBar->addAction(actionZoom);
        mainToolBar->addAction(actionZoom_out);
        mainToolBar->addAction(actionInitial_format);
        mainToolBar->addAction(actionGrid);
        mainToolBar->addAction(actionChar_letter);

        retranslateUi(MainWindow);
        QObject::connect(doubleSpinBox_L1, SIGNAL(valueChanged(QString)), MainWindow, SLOT(redrawPlots()));
        QObject::connect(doubleSpinBox_L2, SIGNAL(valueChanged(QString)), MainWindow, SLOT(redrawPlots()));
        QObject::connect(doubleSpinBox_L3, SIGNAL(valueChanged(QString)), MainWindow, SLOT(redrawPlots()));
        QObject::connect(doubleSpinBox_phi, SIGNAL(valueChanged(QString)), MainWindow, SLOT(redrawPlots()));
        QObject::connect(frequencySpinBox, SIGNAL(valueChanged(QString)), MainWindow, SLOT(redrawPlots()));
        QObject::connect(doubleSpinBox_L1, SIGNAL(valueChanged(double)), deviceView, SLOT(setL1(double)));
        QObject::connect(doubleSpinBox_L2, SIGNAL(valueChanged(double)), deviceView, SLOT(setL2(double)));
        QObject::connect(doubleSpinBox_L3, SIGNAL(valueChanged(double)), deviceView, SLOT(setL3(double)));
        QObject::connect(frequencySpinBox, SIGNAL(valueChanged(double)), deviceView, SLOT(setFrequency(double)));
        QObject::connect(doubleSpinBox_phi, SIGNAL(valueChanged(double)), deviceView, SLOT(setPhi(double)));
        QObject::connect(frequencySpinBox, SIGNAL(valueChanged(double)), deviceView, SLOT(setFrequency(double)));

        tabWidget_3->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        action_6->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\320\276\320\275\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        action_7->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
        action_8->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", 0, QApplication::UnicodeUTF8));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0, QApplication::UnicodeUTF8));
        actionStep_back->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \320\272\320\260\320\264\321\200", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStep_back->setToolTip(QApplication::translate("MainWindow", "Step back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_9->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", 0, QApplication::UnicodeUTF8));
        action_10->setText(QApplication::translate("MainWindow", "\320\232\321\200\321\203\321\202\320\270\321\202\321\214 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274 \320\262 \320\264\321\200\321\203\320\263\321\203\321\216 \321\201\321\202\320\276\321\200\320\276\320\275\321\203", 0, QApplication::UnicodeUTF8));
        action_11->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \320\272\320\260\320\264\321\200", 0, QApplication::UnicodeUTF8));
        action_12->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", 0, QApplication::UnicodeUTF8));
        action_13->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", 0, QApplication::UnicodeUTF8));
        action_17->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        action_18->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\202\321\200\320\260\320\265\320\272\321\202\320\276\321\200\320\270\321\216", 0, QApplication::UnicodeUTF8));
        action_19->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\202\320\276\321\207\320\265\320\272", 0, QApplication::UnicodeUTF8));
        action_20->setText(QApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_21->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_22->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\204\320\276\321\200\320\274\320\260\321\202", 0, QApplication::UnicodeUTF8));
        action_23->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\210\321\202\320\260\320\261", 0, QApplication::UnicodeUTF8));
        action_24->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\270\320\274\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        action_25->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        action_26->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_27->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        action_28->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionNext_frame->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \320\272\320\260\320\264\321\200", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionZoom->setText(QApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionZoom_out->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionGrid->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\265\321\202\320\272\321\203", 0, QApplication::UnicodeUTF8));
        actionChar_letter->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\276\320\264\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "save", 0, QApplication::UnicodeUTF8));
        actionInitial_data->setText(QApplication::translate("MainWindow", "\320\232\321\200\321\203\321\202\320\270\321\202\321\214 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274 \320\262 \320\264\321\200\321\203\320\263\321\203\321\216 \321\201\321\202\320\276\321\200\320\276\320\275\321\203", 0, QApplication::UnicodeUTF8));
        actionInitial_format->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\204\320\276\321\200\320\274\320\260\321\202", 0, QApplication::UnicodeUTF8));
        action_14->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \320\272\320\260\320\264\321\200", 0, QApplication::UnicodeUTF8));
        colorsAction->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274\320\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_L2->setToolTip(QApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 L2  \320\275\320\265 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\274\320\265\320\275\321\214\321\210\320\265 L1.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_L3->setToolTip(QApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 L3  \320\275\320\265 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\274\320\265\320\275\321\214\321\210\320\265 L1.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 phi ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 2D", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264 \320\277\320\276 \320\272\321\200\321\203\320\263\321\203", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264 \321\201 \320\261\320\276\320\272\321\203", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264 \321\201 \320\262\320\265\321\200\321\205\321\203", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 3D", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 1", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274\320\260", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L1", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L2", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L3", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 phi ", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 2D", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 3D", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 2", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274\320\260", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L1", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L2", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 L3", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 phi ", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260", 0, QApplication::UnicodeUTF8));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 2D", 0, QApplication::UnicodeUTF8));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_11), QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", 0, QApplication::UnicodeUTF8));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_12), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 3D", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\267\320\274 3", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        menu_8->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\220\320\275\320\270\320\274\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        menu_5->setTitle(QApplication::translate("MainWindow", "\320\222\320\270\320\264", 0, QApplication::UnicodeUTF8));
        menu_6->setTitle(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
