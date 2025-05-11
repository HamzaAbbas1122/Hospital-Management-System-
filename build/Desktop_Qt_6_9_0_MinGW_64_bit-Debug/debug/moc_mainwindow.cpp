/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "on_mainTabWidget_tabBarClicked",
        "",
        "index",
        "on_addPatientBtn_clicked",
        "clearpatientform",
        "on_addDoctorBtn_clicked",
        "on_pushButton_clicked",
        "on_pushButton_patient_clicked",
        "on_editPatientBtn_clicked",
        "on_edit_button_clicked",
        "on_editDoctorBtn_clicked",
        "on_doctor_editpushbutton_clicked",
        "on_deletepush_clicked",
        "on_deleteDoctorBtn_clicked",
        "on_deletePatientBtn_clicked",
        "on_pushdelpatient_clicked",
        "on_addAppointmentBtn_clicked",
        "on_cb_spec_activated",
        "fetch_relevant_doctors",
        "specs",
        "uiname",
        "fetch_selected_doctors_dates",
        "doctorid",
        "on_cb_avdoc_activated",
        "on_slot_button_clicked",
        "on_button_bookappoint_clicked",
        "on_editAppointmentBtn_clicked",
        "on_appointeditbutton_clicked",
        "on_appointmentdeletepushbutton_clicked",
        "on_deleteAppointmentBtn_clicked",
        "on_completeAppointmentBtn_clicked",
        "on_pushButton_appointmentcompleted_clicked",
        "on_pharmacyTabs_tabBarClicked",
        "on_addInventoryBtn_clicked",
        "on_push_stock_clicked",
        "on_deleteInventoryBtn_clicked",
        "on_med_del_push_clicked",
        "on_editInventoryBtn_clicked",
        "on_edit_med_push_clicked",
        "on_restockInventoryBtn_clicked",
        "on_med_restock_push_clicked",
        "on_addNurseBtn_clicked",
        "on_deleteNurseBtn_clicked",
        "on_addReceptionistBtn_clicked",
        "on_staffTypeTabs_tabBarClicked",
        "on_deleteReceptionistBtn_clicked",
        "on_addAdminBtn_clicked",
        "on_deleteAdminBtn_clicked",
        "on_editAdminBtn_clicked",
        "on_editReceptionistBtn_clicked",
        "on_editNurseBtn_clicked",
        "on_labTabs_tabBarClicked",
        "on_scheduleTestBtn_clicked",
        "on_editTestBtn_clicked",
        "on_cancelTestBtn_clicked",
        "on_completeTestBtn_clicked",
        "on_scheduleTestBtn_2_clicked",
        "on_editTestBtn_2_clicked",
        "on_cancelTestBtn_2_clicked",
        "on_laboraty_push_button_clicked",
        "on_lab_del_push_2_clicked",
        "on_testdata_pushbutton_clicked",
        "on_test_del_push_clicked",
        "on_lab_complet_push_clicked",
        "on_addWardBtn_clicked",
        "on_pushButton_5_clicked",
        "dataFetchForNurses",
        "on_pushButton_2_clicked",
        "on_pushButton_8_clicked",
        "on_room_add_bttn_clicked",
        "on_addRoomBtn_clicked",
        "on_wardRoomTabs_tabBarClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_mainTabWidget_tabBarClicked'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_addPatientBtn_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearpatientform'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addDoctorBtn_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_patient_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editPatientBtn_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_edit_button_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editDoctorBtn_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_doctor_editpushbutton_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deletepush_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteDoctorBtn_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deletePatientBtn_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushdelpatient_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addAppointmentBtn_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cb_spec_activated'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'fetch_relevant_doctors'
        QtMocHelpers::SlotData<void(QString, QString)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 20 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'fetch_selected_doctors_dates'
        QtMocHelpers::SlotData<void(int, QString)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 23 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'on_cb_avdoc_activated'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_slot_button_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_button_bookappoint_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editAppointmentBtn_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_appointeditbutton_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_appointmentdeletepushbutton_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteAppointmentBtn_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_completeAppointmentBtn_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_appointmentcompleted_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pharmacyTabs_tabBarClicked'
        QtMocHelpers::SlotData<void(int)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_addInventoryBtn_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_push_stock_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteInventoryBtn_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_med_del_push_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editInventoryBtn_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_edit_med_push_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_restockInventoryBtn_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_med_restock_push_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addNurseBtn_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteNurseBtn_clicked'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addReceptionistBtn_clicked'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_staffTypeTabs_tabBarClicked'
        QtMocHelpers::SlotData<void(int)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_deleteReceptionistBtn_clicked'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addAdminBtn_clicked'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteAdminBtn_clicked'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editAdminBtn_clicked'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editReceptionistBtn_clicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editNurseBtn_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_labTabs_tabBarClicked'
        QtMocHelpers::SlotData<void(int)>(52, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_scheduleTestBtn_clicked'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editTestBtn_clicked'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cancelTestBtn_clicked'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_completeTestBtn_clicked'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_scheduleTestBtn_2_clicked'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editTestBtn_2_clicked'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cancelTestBtn_2_clicked'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_laboraty_push_button_clicked'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lab_del_push_2_clicked'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_testdata_pushbutton_clicked'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_test_del_push_clicked'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lab_complet_push_clicked'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addWardBtn_clicked'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_5_clicked'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dataFetchForNurses'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_2_clicked'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_8_clicked'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_room_add_bttn_clicked'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addRoomBtn_clicked'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_wardRoomTabs_tabBarClicked'
        QtMocHelpers::SlotData<void(int)>(72, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_mainTabWidget_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_addPatientBtn_clicked(); break;
        case 2: _t->clearpatientform(); break;
        case 3: _t->on_addDoctorBtn_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_patient_clicked(); break;
        case 6: _t->on_editPatientBtn_clicked(); break;
        case 7: _t->on_edit_button_clicked(); break;
        case 8: _t->on_editDoctorBtn_clicked(); break;
        case 9: _t->on_doctor_editpushbutton_clicked(); break;
        case 10: _t->on_deletepush_clicked(); break;
        case 11: _t->on_deleteDoctorBtn_clicked(); break;
        case 12: _t->on_deletePatientBtn_clicked(); break;
        case 13: _t->on_pushdelpatient_clicked(); break;
        case 14: _t->on_addAppointmentBtn_clicked(); break;
        case 15: _t->on_cb_spec_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->fetch_relevant_doctors((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->fetch_selected_doctors_dates((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->on_cb_avdoc_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_slot_button_clicked(); break;
        case 20: _t->on_button_bookappoint_clicked(); break;
        case 21: _t->on_editAppointmentBtn_clicked(); break;
        case 22: _t->on_appointeditbutton_clicked(); break;
        case 23: _t->on_appointmentdeletepushbutton_clicked(); break;
        case 24: _t->on_deleteAppointmentBtn_clicked(); break;
        case 25: _t->on_completeAppointmentBtn_clicked(); break;
        case 26: _t->on_pushButton_appointmentcompleted_clicked(); break;
        case 27: _t->on_pharmacyTabs_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->on_addInventoryBtn_clicked(); break;
        case 29: _t->on_push_stock_clicked(); break;
        case 30: _t->on_deleteInventoryBtn_clicked(); break;
        case 31: _t->on_med_del_push_clicked(); break;
        case 32: _t->on_editInventoryBtn_clicked(); break;
        case 33: _t->on_edit_med_push_clicked(); break;
        case 34: _t->on_restockInventoryBtn_clicked(); break;
        case 35: _t->on_med_restock_push_clicked(); break;
        case 36: _t->on_addNurseBtn_clicked(); break;
        case 37: _t->on_deleteNurseBtn_clicked(); break;
        case 38: _t->on_addReceptionistBtn_clicked(); break;
        case 39: _t->on_staffTypeTabs_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->on_deleteReceptionistBtn_clicked(); break;
        case 41: _t->on_addAdminBtn_clicked(); break;
        case 42: _t->on_deleteAdminBtn_clicked(); break;
        case 43: _t->on_editAdminBtn_clicked(); break;
        case 44: _t->on_editReceptionistBtn_clicked(); break;
        case 45: _t->on_editNurseBtn_clicked(); break;
        case 46: _t->on_labTabs_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->on_scheduleTestBtn_clicked(); break;
        case 48: _t->on_editTestBtn_clicked(); break;
        case 49: _t->on_cancelTestBtn_clicked(); break;
        case 50: _t->on_completeTestBtn_clicked(); break;
        case 51: _t->on_scheduleTestBtn_2_clicked(); break;
        case 52: _t->on_editTestBtn_2_clicked(); break;
        case 53: _t->on_cancelTestBtn_2_clicked(); break;
        case 54: _t->on_laboraty_push_button_clicked(); break;
        case 55: _t->on_lab_del_push_2_clicked(); break;
        case 56: _t->on_testdata_pushbutton_clicked(); break;
        case 57: _t->on_test_del_push_clicked(); break;
        case 58: _t->on_lab_complet_push_clicked(); break;
        case 59: _t->on_addWardBtn_clicked(); break;
        case 60: _t->on_pushButton_5_clicked(); break;
        case 61: _t->dataFetchForNurses(); break;
        case 62: _t->on_pushButton_2_clicked(); break;
        case 63: _t->on_pushButton_8_clicked(); break;
        case 64: _t->on_room_add_bttn_clicked(); break;
        case 65: _t->on_addRoomBtn_clicked(); break;
        case 66: _t->on_wardRoomTabs_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 67)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 67;
    }
    return _id;
}
QT_WARNING_POP
