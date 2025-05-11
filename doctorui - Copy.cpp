#include "doctorui.h"
#include "functions.h"
#include "global.h"
#include "ui_doctorui.h"
#include <QMessageBox>
#include <QTableWidgetItem>

DoctorUI::DoctorUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorUI)
{
    ui->setupUi(this);

    // Initialize UI components
    setWindowTitle("Doctor Management - Bajwa Hospital");
    setMinimumSize(1000, 700);

    // Initialize tables
    ui->appointmentsTable->setColumnCount(4);
    ui->appointmentsTable->setHorizontalHeaderLabels({"Patient Name", "Date", "Status", "Medical History"});
    ui->appointmentsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->appointmentsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Fetch initial data
    doctors = fetchdata_doctor();
    patients = fetchdata_patient();
    appointments = fetchdata_appointment();
    medicines = fetchdata_medicine();
}

DoctorUI::~DoctorUI()
{
    delete ui;
    if (doctors) delete[] doctors;
    if (patients) delete[] patients;
    if (appointments) delete[] appointments;
    if (medicines) delete[] medicines;
}

void DoctorUI::on_fetchDetailsBtn_clicked()
{
    QString doctorName = ui->doctorNameEdit->text().trimmed();
    QString cnic = ui->doctorCnicEdit->text().trimmed();

    if (doctorName.isEmpty() || cnic.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter both name and CNIC");
        return;
    }

    // Simple authentication - in real app, use proper credentials
    bool found = false;
    for (int i = 0; i < doctorcount; i++) {
        if (doctors[i]->getname().contains(doctorName) &&
            doctors[i]->getnumber().contains(cnic)) {
            currentDoctorId = doctors[i]->getDoctorId();
            ui->doctorInfoGroup->setTitle("Doctor: " + doctors[i]->getname());
            loadDoctorAppointments();
            found = true;
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Error", "Invalid doctor name or CNIC");
    }
}

void DoctorUI::loadDoctorAppointments()
{
    ui->appointmentsTable->setRowCount(0);

    for (int i = 0; i < appointmentcount; i++) {
        if (appointments[i]->getdocid() == currentDoctorId) {
            int row = ui->appointmentsTable->rowCount();
            ui->appointmentsTable->insertRow(row);

            ui->appointmentsTable->setItem(row, 0, new QTableWidgetItem(appointments[i]->getpname()));
            ui->appointmentsTable->setItem(row, 1, new QTableWidgetItem(appointments[i]->getappdate()));
            ui->appointmentsTable->setItem(row, 2, new QTableWidgetItem(appointments[i]->getappstat()));

            // Find patient's disease for medical history
            QString medicalHistory;
            for (int j = 0; j < patientcount; j++) {
                if (patients[j]->getid() == appointments[i]->getpatid()) {
                    medicalHistory = patients[j]->getdisease();
                    break;
                }
            }
            ui->appointmentsTable->setItem(row, 3, new QTableWidgetItem(medicalHistory));
        }
    }
}

void DoctorUI::on_appointmentsTable_itemSelectionChanged()
{
    int selectedRow = ui->appointmentsTable->currentRow();
    if (selectedRow >= 0) {
        QString patientName = ui->appointmentsTable->item(selectedRow, 0)->text();
        ui->selectedPatientEdit->setText(patientName);
    }
}

void DoctorUI::on_prescribeBtn_clicked()
{
    if (currentDoctorId == -1) {
        QMessageBox::warning(this, "Error", "Please login first");
        return;
    }

    int selectedRow = ui->appointmentsTable->currentRow();
    if (selectedRow == -1) {
        QMessageBox::warning(this, "Error", "Please select a patient");
        return;
    }

    QString prescriptionText = ui->prescriptionEdit->toPlainText().trimmed();
    if (prescriptionText.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter prescription details");
        return;
    }

    QString patientName = ui->appointmentsTable->item(selectedRow, 0)->text();

    // In a real app, you would save the prescription to a database
    // Here we'll just show a success message
    QMessageBox::information(this, "Success",
                             QString("Prescription saved for %1:\n%2").arg(patientName, prescriptionText));

    // Clear the prescription field
    ui->prescriptionEdit->clear();
}
