/****************************************************************************
** Meta object code from reading C++ file 'smartproposaltab.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/smartproposaltab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartproposaltab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QProposalInput_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QProposalInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QProposalInput_t qt_meta_stringdata_QProposalInput = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QProposalInput"
QT_MOC_LITERAL(1, 15, 13), // "focusObtained"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "QProposalInput*"
QT_MOC_LITERAL(4, 46, 10), // "inputField"
QT_MOC_LITERAL(5, 57, 9) // "focusLost"

    },
    "QProposalInput\0focusObtained\0\0"
    "QProposalInput*\0inputField\0focusLost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QProposalInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QProposalInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QProposalInput *_t = static_cast<QProposalInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->focusObtained((*reinterpret_cast< QProposalInput*(*)>(_a[1]))); break;
        case 1: _t->focusLost((*reinterpret_cast< QProposalInput*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProposalInput* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProposalInput* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QProposalInput::*_t)(QProposalInput * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProposalInput::focusObtained)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QProposalInput::*_t)(QProposalInput * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProposalInput::focusLost)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QProposalInput::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QProposalInput.data,
      qt_meta_data_QProposalInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QProposalInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProposalInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QProposalInput.stringdata0))
        return static_cast<void*>(const_cast< QProposalInput*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QProposalInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QProposalInput::focusObtained(QProposalInput * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QProposalInput::focusLost(QProposalInput * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_SmartProposalTabWidget_t {
    QByteArrayData data[20];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartProposalTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartProposalTabWidget_t qt_meta_stringdata_SmartProposalTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SmartProposalTabWidget"
QT_MOC_LITERAL(1, 23, 12), // "titleChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "SmartProposalTabWidget*"
QT_MOC_LITERAL(4, 61, 3), // "tab"
QT_MOC_LITERAL(5, 65, 12), // "std::string&"
QT_MOC_LITERAL(6, 78, 11), // "strNewTitle"
QT_MOC_LITERAL(7, 90, 19), // "removeButtonClicked"
QT_MOC_LITERAL(8, 110, 4), // "save"
QT_MOC_LITERAL(9, 115, 13), // "focusObtained"
QT_MOC_LITERAL(10, 129, 15), // "QProposalInput*"
QT_MOC_LITERAL(11, 145, 10), // "inputField"
QT_MOC_LITERAL(12, 156, 9), // "focusLost"
QT_MOC_LITERAL(13, 166, 17), // "showAddressDialog"
QT_MOC_LITERAL(14, 184, 12), // "addMilestone"
QT_MOC_LITERAL(15, 197, 15), // "removeMilestone"
QT_MOC_LITERAL(16, 213, 25), // "milestoneSelectionChanged"
QT_MOC_LITERAL(17, 239, 7), // "publish"
QT_MOC_LITERAL(18, 247, 11), // "showDetails"
QT_MOC_LITERAL(19, 259, 9) // "published"

    },
    "SmartProposalTabWidget\0titleChanged\0"
    "\0SmartProposalTabWidget*\0tab\0std::string&\0"
    "strNewTitle\0removeButtonClicked\0save\0"
    "focusObtained\0QProposalInput*\0inputField\0"
    "focusLost\0showAddressDialog\0addMilestone\0"
    "removeMilestone\0milestoneSelectionChanged\0"
    "publish\0showDetails\0published"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartProposalTabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   87,    2, 0x08 /* Private */,
       9,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
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

void SmartProposalTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmartProposalTabWidget *_t = static_cast<SmartProposalTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< SmartProposalTabWidget*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 1: _t->removeButtonClicked((*reinterpret_cast< SmartProposalTabWidget*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->focusObtained((*reinterpret_cast< QProposalInput*(*)>(_a[1]))); break;
        case 4: _t->focusLost((*reinterpret_cast< QProposalInput*(*)>(_a[1]))); break;
        case 5: _t->removeButtonClicked(); break;
        case 6: _t->showAddressDialog(); break;
        case 7: _t->addMilestone(); break;
        case 8: _t->removeMilestone(); break;
        case 9: _t->milestoneSelectionChanged(); break;
        case 10: _t->publish(); break;
        case 11: _t->showDetails(); break;
        case 12: _t->published(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SmartProposalTabWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SmartProposalTabWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProposalInput* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProposalInput* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SmartProposalTabWidget::*_t)(SmartProposalTabWidget * , std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartProposalTabWidget::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SmartProposalTabWidget::*_t)(SmartProposalTabWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartProposalTabWidget::removeButtonClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SmartProposalTabWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SmartProposalTabWidget.data,
      qt_meta_data_SmartProposalTabWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SmartProposalTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartProposalTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SmartProposalTabWidget.stringdata0))
        return static_cast<void*>(const_cast< SmartProposalTabWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int SmartProposalTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SmartProposalTabWidget::titleChanged(SmartProposalTabWidget * _t1, std::string & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SmartProposalTabWidget::removeButtonClicked(SmartProposalTabWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
