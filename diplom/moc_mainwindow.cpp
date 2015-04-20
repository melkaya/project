/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Apr 19 00:26:56 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x08,
      51,   12,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     106,   11,   11,   11, 0x08,
     130,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     182,   11,   11,   11, 0x08,
     206,   11,   11,   11, 0x08,
     226,   11,   11,   11, 0x08,
     252,   11,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,
     302,   11,   11,   11, 0x08,
     332,   11,   11,   11, 0x08,
     364,   11,   11,   11, 0x08,
     395,   11,   11,   11, 0x08,
     439,  431,   11,   11, 0x08,
     476,   11,   11,   11, 0x08,
     504,   11,   11,   11, 0x08,
     540,   11,   11,   11, 0x08,
     570,   11,   11,   11, 0x08,
     596,  431,   11,   11, 0x08,
     627,   11,   11,   11, 0x08,
     668,   11,   11,   11, 0x08,
     691,  682,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0index\0on_tabWidget_currentChanged(int)\0"
    "on_tabWidget_2_currentChanged(int)\0"
    "on_drop_triggered()\0on_action_8_triggered()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_action_2_triggered()\0on_save_triggered()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_actionGrid_triggered(bool)\0"
    "on_actionNext_frame_triggered()\0"
    "on_actionStep_back_triggered()\0"
    "on_actionInitial_data_toggled(bool)\0"
    "checked\0on_actionChar_letter_triggered(bool)\0"
    "on_colorsAction_triggered()\0"
    "on_actionInitial_format_triggered()\0"
    "on_actionZoom_out_triggered()\0"
    "on_actionZoom_triggered()\0"
    "on_actionStart_triggered(bool)\0"
    "on_doubleSpinBox_L1_valueChanged(double)\0"
    "redrawPlots()\0filename\0loadSettings(QString)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_tabWidget_2_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_drop_triggered(); break;
        case 3: on_action_8_triggered(); break;
        case 4: on_pushButton_5_clicked(); break;
        case 5: on_pushButton_4_clicked(); break;
        case 6: on_action_2_triggered(); break;
        case 7: on_save_triggered(); break;
        case 8: on_pushButton_3_clicked(); break;
        case 9: on_pushButton_2_clicked(); break;
        case 10: on_pushButton_clicked(); break;
        case 11: on_actionGrid_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: on_actionNext_frame_triggered(); break;
        case 13: on_actionStep_back_triggered(); break;
        case 14: on_actionInitial_data_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: on_actionChar_letter_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: on_colorsAction_triggered(); break;
        case 17: on_actionInitial_format_triggered(); break;
        case 18: on_actionZoom_out_triggered(); break;
        case 19: on_actionZoom_triggered(); break;
        case 20: on_actionStart_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: on_doubleSpinBox_L1_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: redrawPlots(); break;
        case 23: loadSettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
