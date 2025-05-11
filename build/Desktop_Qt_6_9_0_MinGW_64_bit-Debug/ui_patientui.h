/********************************************************************************
** Form generated from reading UI file 'patientui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTUI_H
#define UI_PATIENTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientUI
{
public:
    QAction *actionLogout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *mainStackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *loginContainer;
    QVBoxLayout *verticalLayout_3;
    QLabel *loginTitleLabel;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QLabel *loginErrorLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *mainPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *welcomeLabel;
    QTabWidget *tabWidget;
    QWidget *dashboardTab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *patientInfoGroupBox;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLabel *nameValueLabel;
    QLabel *doctorLabel;
    QLabel *doctorValueLabel;
    QLabel *specializationLabel;
    QLabel *spec_p_ui;
    QLabel *statusLabel;
    QLabel *statusValueLabel;
    QWidget *appointmentsTab;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *appointmentsTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *newAppointmentBtn;
    QPushButton *cancelAppointmentBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *prescriptionsTab;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *prescriptionsTable;
    QWidget *billingTab;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *billingTable;
    QPushButton *payBillBtn;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PatientUI)
    {
        if (PatientUI->objectName().isEmpty())
            PatientUI->setObjectName("PatientUI");
        PatientUI->resize(1000, 700);
        PatientUI->setStyleSheet(QString::fromUtf8("\n"
"    /* Main Window */\n"
"    QMainWindow {\n"
"      background-color: white;\n"
"      font-family: 'Segoe UI', Arial, sans-serif;\n"
"    }\n"
"    \n"
"    /* Text Elements */\n"
"    QLabel, QLineEdit, QTableWidget, QHeaderView::section, QTabBar::tab {\n"
"      color: black;\n"
"      font-size: 12px;\n"
"    }\n"
"    \n"
"    /* Input Fields */\n"
"    QLineEdit, QDateEdit, QTextEdit, QComboBox {\n"
"      background-color: white;\n"
"      border: 1px solid #e0e0e0;\n"
"      border-radius: 4px;\n"
"      padding: 8px;\n"
"      color: black;\n"
"    }\n"
"    \n"
"    QLineEdit:focus, QDateEdit:focus {\n"
"      border: 1px solid #1e90ff;\n"
"      outline: none;\n"
"    }\n"
"    \n"
"    /* Login Page */\n"
"    #loginContainer {\n"
"      background-color: white;\n"
"      border-radius: 8px;\n"
"      padding: 30px;\n"
"      border: 1px solid #e0e0e0;\n"
"      max-width: 400px;\n"
"      margin: 0 auto;\n"
"      box-shadow: 0 2px 4px rgba(0,0,0,0.05);\n"
"    }\n"
"    \n"
"    #loginTitl"
                        "eLabel {\n"
"      font-size: 22px;\n"
"      font-weight: bold;\n"
"      margin-bottom: 25px;\n"
"    }\n"
"    \n"
"    #loginContainer QLineEdit {\n"
"      padding: 10px;\n"
"      margin-bottom: 15px;\n"
"      min-width: 250px;\n"
"      background-color: white;\n"
"    }\n"
"    \n"
"    /* Buttons */\n"
"    QPushButton {\n"
"      background-color: #1e90ff;\n"
"      color: white;\n"
"      border: none;\n"
"      border-radius: 6px;\n"
"      padding: 8px 16px;\n"
"      font-size: 12px;\n"
"      min-width: 100px;\n"
"    }\n"
"    \n"
"    QPushButton:hover {\n"
"      background-color: #187bcd;\n"
"    }\n"
"    \n"
"    .login-btn {\n"
"      min-width: 120px;\n"
"      padding: 10px 20px;\n"
"    }\n"
"    \n"
"    /* Main Content */\n"
"    QTabWidget::pane {\n"
"      border: 1px solid #e0e0e0;\n"
"      border-radius: 4px;\n"
"      background: white;\n"
"      margin-top: 5px;\n"
"    }\n"
"    \n"
"    QTabBar::tab {\n"
"      background: white;\n"
"      border: 1px solid #e0e0e0;\n"
"   "
                        "   padding: 8px 16px;\n"
"      margin-right: 4px;\n"
"      border-top-left-radius: 4px;\n"
"      border-top-right-radius: 4px;\n"
"    }\n"
"    \n"
"    QTabBar::tab:selected {\n"
"      background: #f5f5f5;\n"
"      border-bottom: 2px solid #1e90ff;\n"
"    }\n"
"    \n"
"    /* Group Boxes */\n"
"    QGroupBox {\n"
"      border: 1px solid #e0e0e0;\n"
"      border-radius: 6px;\n"
"      margin-top: 10px;\n"
"      padding-top: 15px;\n"
"      background: white;\n"
"    }\n"
"    \n"
"    QGroupBox::title {\n"
"      subcontrol-origin: margin;\n"
"      left: 10px;\n"
"      padding: 0 3px;\n"
"    }\n"
"    \n"
"    /* Tables */\n"
"    QTableWidget {\n"
"      border: 1px solid #e0e0e0;\n"
"      border-radius: 4px;\n"
"      background: white;\n"
"      alternate-background-color: #f9f9f9;\n"
"    }\n"
"    \n"
"    QHeaderView::section {\n"
"      background-color: #f5f5f5;\n"
"      padding: 8px;\n"
"      border: none;\n"
"      font-weight: bold;\n"
"    }\n"
"    \n"
"    /* Form Layout */\n"
" "
                        "   QFormLayout {\n"
"      margin: 10px;\n"
"    }\n"
"    \n"
"    /* Error Label */\n"
"    #loginErrorLabel {\n"
"      color: #d32f2f;\n"
"      font-size: 11px;\n"
"    }\n"
"   "));
        actionLogout = new QAction(PatientUI);
        actionLogout->setObjectName("actionLogout");
        centralwidget = new QWidget(PatientUI);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        mainStackedWidget = new QStackedWidget(centralwidget);
        mainStackedWidget->setObjectName("mainStackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        verticalLayout_2 = new QVBoxLayout(loginPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        loginContainer = new QWidget(loginPage);
        loginContainer->setObjectName("loginContainer");
        verticalLayout_3 = new QVBoxLayout(loginContainer);
        verticalLayout_3->setObjectName("verticalLayout_3");
        loginTitleLabel = new QLabel(loginContainer);
        loginTitleLabel->setObjectName("loginTitleLabel");
        loginTitleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(loginTitleLabel);

        usernameLabel = new QLabel(loginContainer);
        usernameLabel->setObjectName("usernameLabel");

        verticalLayout_3->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(loginContainer);
        usernameLineEdit->setObjectName("usernameLineEdit");

        verticalLayout_3->addWidget(usernameLineEdit);

        passwordLabel = new QLabel(loginContainer);
        passwordLabel->setObjectName("passwordLabel");

        verticalLayout_3->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(loginContainer);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_3->addWidget(passwordLineEdit);

        loginButton = new QPushButton(loginContainer);
        loginButton->setObjectName("loginButton");

        verticalLayout_3->addWidget(loginButton);

        loginErrorLabel = new QLabel(loginContainer);
        loginErrorLabel->setObjectName("loginErrorLabel");

        verticalLayout_3->addWidget(loginErrorLabel);


        verticalLayout_2->addWidget(loginContainer);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        mainStackedWidget->addWidget(loginPage);
        mainPage = new QWidget();
        mainPage->setObjectName("mainPage");
        verticalLayout_4 = new QVBoxLayout(mainPage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        welcomeLabel = new QLabel(mainPage);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setStyleSheet(QString::fromUtf8("font-size: 16px; font-weight: bold;"));

        verticalLayout_4->addWidget(welcomeLabel);

        tabWidget = new QTabWidget(mainPage);
        tabWidget->setObjectName("tabWidget");
        dashboardTab = new QWidget();
        dashboardTab->setObjectName("dashboardTab");
        verticalLayout_5 = new QVBoxLayout(dashboardTab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        patientInfoGroupBox = new QGroupBox(dashboardTab);
        patientInfoGroupBox->setObjectName("patientInfoGroupBox");
        formLayout = new QFormLayout(patientInfoGroupBox);
        formLayout->setObjectName("formLayout");
        nameLabel = new QLabel(patientInfoGroupBox);
        nameLabel->setObjectName("nameLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, nameLabel);

        nameValueLabel = new QLabel(patientInfoGroupBox);
        nameValueLabel->setObjectName("nameValueLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nameValueLabel);

        doctorLabel = new QLabel(patientInfoGroupBox);
        doctorLabel->setObjectName("doctorLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, doctorLabel);

        doctorValueLabel = new QLabel(patientInfoGroupBox);
        doctorValueLabel->setObjectName("doctorValueLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, doctorValueLabel);

        specializationLabel = new QLabel(patientInfoGroupBox);
        specializationLabel->setObjectName("specializationLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, specializationLabel);

        spec_p_ui = new QLabel(patientInfoGroupBox);
        spec_p_ui->setObjectName("spec_p_ui");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, spec_p_ui);

        statusLabel = new QLabel(patientInfoGroupBox);
        statusLabel->setObjectName("statusLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, statusLabel);

        statusValueLabel = new QLabel(patientInfoGroupBox);
        statusValueLabel->setObjectName("statusValueLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, statusValueLabel);


        verticalLayout_5->addWidget(patientInfoGroupBox);

        tabWidget->addTab(dashboardTab, QString());
        appointmentsTab = new QWidget();
        appointmentsTab->setObjectName("appointmentsTab");
        verticalLayout_6 = new QVBoxLayout(appointmentsTab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        appointmentsTable = new QTableWidget(appointmentsTab);
        if (appointmentsTable->columnCount() < 5)
            appointmentsTable->setColumnCount(5);
        appointmentsTable->setObjectName("appointmentsTable");
        appointmentsTable->setColumnCount(5);

        verticalLayout_6->addWidget(appointmentsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newAppointmentBtn = new QPushButton(appointmentsTab);
        newAppointmentBtn->setObjectName("newAppointmentBtn");

        horizontalLayout->addWidget(newAppointmentBtn);

        cancelAppointmentBtn = new QPushButton(appointmentsTab);
        cancelAppointmentBtn->setObjectName("cancelAppointmentBtn");

        horizontalLayout->addWidget(cancelAppointmentBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout);

        tabWidget->addTab(appointmentsTab, QString());
        prescriptionsTab = new QWidget();
        prescriptionsTab->setObjectName("prescriptionsTab");
        verticalLayout_7 = new QVBoxLayout(prescriptionsTab);
        verticalLayout_7->setObjectName("verticalLayout_7");
        prescriptionsTable = new QTableWidget(prescriptionsTab);
        if (prescriptionsTable->columnCount() < 4)
            prescriptionsTable->setColumnCount(4);
        prescriptionsTable->setObjectName("prescriptionsTable");
        prescriptionsTable->setColumnCount(4);

        verticalLayout_7->addWidget(prescriptionsTable);

        tabWidget->addTab(prescriptionsTab, QString());
        billingTab = new QWidget();
        billingTab->setObjectName("billingTab");
        verticalLayout_8 = new QVBoxLayout(billingTab);
        verticalLayout_8->setObjectName("verticalLayout_8");
        billingTable = new QTableWidget(billingTab);
        if (billingTable->columnCount() < 3)
            billingTable->setColumnCount(3);
        billingTable->setObjectName("billingTable");
        billingTable->setColumnCount(3);

        verticalLayout_8->addWidget(billingTable);

        payBillBtn = new QPushButton(billingTab);
        payBillBtn->setObjectName("payBillBtn");

        verticalLayout_8->addWidget(payBillBtn);

        tabWidget->addTab(billingTab, QString());

        verticalLayout_4->addWidget(tabWidget);

        mainStackedWidget->addWidget(mainPage);

        verticalLayout->addWidget(mainStackedWidget);

        PatientUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PatientUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        PatientUI->setMenuBar(menubar);
        statusbar = new QStatusBar(PatientUI);
        statusbar->setObjectName("statusbar");
        PatientUI->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLogout);

        retranslateUi(PatientUI);

        mainStackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(PatientUI);
    } // setupUi

    void retranslateUi(QMainWindow *PatientUI)
    {
        PatientUI->setWindowTitle(QCoreApplication::translate("PatientUI", "Patient Portal - Bajwa Hospital", nullptr));
        actionLogout->setText(QCoreApplication::translate("PatientUI", "Logout", nullptr));
        loginTitleLabel->setText(QCoreApplication::translate("PatientUI", "Patient Login", nullptr));
        usernameLabel->setText(QCoreApplication::translate("PatientUI", "Full Name", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("PatientUI", "Enter your full name", nullptr));
        passwordLabel->setText(QCoreApplication::translate("PatientUI", "Phone Number", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("PatientUI", "Enter your phone number", nullptr));
        loginButton->setText(QCoreApplication::translate("PatientUI", "Login", nullptr));
        loginErrorLabel->setText(QString());
        welcomeLabel->setText(QCoreApplication::translate("PatientUI", "Welcome to Bajwa Hospital", nullptr));
        patientInfoGroupBox->setTitle(QCoreApplication::translate("PatientUI", "Patient Information", nullptr));
        nameLabel->setText(QCoreApplication::translate("PatientUI", "Name:", nullptr));
        doctorLabel->setText(QCoreApplication::translate("PatientUI", "Assigned Doctor:", nullptr));
        specializationLabel->setText(QCoreApplication::translate("PatientUI", "Specialization:", nullptr));
        statusLabel->setText(QCoreApplication::translate("PatientUI", "Status:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(dashboardTab), QCoreApplication::translate("PatientUI", "Dashboard", nullptr));
        newAppointmentBtn->setText(QCoreApplication::translate("PatientUI", "New Appointment", nullptr));
        cancelAppointmentBtn->setText(QCoreApplication::translate("PatientUI", "Cancel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(appointmentsTab), QCoreApplication::translate("PatientUI", "Appointments", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(prescriptionsTab), QCoreApplication::translate("PatientUI", "Prescriptions", nullptr));
        payBillBtn->setText(QCoreApplication::translate("PatientUI", "Pay Bill", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(billingTab), QCoreApplication::translate("PatientUI", "Billing", nullptr));
        menuFile->setTitle(QCoreApplication::translate("PatientUI", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientUI: public Ui_PatientUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTUI_H
