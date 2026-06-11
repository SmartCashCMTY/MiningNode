/****************************************************************************
** Meta object code from reading C++ file 'zerocoinpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/zerocoinpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zerocoinpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZerocoinPage_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZerocoinPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZerocoinPage_t qt_meta_stringdata_ZerocoinPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ZerocoinPage"
QT_MOC_LITERAL(1, 13, 9), // "sendCoins"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "addr"
QT_MOC_LITERAL(4, 29, 23), // "on_exportButton_clicked"
QT_MOC_LITERAL(5, 53, 14), // "contextualMenu"
QT_MOC_LITERAL(6, 68, 5), // "point"
QT_MOC_LITERAL(7, 74, 16), // "selectNewAddress"
QT_MOC_LITERAL(8, 91, 6), // "parent"
QT_MOC_LITERAL(9, 98, 5) // "begin"

    },
    "ZerocoinPage\0sendCoins\0\0addr\0"
    "on_exportButton_clicked\0contextualMenu\0"
    "point\0selectNewAddress\0parent\0begin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZerocoinPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    3,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    9,    2,

       0        // eod
};

void ZerocoinPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZerocoinPage *_t = static_cast<ZerocoinPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCoins((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_exportButton_clicked(); break;
        case 2: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->selectNewAddress((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZerocoinPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZerocoinPage::sendCoins)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ZerocoinPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ZerocoinPage.data,
      qt_meta_data_ZerocoinPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZerocoinPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZerocoinPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZerocoinPage.stringdata0))
        return static_cast<void*>(const_cast< ZerocoinPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ZerocoinPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ZerocoinPage::sendCoins(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
