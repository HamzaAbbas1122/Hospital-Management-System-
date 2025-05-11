#ifndef PATIENTUI_H
#define PATIENTUI_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QTableWidget>
#include "patient.h"
#include "doctor.h"
#include "appointment.h"
#include "medicine.h"

namespace Ui {
class PatientUI;
}

class PatientUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit PatientUI(QWidget *parent = nullptr);
    ~PatientUI();

private slots:
    void on_loginButton_clicked();
    void on_actionLogout_triggered();
    void on_newAppointmentBtn_clicked();
    void on_cancelAppointmentBtn_clicked();
    void on_payBillBtn_clicked();

private:
    Ui::PatientUI *ui;
    patient* currentPatient;
    Doctor* assignedDoctor;

    void setupTables();
    void loadPatientData();
    void loadAppointments();
    void loadPrescriptions();
    void loadBillingInfo();
    bool authenticatePatient(const QString& name, const QString& phone);
    void showMainPage();
};

#endif // PATIENTUI_H
