/****************************************************************************
** Meta object code from reading C++ file 'deviceview.h'
**
** Created: Sat Dec 13 19:44:19 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "deviceview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceView[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      40,   11,   11,   11, 0x0a,
      54,   11,   11,   11, 0x0a,
      69,   11,   11,   11, 0x0a,
      90,   11,   11,   11, 0x0a,
      98,   11,   11,   11, 0x0a,
     105,   11,   11,   11, 0x0a,
     112,   11,   11,   11, 0x0a,
     123,   11,   11,   11, 0x0a,
     140,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DeviceView[] = {
    "DeviceView\0\0setL1(double)\0setL2(double)\0"
    "setL3(double)\0setPhi(double)\0"
    "setFrequency(double)\0start()\0stop()\0"
    "zoom()\0zoom_out()\0initial_format()\0"
    "setColorMap(ColorMap)\0"
};

const QMetaObject DeviceView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DeviceView,
      qt_meta_data_DeviceView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceView))
        return static_cast<void*>(const_cast< DeviceView*>(this));
    return QWidget::qt_metacast(_clname);
}

int DeviceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setL1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: setL2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: setL3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: setPhi((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: setFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: start(); break;
        case 6: stop(); break;
        case 7: zoom(); break;
        case 8: zoom_out(); break;
        case 9: initial_format(); break;
        case 10: setColorMap((*reinterpret_cast< ColorMap(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
