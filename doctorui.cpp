#include "doctorui.h"
#include "functions.h"
#include "global.h"
#include "ui_doctorui.h"
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QDateTime>

DoctorUI::DoctorUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorUI)
{
    ui->setupUi(this);

    setWindowTitle("Doctor Management - Bajwa Hospital");
    setMinimumSize(1000, 700);


    ui->appointmentsTable->setColumnCount(5);
    ui->appointmentsTable->setHorizontalHeaderLabels({"Patient Name", "Date", "Purpose", "Status", "Medical History"});
    ui->appointmentsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->appointmentsTable->setSelectionBehavior(QAbstractItemView::SelectRows);


    ui->departmentCombo->addItem("General Medicine", 1);
    ui->departmentCombo->addItem("Cardiology", 2);
    ui->departmentCombo->addItem("Orthopedics", 3);
    ui->departmentCombo->addItem("Pediatrics", 4);
    ui->departmentCombo->addItem("Neurology", 5);


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

    // Find the doctor
    bool found = false;
    for (int i = 0; i < doctorcount; i++) {
        if (doctors[i]->getname().contains(doctorName, Qt::CaseInsensitive) &&
            doctors[i]->getnumber().contains(cnic)) {
            currentDoctorId = doctors[i]->getDoctorId();
            currentDoctor = doctors[i];

            ui->doctorInfoGroup->setTitle("Doctor: " + doctors[i]->getname());
            ui->specialtyLabel->setText("Specialty: " + doctors[i]->getSpecialization());
            ui->experienceLabel->setText("Experience: " + QString::number(doctors[i]->getExperience()) + " years");

            int depIndex = ui->departmentCombo->findData(doctors[i]->getDepartmentId());
            if (depIndex != -1) {
                ui->departmentCombo->setCurrentIndex(depIndex);
            }


            ui->availabilityEdit->setText(doctors[i]->getAvailability().join(", "));

            loadDoctorAppointments();
            ui->tabWidget->setEnabled(true);
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
            ui->appointmentsTable->setItem(row, 2, new QTableWidgetItem(appointments[i]->getapurpose()));
            ui->appointmentsTable->setItem(row, 3, new QTableWidgetItem(appointments[i]->getappstat()));

            // Find patient's disease for medical history
            QString medicalHistory = "Unknown";
            for (int j = 0; j < patientcount; j++) {
                if (patients[j]->getid() == appointments[i]->getpatid()) {
                    medicalHistory = patients[j]->getdisease();
                    break;
                }
            }
            ui->appointmentsTable->setItem(row, 4, new QTableWidgetItem(medicalHistory));
        }
    }
}

void DoctorUI::on_appointmentsTable_itemSelectionChanged()
{
    int selectedRow = ui->appointmentsTable->currentRow();
    if (selectedRow >= 0) {
        QString patientName = ui->appointmentsTable->item(selectedRow, 0)->text();
        QString appointmentDate = ui->appointmentsTable->item(selectedRow, 1)->text();
        QString appointmentStatus = ui->appointmentsTable->item(selectedRow, 3)->text();

        ui->selectedPatientEdit->setText(patientName);
        ui->appointmentDateLabel->setText("Date: " + appointmentDate);
        ui->appointmentStatusLabel->setText("Status: " + appointmentStatus);

        for (int i = 0; i < appointmentcount; i++) {
            if (appointments[i]->getpname() == patientName &&
                appointments[i]->getappdate() == appointmentDate) {
                currentPatientId = appointments[i]->getpatid();
                currentAppointmentId = appointments[i]->getapid();

                for (int j = 0; j < patientcount; j++) {
                    if (patients[j]->getid() == currentPatientId) {
                        ui->patientDetailsText->setText(
                            "Name: " + patients[j]->getname() + "\n" +
                            "Gender: " + patients[j]->getgender() + "\n" +
                            "Age: " + calculateAge(patients[j]->getdob()) + "\n" +
                            "Condition: " + patients[j]->getdisease() + "\n" +
                            "Contact: " + patients[j]->getnumber()
                            );
                        break;
                    }
                }
                break;
            }
        }
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

    for (int i = 0; i < appointmentcount; i++) {
        if (appointments[i]->getapid() == currentAppointmentId) {
            appointments[i]->setappstat("Completed");
            break;
        }
    }


    objecttofile_appointmentforedit(appointments, appointmentcount);

    // In a real app, you would save the prescription to a database
    QMessageBox::information(this, "Success",
                             QString("Prescription saved for %1:\n%2").arg(patientName, prescriptionText));

    // Refresh the appointments table
    loadDoctorAppointments();

    // Clear the prescription field
    ui->prescriptionEdit->clear();
}

void DoctorUI::on_updateAvailabilityBtn_clicked()
{
    if (currentDoctorId == -1) {
        QMessageBox::warning(this, "Error", "Please login first");
        return;
    }

    QString availabilityText = ui->availabilityEdit->text().trimmed();
    if (availabilityText.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter availability information");
        return;
    }

    QStringList availabilityList = availabilityText.split(",", Qt::SkipEmptyParts);
    for (int i = 0; i < availabilityList.size(); i++) {
        availabilityList[i] = availabilityList[i].trimmed();
    }

    // Update doctor's availability
    for (int i = 0; i < doctorcount; i++) {
        if (doctors[i]->getDoctorId() == currentDoctorId) {
            doctors[i]->setAvailability(availabilityList);
            break;
        }
    }

    // Save changes to doctors file
    objecttofile_doctorforedit(doctors, doctorcount);

    QMessageBox::information(this, "Success", "Availability updated successfully");
}

void DoctorUI::on_updateDepartmentBtn_clicked()
{
    if (currentDoctorId == -1) {
        QMessageBox::warning(this, "Error", "Please login first");
        return;
    }

    int selectedDepartmentId = ui->departmentCombo->currentData().toInt();

    // Update doctor's department
    for (int i = 0; i < doctorcount; i++) {
        if (doctors[i]->getDoctorId() == currentDoctorId) {
            doctors[i]->setDepartmentId(selectedDepartmentId);
            break;
        }
    }

    // Save changes to doctors file
    objecttofile_doctorforedit(doctors, doctorcount);

    QMessageBox::information(this, "Success", "Department updated successfully");
}

void DoctorUI::on_updateStatusBtn_clicked()
{
    if (currentDoctorId == -1 || currentAppointmentId == -1) {
        QMessageBox::warning(this, "Error", "Please login and select an appointment");
        return;
    }

    QString newStatus = ui->statusCombo->currentText();

    // Update appointment status
    for (int i = 0; i < appointmentcount; i++) {
        if (appointments[i]->getapid() == currentAppointmentId) {
            appointments[i]->setappstat(newStatus);
            break;
        }
    }

    // Save changes to appointments file
    objecttofile_appointmentforedit(appointments, appointmentcount);

    // Refresh the appointments table
    loadDoctorAppointments();

    QMessageBox::information(this, "Success", "Appointment status updated to: " + newStatus);
}

QString DoctorUI::calculateAge(const QString &dob)
{
    // Parse date of birth
    QDate birthDate = QDate::fromString(dob, "yyyy-MM-dd");
    if (!birthDate.isValid()) {
        return "Unknown";
    }

    // Calculate age
    QDate currentDate = QDate::currentDate();
    int age = currentDate.year() - birthDate.year();

    // Adjust if birthday hasn't occurred this year
    if (currentDate.month() < birthDate.month() ||
        (currentDate.month() == birthDate.month() && currentDate.day() < birthDate.day())) {
        age--;
    }

    return QString::number(age);
}

void DoctorUI::clearTables()
{
    ui->appointmentsTable->setRowCount(0);
    ui->patientDetailsText->clear();
    ui->prescriptionEdit->clear();
}
