/********************************************************************************
** Form generated from reading UI file 'colormapdialog.ui'
**
** Created: Tue Mar 31 20:55:31 2015
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORMAPDIALOG_H
#define UI_COLORMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorMapDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorMapDialog)
    {
        if (ColorMapDialog->objectName().isEmpty())
            ColorMapDialog->setObjectName(QString::fromUtf8("ColorMapDialog"));
        ColorMapDialog->resize(400, 300);
        ColorMapDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ColorMapDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(ColorMapDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(10, 0));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(ColorMapDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(ColorMapDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(ColorMapDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(ColorMapDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(ColorMapDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(ColorMapDialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(ColorMapDialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(ColorMapDialog);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(ColorMapDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColorMapDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorMapDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorMapDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ColorMapDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorMapDialog)
    {
        ColorMapDialog->setWindowTitle(QApplication::translate("ColorMapDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ColorMapDialog", "\320\232\321\200\320\270\320\262\320\276\321\210\320\270\320\277", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ColorMapDialog", "\320\250\320\260\321\202\321\203\320\275 1 (\320\220\320\222)", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ColorMapDialog", "\320\250\320\260\321\202\321\203\320\275 2 (\320\220\320\241)", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ColorMapDialog", " \320\241\321\202\320\276\320\271\320\272\320\260(\320\262\320\265\321\200\321\205) ", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ColorMapDialog", " \320\241\321\202\320\276\320\271\320\272\320\260(\320\275\320\270\320\267)", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("ColorMapDialog", "\320\237\321\200\321\217\320\274\321\213\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("ColorMapDialog", "\320\250\320\260\321\200\320\275\320\270\321\200\321\213", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("ColorMapDialog", "\320\237\320\276\320\273\320\267\321\203\320\275 \320\222", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("ColorMapDialog", "\320\232\320\276\320\275\321\202\321\203\321\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorMapDialog: public Ui_ColorMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORMAPDIALOG_H
