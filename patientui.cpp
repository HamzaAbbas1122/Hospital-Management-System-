#include "patientui.h"
#include "ui_patientui.h"
#include "functions.h"
#include "global.h"
#include <QMessageBox>
#include <QDebug>

PatientUI::PatientUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatientUI),
    currentPatient(nullptr),
    assignedDoctor(nullptr)
{
    ui->setupUi(this);

    // Set window title
    setWindowTitle("Patient Portal - Bajwa Hospital");

    // Initialize UI
    setupTables();

    // Connect signals
    connect(ui->loginButton, &QPushButton::clicked, this, &PatientUI::on_loginButton_clicked);
    connect(ui->actionLogout, &QAction::triggered, this, &PatientUI::on_actionLogout_triggered);
}

PatientUI::~PatientUI()
{
    delete ui;
}

void PatientUI::setupTables()
{
    // Appointments table
    ui->appointmentsTable->setColumnCount(5);
    ui->appointmentsTable->setHorizontalHeaderLabels({"ID", "Date", "Doctor", "Purpose", "Status"});
    ui->appointmentsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Prescriptions table
    ui->prescriptionsTable->setColumnCount(4);
    ui->prescriptionsTable->setHorizontalHeaderLabels({"Date", "Doctor", "Medicine", "Dosage"});
    ui->prescriptionsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Billing table
    ui->billingTable->setColumnCount(3);
    ui->billingTable->setHorizontalHeaderLabels({"Date", "Description", "Amount"});
    ui->billingTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void PatientUI::on_loginButton_clicked()
{
    QString name = ui->usernameLineEdit->text().trimmed();
    QString phone = ui->passwordLineEdit->text().trimmed();

    if (name.isEmpty() || phone.isEmpty()) {
        ui->loginErrorLabel->setText("Please enter both name and phone number");
        return;
    }

    if (authenticatePatient(name, phone)) {
        showMainPage();
    } else {
        ui->loginErrorLabel->setText("Invalid credentials. Please try again.");
    }
}

bool PatientUI::authenticatePatient(const QString& name, const QString& phone)
{
    patient** patients = fetchdata_patient();
    if (!patients) return false;

    for (int i = 0; i < patientcount; i++) {
        if (patients[i]->getname().compare(name, Qt::CaseInsensitive) == 0 &&
            patients[i]->getnumber() == phone) {
            currentPatient = patients[i];

            // Find assigned doctor
            Doctor** doctors = fetchdata_doctor();
            if (doctors) {
                for (int j = 0; j < doctorcount; j++) {
                    if (doctors[j]->getDoctorId() == currentPatient->getdocid()) {
                        assignedDoctor = doctors[j];
                        break;
                    }
                }
            }

            return true;
        }
    }

    return false;
}

void PatientUI::showMainPage()
{
    ui->mainStackedWidget->setCurrentIndex(1);
    loadPatientData();
    loadAppointments();
    loadPrescriptions();
    loadBillingInfo();
}

void PatientUI::loadPatientData()
{
    if (!currentPatient) return;

    // Update welcome message
    ui->welcomeLabel->setText("Welcome, " + currentPatient->getname() + "!");

    // Update patient info
    ui->nameValueLabel->setText(currentPatient->getname());
    ui->statusValueLabel->setText(currentPatient->getstatuse());

    // Update doctor info if available
    if (assignedDoctor) {
        ui->doctorValueLabel->setText(assignedDoctor->getname());
        ui->spec_p_ui->setText(assignedDoctor->getSpecialization());
    }
}

void PatientUI::loadAppointments()
{
    if (!currentPatient) return;

    ui->appointmentsTable->setRowCount(0);

    appointment** appointments = fetchdata_appointment();
    if (!appointments) return;

    for (int i = 0; i < appointmentcount; i++) {
        if (appointments[i]->getpatid() == currentPatient->getid()) {
            int row = ui->appointmentsTable->rowCount();
            ui->appointmentsTable->insertRow(row);

            ui->appointmentsTable->setItem(row, 0, new QTableWidgetItem(QString::number(appointments[i]->getapid())));
            ui->appointmentsTable->setItem(row, 1, new QTableWidgetItem(appointments[i]->getappdate()));
            ui->appointmentsTable->setItem(row, 2, new QTableWidgetItem(appointments[i]->getdname()));
            ui->appointmentsTable->setItem(row, 3, new QTableWidgetItem(appointments[i]->getapurpose()));
            ui->appointmentsTable->setItem(row, 4, new QTableWidgetItem(appointments[i]->getappstat()));
        }
    }
}

void PatientUI::loadPrescriptions()
{
    if (!currentPatient) return;

    ui->prescriptionsTable->setRowCount(0);

    // In a real system, you would fetch prescriptions from a database
    // For demo purposes, we'll add some sample data
    int row = ui->prescriptionsTable->rowCount();
    ui->prescriptionsTable->insertRow(row);
    ui->prescriptionsTable->setItem(row, 0, new QTableWidgetItem("2023-05-15"));
    ui->prescriptionsTable->setItem(row, 1, new QTableWidgetItem("Dr. Smith"));
    ui->prescriptionsTable->setItem(row, 2, new QTableWidgetItem("Paracetamol"));
    ui->prescriptionsTable->setItem(row, 3, new QTableWidgetItem("500mg, 3 times daily"));
}

void PatientUI::loadBillingInfo()
{
    if (!currentPatient) return;

    ui->billingTable->setRowCount(0);

    // In a real system, you would fetch billing info from a database
    // For demo purposes, we'll add some sample data
    int row = ui->billingTable->rowCount();
    ui->billingTable->insertRow(row);
    ui->billingTable->setItem(row, 0, new QTableWidgetItem("2023-05-10"));
    ui->billingTable->setItem(row, 1, new QTableWidgetItem("Consultation Fee"));
    ui->billingTable->setItem(row, 2, new QTableWidgetItem("$150.00"));

    row = ui->billingTable->rowCount();
    ui->billingTable->insertRow(row);
    ui->billingTable->setItem(row, 0, new QTableWidgetItem("2023-05-12"));
    ui->billingTable->setItem(row, 1, new QTableWidgetItem("Lab Tests"));
    ui->billingTable->setItem(row, 2, new QTableWidgetItem("$75.50"));
}

void PatientUI::on_actionLogout_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        currentPatient = nullptr;
        assignedDoctor = nullptr;
        ui->mainStackedWidget->setCurrentIndex(0);
        ui->usernameLineEdit->clear();
        ui->passwordLineEdit->clear();
        ui->loginErrorLabel->clear();
    }
}

void PatientUI::on_newAppointmentBtn_clicked()
{
    QMessageBox::information(this, "New Appointment",
                             "This feature will be implemented in the next version.");
}

void PatientUI::on_cancelAppointmentBtn_clicked()
{
    QModelIndexList selected = ui->appointmentsTable->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select an appointment to cancel.");
        return;
    }

    QMessageBox::information(this, "Cancel Appointment",
                             "Appointment cancellation will be implemented in the next version.");
}

void PatientUI::on_payBillBtn_clicked()
{
    QMessageBox::information(this, "Pay Bill",
                             "Payment processing will be implemented in the next version.");
}
