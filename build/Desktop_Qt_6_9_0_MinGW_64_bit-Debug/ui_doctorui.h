/********************************************************************************
** Form generated from reading UI file 'doctorui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORUI_H
#define UI_DOCTORUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorUI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabProfile;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *doctorInfoGroup;
    QFormLayout *formLayout;
    QLabel *doctorNameLabel;
    QLineEdit *doctorNameEdit;
    QLabel *doctorCnicLabel;
    QLineEdit *doctorCnicEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *fetchDetailsBtn;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *doctorDetailsGroup;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *departmentLabel;
    QComboBox *departmentCombo;
    QLineEdit *availabilityEdit;
    QLabel *availabilityLabel;
    QPushButton *updateAvailabilityBtn;
    QPushButton *updateDepartmentBtn;
    QLabel *experienceLabel;
    QLabel *specialtyLabel;
    QWidget *tabAppointments;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *appointmentsGroup;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *appointmentsTable;
    QGroupBox *patientDetailsGroup;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *selectedPatientLabel;
    QLineEdit *selectedPatientEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *appointmentStatusLabel;
    QLabel *appointmentDateLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *patientDetailsLabel;
    QTextEdit *patientDetailsText;
    QGroupBox *appointmentStatusGroup;
    QHBoxLayout *horizontalLayout_6;
    QLabel *statusLabel;
    QComboBox *statusCombo;
    QPushButton *updateStatusBtn;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tabPrescription;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *prescriptionGroup;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *prescriptionEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *prescribeBtn;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DoctorUI)
    {
        if (DoctorUI->objectName().isEmpty())
            DoctorUI->setObjectName("DoctorUI");
        DoctorUI->resize(1200, 800);
        DoctorUI->setStyleSheet(QString::fromUtf8("\n"
"      /* Main Window Styling */\n"
"      QMainWindow {\n"
"        background-color: #f5f7fa;\n"
"        font-family: 'Segoe UI', Arial, sans-serif;\n"
"      }\n"
"      \n"
"      /* Scroll Area Styling */\n"
"      QScrollArea {\n"
"        border: none;\n"
"        background: transparent;\n"
"      }\n"
"      \n"
"      /* Group Box Styling */\n"
"      QGroupBox {\n"
"        border: 1px solid #d1d9e6;\n"
"        border-radius: 8px;\n"
"        margin-top: 10px;\n"
"        padding-top: 15px;\n"
"        font-size: 14px;\n"
"        font-weight: bold;\n"
"        color: #000000;\n"
"        background: #ffffff;\n"
"      }\n"
"      \n"
"      QGroupBox::title {\n"
"        subcontrol-origin: margin;\n"
"        left: 10px;\n"
"        padding: 0 5px;\n"
"        color: #000000;\n"
"      }\n"
"      \n"
"      /* Label Styling */\n"
"      QLabel {\n"
"        color: #000000;\n"
"        font-size: 13px;\n"
"        font-weight: 500;\n"
"      }\n"
"      \n"
"      /* Input Field Styling */\n"
""
                        "      QLineEdit, QDateEdit, QTextEdit {\n"
"        border: 1px solid #d1d9e6;\n"
"        border-radius: 4px;\n"
"        padding: 8px 12px;\n"
"        font-size: 13px;\n"
"        min-width: 250px;\n"
"        color: #000000;\n"
"        background: #ffffff;\n"
"      }\n"
"      \n"
"      QLineEdit:focus, QTextEdit:focus {\n"
"        border: 1px solid #4a90e2;\n"
"      }\n"
"      \n"
"      /* Button Styling - Blue Theme */\n"
"      QPushButton {\n"
"        background-color: #4a90e2;\n"
"        color: #ffffff;\n"
"        border: none;\n"
"        border-radius: 4px;\n"
"        padding: 8px 16px;\n"
"        font-size: 13px;\n"
"        font-weight: 600;\n"
"        min-width: 120px;\n"
"      }\n"
"      \n"
"      QPushButton:hover {\n"
"        background-color: #3a7bc8;\n"
"      }\n"
"      \n"
"      QPushButton:pressed {\n"
"        background-color: #2a6bb7;\n"
"      }\n"
"      \n"
"      QPushButton:disabled {\n"
"        background-color: #b0c4de;\n"
"        color: #f0f0f0;\n"
"      }"
                        "\n"
"      \n"
"      /* Table Styling */\n"
"      QTableWidget {\n"
"        border: 1px solid #d1d9e6;\n"
"        border-radius: 4px;\n"
"        alternate-background-color: #f8f9fa;\n"
"        font-size: 13px;\n"
"        color: #000000;\n"
"        selection-background-color: #e1e8f0;\n"
"      }\n"
"      \n"
"      QHeaderView::section {\n"
"        background-color: #e6ecf2;\n"
"        padding: 8px;\n"
"        border: none;\n"
"        font-weight: bold;\n"
"        color: #000000;\n"
"      }\n"
"      \n"
"      /* Tab Widget Styling */\n"
"      QTabWidget::pane {\n"
"        border: 1px solid #d1d9e6;\n"
"        border-radius: 4px;\n"
"        background: #ffffff;\n"
"        padding: 5px;\n"
"      }\n"
"      \n"
"      QTabBar::tab {\n"
"        padding: 8px 16px;\n"
"        background: #e6ecf2;\n"
"        border: 1px solid #d1d9e6;\n"
"        border-bottom: none;\n"
"        border-top-left-radius: 4px;\n"
"        border-top-right-radius: 4px;\n"
"        margin-right: 2px;\n"
"       "
                        " color: #000000;\n"
"      }\n"
"      \n"
"      QTabBar::tab:selected {\n"
"        background: #ffffff;\n"
"        border-bottom: 1px solid #ffffff;\n"
"        margin-bottom: -1px;\n"
"        color: #000000;\n"
"      }\n"
"      \n"
"      /* Text Edit Styling */\n"
"      QTextEdit {\n"
"        color: #000000;\n"
"        background: #ffffff;\n"
"      }\n"
"      \n"
"      /* Combo Box Styling */\n"
"      QComboBox {\n"
"        border: 1px solid #d1d9e6;\n"
"        border-radius: 4px;\n"
"        padding: 6px;\n"
"        min-width: 150px;\n"
"        color: #000000;\n"
"        background: #ffffff;\n"
"      }\n"
"      \n"
"      QComboBox::drop-down {\n"
"        subcontrol-origin: padding;\n"
"        subcontrol-position: top right;\n"
"        width: 20px;\n"
"        border-left: 1px solid #d1d9e6;\n"
"      }\n"
"    "));
        centralwidget = new QWidget(DoctorUI);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabProfile = new QWidget();
        tabProfile->setObjectName("tabProfile");
        verticalLayout_5 = new QVBoxLayout(tabProfile);
        verticalLayout_5->setObjectName("verticalLayout_5");
        doctorInfoGroup = new QGroupBox(tabProfile);
        doctorInfoGroup->setObjectName("doctorInfoGroup");
        formLayout = new QFormLayout(doctorInfoGroup);
        formLayout->setObjectName("formLayout");
        doctorNameLabel = new QLabel(doctorInfoGroup);
        doctorNameLabel->setObjectName("doctorNameLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, doctorNameLabel);

        doctorNameEdit = new QLineEdit(doctorInfoGroup);
        doctorNameEdit->setObjectName("doctorNameEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, doctorNameEdit);

        doctorCnicLabel = new QLabel(doctorInfoGroup);
        doctorCnicLabel->setObjectName("doctorCnicLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, doctorCnicLabel);

        doctorCnicEdit = new QLineEdit(doctorInfoGroup);
        doctorCnicEdit->setObjectName("doctorCnicEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, doctorCnicEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        fetchDetailsBtn = new QPushButton(doctorInfoGroup);
        fetchDetailsBtn->setObjectName("fetchDetailsBtn");

        horizontalLayout_3->addWidget(fetchDetailsBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);


        verticalLayout_5->addWidget(doctorInfoGroup);

        doctorDetailsGroup = new QGroupBox(tabProfile);
        doctorDetailsGroup->setObjectName("doctorDetailsGroup");
        formLayout_2 = new QFormLayout(doctorDetailsGroup);
        formLayout_2->setObjectName("formLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        formLayout_2->setLayout(8, QFormLayout::ItemRole::FieldRole, horizontalLayout_4);

        departmentLabel = new QLabel(doctorDetailsGroup);
        departmentLabel->setObjectName("departmentLabel");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, departmentLabel);

        departmentCombo = new QComboBox(doctorDetailsGroup);
        departmentCombo->setObjectName("departmentCombo");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, departmentCombo);

        availabilityEdit = new QLineEdit(doctorDetailsGroup);
        availabilityEdit->setObjectName("availabilityEdit");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, availabilityEdit);

        availabilityLabel = new QLabel(doctorDetailsGroup);
        availabilityLabel->setObjectName("availabilityLabel");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, availabilityLabel);

        updateAvailabilityBtn = new QPushButton(doctorDetailsGroup);
        updateAvailabilityBtn->setObjectName("updateAvailabilityBtn");

        formLayout_2->setWidget(6, QFormLayout::ItemRole::FieldRole, updateAvailabilityBtn);

        updateDepartmentBtn = new QPushButton(doctorDetailsGroup);
        updateDepartmentBtn->setObjectName("updateDepartmentBtn");

        formLayout_2->setWidget(7, QFormLayout::ItemRole::FieldRole, updateDepartmentBtn);

        experienceLabel = new QLabel(doctorDetailsGroup);
        experienceLabel->setObjectName("experienceLabel");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, experienceLabel);

        specialtyLabel = new QLabel(doctorDetailsGroup);
        specialtyLabel->setObjectName("specialtyLabel");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, specialtyLabel);


        verticalLayout_5->addWidget(doctorDetailsGroup);

        tabWidget->addTab(tabProfile, QString());
        tabAppointments = new QWidget();
        tabAppointments->setObjectName("tabAppointments");
        verticalLayout_6 = new QVBoxLayout(tabAppointments);
        verticalLayout_6->setObjectName("verticalLayout_6");
        appointmentsGroup = new QGroupBox(tabAppointments);
        appointmentsGroup->setObjectName("appointmentsGroup");
        verticalLayout_2 = new QVBoxLayout(appointmentsGroup);
        verticalLayout_2->setObjectName("verticalLayout_2");
        appointmentsTable = new QTableWidget(appointmentsGroup);
        if (appointmentsTable->columnCount() < 5)
            appointmentsTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        appointmentsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        appointmentsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        appointmentsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        appointmentsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        appointmentsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        appointmentsTable->setObjectName("appointmentsTable");
        appointmentsTable->setStyleSheet(QString::fromUtf8("QTableWidget#appointmentsTable {\n"
"  background-color: white;\n"
"  alternate-background-color: white;\n"
"}"));

        verticalLayout_2->addWidget(appointmentsTable);


        verticalLayout_6->addWidget(appointmentsGroup);

        patientDetailsGroup = new QGroupBox(tabAppointments);
        patientDetailsGroup->setObjectName("patientDetailsGroup");
        verticalLayout_4 = new QVBoxLayout(patientDetailsGroup);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        selectedPatientLabel = new QLabel(patientDetailsGroup);
        selectedPatientLabel->setObjectName("selectedPatientLabel");

        horizontalLayout_5->addWidget(selectedPatientLabel);

        selectedPatientEdit = new QLineEdit(patientDetailsGroup);
        selectedPatientEdit->setObjectName("selectedPatientEdit");
        selectedPatientEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(selectedPatientEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        appointmentStatusLabel = new QLabel(patientDetailsGroup);
        appointmentStatusLabel->setObjectName("appointmentStatusLabel");

        horizontalLayout_7->addWidget(appointmentStatusLabel);

        appointmentDateLabel = new QLabel(patientDetailsGroup);
        appointmentDateLabel->setObjectName("appointmentDateLabel");

        horizontalLayout_7->addWidget(appointmentDateLabel);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");

        verticalLayout_4->addLayout(horizontalLayout_8);

        patientDetailsLabel = new QLabel(patientDetailsGroup);
        patientDetailsLabel->setObjectName("patientDetailsLabel");

        verticalLayout_4->addWidget(patientDetailsLabel);

        patientDetailsText = new QTextEdit(patientDetailsGroup);
        patientDetailsText->setObjectName("patientDetailsText");
        patientDetailsText->setReadOnly(true);

        verticalLayout_4->addWidget(patientDetailsText);


        verticalLayout_6->addWidget(patientDetailsGroup);

        appointmentStatusGroup = new QGroupBox(tabAppointments);
        appointmentStatusGroup->setObjectName("appointmentStatusGroup");
        horizontalLayout_6 = new QHBoxLayout(appointmentStatusGroup);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        statusLabel = new QLabel(appointmentStatusGroup);
        statusLabel->setObjectName("statusLabel");

        horizontalLayout_6->addWidget(statusLabel);

        statusCombo = new QComboBox(appointmentStatusGroup);
        statusCombo->addItem(QString());
        statusCombo->addItem(QString());
        statusCombo->setObjectName("statusCombo");

        horizontalLayout_6->addWidget(statusCombo);

        updateStatusBtn = new QPushButton(appointmentStatusGroup);
        updateStatusBtn->setObjectName("updateStatusBtn");

        horizontalLayout_6->addWidget(updateStatusBtn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_6->addWidget(appointmentStatusGroup);

        tabWidget->addTab(tabAppointments, QString());
        tabPrescription = new QWidget();
        tabPrescription->setObjectName("tabPrescription");
        verticalLayout_7 = new QVBoxLayout(tabPrescription);
        verticalLayout_7->setObjectName("verticalLayout_7");
        prescriptionGroup = new QGroupBox(tabPrescription);
        prescriptionGroup->setObjectName("prescriptionGroup");
        verticalLayout_3 = new QVBoxLayout(prescriptionGroup);
        verticalLayout_3->setObjectName("verticalLayout_3");
        prescriptionEdit = new QTextEdit(prescriptionGroup);
        prescriptionEdit->setObjectName("prescriptionEdit");

        verticalLayout_3->addWidget(prescriptionEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        prescribeBtn = new QPushButton(prescriptionGroup);
        prescribeBtn->setObjectName("prescribeBtn");

        horizontalLayout_2->addWidget(prescribeBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_7->addWidget(prescriptionGroup);

        tabWidget->addTab(tabPrescription, QString());

        verticalLayout->addWidget(tabWidget);

        DoctorUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DoctorUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        DoctorUI->setMenuBar(menubar);
        statusbar = new QStatusBar(DoctorUI);
        statusbar->setObjectName("statusbar");
        DoctorUI->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(DoctorUI);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(DoctorUI);
    } // setupUi

    void retranslateUi(QMainWindow *DoctorUI)
    {
        DoctorUI->setWindowTitle(QCoreApplication::translate("DoctorUI", "Doctor Management - Bajwa Hospital", nullptr));
        doctorInfoGroup->setTitle(QCoreApplication::translate("DoctorUI", "Doctor Login", nullptr));
        doctorNameLabel->setText(QCoreApplication::translate("DoctorUI", "Doctor Name:", nullptr));
        doctorCnicLabel->setText(QCoreApplication::translate("DoctorUI", "CNIC:", nullptr));
        doctorCnicEdit->setPlaceholderText(QCoreApplication::translate("DoctorUI", "XXXXX-XXXXXXX-X", nullptr));
        fetchDetailsBtn->setText(QCoreApplication::translate("DoctorUI", "Fetch Details", nullptr));
        doctorDetailsGroup->setTitle(QCoreApplication::translate("DoctorUI", "Doctor Details", nullptr));
        departmentLabel->setText(QCoreApplication::translate("DoctorUI", "Department:", nullptr));
        availabilityLabel->setText(QCoreApplication::translate("DoctorUI", "Availability:", nullptr));
        updateAvailabilityBtn->setText(QCoreApplication::translate("DoctorUI", "Update Availability", nullptr));
        updateDepartmentBtn->setText(QCoreApplication::translate("DoctorUI", "Update Department", nullptr));
        experienceLabel->setText(QCoreApplication::translate("DoctorUI", "Experience:", nullptr));
        specialtyLabel->setText(QCoreApplication::translate("DoctorUI", "Specialty:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabProfile), QCoreApplication::translate("DoctorUI", "Profile", nullptr));
        appointmentsGroup->setTitle(QCoreApplication::translate("DoctorUI", "Appointments", nullptr));
        QTableWidgetItem *___qtablewidgetitem = appointmentsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DoctorUI", "Patient Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = appointmentsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DoctorUI", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = appointmentsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DoctorUI", "Purpose", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = appointmentsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DoctorUI", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = appointmentsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DoctorUI", "Medical History", nullptr));
        patientDetailsGroup->setTitle(QCoreApplication::translate("DoctorUI", "Patient Details", nullptr));
        selectedPatientLabel->setText(QCoreApplication::translate("DoctorUI", "Selected Patient:", nullptr));
        appointmentStatusLabel->setText(QCoreApplication::translate("DoctorUI", "Status:", nullptr));
        appointmentDateLabel->setText(QCoreApplication::translate("DoctorUI", "Date:", nullptr));
        patientDetailsLabel->setText(QCoreApplication::translate("DoctorUI", "Patient Details:", nullptr));
        appointmentStatusGroup->setTitle(QCoreApplication::translate("DoctorUI", "Appointment Status", nullptr));
        statusLabel->setText(QCoreApplication::translate("DoctorUI", "Status:", nullptr));
        statusCombo->setItemText(0, QCoreApplication::translate("DoctorUI", "completed", nullptr));
        statusCombo->setItemText(1, QCoreApplication::translate("DoctorUI", "pending", nullptr));

        updateStatusBtn->setText(QCoreApplication::translate("DoctorUI", "Update Status", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAppointments), QCoreApplication::translate("DoctorUI", "Appointments", nullptr));
        prescriptionGroup->setTitle(QCoreApplication::translate("DoctorUI", "Prescription", nullptr));
        prescriptionEdit->setPlaceholderText(QCoreApplication::translate("DoctorUI", "Enter prescription details...", nullptr));
        prescribeBtn->setText(QCoreApplication::translate("DoctorUI", "Prescribe", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPrescription), QCoreApplication::translate("DoctorUI", "Prescription", nullptr));
        menuFile->setTitle(QCoreApplication::translate("DoctorUI", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("DoctorUI", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorUI: public Ui_DoctorUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORUI_H
