/****************************************************************************
** Meta object code from reading C++ file 'smartnodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/smartnodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartnodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SmartnodeList_t {
    QByteArrayData data[21];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartnodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartnodeList_t qt_meta_stringdata_SmartnodeList = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SmartnodeList"
QT_MOC_LITERAL(1, 14, 21), // "updateMySmartnodeInfo"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "strAlias"
QT_MOC_LITERAL(4, 46, 7), // "strAddr"
QT_MOC_LITERAL(5, 54, 9), // "COutPoint"
QT_MOC_LITERAL(6, 64, 8), // "outpoint"
QT_MOC_LITERAL(7, 73, 16), // "updateMyNodeList"
QT_MOC_LITERAL(8, 90, 6), // "fForce"
QT_MOC_LITERAL(9, 97, 14), // "updateNodeList"
QT_MOC_LITERAL(10, 112, 15), // "showContextMenu"
QT_MOC_LITERAL(11, 128, 29), // "on_filterLineEdit_textChanged"
QT_MOC_LITERAL(12, 158, 11), // "strFilterIn"
QT_MOC_LITERAL(13, 170, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(14, 193, 29), // "on_startMissingButton_clicked"
QT_MOC_LITERAL(15, 223, 47), // "on_tableWidgetMySmartnodes_it..."
QT_MOC_LITERAL(16, 271, 23), // "on_UpdateButton_clicked"
QT_MOC_LITERAL(17, 295, 23), // "on_CreateButton_clicked"
QT_MOC_LITERAL(18, 319, 21), // "on_EditButton_clicked"
QT_MOC_LITERAL(19, 341, 23), // "on_RemoveButton_clicked"
QT_MOC_LITERAL(20, 365, 21) // "on_ViewButton_clicked"

    },
    "SmartnodeList\0updateMySmartnodeInfo\0"
    "\0strAlias\0strAddr\0COutPoint\0outpoint\0"
    "updateMyNodeList\0fForce\0updateNodeList\0"
    "showContextMenu\0on_filterLineEdit_textChanged\0"
    "strFilterIn\0on_startButton_clicked\0"
    "on_startMissingButton_clicked\0"
    "on_tableWidgetMySmartnodes_itemSelectionChanged\0"
    "on_UpdateButton_clicked\0on_CreateButton_clicked\0"
    "on_EditButton_clicked\0on_RemoveButton_clicked\0"
    "on_ViewButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartnodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   84,    2, 0x0a /* Public */,
       7,    1,   91,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   95,    2, 0x0a /* Public */,
      10,    1,   96,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,
      19,    0,  108,    2, 0x08 /* Private */,
      20,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SmartnodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmartnodeList *_t = static_cast<SmartnodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMySmartnodeInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const COutPoint(*)>(_a[3]))); break;
        case 1: _t->updateMyNodeList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateMyNodeList(); break;
        case 3: _t->updateNodeList(); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_filterLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_startButton_clicked(); break;
        case 7: _t->on_startMissingButton_clicked(); break;
        case 8: _t->on_tableWidgetMySmartnodes_itemSelectionChanged(); break;
        case 9: _t->on_UpdateButton_clicked(); break;
        case 10: _t->on_CreateButton_clicked(); break;
        case 11: _t->on_EditButton_clicked(); break;
        case 12: _t->on_RemoveButton_clicked(); break;
        case 13: _t->on_ViewButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SmartnodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SmartnodeList.data,
      qt_meta_data_SmartnodeList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SmartnodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartnodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SmartnodeList.stringdata0))
        return static_cast<void*>(const_cast< SmartnodeList*>(this));
    return QWidget::qt_metacast(_clname);
}

int SmartnodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
