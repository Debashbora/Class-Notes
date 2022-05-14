/****************************************************************************
** Meta object code from reading C++ file 'documenthandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Class-Note/documenthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documenthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentHandler_t {
    const uint offsetsAndSize[64];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DocumentHandler_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DocumentHandler_t qt_meta_stringdata_DocumentHandler = {
    {
QT_MOC_LITERAL(0, 15), // "DocumentHandler"
QT_MOC_LITERAL(16, 15), // "documentChanged"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(55, 21), // "selectionStartChanged"
QT_MOC_LITERAL(77, 19), // "selectionEndChanged"
QT_MOC_LITERAL(97, 11), // "fontChanged"
QT_MOC_LITERAL(109, 16), // "textColorChanged"
QT_MOC_LITERAL(126, 16), // "alignmentChanged"
QT_MOC_LITERAL(143, 11), // "textChanged"
QT_MOC_LITERAL(155, 14), // "fileUrlChanged"
QT_MOC_LITERAL(170, 6), // "loaded"
QT_MOC_LITERAL(177, 4), // "text"
QT_MOC_LITERAL(182, 6), // "format"
QT_MOC_LITERAL(189, 5), // "error"
QT_MOC_LITERAL(195, 7), // "message"
QT_MOC_LITERAL(203, 15), // "modifiedChanged"
QT_MOC_LITERAL(219, 4), // "load"
QT_MOC_LITERAL(224, 7), // "fileUrl"
QT_MOC_LITERAL(232, 6), // "saveAs"
QT_MOC_LITERAL(239, 8), // "document"
QT_MOC_LITERAL(248, 19), // "QQuickTextDocument*"
QT_MOC_LITERAL(268, 14), // "cursorPosition"
QT_MOC_LITERAL(283, 14), // "selectionStart"
QT_MOC_LITERAL(298, 12), // "selectionEnd"
QT_MOC_LITERAL(311, 9), // "textColor"
QT_MOC_LITERAL(321, 9), // "alignment"
QT_MOC_LITERAL(331, 13), // "Qt::Alignment"
QT_MOC_LITERAL(345, 4), // "font"
QT_MOC_LITERAL(350, 8), // "fileName"
QT_MOC_LITERAL(359, 8), // "fileType"
QT_MOC_LITERAL(368, 8) // "modified"

    },
    "DocumentHandler\0documentChanged\0\0"
    "cursorPositionChanged\0selectionStartChanged\0"
    "selectionEndChanged\0fontChanged\0"
    "textColorChanged\0alignmentChanged\0"
    "textChanged\0fileUrlChanged\0loaded\0"
    "text\0format\0error\0message\0modifiedChanged\0"
    "load\0fileUrl\0saveAs\0document\0"
    "QQuickTextDocument*\0cursorPosition\0"
    "selectionStart\0selectionEnd\0textColor\0"
    "alignment\0Qt::Alignment\0font\0fileName\0"
    "fileType\0modified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentHandler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      11,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,   12 /* Public */,
       3,    0,   99,    2, 0x06,   13 /* Public */,
       4,    0,  100,    2, 0x06,   14 /* Public */,
       5,    0,  101,    2, 0x06,   15 /* Public */,
       6,    0,  102,    2, 0x06,   16 /* Public */,
       7,    0,  103,    2, 0x06,   17 /* Public */,
       8,    0,  104,    2, 0x06,   18 /* Public */,
       9,    0,  105,    2, 0x06,   19 /* Public */,
      10,    0,  106,    2, 0x06,   20 /* Public */,
      11,    2,  107,    2, 0x06,   21 /* Public */,
      14,    1,  112,    2, 0x06,   24 /* Public */,
      16,    0,  115,    2, 0x06,   26 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    1,  116,    2, 0x0a,   27 /* Public */,
      19,    1,  119,    2, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   18,
    QMetaType::Void, QMetaType::QUrl,   18,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x0001510b, uint(0), 0,
      22, QMetaType::Int, 0x00015103, uint(1), 0,
      23, QMetaType::Int, 0x00015103, uint(2), 0,
      24, QMetaType::Int, 0x00015103, uint(3), 0,
      25, QMetaType::QColor, 0x00015103, uint(5), 0,
      26, 0x80000000 | 27, 0x0001510b, uint(6), 0,
      28, QMetaType::QFont, 0x00015103, uint(4), 0,
      29, QMetaType::QString, 0x00015001, uint(8), 0,
      30, QMetaType::QString, 0x00015001, uint(8), 0,
      18, QMetaType::QUrl, 0x00015001, uint(8), 0,
      31, QMetaType::Bool, 0x00015103, uint(11), 0,

       0        // eod
};

void DocumentHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->documentChanged(); break;
        case 1: _t->cursorPositionChanged(); break;
        case 2: _t->selectionStartChanged(); break;
        case 3: _t->selectionEndChanged(); break;
        case 4: _t->fontChanged(); break;
        case 5: _t->textColorChanged(); break;
        case 6: _t->alignmentChanged(); break;
        case 7: _t->textChanged(); break;
        case 8: _t->fileUrlChanged(); break;
        case 9: _t->loaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->modifiedChanged(); break;
        case 12: _t->load((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 13: _t->saveAs((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::documentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::cursorPositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::selectionStartChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::selectionEndChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fontChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::textColorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::alignmentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::textChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fileUrlChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::loaded)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::error)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::modifiedChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickTextDocument**>(_v) = _t->document(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->selectionStart(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->selectionEnd(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 5: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->fileType(); break;
        case 9: *reinterpret_cast< QUrl*>(_v) = _t->fileUrl(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->modified(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDocument(*reinterpret_cast< QQuickTextDocument**>(_v)); break;
        case 1: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSelectionStart(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSelectionEnd(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 6: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 10: _t->setModified(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DocumentHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DocumentHandler.offsetsAndSize,
    qt_meta_data_DocumentHandler,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DocumentHandler_t
, QtPrivate::TypeAndForceComplete<QQuickTextDocument*, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>, QtPrivate::TypeAndForceComplete<QFont, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QUrl, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<DocumentHandler, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>


>,
    nullptr
} };


const QMetaObject *DocumentHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DocumentHandler::documentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DocumentHandler::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DocumentHandler::selectionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DocumentHandler::selectionEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DocumentHandler::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DocumentHandler::textColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DocumentHandler::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DocumentHandler::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DocumentHandler::fileUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DocumentHandler::loaded(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DocumentHandler::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DocumentHandler::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
