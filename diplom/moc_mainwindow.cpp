/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Jan 10 16:00:00 2015
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
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      56,   11,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     132,   11,   11,   11, 0x08,
     162,   11,   11,   11, 0x08,
     194,   11,   11,   11, 0x08,
     225,   11,   11,   11, 0x08,
     269,  261,   11,   11, 0x08,
     306,   11,   11,   11, 0x08,
     334,   11,   11,   11, 0x08,
     370,   11,   11,   11, 0x08,
     400,   11,   11,   11, 0x08,
     426,  261,   11,   11, 0x08,
     457,   11,   11,   11, 0x08,
     498,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_action_2_triggered()\0"
    "on_save_triggered()\0on_pushButton_3_clicked()\0"
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
    "redrawPlots()\0"
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
        case 0: on_action_2_triggered(); break;
        case 1: on_save_triggered(); break;
        case 2: on_pushButton_3_clicked(); break;
        case 3: on_pushButton_2_clicked(); break;
        case 4: on_pushButton_clicked(); break;
        case 5: on_actionGrid_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: on_actionNext_frame_triggered(); break;
        case 7: on_actionStep_back_triggered(); break;
        case 8: on_actionInitial_data_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: on_actionChar_letter_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: on_colorsAction_triggered(); break;
        case 11: on_actionInitial_format_triggered(); break;
        case 12: on_actionZoom_out_triggered(); break;
        case 13: on_actionZoom_triggered(); break;
        case 14: on_actionStart_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: on_doubleSpinBox_L1_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: redrawPlots(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
