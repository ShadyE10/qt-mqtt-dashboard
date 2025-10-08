/****************************************************************************
** Meta object code from reading C++ file 'telemetry_sub.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../telemetry_sub.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telemetry_sub.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13Telemetry_subE_t {};
} // unnamed namespace

template <> constexpr inline auto Telemetry_sub::qt_create_metaobjectdata<qt_meta_tag_ZN13Telemetry_subE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Telemetry_sub",
        "telemetryReceived",
        "",
        "RPM",
        "Speed",
        "Gears",
        "Battery",
        "OIl_pressure",
        "Water_pressure",
        "Engine_Temp",
        "Fuel",
        "FL_tire",
        "FR_tire",
        "BL_tire",
        "BR_tire",
        "FL_tire_Speed",
        "FR_tire_Speed",
        "BL_tire_Speed",
        "BR_tire_Speed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'telemetryReceived'
        QtMocHelpers::SignalData<void(int, int, int, double, double, double, double, double, int, int, int, int, int, int, int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::Int, 5 }, { QMetaType::Double, 6 },
            { QMetaType::Double, 7 }, { QMetaType::Double, 8 }, { QMetaType::Double, 9 }, { QMetaType::Double, 10 },
            { QMetaType::Int, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 }, { QMetaType::Int, 14 },
            { QMetaType::Int, 15 }, { QMetaType::Int, 16 }, { QMetaType::Int, 17 }, { QMetaType::Int, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Telemetry_sub, qt_meta_tag_ZN13Telemetry_subE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Telemetry_sub::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Telemetry_subE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Telemetry_subE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13Telemetry_subE_t>.metaTypes,
    nullptr
} };

void Telemetry_sub::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Telemetry_sub *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->telemetryReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[13])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[14])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[15])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[16]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Telemetry_sub::*)(int , int , int , double , double , double , double , double , int , int , int , int , int , int , int , int )>(_a, &Telemetry_sub::telemetryReceived, 0))
            return;
    }
}

const QMetaObject *Telemetry_sub::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Telemetry_sub::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13Telemetry_subE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mosqpp::mosquittopp"))
        return static_cast< mosqpp::mosquittopp*>(this);
    return QObject::qt_metacast(_clname);
}

int Telemetry_sub::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Telemetry_sub::telemetryReceived(int _t1, int _t2, int _t3, double _t4, double _t5, double _t6, double _t7, double _t8, int _t9, int _t10, int _t11, int _t12, int _t13, int _t14, int _t15, int _t16)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10, _t11, _t12, _t13, _t14, _t15, _t16);
}
QT_WARNING_POP
