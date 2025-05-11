#ifndef DOCTORUI_H
#define DOCTORUI_H

#include "appointment.h"
#include "doctor.h"
#include "medicine.h"
#include "patient.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui { class DoctorUI; }
QT_END_NAMESPACE

class DoctorUI : public QMainWindow
{
    Q_OBJECT

public:
    DoctorUI(QWidget *parent = nullptr);
    ~DoctorUI();

private slots:
    void on_fetchDetailsBtn_clicked();
    void on_prescribeBtn_clicked();
    void on_appointmentsTable_itemSelectionChanged();
    void on_updateAvailabilityBtn_clicked();
    void on_updateDepartmentBtn_clicked();
    void on_updateStatusBtn_clicked();

private:
    Ui::DoctorUI *ui;
    Doctor** doctors;
    Doctor* currentDoctor = nullptr;
    patient** patients;
    appointment** appointments;
    medicine** medicines;
    int currentDoctorId = -1;
    int currentPatientId = -1;
    int currentAppointmentId = -1;

    void loadDoctorAppointments();
    void loadPatientDetails(int patientId);
    void clearTables();
    QString calculateAge(const QString &dob);
};
#endif
