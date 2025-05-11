
#include "aichatwindow.h"
#include "patientui.h"
#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "doctorui.h"   // Add doctor UI header
#include "mainwindow.h"

AdminLogin::AdminLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
    // Additional initialization if needed
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_loginButton_clicked()
{
    MainWindow *ui=new MainWindow;
    ui->show();
    this->hide();

}

void AdminLogin::on_patientButton_clicked()
{
    PatientUI *patientUI = new PatientUI();
    patientUI->show();
    this->close();
}

void AdminLogin::on_doctorButton_clicked()
{
    // Open doctor UI and close login
    DoctorUI *doctorUI = new DoctorUI();
    doctorUI->show();
    this->close();
}


void AdminLogin::on_pushButton_clicked()
{
    AIChatWindow *aiWindow = new AIChatWindow();
    aiWindow->setAttribute(Qt::WA_DeleteOnClose);
    aiWindow->show();
    this->hide();
}

