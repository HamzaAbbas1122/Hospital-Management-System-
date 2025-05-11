#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QStringList List;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void datafetchforpatient();
    void datafetchfordoctors();
    void datafetchfortestsbooking();
    void datafetchforappointments();
    void datafetchforpharmacy();
    void datafetchfortestsdata();
    void datafetchfordepartment();
    void datafetchforward();
    void datafetchforroom();
    void datafetchforbed();
    void datafetchforbills();
private slots:

    void on_mainTabWidget_tabBarClicked(int index);

    void on_addPatientBtn_clicked();
    void clearpatientform();
    void on_addDoctorBtn_clicked();


    void on_pushButton_clicked();

    void on_pushButton_patient_clicked();

    void on_editPatientBtn_clicked();

    void on_edit_button_clicked();

    void on_editDoctorBtn_clicked();

    void on_doctor_editpushbutton_clicked();

    void on_deletepush_clicked();

    void on_deleteDoctorBtn_clicked();

    void on_deletePatientBtn_clicked();

    void on_pushdelpatient_clicked();

    void on_addAppointmentBtn_clicked();

    void on_cb_spec_activated(int index);

    void fetch_relevant_doctors(QString specs,QString uiname);
    void fetch_selected_doctors_dates(int doctorid,QString uiname);

    void on_cb_avdoc_activated(int index);

    void on_slot_button_clicked();


    void on_button_bookappoint_clicked();
    //void clearappointmentform();


    void on_editAppointmentBtn_clicked();

    void on_appointeditbutton_clicked();

    void on_appointmentdeletepushbutton_clicked();

    void on_deleteAppointmentBtn_clicked();

    void on_completeAppointmentBtn_clicked();

    void on_pushButton_appointmentcompleted_clicked();


    void on_pharmacyTabs_tabBarClicked(int index);


    void on_addInventoryBtn_clicked();

    void on_push_stock_clicked();

    void on_deleteInventoryBtn_clicked();

    void on_med_del_push_clicked();

    void on_editInventoryBtn_clicked();

    void on_edit_med_push_clicked();

    void on_restockInventoryBtn_clicked();

    void on_med_restock_push_clicked();

    void on_addNurseBtn_clicked();

    void on_deleteNurseBtn_clicked();

    void on_addReceptionistBtn_clicked();

    void on_staffTypeTabs_tabBarClicked(int index);

    void on_deleteReceptionistBtn_clicked();

    void on_addAdminBtn_clicked();

    void on_deleteAdminBtn_clicked();

    void on_editAdminBtn_clicked();

    void on_editReceptionistBtn_clicked();

    void on_editNurseBtn_clicked();

    void on_labTabs_tabBarClicked(int index);

    void on_scheduleTestBtn_clicked();

    void on_editTestBtn_clicked();

    void on_cancelTestBtn_clicked();

    void on_completeTestBtn_clicked();

    void on_scheduleTestBtn_2_clicked();

    void on_editTestBtn_2_clicked();

    void on_cancelTestBtn_2_clicked();

    void on_laboraty_push_button_clicked();

    void on_lab_del_push_2_clicked();

    void on_testdata_pushbutton_clicked();

    void on_test_del_push_clicked();

    void on_lab_complet_push_clicked();

    void on_addWardBtn_clicked();

    void on_pushButton_5_clicked();
    void dataFetchForNurses();                  // To populate nursesTable
    void on_pushButton_2_clicked();
    void on_pushButton_8_clicked();

    void on_room_add_bttn_clicked();

    void on_addRoomBtn_clicked();

    void on_wardRoomTabs_tabBarClicked(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
