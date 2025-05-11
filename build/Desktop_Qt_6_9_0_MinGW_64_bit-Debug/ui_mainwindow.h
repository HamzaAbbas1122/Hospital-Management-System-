/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionPreferences;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *mainTabWidget;
    QWidget *dashboardTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *welcomeLabel;
    QFrame *quickStatsFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *totalPatientsLabel;
    QLabel *totalDoctorsLabel;
    QLabel *activeAppointmentsLabel;
    QLabel *availableRoomsLabel;
    QWidget *patientsTab;
    QVBoxLayout *verticalLayout_5;
    QFrame *patientActionsFrame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addPatientBtn;
    QPushButton *editPatientBtn;
    QPushButton *deletePatientBtn;
    QPushButton *viewPatientBtn;
    QSpacerItem *horizontalSpacer;
    QLineEdit *patientSearchBox;
    QStackedWidget *patient_stack;
    QWidget *page;
    QTableWidget *patientsTable;
    QPushButton *edit_button;
    QWidget *delpatient;
    QLabel *label_31;
    QLineEdit *delpatientedit;
    QPushButton *pushdelpatient;
    QWidget *page_2;
    QWidget *layoutWidget_2;
    QFormLayout *patient_form;
    QLabel *label_16;
    QLineEdit *pname_2;
    QLabel *label_20;
    QDateEdit *pdob_2;
    QLabel *label_21;
    QComboBox *gender_2;
    QLabel *label_22;
    QLineEdit *address_2;
    QLabel *label_23;
    QLineEdit *lineedit_pid;
    QLabel *label_24;
    QLineEdit *phone_2;
    QLabel *label_25;
    QComboBox *comboBox_disease;
    QLabel *label_26;
    QComboBox *comboBox_status;
    QLabel *label_28;
    QLineEdit *assigndoc_2;
    QLabel *departmentLabel_pat;
    QLineEdit *departmentLineEdit_name;
    QLabel *label_29;
    QLineEdit *lineedit_ward_pat;
    QLabel *roomNoLabel_pat;
    QLineEdit *roomNoLineEdit_pat;
    QLabel *bedNoLabel_pat;
    QLineEdit *bedNoLineEdit_pat;
    QPushButton *pushButton_patient;
    QWidget *doctorsTab;
    QVBoxLayout *verticalLayout_6;
    QFrame *doctorActionsFrame;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addDoctorBtn;
    QPushButton *editDoctorBtn;
    QPushButton *deleteDoctorBtn;
    QPushButton *viewDoctorBtn;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *doctorSearchBox;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLineEdit *pname;
    QLabel *label_2;
    QDateEdit *pdob;
    QLabel *label_11;
    QComboBox *comboBox_gender;
    QLabel *label_12;
    QLineEdit *lineedit_address;
    QLabel *label_19;
    QDateTimeEdit *dateTimeEdit_doc;
    QPushButton *slot_button;
    QLabel *label_13;
    QLineEdit *phone_lineedit;
    QLabel *label_14;
    QComboBox *comboBox_special;
    QLabel *label_15;
    QLabel *label_17;
    QLineEdit *experience_lineedit;
    QLabel *label_18;
    QLineEdit *lineEdit_iddoc;
    QPushButton *pushButton;
    QLineEdit *experience_lineedit_3;
    QStackedWidget *stackedWidget;
    QWidget *table;
    QTableWidget *doctorsTable;
    QPushButton *doctor_editpushbutton;
    QWidget *form;
    QWidget *deleteui;
    QLabel *label_30;
    QLineEdit *docid_delete;
    QPushButton *deletepush;
    QWidget *appointmentsTab;
    QVBoxLayout *verticalLayout_7;
    QFrame *appointmentActionsFrame;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addAppointmentBtn;
    QPushButton *editAppointmentBtn;
    QPushButton *deleteAppointmentBtn;
    QPushButton *completeAppointmentBtn;
    QSpacerItem *horizontalSpacer_3;
    QDateEdit *appointmentDateFilter;
    QStackedWidget *appointstack;
    QWidget *appointmentsTable_2;
    QTableWidget *appointtable;
    QPushButton *appointeditbutton;
    QWidget *page_5;
    QLineEdit *lineEdit_appointdel;
    QLabel *label_37;
    QPushButton *appointmentdeletepushbutton;
    QWidget *appoint_form;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_6;
    QLabel *label_33;
    QLineEdit *le_pat_name;
    QLabel *label_35;
    QLineEdit *le_pid;
    QLabel *label_34;
    QComboBox *cb_spec;
    QLabel *label_32;
    QComboBox *cb_avdoc;
    QLabel *label_36;
    QComboBox *cb_avtime;
    QPushButton *button_bookappoint;
    QWidget *page_6;
    QPushButton *pushButton_appointmentcompleted;
    QLabel *label_38;
    QLineEdit *lineEdit_appointcomp;
    QWidget *staffTab;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *staffTypeTabs;
    QWidget *nursesTab;
    QVBoxLayout *verticalLayout_9;
    QFrame *nurseActionsFrame;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addNurseBtn;
    QPushButton *editNurseBtn;
    QPushButton *deleteNurseBtn;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *nurseSearchBox;
    QStackedWidget *nurse_widget;
    QWidget *nurse_table;
    QTableWidget *nursesTable;
    QWidget *nurse_form;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout_4;
    QLabel *label_39;
    QLineEdit *nurse_name;
    QLabel *label_40;
    QDateEdit *nurse_date;
    QLabel *label_41;
    QComboBox *comboBox_gender_2;
    QLabel *label_42;
    QLineEdit *nurse_address;
    QLabel *label_43;
    QComboBox *comboBox_gender_3;
    QLabel *label_44;
    QLineEdit *nurse_phone;
    QLabel *label_45;
    QComboBox *comboBox_special_2;
    QLabel *label_48;
    QLineEdit *nurse_exp;
    QLabel *label_47;
    QLineEdit *nurse_id;
    QPushButton *pushButton_2;
    QWidget *nurse_del;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_11;
    QLabel *nurseIDLabel;
    QLineEdit *nurse_id_del;
    QVBoxLayout *verticalLayout_31;
    QPushButton *pushButton_8;
    QWidget *receptionistsTab;
    QVBoxLayout *verticalLayout_10;
    QFrame *receptionistActionsFrame;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addReceptionistBtn;
    QPushButton *editReceptionistBtn;
    QPushButton *deleteReceptionistBtn;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *receptionistSearchBox;
    QStackedWidget *recep_widget;
    QWidget *recep_table;
    QTableWidget *receptionistsTable;
    QWidget *recep_form;
    QWidget *layoutWidget_4;
    QFormLayout *formLayout_5;
    QLabel *label_46;
    QLineEdit *pname_4;
    QLabel *label_49;
    QDateEdit *pdob_4;
    QLabel *label_50;
    QComboBox *comboBox_gender_4;
    QLabel *label_51;
    QLineEdit *lineedit_address_3;
    QLabel *label_52;
    QComboBox *comboBox_gender_5;
    QLabel *label_53;
    QLineEdit *phone_lineedit_3;
    QLabel *label_56;
    QLineEdit *lineEdit_iddoc_3;
    QPushButton *pushButton_3;
    QWidget *recep_del;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_13;
    QLabel *nurseIDLabel_3;
    QLineEdit *nurseIDLineEdit_3;
    QVBoxLayout *verticalLayout_33;
    QPushButton *pushButton_10;
    QWidget *adminsTab;
    QVBoxLayout *verticalLayout_11;
    QFrame *adminActionsFrame;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addAdminBtn;
    QPushButton *editAdminBtn;
    QPushButton *deleteAdminBtn;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *adminSearchBox;
    QStackedWidget *admin_widget;
    QWidget *admin_table;
    QTableWidget *adminsTable;
    QWidget *admin_form;
    QWidget *layoutWidget_5;
    QFormLayout *formLayout_7;
    QLabel *label_54;
    QLineEdit *pname_5;
    QLabel *label_55;
    QDateEdit *pdob_5;
    QLabel *label_57;
    QComboBox *comboBox_gender_6;
    QLabel *label_58;
    QLineEdit *lineedit_address_4;
    QLabel *label_59;
    QComboBox *comboBox_gender_7;
    QLabel *label_60;
    QLineEdit *phone_lineedit_4;
    QLabel *label_61;
    QLineEdit *lineEdit_iddoc_4;
    QPushButton *pushButton_4;
    QComboBox *comboBox_gender_8;
    QLabel *label_62;
    QWidget *admin_del;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_12;
    QLabel *nurseIDLabel_2;
    QLineEdit *nurseIDLineEdit_2;
    QVBoxLayout *verticalLayout_32;
    QPushButton *pushButton_9;
    QWidget *wardsTab;
    QVBoxLayout *verticalLayout_13;
    QTabWidget *wardRoomTabs;
    QWidget *wardsSubTab;
    QVBoxLayout *verticalLayout_14;
    QFrame *wardActionsFrame;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *addWardBtn;
    QPushButton *editWardBtn;
    QPushButton *deleteWardBtn;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *wardSearchBox;
    QStackedWidget *wards_widget;
    QWidget *wards_table;
    QTableWidget *wardsTable;
    QWidget *wards_form;
    QWidget *layoutWidget_6;
    QFormLayout *formLayout_8;
    QLabel *label_63;
    QLineEdit *ward_id;
    QLabel *label_64;
    QLineEdit *ward_name;
    QLabel *label_65;
    QComboBox *cb_w_dep;
    QLabel *label_66;
    QComboBox *cb_w_hd;
    QLabel *noOfRoomsLabel;
    QLineEdit *rooms_w;
    QPushButton *pushButton_5;
    QLineEdit *beds_w;
    QLabel *noofbeds_w;
    QLineEdit *nurses_w;
    QLabel *noofnurse_w;
    QWidget *wards_Del;
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_16;
    QLabel *nurseIDLabel_6;
    QLineEdit *nurseIDLineEdit_6;
    QVBoxLayout *verticalLayout_36;
    QPushButton *pushButton_13;
    QWidget *roomsSubTab;
    QVBoxLayout *verticalLayout_15;
    QFrame *roomActionsFrame;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *addRoomBtn;
    QPushButton *editRoomBtn;
    QPushButton *deleteRoomBtn;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *roomSearchBox;
    QStackedWidget *room_widget;
    QWidget *room_table;
    QTableWidget *roomsTable;
    QWidget *room_form;
    QWidget *layoutWidget_7;
    QFormLayout *formLayout_9;
    QLabel *label_68;
    QLineEdit *room_id_edit;
    QLabel *label_70;
    QComboBox *room_dep;
    QLabel *wardLabel;
    QComboBox *room_ward;
    QLabel *label_71;
    QPushButton *room_add_bttn;
    QLabel *assnurse_name;
    QComboBox *assnurseComboBox;
    QLineEdit *room_bed;
    QWidget *room_del;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_14;
    QLabel *nurseIDLabel_4;
    QLineEdit *nurseIDLineEdit_4;
    QVBoxLayout *verticalLayout_34;
    QPushButton *pushButton_11;
    QWidget *tab;
    QFrame *roomActionsFrame_2;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *addRoomBtn_2;
    QPushButton *editRoomBtn_2;
    QPushButton *deleteRoomBtn_2;
    QSpacerItem *horizontalSpacer_18;
    QLineEdit *roomSearchBox_2;
    QStackedWidget *bed_widget;
    QWidget *bed_table;
    QTableWidget *bedsTable;
    QWidget *bed_form;
    QWidget *layoutWidget_8;
    QFormLayout *formLayout_10;
    QLabel *label_69;
    QLineEdit *pname_9;
    QLabel *label_72;
    QComboBox *comboBox_gender_11;
    QLabel *wardLabel_2;
    QComboBox *wardComboBox_3;
    QLabel *label_73;
    QComboBox *wardComboBox_4;
    QPushButton *pushButton_7;
    QWidget *bed_del;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_15;
    QLabel *nurseIDLabel_5;
    QLineEdit *nurseIDLineEdit_5;
    QVBoxLayout *verticalLayout_35;
    QPushButton *pushButton_12;
    QWidget *departmentsTab;
    QVBoxLayout *verticalLayout_12;
    QFrame *departmentActionsFrame;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *addDepartmentBtn;
    QPushButton *editDepartmentBtn;
    QPushButton *deleteDepartmentBtn;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *departmentSearchBox;
    QStackedWidget *department_widget;
    QWidget *dep_table;
    QTableWidget *departmentsTable;
    QWidget *dep_form;
    QWidget *layoutWidget_9;
    QFormLayout *formLayout_17;
    QLabel *label_74;
    QLineEdit *pname_10;
    QLabel *label_75;
    QLineEdit *pname_11;
    QLabel *label_77;
    QComboBox *comboBox_gender_14;
    QLabel *noOfRoomsLabel_4;
    QLineEdit *noOfRoomsLineEdit_5;
    QPushButton *pushButton_14;
    QWidget *dep_del;
    QWidget *formLayoutWidget_16;
    QFormLayout *formLayout_25;
    QLabel *label_88;
    QLineEdit *med_Del_2;
    QPushButton *med_del_push_2;
    QWidget *pharmacyTab;
    QVBoxLayout *verticalLayout_16;
    QTabWidget *pharmacyTabs;
    QWidget *inventorySubTab;
    QVBoxLayout *verticalLayout_17;
    QFrame *inventoryActionsFrame;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *addInventoryBtn;
    QPushButton *editInventoryBtn;
    QPushButton *deleteInventoryBtn;
    QPushButton *restockInventoryBtn;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *inventorySearchBox;
    QStackedWidget *med_widget;
    QWidget *med_table;
    QTableWidget *pharmacytable;
    QPushButton *edit_med_push;
    QWidget *med_form;
    QWidget *formLayoutWidget_8;
    QFormLayout *formLayout_18;
    QLabel *label_76;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *label_80;
    QLabel *label_81;
    QLineEdit *med_id;
    QLineEdit *med_name;
    QLineEdit *med_com;
    QLineEdit *med_price;
    QLineEdit *med_stock;
    QPushButton *push_stock;
    QWidget *med_del;
    QWidget *formLayoutWidget_9;
    QFormLayout *formLayout_19;
    QLabel *label_82;
    QLineEdit *med_Del;
    QPushButton *med_del_push;
    QWidget *med_restock;
    QWidget *formLayoutWidget_10;
    QFormLayout *formLayout_20;
    QLabel *label_83;
    QLabel *label_84;
    QLineEdit *med_id_restock;
    QLineEdit *med_name_restock;
    QLineEdit *med_quan_restock;
    QLabel *label_85;
    QPushButton *med_restock_push;
    QWidget *billingTab;
    QVBoxLayout *verticalLayout_19;
    QFrame *billingActionsFrame;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *generateBillBtn;
    QPushButton *viewBillBtn;
    QPushButton *processPaymentBtn;
    QPushButton *applyInsuranceBtn;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *billingSearchBox;
    QTableWidget *billsTable;
    QGroupBox *paymentDetailsGroup;
    QHBoxLayout *horizontalLayout_15;
    QLabel *totalAmountLabel;
    QLabel *paidAmountLabel;
    QLabel *balanceLabel;
    QLabel *insuranceLabel;
    QWidget *labsTab;
    QVBoxLayout *verticalLayout_20;
    QTabWidget *labTabs;
    QWidget *test_book;
    QVBoxLayout *verticalLayout_21;
    QFrame *testActionsFrame;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *scheduleTestBtn;
    QPushButton *editTestBtn;
    QPushButton *cancelTestBtn;
    QPushButton *completeTestBtn;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *testSearchBox;
    QStackedWidget *lab_widget;
    QWidget *table_lab;
    QTableWidget *testsTable;
    QPushButton *laboraty_push_button;
    QWidget *lab_form;
    QWidget *formLayoutWidget_11;
    QFormLayout *formLayout_21;
    QLabel *label_86;
    QLineEdit *lab_Del;
    QPushButton *lab_del_push_2;
    QWidget *lab_test_sche;
    QWidget *formLayoutWidget_13;
    QFormLayout *formLayout_22;
    QLabel *label_89;
    QLineEdit *tetst_id;
    QLabel *label_90;
    QLineEdit *tets_name;
    QLabel *patient_test_sche;
    QLineEdit *patientIDLineEdit_tets;
    QPushButton *test_book_push;
    QLabel *test_booking_id;
    QLineEdit *tbLineEdit;
    QWidget *labcomplete;
    QWidget *formLayoutWidget_12;
    QFormLayout *lab_test_com_form;
    QLabel *label_87;
    QLineEdit *lab_book_id;
    QPushButton *lab_complet_push;
    QWidget *test_tab;
    QFrame *testActionsFrame_2;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *scheduleTestBtn_2;
    QPushButton *editTestBtn_2;
    QPushButton *cancelTestBtn_2;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *testSearchBox_2;
    QStackedWidget *test_data_widget;
    QWidget *tt;
    QTableWidget *testsdataTable;
    QPushButton *testdata_pushbutton;
    QWidget *test_add;
    QWidget *formLayoutWidget_14;
    QFormLayout *formLayout_23;
    QLabel *label_91;
    QLineEdit *test_data_id;
    QLabel *label_92;
    QLineEdit *test_data_name;
    QLabel *label_95;
    QLineEdit *test_data_price;
    QPushButton *test_add_push;
    QWidget *test_del_2;
    QWidget *formLayoutWidget_15;
    QFormLayout *formLayout_24;
    QLabel *label_93;
    QLineEdit *test_del;
    QPushButton *test_del_push;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1294, 810);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Modern, professional styling */\n"
"QMainWindow {\n"
"    background-color: #f5f7fa;\n"
"    font-family: 'Segoe UI', Arial, sans-serif;\n"
"    color: #374151; /* Default text color */\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #d1d5db;\n"
"    border-radius: 6px;\n"
"    margin: 8px;\n"
"    background: white;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    padding: 8px 16px;\n"
"    background: #e5e7eb;\n"
"    border: 1px solid #d1d5db;\n"
"    border-bottom: none;\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: white;\n"
"    border-bottom: 2px solid #3b82f6;\n"
"    color: #1e40af;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background: white;\n"
"    border: 1px solid #d1d5db;\n"
"    border-radius: 6px;\n"
"    alternate-background-color: #f9fafb;\n"
"    selection-background-color: #3b82f6;\n"
"    selection-color: white;\n"
"    gridline-color: #e5e7eb;\n"
"    "
                        "color: #374151; /* Table text color */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #f3f4f6;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    font-weight: bold;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QPushButton {\n"
"    padding: 8px 16px;\n"
"    border-radius: 6px;\n"
"    border: 1px solid #d1d5db;\n"
"    background-color: white;\n"
"    min-width: 80px;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f3f4f6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e5e7eb;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #f3f4f6;\n"
"    color: #9ca3af;\n"
"}\n"
"\n"
"QPushButton#primaryButton {\n"
"    background-color: #3b82f6;\n"
"    color: white;\n"
"    border: 1px solid #2563eb;\n"
"}\n"
"\n"
"QPushButton#primaryButton:hover {\n"
"    background-color: #2563eb;\n"
"}\n"
"\n"
"QPushButton#dangerButton {\n"
"    background-color: #ef4444;\n"
"    color: white;\n"
"    border: 1px solid #dc2626;\n"
"}\n"
"\n"
"QPushButto"
                        "n#dangerButton:hover {\n"
"    background-color: #dc2626;\n"
"}\n"
"\n"
"QLineEdit, QDateEdit, QComboBox, QSpinBox, QDoubleSpinBox {\n"
"    padding: 8px;\n"
"    border: 1px solid #d1d5db;\n"
"    border-radius: 6px;\n"
"    background: white;\n"
"    min-height: 30px;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QTextEdit {\n"
"    border: 1px solid #d1d5db;\n"
"    border-radius: 6px;\n"
"    background: white;\n"
"    padding: 4px;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QFrame {\n"
"    background: white;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #374151;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border: 1px solid #d1d5db;\n"
"    border-radius: 6px;\n"
"    margin-top: 10px;\n"
"    padding-top: 15px;\n"
"    font-weight: bold;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QStatusBar {\n"
"    background: #f3f4f6;\n"
"    border-top: 1px solid #d1d5db;\n"
"    color"
                        ": #374151;\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background: white;\n"
"    border-bottom: 1px solid #d1d5db;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 4px 8px;\n"
"    background: transparent;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background: #e5e7eb;\n"
"    border-radius: 4px;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QMenu {\n"
"    background: white;\n"
"    border: 1px solid #d1d5db;\n"
"    padding: 4px;\n"
"    color: #374151;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #3b82f6;\n"
"    color: white;\n"
"}\n"
"\n"
"/* Fix for all QLabel text color */\n"
"QLabel {\n"
"    color: #374151;\n"
"}\n"
"\n"
"/* Fix for QTableWidget text color */\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #f3f4f6;\n"
"    color: #374151;\n"
"}\n"
"\n"
"/* Fix for QHeaderView text color */\n"
"QHeaderView {\n"
"    color: #374151;\n"
"}\n"
"\n"
"/* Fix for QGroupBox title text color */\n"
"QGroupBox::title {\n"
"    colo"
                        "r: #374151;\n"
"}\n"
"\n"
"/* Fix for QTabWidget text color */\n"
"QTabWidget {\n"
"    color: #374151;\n"
"}\n"
"\n"
"/* Fix for QComboBox text color */\n"
"QComboBox {\n"
"    color: #374151;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    color: #374151;\n"
"    background: white;\n"
"}\n"
"\n"
"/* Fix for QDateEdit text color */\n"
"QDateEdit {\n"
"    color: #374151;\n"
"}\n"
"\n"
"/* Fix for QSpinBox/QDoubleSpinBox text color */\n"
"QSpinBox, QDoubleSpinBox {\n"
"    color: #374151;\n"
"}\n"
""));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName("actionPreferences");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        mainTabWidget = new QTabWidget(centralwidget);
        mainTabWidget->setObjectName("mainTabWidget");
        dashboardTab = new QWidget();
        dashboardTab->setObjectName("dashboardTab");
        verticalLayout_2 = new QVBoxLayout(dashboardTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        welcomeLabel = new QLabel(dashboardTab);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setStyleSheet(QString::fromUtf8("font-size: 24px;\n"
"font-weight: bold;\n"
"color: #1e40af;\n"
"margin-bottom: 20px;"));
        welcomeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(welcomeLabel);

        quickStatsFrame = new QFrame(dashboardTab);
        quickStatsFrame->setObjectName("quickStatsFrame");
        quickStatsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        quickStatsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(quickStatsFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        totalPatientsLabel = new QLabel(quickStatsFrame);
        totalPatientsLabel->setObjectName("totalPatientsLabel");
        totalPatientsLabel->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"padding: 15px;\n"
"background: #e0f2fe;\n"
"border-radius: 6px;\n"
"border: 1px solid #bfdbfe;"));

        horizontalLayout_2->addWidget(totalPatientsLabel);

        totalDoctorsLabel = new QLabel(quickStatsFrame);
        totalDoctorsLabel->setObjectName("totalDoctorsLabel");
        totalDoctorsLabel->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"padding: 15px;\n"
"background: #e0f2fe;\n"
"border-radius: 6px;\n"
"border: 1px solid #bfdbfe;"));

        horizontalLayout_2->addWidget(totalDoctorsLabel);

        activeAppointmentsLabel = new QLabel(quickStatsFrame);
        activeAppointmentsLabel->setObjectName("activeAppointmentsLabel");
        activeAppointmentsLabel->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"padding: 15px;\n"
"background: #e0f2fe;\n"
"border-radius: 6px;\n"
"border: 1px solid #bfdbfe;"));

        horizontalLayout_2->addWidget(activeAppointmentsLabel);

        availableRoomsLabel = new QLabel(quickStatsFrame);
        availableRoomsLabel->setObjectName("availableRoomsLabel");
        availableRoomsLabel->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"padding: 15px;\n"
"background: #e0f2fe;\n"
"border-radius: 6px;\n"
"border: 1px solid #bfdbfe;"));

        horizontalLayout_2->addWidget(availableRoomsLabel);


        verticalLayout_2->addWidget(quickStatsFrame);

        mainTabWidget->addTab(dashboardTab, QString());
        patientsTab = new QWidget();
        patientsTab->setObjectName("patientsTab");
        verticalLayout_5 = new QVBoxLayout(patientsTab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        patientActionsFrame = new QFrame(patientsTab);
        patientActionsFrame->setObjectName("patientActionsFrame");
        patientActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        patientActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(patientActionsFrame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        addPatientBtn = new QPushButton(patientActionsFrame);
        addPatientBtn->setObjectName("addPatientBtn");
        addPatientBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_3->addWidget(addPatientBtn);

        editPatientBtn = new QPushButton(patientActionsFrame);
        editPatientBtn->setObjectName("editPatientBtn");
        editPatientBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_3->addWidget(editPatientBtn);

        deletePatientBtn = new QPushButton(patientActionsFrame);
        deletePatientBtn->setObjectName("deletePatientBtn");
        deletePatientBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_3->addWidget(deletePatientBtn);

        viewPatientBtn = new QPushButton(patientActionsFrame);
        viewPatientBtn->setObjectName("viewPatientBtn");
        viewPatientBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_3->addWidget(viewPatientBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        patientSearchBox = new QLineEdit(patientActionsFrame);
        patientSearchBox->setObjectName("patientSearchBox");

        horizontalLayout_3->addWidget(patientSearchBox);


        verticalLayout_5->addWidget(patientActionsFrame);

        patient_stack = new QStackedWidget(patientsTab);
        patient_stack->setObjectName("patient_stack");
        page = new QWidget();
        page->setObjectName("page");
        patientsTable = new QTableWidget(page);
        if (patientsTable->columnCount() < 14)
            patientsTable->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        patientsTable->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        patientsTable->setObjectName("patientsTable");
        patientsTable->setGeometry(QRect(-10, -10, 1231, 581));
        edit_button = new QPushButton(page);
        edit_button->setObjectName("edit_button");
        edit_button->setGeometry(QRect(520, 520, 114, 29));
        patient_stack->addWidget(page);
        delpatient = new QWidget();
        delpatient->setObjectName("delpatient");
        label_31 = new QLabel(delpatient);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(250, 200, 131, 31));
        delpatientedit = new QLineEdit(delpatient);
        delpatientedit->setObjectName("delpatientedit");
        delpatientedit->setGeometry(QRect(440, 190, 361, 48));
        pushdelpatient = new QPushButton(delpatient);
        pushdelpatient->setObjectName("pushdelpatient");
        pushdelpatient->setGeometry(QRect(430, 330, 141, 31));
        patient_stack->addWidget(delpatient);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        layoutWidget_2 = new QWidget(page_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 0, 1232, 724));
        patient_form = new QFormLayout(layoutWidget_2);
        patient_form->setObjectName("patient_form");
        patient_form->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName("label_16");

        patient_form->setWidget(0, QFormLayout::ItemRole::LabelRole, label_16);

        pname_2 = new QLineEdit(layoutWidget_2);
        pname_2->setObjectName("pname_2");

        patient_form->setWidget(0, QFormLayout::ItemRole::FieldRole, pname_2);

        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName("label_20");

        patient_form->setWidget(1, QFormLayout::ItemRole::LabelRole, label_20);

        pdob_2 = new QDateEdit(layoutWidget_2);
        pdob_2->setObjectName("pdob_2");

        patient_form->setWidget(1, QFormLayout::ItemRole::FieldRole, pdob_2);

        label_21 = new QLabel(layoutWidget_2);
        label_21->setObjectName("label_21");

        patient_form->setWidget(2, QFormLayout::ItemRole::LabelRole, label_21);

        gender_2 = new QComboBox(layoutWidget_2);
        gender_2->addItem(QString());
        gender_2->addItem(QString());
        gender_2->addItem(QString());
        gender_2->setObjectName("gender_2");

        patient_form->setWidget(2, QFormLayout::ItemRole::FieldRole, gender_2);

        label_22 = new QLabel(layoutWidget_2);
        label_22->setObjectName("label_22");

        patient_form->setWidget(3, QFormLayout::ItemRole::LabelRole, label_22);

        address_2 = new QLineEdit(layoutWidget_2);
        address_2->setObjectName("address_2");

        patient_form->setWidget(3, QFormLayout::ItemRole::FieldRole, address_2);

        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName("label_23");

        patient_form->setWidget(4, QFormLayout::ItemRole::LabelRole, label_23);

        lineedit_pid = new QLineEdit(layoutWidget_2);
        lineedit_pid->setObjectName("lineedit_pid");

        patient_form->setWidget(4, QFormLayout::ItemRole::FieldRole, lineedit_pid);

        label_24 = new QLabel(layoutWidget_2);
        label_24->setObjectName("label_24");

        patient_form->setWidget(5, QFormLayout::ItemRole::LabelRole, label_24);

        phone_2 = new QLineEdit(layoutWidget_2);
        phone_2->setObjectName("phone_2");

        patient_form->setWidget(5, QFormLayout::ItemRole::FieldRole, phone_2);

        label_25 = new QLabel(layoutWidget_2);
        label_25->setObjectName("label_25");

        patient_form->setWidget(6, QFormLayout::ItemRole::LabelRole, label_25);

        comboBox_disease = new QComboBox(layoutWidget_2);
        comboBox_disease->addItem(QString());
        comboBox_disease->addItem(QString());
        comboBox_disease->addItem(QString());
        comboBox_disease->setObjectName("comboBox_disease");

        patient_form->setWidget(6, QFormLayout::ItemRole::FieldRole, comboBox_disease);

        label_26 = new QLabel(layoutWidget_2);
        label_26->setObjectName("label_26");

        patient_form->setWidget(7, QFormLayout::ItemRole::LabelRole, label_26);

        comboBox_status = new QComboBox(layoutWidget_2);
        comboBox_status->addItem(QString());
        comboBox_status->addItem(QString());
        comboBox_status->setObjectName("comboBox_status");

        patient_form->setWidget(7, QFormLayout::ItemRole::FieldRole, comboBox_status);

        label_28 = new QLabel(layoutWidget_2);
        label_28->setObjectName("label_28");

        patient_form->setWidget(8, QFormLayout::ItemRole::LabelRole, label_28);

        assigndoc_2 = new QLineEdit(layoutWidget_2);
        assigndoc_2->setObjectName("assigndoc_2");

        patient_form->setWidget(8, QFormLayout::ItemRole::FieldRole, assigndoc_2);

        departmentLabel_pat = new QLabel(layoutWidget_2);
        departmentLabel_pat->setObjectName("departmentLabel_pat");

        patient_form->setWidget(9, QFormLayout::ItemRole::LabelRole, departmentLabel_pat);

        departmentLineEdit_name = new QLineEdit(layoutWidget_2);
        departmentLineEdit_name->setObjectName("departmentLineEdit_name");

        patient_form->setWidget(9, QFormLayout::ItemRole::FieldRole, departmentLineEdit_name);

        label_29 = new QLabel(layoutWidget_2);
        label_29->setObjectName("label_29");

        patient_form->setWidget(10, QFormLayout::ItemRole::LabelRole, label_29);

        lineedit_ward_pat = new QLineEdit(layoutWidget_2);
        lineedit_ward_pat->setObjectName("lineedit_ward_pat");

        patient_form->setWidget(10, QFormLayout::ItemRole::FieldRole, lineedit_ward_pat);

        roomNoLabel_pat = new QLabel(layoutWidget_2);
        roomNoLabel_pat->setObjectName("roomNoLabel_pat");

        patient_form->setWidget(12, QFormLayout::ItemRole::LabelRole, roomNoLabel_pat);

        roomNoLineEdit_pat = new QLineEdit(layoutWidget_2);
        roomNoLineEdit_pat->setObjectName("roomNoLineEdit_pat");

        patient_form->setWidget(12, QFormLayout::ItemRole::FieldRole, roomNoLineEdit_pat);

        bedNoLabel_pat = new QLabel(layoutWidget_2);
        bedNoLabel_pat->setObjectName("bedNoLabel_pat");

        patient_form->setWidget(13, QFormLayout::ItemRole::LabelRole, bedNoLabel_pat);

        bedNoLineEdit_pat = new QLineEdit(layoutWidget_2);
        bedNoLineEdit_pat->setObjectName("bedNoLineEdit_pat");

        patient_form->setWidget(13, QFormLayout::ItemRole::FieldRole, bedNoLineEdit_pat);

        pushButton_patient = new QPushButton(layoutWidget_2);
        pushButton_patient->setObjectName("pushButton_patient");
        pushButton_patient->setMinimumSize(QSize(114, 38));
        pushButton_patient->setMaximumSize(QSize(1045, 16777215));

        patient_form->setWidget(15, QFormLayout::ItemRole::FieldRole, pushButton_patient);

        patient_stack->addWidget(page_2);

        verticalLayout_5->addWidget(patient_stack);

        mainTabWidget->addTab(patientsTab, QString());
        doctorsTab = new QWidget();
        doctorsTab->setObjectName("doctorsTab");
        verticalLayout_6 = new QVBoxLayout(doctorsTab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        doctorActionsFrame = new QFrame(doctorsTab);
        doctorActionsFrame->setObjectName("doctorActionsFrame");
        doctorActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        doctorActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(doctorActionsFrame);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        addDoctorBtn = new QPushButton(doctorActionsFrame);
        addDoctorBtn->setObjectName("addDoctorBtn");
        addDoctorBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_4->addWidget(addDoctorBtn);

        editDoctorBtn = new QPushButton(doctorActionsFrame);
        editDoctorBtn->setObjectName("editDoctorBtn");
        editDoctorBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_4->addWidget(editDoctorBtn);

        deleteDoctorBtn = new QPushButton(doctorActionsFrame);
        deleteDoctorBtn->setObjectName("deleteDoctorBtn");
        deleteDoctorBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_4->addWidget(deleteDoctorBtn);

        viewDoctorBtn = new QPushButton(doctorActionsFrame);
        viewDoctorBtn->setObjectName("viewDoctorBtn");
        viewDoctorBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_4->addWidget(viewDoctorBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        doctorSearchBox = new QLineEdit(doctorActionsFrame);
        doctorSearchBox->setObjectName("doctorSearchBox");

        horizontalLayout_4->addWidget(doctorSearchBox);


        verticalLayout_6->addWidget(doctorActionsFrame);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label = new QLabel(doctorsTab);
        label->setObjectName("label");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        pname = new QLineEdit(doctorsTab);
        pname->setObjectName("pname");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, pname);

        label_2 = new QLabel(doctorsTab);
        label_2->setObjectName("label_2");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        pdob = new QDateEdit(doctorsTab);
        pdob->setObjectName("pdob");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, pdob);

        label_11 = new QLabel(doctorsTab);
        label_11->setObjectName("label_11");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, label_11);

        comboBox_gender = new QComboBox(doctorsTab);
        comboBox_gender->addItem(QString());
        comboBox_gender->addItem(QString());
        comboBox_gender->addItem(QString());
        comboBox_gender->setObjectName("comboBox_gender");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, comboBox_gender);

        label_12 = new QLabel(doctorsTab);
        label_12->setObjectName("label_12");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, label_12);

        lineedit_address = new QLineEdit(doctorsTab);
        lineedit_address->setObjectName("lineedit_address");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, lineedit_address);

        label_19 = new QLabel(doctorsTab);
        label_19->setObjectName("label_19");

        formLayout_3->setWidget(4, QFormLayout::ItemRole::LabelRole, label_19);

        dateTimeEdit_doc = new QDateTimeEdit(doctorsTab);
        dateTimeEdit_doc->setObjectName("dateTimeEdit_doc");

        formLayout_3->setWidget(4, QFormLayout::ItemRole::FieldRole, dateTimeEdit_doc);

        slot_button = new QPushButton(doctorsTab);
        slot_button->setObjectName("slot_button");

        formLayout_3->setWidget(5, QFormLayout::ItemRole::FieldRole, slot_button);

        label_13 = new QLabel(doctorsTab);
        label_13->setObjectName("label_13");

        formLayout_3->setWidget(6, QFormLayout::ItemRole::LabelRole, label_13);

        phone_lineedit = new QLineEdit(doctorsTab);
        phone_lineedit->setObjectName("phone_lineedit");

        formLayout_3->setWidget(6, QFormLayout::ItemRole::FieldRole, phone_lineedit);

        label_14 = new QLabel(doctorsTab);
        label_14->setObjectName("label_14");

        formLayout_3->setWidget(7, QFormLayout::ItemRole::LabelRole, label_14);

        comboBox_special = new QComboBox(doctorsTab);
        comboBox_special->addItem(QString());
        comboBox_special->addItem(QString());
        comboBox_special->addItem(QString());
        comboBox_special->setObjectName("comboBox_special");

        formLayout_3->setWidget(7, QFormLayout::ItemRole::FieldRole, comboBox_special);

        label_15 = new QLabel(doctorsTab);
        label_15->setObjectName("label_15");

        formLayout_3->setWidget(8, QFormLayout::ItemRole::LabelRole, label_15);

        label_17 = new QLabel(doctorsTab);
        label_17->setObjectName("label_17");

        formLayout_3->setWidget(9, QFormLayout::ItemRole::LabelRole, label_17);

        experience_lineedit = new QLineEdit(doctorsTab);
        experience_lineedit->setObjectName("experience_lineedit");

        formLayout_3->setWidget(9, QFormLayout::ItemRole::FieldRole, experience_lineedit);

        label_18 = new QLabel(doctorsTab);
        label_18->setObjectName("label_18");

        formLayout_3->setWidget(10, QFormLayout::ItemRole::LabelRole, label_18);

        lineEdit_iddoc = new QLineEdit(doctorsTab);
        lineEdit_iddoc->setObjectName("lineEdit_iddoc");

        formLayout_3->setWidget(10, QFormLayout::ItemRole::FieldRole, lineEdit_iddoc);

        pushButton = new QPushButton(doctorsTab);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(114, 38));
        pushButton->setMaximumSize(QSize(1045, 16777215));

        formLayout_3->setWidget(11, QFormLayout::ItemRole::FieldRole, pushButton);

        experience_lineedit_3 = new QLineEdit(doctorsTab);
        experience_lineedit_3->setObjectName("experience_lineedit_3");

        formLayout_3->setWidget(8, QFormLayout::ItemRole::FieldRole, experience_lineedit_3);


        verticalLayout_6->addLayout(formLayout_3);

        stackedWidget = new QStackedWidget(doctorsTab);
        stackedWidget->setObjectName("stackedWidget");
        table = new QWidget();
        table->setObjectName("table");
        doctorsTable = new QTableWidget(table);
        if (doctorsTable->columnCount() < 10)
            doctorsTable->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(8, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        doctorsTable->setHorizontalHeaderItem(9, __qtablewidgetitem23);
        doctorsTable->setObjectName("doctorsTable");
        doctorsTable->setGeometry(QRect(0, 10, 1218, 571));
        doctor_editpushbutton = new QPushButton(table);
        doctor_editpushbutton->setObjectName("doctor_editpushbutton");
        doctor_editpushbutton->setGeometry(QRect(560, 540, 114, 29));
        stackedWidget->addWidget(table);
        form = new QWidget();
        form->setObjectName("form");
        stackedWidget->addWidget(form);
        deleteui = new QWidget();
        deleteui->setObjectName("deleteui");
        label_30 = new QLabel(deleteui);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(340, 240, 101, 31));
        docid_delete = new QLineEdit(deleteui);
        docid_delete->setObjectName("docid_delete");
        docid_delete->setGeometry(QRect(470, 230, 411, 48));
        deletepush = new QPushButton(deleteui);
        deletepush->setObjectName("deletepush");
        deletepush->setGeometry(QRect(510, 370, 171, 41));
        stackedWidget->addWidget(deleteui);

        verticalLayout_6->addWidget(stackedWidget);

        mainTabWidget->addTab(doctorsTab, QString());
        appointmentsTab = new QWidget();
        appointmentsTab->setObjectName("appointmentsTab");
        verticalLayout_7 = new QVBoxLayout(appointmentsTab);
        verticalLayout_7->setObjectName("verticalLayout_7");
        appointmentActionsFrame = new QFrame(appointmentsTab);
        appointmentActionsFrame->setObjectName("appointmentActionsFrame");
        appointmentActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        appointmentActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_5 = new QHBoxLayout(appointmentActionsFrame);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        addAppointmentBtn = new QPushButton(appointmentActionsFrame);
        addAppointmentBtn->setObjectName("addAppointmentBtn");
        addAppointmentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_5->addWidget(addAppointmentBtn);

        editAppointmentBtn = new QPushButton(appointmentActionsFrame);
        editAppointmentBtn->setObjectName("editAppointmentBtn");
        editAppointmentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_5->addWidget(editAppointmentBtn);

        deleteAppointmentBtn = new QPushButton(appointmentActionsFrame);
        deleteAppointmentBtn->setObjectName("deleteAppointmentBtn");
        deleteAppointmentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_5->addWidget(deleteAppointmentBtn);

        completeAppointmentBtn = new QPushButton(appointmentActionsFrame);
        completeAppointmentBtn->setObjectName("completeAppointmentBtn");
        completeAppointmentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_5->addWidget(completeAppointmentBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        appointmentDateFilter = new QDateEdit(appointmentActionsFrame);
        appointmentDateFilter->setObjectName("appointmentDateFilter");

        horizontalLayout_5->addWidget(appointmentDateFilter);


        verticalLayout_7->addWidget(appointmentActionsFrame);

        appointstack = new QStackedWidget(appointmentsTab);
        appointstack->setObjectName("appointstack");
        appointmentsTable_2 = new QWidget();
        appointmentsTable_2->setObjectName("appointmentsTable_2");
        appointtable = new QTableWidget(appointmentsTable_2);
        if (appointtable->columnCount() < 9)
            appointtable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(7, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        appointtable->setHorizontalHeaderItem(8, __qtablewidgetitem32);
        appointtable->setObjectName("appointtable");
        appointtable->setGeometry(QRect(10, 10, 1218, 576));
        appointtable->setMaximumSize(QSize(1218, 576));
        appointeditbutton = new QPushButton(appointmentsTable_2);
        appointeditbutton->setObjectName("appointeditbutton");
        appointeditbutton->setGeometry(QRect(550, 528, 121, 41));
        appointstack->addWidget(appointmentsTable_2);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        lineEdit_appointdel = new QLineEdit(page_5);
        lineEdit_appointdel->setObjectName("lineEdit_appointdel");
        lineEdit_appointdel->setGeometry(QRect(460, 260, 241, 48));
        label_37 = new QLabel(page_5);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(240, 270, 171, 41));
        appointmentdeletepushbutton = new QPushButton(page_5);
        appointmentdeletepushbutton->setObjectName("appointmentdeletepushbutton");
        appointmentdeletepushbutton->setGeometry(QRect(450, 370, 121, 31));
        appointstack->addWidget(page_5);
        appoint_form = new QWidget();
        appoint_form->setObjectName("appoint_form");
        formLayoutWidget = new QWidget(appoint_form);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 50, 1191, 431));
        formLayout_6 = new QFormLayout(formLayoutWidget);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(formLayoutWidget);
        label_33->setObjectName("label_33");

        formLayout_6->setWidget(0, QFormLayout::ItemRole::LabelRole, label_33);

        le_pat_name = new QLineEdit(formLayoutWidget);
        le_pat_name->setObjectName("le_pat_name");

        formLayout_6->setWidget(0, QFormLayout::ItemRole::FieldRole, le_pat_name);

        label_35 = new QLabel(formLayoutWidget);
        label_35->setObjectName("label_35");

        formLayout_6->setWidget(1, QFormLayout::ItemRole::LabelRole, label_35);

        le_pid = new QLineEdit(formLayoutWidget);
        le_pid->setObjectName("le_pid");

        formLayout_6->setWidget(1, QFormLayout::ItemRole::FieldRole, le_pid);

        label_34 = new QLabel(formLayoutWidget);
        label_34->setObjectName("label_34");

        formLayout_6->setWidget(2, QFormLayout::ItemRole::LabelRole, label_34);

        cb_spec = new QComboBox(formLayoutWidget);
        cb_spec->addItem(QString());
        cb_spec->addItem(QString());
        cb_spec->addItem(QString());
        cb_spec->addItem(QString());
        cb_spec->addItem(QString());
        cb_spec->addItem(QString());
        cb_spec->setObjectName("cb_spec");

        formLayout_6->setWidget(2, QFormLayout::ItemRole::FieldRole, cb_spec);

        label_32 = new QLabel(formLayoutWidget);
        label_32->setObjectName("label_32");

        formLayout_6->setWidget(3, QFormLayout::ItemRole::LabelRole, label_32);

        cb_avdoc = new QComboBox(formLayoutWidget);
        cb_avdoc->setObjectName("cb_avdoc");

        formLayout_6->setWidget(3, QFormLayout::ItemRole::FieldRole, cb_avdoc);

        label_36 = new QLabel(formLayoutWidget);
        label_36->setObjectName("label_36");

        formLayout_6->setWidget(4, QFormLayout::ItemRole::LabelRole, label_36);

        cb_avtime = new QComboBox(formLayoutWidget);
        cb_avtime->setObjectName("cb_avtime");

        formLayout_6->setWidget(4, QFormLayout::ItemRole::FieldRole, cb_avtime);

        button_bookappoint = new QPushButton(formLayoutWidget);
        button_bookappoint->setObjectName("button_bookappoint");

        formLayout_6->setWidget(5, QFormLayout::ItemRole::FieldRole, button_bookappoint);

        appointstack->addWidget(appoint_form);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        pushButton_appointmentcompleted = new QPushButton(page_6);
        pushButton_appointmentcompleted->setObjectName("pushButton_appointmentcompleted");
        pushButton_appointmentcompleted->setGeometry(QRect(540, 400, 121, 51));
        label_38 = new QLabel(page_6);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(340, 230, 121, 31));
        lineEdit_appointcomp = new QLineEdit(page_6);
        lineEdit_appointcomp->setObjectName("lineEdit_appointcomp");
        lineEdit_appointcomp->setGeometry(QRect(520, 220, 381, 51));
        appointstack->addWidget(page_6);

        verticalLayout_7->addWidget(appointstack);

        mainTabWidget->addTab(appointmentsTab, QString());
        staffTab = new QWidget();
        staffTab->setObjectName("staffTab");
        verticalLayout_8 = new QVBoxLayout(staffTab);
        verticalLayout_8->setObjectName("verticalLayout_8");
        staffTypeTabs = new QTabWidget(staffTab);
        staffTypeTabs->setObjectName("staffTypeTabs");
        nursesTab = new QWidget();
        nursesTab->setObjectName("nursesTab");
        verticalLayout_9 = new QVBoxLayout(nursesTab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        nurseActionsFrame = new QFrame(nursesTab);
        nurseActionsFrame->setObjectName("nurseActionsFrame");
        nurseActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        nurseActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(nurseActionsFrame);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        addNurseBtn = new QPushButton(nurseActionsFrame);
        addNurseBtn->setObjectName("addNurseBtn");
        addNurseBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_6->addWidget(addNurseBtn);

        editNurseBtn = new QPushButton(nurseActionsFrame);
        editNurseBtn->setObjectName("editNurseBtn");
        editNurseBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_6->addWidget(editNurseBtn);

        deleteNurseBtn = new QPushButton(nurseActionsFrame);
        deleteNurseBtn->setObjectName("deleteNurseBtn");
        deleteNurseBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_6->addWidget(deleteNurseBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        nurseSearchBox = new QLineEdit(nurseActionsFrame);
        nurseSearchBox->setObjectName("nurseSearchBox");

        horizontalLayout_6->addWidget(nurseSearchBox);


        verticalLayout_9->addWidget(nurseActionsFrame);

        nurse_widget = new QStackedWidget(nursesTab);
        nurse_widget->setObjectName("nurse_widget");
        nurse_table = new QWidget();
        nurse_table->setObjectName("nurse_table");
        nursesTable = new QTableWidget(nurse_table);
        if (nursesTable->columnCount() < 9)
            nursesTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(4, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(5, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(6, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(7, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        nursesTable->setHorizontalHeaderItem(8, __qtablewidgetitem41);
        nursesTable->setObjectName("nursesTable");
        nursesTable->setGeometry(QRect(0, 20, 1178, 481));
        nurse_widget->addWidget(nurse_table);
        nurse_form = new QWidget();
        nurse_form->setObjectName("nurse_form");
        layoutWidget_3 = new QWidget(nurse_form);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 10, 1131, 535));
        formLayout_4 = new QFormLayout(layoutWidget_3);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(layoutWidget_3);
        label_39->setObjectName("label_39");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label_39);

        nurse_name = new QLineEdit(layoutWidget_3);
        nurse_name->setObjectName("nurse_name");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::FieldRole, nurse_name);

        label_40 = new QLabel(layoutWidget_3);
        label_40->setObjectName("label_40");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::LabelRole, label_40);

        nurse_date = new QDateEdit(layoutWidget_3);
        nurse_date->setObjectName("nurse_date");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::FieldRole, nurse_date);

        label_41 = new QLabel(layoutWidget_3);
        label_41->setObjectName("label_41");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, label_41);

        comboBox_gender_2 = new QComboBox(layoutWidget_3);
        comboBox_gender_2->addItem(QString());
        comboBox_gender_2->addItem(QString());
        comboBox_gender_2->addItem(QString());
        comboBox_gender_2->setObjectName("comboBox_gender_2");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, comboBox_gender_2);

        label_42 = new QLabel(layoutWidget_3);
        label_42->setObjectName("label_42");

        formLayout_4->setWidget(3, QFormLayout::ItemRole::LabelRole, label_42);

        nurse_address = new QLineEdit(layoutWidget_3);
        nurse_address->setObjectName("nurse_address");

        formLayout_4->setWidget(3, QFormLayout::ItemRole::FieldRole, nurse_address);

        label_43 = new QLabel(layoutWidget_3);
        label_43->setObjectName("label_43");

        formLayout_4->setWidget(4, QFormLayout::ItemRole::LabelRole, label_43);

        comboBox_gender_3 = new QComboBox(layoutWidget_3);
        comboBox_gender_3->addItem(QString());
        comboBox_gender_3->addItem(QString());
        comboBox_gender_3->addItem(QString());
        comboBox_gender_3->setObjectName("comboBox_gender_3");

        formLayout_4->setWidget(4, QFormLayout::ItemRole::FieldRole, comboBox_gender_3);

        label_44 = new QLabel(layoutWidget_3);
        label_44->setObjectName("label_44");

        formLayout_4->setWidget(5, QFormLayout::ItemRole::LabelRole, label_44);

        nurse_phone = new QLineEdit(layoutWidget_3);
        nurse_phone->setObjectName("nurse_phone");

        formLayout_4->setWidget(5, QFormLayout::ItemRole::FieldRole, nurse_phone);

        label_45 = new QLabel(layoutWidget_3);
        label_45->setObjectName("label_45");

        formLayout_4->setWidget(6, QFormLayout::ItemRole::LabelRole, label_45);

        comboBox_special_2 = new QComboBox(layoutWidget_3);
        comboBox_special_2->addItem(QString());
        comboBox_special_2->addItem(QString());
        comboBox_special_2->addItem(QString());
        comboBox_special_2->addItem(QString());
        comboBox_special_2->setObjectName("comboBox_special_2");

        formLayout_4->setWidget(6, QFormLayout::ItemRole::FieldRole, comboBox_special_2);

        label_48 = new QLabel(layoutWidget_3);
        label_48->setObjectName("label_48");

        formLayout_4->setWidget(7, QFormLayout::ItemRole::LabelRole, label_48);

        nurse_exp = new QLineEdit(layoutWidget_3);
        nurse_exp->setObjectName("nurse_exp");

        formLayout_4->setWidget(7, QFormLayout::ItemRole::FieldRole, nurse_exp);

        label_47 = new QLabel(layoutWidget_3);
        label_47->setObjectName("label_47");

        formLayout_4->setWidget(8, QFormLayout::ItemRole::LabelRole, label_47);

        nurse_id = new QLineEdit(layoutWidget_3);
        nurse_id->setObjectName("nurse_id");

        formLayout_4->setWidget(8, QFormLayout::ItemRole::FieldRole, nurse_id);

        pushButton_2 = new QPushButton(layoutWidget_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(114, 38));
        pushButton_2->setMaximumSize(QSize(1045, 16777215));

        formLayout_4->setWidget(9, QFormLayout::ItemRole::FieldRole, pushButton_2);

        nurse_widget->addWidget(nurse_form);
        nurse_del = new QWidget();
        nurse_del->setObjectName("nurse_del");
        formLayoutWidget_2 = new QWidget(nurse_del);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(280, 140, 571, 151));
        formLayout_11 = new QFormLayout(formLayoutWidget_2);
        formLayout_11->setObjectName("formLayout_11");
        formLayout_11->setContentsMargins(0, 0, 0, 0);
        nurseIDLabel = new QLabel(formLayoutWidget_2);
        nurseIDLabel->setObjectName("nurseIDLabel");

        formLayout_11->setWidget(0, QFormLayout::ItemRole::LabelRole, nurseIDLabel);

        nurse_id_del = new QLineEdit(formLayoutWidget_2);
        nurse_id_del->setObjectName("nurse_id_del");

        formLayout_11->setWidget(0, QFormLayout::ItemRole::FieldRole, nurse_id_del);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName("verticalLayout_31");
        pushButton_8 = new QPushButton(formLayoutWidget_2);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout_31->addWidget(pushButton_8);


        formLayout_11->setLayout(1, QFormLayout::ItemRole::FieldRole, verticalLayout_31);

        nurse_widget->addWidget(nurse_del);

        verticalLayout_9->addWidget(nurse_widget);

        staffTypeTabs->addTab(nursesTab, QString());
        receptionistsTab = new QWidget();
        receptionistsTab->setObjectName("receptionistsTab");
        verticalLayout_10 = new QVBoxLayout(receptionistsTab);
        verticalLayout_10->setObjectName("verticalLayout_10");
        receptionistActionsFrame = new QFrame(receptionistsTab);
        receptionistActionsFrame->setObjectName("receptionistActionsFrame");
        receptionistActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        receptionistActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(receptionistActionsFrame);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        addReceptionistBtn = new QPushButton(receptionistActionsFrame);
        addReceptionistBtn->setObjectName("addReceptionistBtn");
        addReceptionistBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_7->addWidget(addReceptionistBtn);

        editReceptionistBtn = new QPushButton(receptionistActionsFrame);
        editReceptionistBtn->setObjectName("editReceptionistBtn");
        editReceptionistBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_7->addWidget(editReceptionistBtn);

        deleteReceptionistBtn = new QPushButton(receptionistActionsFrame);
        deleteReceptionistBtn->setObjectName("deleteReceptionistBtn");
        deleteReceptionistBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_7->addWidget(deleteReceptionistBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        receptionistSearchBox = new QLineEdit(receptionistActionsFrame);
        receptionistSearchBox->setObjectName("receptionistSearchBox");

        horizontalLayout_7->addWidget(receptionistSearchBox);


        verticalLayout_10->addWidget(receptionistActionsFrame);

        recep_widget = new QStackedWidget(receptionistsTab);
        recep_widget->setObjectName("recep_widget");
        recep_table = new QWidget();
        recep_table->setObjectName("recep_table");
        receptionistsTable = new QTableWidget(recep_table);
        if (receptionistsTable->columnCount() < 8)
            receptionistsTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(5, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(6, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        receptionistsTable->setHorizontalHeaderItem(7, __qtablewidgetitem49);
        receptionistsTable->setObjectName("receptionistsTable");
        receptionistsTable->setGeometry(QRect(0, 20, 1178, 481));
        recep_widget->addWidget(recep_table);
        recep_form = new QWidget();
        recep_form->setObjectName("recep_form");
        layoutWidget_4 = new QWidget(recep_form);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 0, 1141, 491));
        formLayout_5 = new QFormLayout(layoutWidget_4);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_46 = new QLabel(layoutWidget_4);
        label_46->setObjectName("label_46");

        formLayout_5->setWidget(0, QFormLayout::ItemRole::LabelRole, label_46);

        pname_4 = new QLineEdit(layoutWidget_4);
        pname_4->setObjectName("pname_4");

        formLayout_5->setWidget(0, QFormLayout::ItemRole::FieldRole, pname_4);

        label_49 = new QLabel(layoutWidget_4);
        label_49->setObjectName("label_49");

        formLayout_5->setWidget(1, QFormLayout::ItemRole::LabelRole, label_49);

        pdob_4 = new QDateEdit(layoutWidget_4);
        pdob_4->setObjectName("pdob_4");

        formLayout_5->setWidget(1, QFormLayout::ItemRole::FieldRole, pdob_4);

        label_50 = new QLabel(layoutWidget_4);
        label_50->setObjectName("label_50");

        formLayout_5->setWidget(2, QFormLayout::ItemRole::LabelRole, label_50);

        comboBox_gender_4 = new QComboBox(layoutWidget_4);
        comboBox_gender_4->addItem(QString());
        comboBox_gender_4->addItem(QString());
        comboBox_gender_4->addItem(QString());
        comboBox_gender_4->setObjectName("comboBox_gender_4");

        formLayout_5->setWidget(2, QFormLayout::ItemRole::FieldRole, comboBox_gender_4);

        label_51 = new QLabel(layoutWidget_4);
        label_51->setObjectName("label_51");

        formLayout_5->setWidget(3, QFormLayout::ItemRole::LabelRole, label_51);

        lineedit_address_3 = new QLineEdit(layoutWidget_4);
        lineedit_address_3->setObjectName("lineedit_address_3");

        formLayout_5->setWidget(3, QFormLayout::ItemRole::FieldRole, lineedit_address_3);

        label_52 = new QLabel(layoutWidget_4);
        label_52->setObjectName("label_52");

        formLayout_5->setWidget(4, QFormLayout::ItemRole::LabelRole, label_52);

        comboBox_gender_5 = new QComboBox(layoutWidget_4);
        comboBox_gender_5->addItem(QString());
        comboBox_gender_5->addItem(QString());
        comboBox_gender_5->addItem(QString());
        comboBox_gender_5->setObjectName("comboBox_gender_5");

        formLayout_5->setWidget(4, QFormLayout::ItemRole::FieldRole, comboBox_gender_5);

        label_53 = new QLabel(layoutWidget_4);
        label_53->setObjectName("label_53");

        formLayout_5->setWidget(5, QFormLayout::ItemRole::LabelRole, label_53);

        phone_lineedit_3 = new QLineEdit(layoutWidget_4);
        phone_lineedit_3->setObjectName("phone_lineedit_3");

        formLayout_5->setWidget(5, QFormLayout::ItemRole::FieldRole, phone_lineedit_3);

        label_56 = new QLabel(layoutWidget_4);
        label_56->setObjectName("label_56");

        formLayout_5->setWidget(6, QFormLayout::ItemRole::LabelRole, label_56);

        lineEdit_iddoc_3 = new QLineEdit(layoutWidget_4);
        lineEdit_iddoc_3->setObjectName("lineEdit_iddoc_3");

        formLayout_5->setWidget(6, QFormLayout::ItemRole::FieldRole, lineEdit_iddoc_3);

        pushButton_3 = new QPushButton(layoutWidget_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(114, 38));
        pushButton_3->setMaximumSize(QSize(1045, 16777215));

        formLayout_5->setWidget(7, QFormLayout::ItemRole::FieldRole, pushButton_3);

        recep_widget->addWidget(recep_form);
        recep_del = new QWidget();
        recep_del->setObjectName("recep_del");
        formLayoutWidget_4 = new QWidget(recep_del);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(290, 150, 571, 151));
        formLayout_13 = new QFormLayout(formLayoutWidget_4);
        formLayout_13->setObjectName("formLayout_13");
        formLayout_13->setContentsMargins(0, 0, 0, 0);
        nurseIDLabel_3 = new QLabel(formLayoutWidget_4);
        nurseIDLabel_3->setObjectName("nurseIDLabel_3");

        formLayout_13->setWidget(0, QFormLayout::ItemRole::LabelRole, nurseIDLabel_3);

        nurseIDLineEdit_3 = new QLineEdit(formLayoutWidget_4);
        nurseIDLineEdit_3->setObjectName("nurseIDLineEdit_3");

        formLayout_13->setWidget(0, QFormLayout::ItemRole::FieldRole, nurseIDLineEdit_3);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setObjectName("verticalLayout_33");
        pushButton_10 = new QPushButton(formLayoutWidget_4);
        pushButton_10->setObjectName("pushButton_10");

        verticalLayout_33->addWidget(pushButton_10);


        formLayout_13->setLayout(1, QFormLayout::ItemRole::FieldRole, verticalLayout_33);

        recep_widget->addWidget(recep_del);

        verticalLayout_10->addWidget(recep_widget);

        staffTypeTabs->addTab(receptionistsTab, QString());
        adminsTab = new QWidget();
        adminsTab->setObjectName("adminsTab");
        verticalLayout_11 = new QVBoxLayout(adminsTab);
        verticalLayout_11->setObjectName("verticalLayout_11");
        adminActionsFrame = new QFrame(adminsTab);
        adminActionsFrame->setObjectName("adminActionsFrame");
        adminActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        adminActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_8 = new QHBoxLayout(adminActionsFrame);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        addAdminBtn = new QPushButton(adminActionsFrame);
        addAdminBtn->setObjectName("addAdminBtn");
        addAdminBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_8->addWidget(addAdminBtn);

        editAdminBtn = new QPushButton(adminActionsFrame);
        editAdminBtn->setObjectName("editAdminBtn");
        editAdminBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_8->addWidget(editAdminBtn);

        deleteAdminBtn = new QPushButton(adminActionsFrame);
        deleteAdminBtn->setObjectName("deleteAdminBtn");
        deleteAdminBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_8->addWidget(deleteAdminBtn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        adminSearchBox = new QLineEdit(adminActionsFrame);
        adminSearchBox->setObjectName("adminSearchBox");

        horizontalLayout_8->addWidget(adminSearchBox);


        verticalLayout_11->addWidget(adminActionsFrame);

        admin_widget = new QStackedWidget(adminsTab);
        admin_widget->setObjectName("admin_widget");
        admin_table = new QWidget();
        admin_table->setObjectName("admin_table");
        adminsTable = new QTableWidget(admin_table);
        if (adminsTable->columnCount() < 8)
            adminsTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(2, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(3, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(4, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(5, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(6, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        adminsTable->setHorizontalHeaderItem(7, __qtablewidgetitem57);
        adminsTable->setObjectName("adminsTable");
        adminsTable->setGeometry(QRect(0, 0, 1178, 491));
        admin_widget->addWidget(admin_table);
        admin_form = new QWidget();
        admin_form->setObjectName("admin_form");
        layoutWidget_5 = new QWidget(admin_form);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 0, 1141, 491));
        formLayout_7 = new QFormLayout(layoutWidget_5);
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(layoutWidget_5);
        label_54->setObjectName("label_54");

        formLayout_7->setWidget(0, QFormLayout::ItemRole::LabelRole, label_54);

        pname_5 = new QLineEdit(layoutWidget_5);
        pname_5->setObjectName("pname_5");

        formLayout_7->setWidget(0, QFormLayout::ItemRole::FieldRole, pname_5);

        label_55 = new QLabel(layoutWidget_5);
        label_55->setObjectName("label_55");

        formLayout_7->setWidget(1, QFormLayout::ItemRole::LabelRole, label_55);

        pdob_5 = new QDateEdit(layoutWidget_5);
        pdob_5->setObjectName("pdob_5");

        formLayout_7->setWidget(1, QFormLayout::ItemRole::FieldRole, pdob_5);

        label_57 = new QLabel(layoutWidget_5);
        label_57->setObjectName("label_57");

        formLayout_7->setWidget(2, QFormLayout::ItemRole::LabelRole, label_57);

        comboBox_gender_6 = new QComboBox(layoutWidget_5);
        comboBox_gender_6->addItem(QString());
        comboBox_gender_6->addItem(QString());
        comboBox_gender_6->addItem(QString());
        comboBox_gender_6->setObjectName("comboBox_gender_6");

        formLayout_7->setWidget(2, QFormLayout::ItemRole::FieldRole, comboBox_gender_6);

        label_58 = new QLabel(layoutWidget_5);
        label_58->setObjectName("label_58");

        formLayout_7->setWidget(3, QFormLayout::ItemRole::LabelRole, label_58);

        lineedit_address_4 = new QLineEdit(layoutWidget_5);
        lineedit_address_4->setObjectName("lineedit_address_4");

        formLayout_7->setWidget(3, QFormLayout::ItemRole::FieldRole, lineedit_address_4);

        label_59 = new QLabel(layoutWidget_5);
        label_59->setObjectName("label_59");

        formLayout_7->setWidget(4, QFormLayout::ItemRole::LabelRole, label_59);

        comboBox_gender_7 = new QComboBox(layoutWidget_5);
        comboBox_gender_7->addItem(QString());
        comboBox_gender_7->addItem(QString());
        comboBox_gender_7->addItem(QString());
        comboBox_gender_7->setObjectName("comboBox_gender_7");

        formLayout_7->setWidget(4, QFormLayout::ItemRole::FieldRole, comboBox_gender_7);

        label_60 = new QLabel(layoutWidget_5);
        label_60->setObjectName("label_60");

        formLayout_7->setWidget(6, QFormLayout::ItemRole::LabelRole, label_60);

        phone_lineedit_4 = new QLineEdit(layoutWidget_5);
        phone_lineedit_4->setObjectName("phone_lineedit_4");

        formLayout_7->setWidget(6, QFormLayout::ItemRole::FieldRole, phone_lineedit_4);

        label_61 = new QLabel(layoutWidget_5);
        label_61->setObjectName("label_61");

        formLayout_7->setWidget(7, QFormLayout::ItemRole::LabelRole, label_61);

        lineEdit_iddoc_4 = new QLineEdit(layoutWidget_5);
        lineEdit_iddoc_4->setObjectName("lineEdit_iddoc_4");

        formLayout_7->setWidget(7, QFormLayout::ItemRole::FieldRole, lineEdit_iddoc_4);

        pushButton_4 = new QPushButton(layoutWidget_5);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(114, 38));
        pushButton_4->setMaximumSize(QSize(1045, 16777215));

        formLayout_7->setWidget(8, QFormLayout::ItemRole::FieldRole, pushButton_4);

        comboBox_gender_8 = new QComboBox(layoutWidget_5);
        comboBox_gender_8->addItem(QString());
        comboBox_gender_8->addItem(QString());
        comboBox_gender_8->addItem(QString());
        comboBox_gender_8->setObjectName("comboBox_gender_8");

        formLayout_7->setWidget(5, QFormLayout::ItemRole::FieldRole, comboBox_gender_8);

        label_62 = new QLabel(layoutWidget_5);
        label_62->setObjectName("label_62");

        formLayout_7->setWidget(5, QFormLayout::ItemRole::LabelRole, label_62);

        admin_widget->addWidget(admin_form);
        admin_del = new QWidget();
        admin_del->setObjectName("admin_del");
        formLayoutWidget_3 = new QWidget(admin_del);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(300, 140, 571, 151));
        formLayout_12 = new QFormLayout(formLayoutWidget_3);
        formLayout_12->setObjectName("formLayout_12");
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        nurseIDLabel_2 = new QLabel(formLayoutWidget_3);
        nurseIDLabel_2->setObjectName("nurseIDLabel_2");

        formLayout_12->setWidget(0, QFormLayout::ItemRole::LabelRole, nurseIDLabel_2);

        nurseIDLineEdit_2 = new QLineEdit(formLayoutWidget_3);
        nurseIDLineEdit_2->setObjectName("nurseIDLineEdit_2");

        formLayout_12->setWidget(0, QFormLayout::ItemRole::FieldRole, nurseIDLineEdit_2);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setObjectName("verticalLayout_32");
        pushButton_9 = new QPushButton(formLayoutWidget_3);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout_32->addWidget(pushButton_9);


        formLayout_12->setLayout(1, QFormLayout::ItemRole::FieldRole, verticalLayout_32);

        admin_widget->addWidget(admin_del);

        verticalLayout_11->addWidget(admin_widget);

        staffTypeTabs->addTab(adminsTab, QString());

        verticalLayout_8->addWidget(staffTypeTabs);

        mainTabWidget->addTab(staffTab, QString());
        wardsTab = new QWidget();
        wardsTab->setObjectName("wardsTab");
        verticalLayout_13 = new QVBoxLayout(wardsTab);
        verticalLayout_13->setObjectName("verticalLayout_13");
        wardRoomTabs = new QTabWidget(wardsTab);
        wardRoomTabs->setObjectName("wardRoomTabs");
        wardsSubTab = new QWidget();
        wardsSubTab->setObjectName("wardsSubTab");
        verticalLayout_14 = new QVBoxLayout(wardsSubTab);
        verticalLayout_14->setObjectName("verticalLayout_14");
        wardActionsFrame = new QFrame(wardsSubTab);
        wardActionsFrame->setObjectName("wardActionsFrame");
        wardActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        wardActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_10 = new QHBoxLayout(wardActionsFrame);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        addWardBtn = new QPushButton(wardActionsFrame);
        addWardBtn->setObjectName("addWardBtn");
        addWardBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_10->addWidget(addWardBtn);

        editWardBtn = new QPushButton(wardActionsFrame);
        editWardBtn->setObjectName("editWardBtn");
        editWardBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_10->addWidget(editWardBtn);

        deleteWardBtn = new QPushButton(wardActionsFrame);
        deleteWardBtn->setObjectName("deleteWardBtn");
        deleteWardBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_10->addWidget(deleteWardBtn);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        wardSearchBox = new QLineEdit(wardActionsFrame);
        wardSearchBox->setObjectName("wardSearchBox");
        wardSearchBox->setStyleSheet(QString::fromUtf8("/* In your styles.css or mainwindow.ui style section */\n"
"QLabel {\n"
"    color: #333333; /* Dark gray for readability */\n"
"}\n"
"\n"
"QLineEdit, QComboBox, QTextEdit {\n"
"    color: #000000; /* Pure black */\n"
"    background-color: #ffffff; /* White background */\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    color: #333333;\n"
"    background-color: #f3f4f6;\n"
"}"));

        horizontalLayout_10->addWidget(wardSearchBox);


        verticalLayout_14->addWidget(wardActionsFrame);

        wards_widget = new QStackedWidget(wardsSubTab);
        wards_widget->setObjectName("wards_widget");
        wards_table = new QWidget();
        wards_table->setObjectName("wards_table");
        wardsTable = new QTableWidget(wards_table);
        if (wardsTable->columnCount() < 7)
            wardsTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        wardsTable->setHorizontalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        wardsTable->setHorizontalHeaderItem(1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        wardsTable->setHorizontalHeaderItem(2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        wardsTable->setHorizontalHeaderItem(3, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        wardsTable->setHorizontalHeaderItem(4, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        wardsTable->setHorizontalHeaderItem(5, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        wardsTable->setHorizontalHeaderItem(6, __qtablewidgetitem64);
        wardsTable->setObjectName("wardsTable");
        wardsTable->setGeometry(QRect(0, 0, 1178, 511));
        wards_widget->addWidget(wards_table);
        wards_form = new QWidget();
        wards_form->setObjectName("wards_form");
        layoutWidget_6 = new QWidget(wards_form);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(10, 40, 1141, 425));
        formLayout_8 = new QFormLayout(layoutWidget_6);
        formLayout_8->setObjectName("formLayout_8");
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        label_63 = new QLabel(layoutWidget_6);
        label_63->setObjectName("label_63");

        formLayout_8->setWidget(0, QFormLayout::ItemRole::LabelRole, label_63);

        ward_id = new QLineEdit(layoutWidget_6);
        ward_id->setObjectName("ward_id");

        formLayout_8->setWidget(0, QFormLayout::ItemRole::FieldRole, ward_id);

        label_64 = new QLabel(layoutWidget_6);
        label_64->setObjectName("label_64");

        formLayout_8->setWidget(1, QFormLayout::ItemRole::LabelRole, label_64);

        ward_name = new QLineEdit(layoutWidget_6);
        ward_name->setObjectName("ward_name");

        formLayout_8->setWidget(1, QFormLayout::ItemRole::FieldRole, ward_name);

        label_65 = new QLabel(layoutWidget_6);
        label_65->setObjectName("label_65");

        formLayout_8->setWidget(2, QFormLayout::ItemRole::LabelRole, label_65);

        cb_w_dep = new QComboBox(layoutWidget_6);
        cb_w_dep->addItem(QString());
        cb_w_dep->addItem(QString());
        cb_w_dep->addItem(QString());
        cb_w_dep->setObjectName("cb_w_dep");

        formLayout_8->setWidget(2, QFormLayout::ItemRole::FieldRole, cb_w_dep);

        label_66 = new QLabel(layoutWidget_6);
        label_66->setObjectName("label_66");

        formLayout_8->setWidget(3, QFormLayout::ItemRole::LabelRole, label_66);

        cb_w_hd = new QComboBox(layoutWidget_6);
        cb_w_hd->addItem(QString());
        cb_w_hd->addItem(QString());
        cb_w_hd->addItem(QString());
        cb_w_hd->setObjectName("cb_w_hd");

        formLayout_8->setWidget(3, QFormLayout::ItemRole::FieldRole, cb_w_hd);

        noOfRoomsLabel = new QLabel(layoutWidget_6);
        noOfRoomsLabel->setObjectName("noOfRoomsLabel");

        formLayout_8->setWidget(4, QFormLayout::ItemRole::LabelRole, noOfRoomsLabel);

        rooms_w = new QLineEdit(layoutWidget_6);
        rooms_w->setObjectName("rooms_w");

        formLayout_8->setWidget(4, QFormLayout::ItemRole::FieldRole, rooms_w);

        pushButton_5 = new QPushButton(layoutWidget_6);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(114, 38));
        pushButton_5->setMaximumSize(QSize(1045, 16777215));

        formLayout_8->setWidget(7, QFormLayout::ItemRole::FieldRole, pushButton_5);

        beds_w = new QLineEdit(layoutWidget_6);
        beds_w->setObjectName("beds_w");

        formLayout_8->setWidget(5, QFormLayout::ItemRole::FieldRole, beds_w);

        noofbeds_w = new QLabel(layoutWidget_6);
        noofbeds_w->setObjectName("noofbeds_w");

        formLayout_8->setWidget(5, QFormLayout::ItemRole::LabelRole, noofbeds_w);

        nurses_w = new QLineEdit(layoutWidget_6);
        nurses_w->setObjectName("nurses_w");

        formLayout_8->setWidget(6, QFormLayout::ItemRole::FieldRole, nurses_w);

        noofnurse_w = new QLabel(layoutWidget_6);
        noofnurse_w->setObjectName("noofnurse_w");

        formLayout_8->setWidget(6, QFormLayout::ItemRole::LabelRole, noofnurse_w);

        wards_widget->addWidget(wards_form);
        wards_Del = new QWidget();
        wards_Del->setObjectName("wards_Del");
        formLayoutWidget_7 = new QWidget(wards_Del);
        formLayoutWidget_7->setObjectName("formLayoutWidget_7");
        formLayoutWidget_7->setGeometry(QRect(360, 150, 571, 151));
        formLayout_16 = new QFormLayout(formLayoutWidget_7);
        formLayout_16->setObjectName("formLayout_16");
        formLayout_16->setContentsMargins(0, 0, 0, 0);
        nurseIDLabel_6 = new QLabel(formLayoutWidget_7);
        nurseIDLabel_6->setObjectName("nurseIDLabel_6");

        formLayout_16->setWidget(0, QFormLayout::ItemRole::LabelRole, nurseIDLabel_6);

        nurseIDLineEdit_6 = new QLineEdit(formLayoutWidget_7);
        nurseIDLineEdit_6->setObjectName("nurseIDLineEdit_6");

        formLayout_16->setWidget(0, QFormLayout::ItemRole::FieldRole, nurseIDLineEdit_6);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setObjectName("verticalLayout_36");
        pushButton_13 = new QPushButton(formLayoutWidget_7);
        pushButton_13->setObjectName("pushButton_13");

        verticalLayout_36->addWidget(pushButton_13);


        formLayout_16->setLayout(1, QFormLayout::ItemRole::FieldRole, verticalLayout_36);

        wards_widget->addWidget(wards_Del);

        verticalLayout_14->addWidget(wards_widget);

        wardRoomTabs->addTab(wardsSubTab, QString());
        roomsSubTab = new QWidget();
        roomsSubTab->setObjectName("roomsSubTab");
        verticalLayout_15 = new QVBoxLayout(roomsSubTab);
        verticalLayout_15->setObjectName("verticalLayout_15");
        roomActionsFrame = new QFrame(roomsSubTab);
        roomActionsFrame->setObjectName("roomActionsFrame");
        roomActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        roomActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_11 = new QHBoxLayout(roomActionsFrame);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        addRoomBtn = new QPushButton(roomActionsFrame);
        addRoomBtn->setObjectName("addRoomBtn");
        addRoomBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_11->addWidget(addRoomBtn);

        editRoomBtn = new QPushButton(roomActionsFrame);
        editRoomBtn->setObjectName("editRoomBtn");
        editRoomBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_11->addWidget(editRoomBtn);

        deleteRoomBtn = new QPushButton(roomActionsFrame);
        deleteRoomBtn->setObjectName("deleteRoomBtn");
        deleteRoomBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_11->addWidget(deleteRoomBtn);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        roomSearchBox = new QLineEdit(roomActionsFrame);
        roomSearchBox->setObjectName("roomSearchBox");

        horizontalLayout_11->addWidget(roomSearchBox);


        verticalLayout_15->addWidget(roomActionsFrame);

        room_widget = new QStackedWidget(roomsSubTab);
        room_widget->setObjectName("room_widget");
        room_table = new QWidget();
        room_table->setObjectName("room_table");
        roomsTable = new QTableWidget(room_table);
        if (roomsTable->columnCount() < 5)
            roomsTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        roomsTable->setHorizontalHeaderItem(0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        roomsTable->setHorizontalHeaderItem(1, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        roomsTable->setHorizontalHeaderItem(2, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        roomsTable->setHorizontalHeaderItem(3, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        roomsTable->setHorizontalHeaderItem(4, __qtablewidgetitem69);
        roomsTable->setObjectName("roomsTable");
        roomsTable->setGeometry(QRect(0, 0, 1178, 491));
        room_widget->addWidget(room_table);
        room_form = new QWidget();
        room_form->setObjectName("room_form");
        layoutWidget_7 = new QWidget(room_form);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(30, 40, 1141, 401));
        formLayout_9 = new QFormLayout(layoutWidget_7);
        formLayout_9->setObjectName("formLayout_9");
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        label_68 = new QLabel(layoutWidget_7);
        label_68->setObjectName("label_68");

        formLayout_9->setWidget(0, QFormLayout::ItemRole::LabelRole, label_68);

        room_id_edit = new QLineEdit(layoutWidget_7);
        room_id_edit->setObjectName("room_id_edit");

        formLayout_9->setWidget(0, QFormLayout::ItemRole::FieldRole, room_id_edit);

        label_70 = new QLabel(layoutWidget_7);
        label_70->setObjectName("label_70");

        formLayout_9->setWidget(1, QFormLayout::ItemRole::LabelRole, label_70);

        room_dep = new QComboBox(layoutWidget_7);
        room_dep->addItem(QString());
        room_dep->addItem(QString());
        room_dep->addItem(QString());
        room_dep->setObjectName("room_dep");

        formLayout_9->setWidget(1, QFormLayout::ItemRole::FieldRole, room_dep);

        wardLabel = new QLabel(layoutWidget_7);
        wardLabel->setObjectName("wardLabel");

        formLayout_9->setWidget(2, QFormLayout::ItemRole::LabelRole, wardLabel);

        room_ward = new QComboBox(layoutWidget_7);
        room_ward->setObjectName("room_ward");

        formLayout_9->setWidget(2, QFormLayout::ItemRole::FieldRole, room_ward);

        label_71 = new QLabel(layoutWidget_7);
        label_71->setObjectName("label_71");

        formLayout_9->setWidget(4, QFormLayout::ItemRole::LabelRole, label_71);

        room_add_bttn = new QPushButton(layoutWidget_7);
        room_add_bttn->setObjectName("room_add_bttn");
        room_add_bttn->setMinimumSize(QSize(114, 38));
        room_add_bttn->setMaximumSize(QSize(1045, 16777215));

        formLayout_9->setWidget(5, QFormLayout::ItemRole::FieldRole, room_add_bttn);

        assnurse_name = new QLabel(layoutWidget_7);
        assnurse_name->setObjectName("assnurse_name");

        formLayout_9->setWidget(3, QFormLayout::ItemRole::LabelRole, assnurse_name);

        assnurseComboBox = new QComboBox(layoutWidget_7);
        assnurseComboBox->addItem(QString());
        assnurseComboBox->setObjectName("assnurseComboBox");

        formLayout_9->setWidget(3, QFormLayout::ItemRole::FieldRole, assnurseComboBox);

        room_bed = new QLineEdit(layoutWidget_7);
        room_bed->setObjectName("room_bed");

        formLayout_9->setWidget(4, QFormLayout::ItemRole::FieldRole, room_bed);

        room_widget->addWidget(room_form);
        room_del = new QWidget();
        room_del->setObjectName("room_del");
        formLayoutWidget_5 = new QWidget(room_del);
        formLayoutWidget_5->setObjectName("formLayoutWidget_5");
        formLayoutWidget_5->setGeometry(QRect(300, 130, 571, 151));
        formLayout_14 = new QFormLayout(formLayoutWidget_5);
        formLayout_14->setObjectName("formLayout_14");
        formLayout_14->setContentsMargins(0, 0, 0, 0);
        nurseIDLabel_4 = new QLabel(formLayoutWidget_5);
        nurseIDLabel_4->setObjectName("nurseIDLabel_4");

        formLayout_14->setWidget(0, QFormLayout::ItemRole::LabelRole, nurseIDLabel_4);

        nurseIDLineEdit_4 = new QLineEdit(formLayoutWidget_5);
        nurseIDLineEdit_4->setObjectName("nurseIDLineEdit_4");

        formLayout_14->setWidget(0, QFormLayout::ItemRole::FieldRole, nurseIDLineEdit_4);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setObjectName("verticalLayout_34");
        pushButton_11 = new QPushButton(formLayoutWidget_5);
        pushButton_11->setObjectName("pushButton_11");

        verticalLayout_34->addWidget(pushButton_11);


        formLayout_14->setLayout(1, QFormLayout::ItemRole::FieldRole, verticalLayout_34);

        room_widget->addWidget(room_del);

        verticalLayout_15->addWidget(room_widget);

        wardRoomTabs->addTab(roomsSubTab, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        roomActionsFrame_2 = new QFrame(tab);
        roomActionsFrame_2->setObjectName("roomActionsFrame_2");
        roomActionsFrame_2->setGeometry(QRect(0, 10, 1178, 70));
        roomActionsFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        roomActionsFrame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_23 = new QHBoxLayout(roomActionsFrame_2);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        addRoomBtn_2 = new QPushButton(roomActionsFrame_2);
        addRoomBtn_2->setObjectName("addRoomBtn_2");
        addRoomBtn_2->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_23->addWidget(addRoomBtn_2);

        editRoomBtn_2 = new QPushButton(roomActionsFrame_2);
        editRoomBtn_2->setObjectName("editRoomBtn_2");
        editRoomBtn_2->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_23->addWidget(editRoomBtn_2);

        deleteRoomBtn_2 = new QPushButton(roomActionsFrame_2);
        deleteRoomBtn_2->setObjectName("deleteRoomBtn_2");
        deleteRoomBtn_2->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_23->addWidget(deleteRoomBtn_2);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_18);

        roomSearchBox_2 = new QLineEdit(roomActionsFrame_2);
        roomSearchBox_2->setObjectName("roomSearchBox_2");

        horizontalLayout_23->addWidget(roomSearchBox_2);

        bed_widget = new QStackedWidget(tab);
        bed_widget->setObjectName("bed_widget");
        bed_widget->setGeometry(QRect(10, 90, 1171, 501));
        bed_table = new QWidget();
        bed_table->setObjectName("bed_table");
        bedsTable = new QTableWidget(bed_table);
        if (bedsTable->columnCount() < 4)
            bedsTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        bedsTable->setHorizontalHeaderItem(0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        bedsTable->setHorizontalHeaderItem(1, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        bedsTable->setHorizontalHeaderItem(2, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        bedsTable->setHorizontalHeaderItem(3, __qtablewidgetitem73);
        bedsTable->setObjectName("bedsTable");
        bedsTable->setGeometry(QRect(-10, 0, 1178, 501));
        bed_widget->addWidget(bed_table);
        bed_form = new QWidget();
        bed_form->setObjectName("bed_form");
        layoutWidget_8 = new QWidget(bed_form);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(20, 30, 1141, 401));
        formLayout_10 = new QFormLayout(layoutWidget_8);
        formLayout_10->setObjectName("formLayout_10");
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        label_69 = new QLabel(layoutWidget_8);
        label_69->setObjectName("label_69");

        formLayout_10->setWidget(0, QFormLayout::ItemRole::LabelRole, label_69);

        pname_9 = new QLineEdit(layoutWidget_8);
        pname_9->setObjectName("pname_9");

        formLayout_10->setWidget(0, QFormLayout::ItemRole::FieldRole, pname_9);

        label_72 = new QLabel(layoutWidget_8);
        label_72->setObjectName("label_72");

        formLayout_10->setWidget(1, QFormLayout::ItemRole::LabelRole, label_72);

        comboBox_gender_11 = new QComboBox(layoutWidget_8);
        comboBox_gender_11->addItem(QString());
        comboBox_gender_11->addItem(QString());
        comboBox_gender_11->addItem(QString());
        comboBox_gender_11->setObjectName("comboBox_gender_11");

        formLayout_10->setWidget(1, QFormLayout::ItemRole::FieldRole, comboBox_gender_11);

        wardLabel_2 = new QLabel(layoutWidget_8);
        wardLabel_2->setObjectName("wardLabel_2");

        formLayout_10->setWidget(2, QFormLayout::ItemRole::LabelRole, wardLabel_2);

        wardComboBox_3 = new QComboBox(layoutWidget_8);
        wardComboBox_3->setObjectName("wardComboBox_3");

        formLayout_10->setWidget(2, QFormLayout::ItemRole::FieldRole, wardComboBox_3);

        label_73 = new QLabel(layoutWidget_8);
        label_73->setObjectName("label_73");

        formLayout_10->setWidget(3, QFormLayout::ItemRole::LabelRole, label_73);

        wardComboBox_4 = new QComboBox(layoutWidget_8);
        wardComboBox_4->setObjectName("wardComboBox_4");

        formLayout_10->setWidget(3, QFormLayout::ItemRole::FieldRole, wardComboBox_4);

        pushButton_7 = new QPushButton(layoutWidget_8);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(114, 38));
        pushButton_7->setMaximumSize(QSize(1045, 16777215));

        formLayout_10->setWidget(4, QFormLayout::ItemRole::FieldRole, pushButton_7);

        bed_widget->addWidget(bed_form);
        bed_del = new QWidget();
        bed_del->setObjectName("bed_del");
        formLayoutWidget_6 = new QWidget(bed_del);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(330, 130, 571, 151));
        formLayout_15 = new QFormLayout(formLayoutWidget_6);
        formLayout_15->setObjectName("formLayout_15");
        formLayout_15->setContentsMargins(0, 0, 0, 0);
        nurseIDLabel_5 = new QLabel(formLayoutWidget_6);
        nurseIDLabel_5->setObjectName("nurseIDLabel_5");

        formLayout_15->setWidget(0, QFormLayout::ItemRole::LabelRole, nurseIDLabel_5);

        nurseIDLineEdit_5 = new QLineEdit(formLayoutWidget_6);
        nurseIDLineEdit_5->setObjectName("nurseIDLineEdit_5");

        formLayout_15->setWidget(0, QFormLayout::ItemRole::FieldRole, nurseIDLineEdit_5);

        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setObjectName("verticalLayout_35");
        pushButton_12 = new QPushButton(formLayoutWidget_6);
        pushButton_12->setObjectName("pushButton_12");

        verticalLayout_35->addWidget(pushButton_12);


        formLayout_15->setLayout(1, QFormLayout::ItemRole::FieldRole, verticalLayout_35);

        bed_widget->addWidget(bed_del);
        wardRoomTabs->addTab(tab, QString());

        verticalLayout_13->addWidget(wardRoomTabs);

        mainTabWidget->addTab(wardsTab, QString());
        departmentsTab = new QWidget();
        departmentsTab->setObjectName("departmentsTab");
        verticalLayout_12 = new QVBoxLayout(departmentsTab);
        verticalLayout_12->setObjectName("verticalLayout_12");
        departmentActionsFrame = new QFrame(departmentsTab);
        departmentActionsFrame->setObjectName("departmentActionsFrame");
        departmentActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        departmentActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_9 = new QHBoxLayout(departmentActionsFrame);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        addDepartmentBtn = new QPushButton(departmentActionsFrame);
        addDepartmentBtn->setObjectName("addDepartmentBtn");
        addDepartmentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_9->addWidget(addDepartmentBtn);

        editDepartmentBtn = new QPushButton(departmentActionsFrame);
        editDepartmentBtn->setObjectName("editDepartmentBtn");
        editDepartmentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_9->addWidget(editDepartmentBtn);

        deleteDepartmentBtn = new QPushButton(departmentActionsFrame);
        deleteDepartmentBtn->setObjectName("deleteDepartmentBtn");
        deleteDepartmentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_9->addWidget(deleteDepartmentBtn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        departmentSearchBox = new QLineEdit(departmentActionsFrame);
        departmentSearchBox->setObjectName("departmentSearchBox");

        horizontalLayout_9->addWidget(departmentSearchBox);


        verticalLayout_12->addWidget(departmentActionsFrame);

        department_widget = new QStackedWidget(departmentsTab);
        department_widget->setObjectName("department_widget");
        dep_table = new QWidget();
        dep_table->setObjectName("dep_table");
        departmentsTable = new QTableWidget(dep_table);
        if (departmentsTable->columnCount() < 8)
            departmentsTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(0, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(1, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(2, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(3, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(4, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(5, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(6, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        departmentsTable->setHorizontalHeaderItem(7, __qtablewidgetitem81);
        departmentsTable->setObjectName("departmentsTable");
        departmentsTable->setGeometry(QRect(0, -10, 1218, 581));
        department_widget->addWidget(dep_table);
        dep_form = new QWidget();
        dep_form->setObjectName("dep_form");
        layoutWidget_9 = new QWidget(dep_form);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(40, 70, 1141, 425));
        formLayout_17 = new QFormLayout(layoutWidget_9);
        formLayout_17->setObjectName("formLayout_17");
        formLayout_17->setContentsMargins(0, 0, 0, 0);
        label_74 = new QLabel(layoutWidget_9);
        label_74->setObjectName("label_74");

        formLayout_17->setWidget(0, QFormLayout::ItemRole::LabelRole, label_74);

        pname_10 = new QLineEdit(layoutWidget_9);
        pname_10->setObjectName("pname_10");

        formLayout_17->setWidget(0, QFormLayout::ItemRole::FieldRole, pname_10);

        label_75 = new QLabel(layoutWidget_9);
        label_75->setObjectName("label_75");

        formLayout_17->setWidget(1, QFormLayout::ItemRole::LabelRole, label_75);

        pname_11 = new QLineEdit(layoutWidget_9);
        pname_11->setObjectName("pname_11");

        formLayout_17->setWidget(1, QFormLayout::ItemRole::FieldRole, pname_11);

        label_77 = new QLabel(layoutWidget_9);
        label_77->setObjectName("label_77");

        formLayout_17->setWidget(2, QFormLayout::ItemRole::LabelRole, label_77);

        comboBox_gender_14 = new QComboBox(layoutWidget_9);
        comboBox_gender_14->addItem(QString());
        comboBox_gender_14->addItem(QString());
        comboBox_gender_14->addItem(QString());
        comboBox_gender_14->setObjectName("comboBox_gender_14");

        formLayout_17->setWidget(2, QFormLayout::ItemRole::FieldRole, comboBox_gender_14);

        noOfRoomsLabel_4 = new QLabel(layoutWidget_9);
        noOfRoomsLabel_4->setObjectName("noOfRoomsLabel_4");

        formLayout_17->setWidget(3, QFormLayout::ItemRole::LabelRole, noOfRoomsLabel_4);

        noOfRoomsLineEdit_5 = new QLineEdit(layoutWidget_9);
        noOfRoomsLineEdit_5->setObjectName("noOfRoomsLineEdit_5");

        formLayout_17->setWidget(3, QFormLayout::ItemRole::FieldRole, noOfRoomsLineEdit_5);

        pushButton_14 = new QPushButton(layoutWidget_9);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(114, 38));
        pushButton_14->setMaximumSize(QSize(1045, 16777215));

        formLayout_17->setWidget(4, QFormLayout::ItemRole::FieldRole, pushButton_14);

        department_widget->addWidget(dep_form);
        dep_del = new QWidget();
        dep_del->setObjectName("dep_del");
        formLayoutWidget_16 = new QWidget(dep_del);
        formLayoutWidget_16->setObjectName("formLayoutWidget_16");
        formLayoutWidget_16->setGeometry(QRect(290, 120, 581, 281));
        formLayout_25 = new QFormLayout(formLayoutWidget_16);
        formLayout_25->setObjectName("formLayout_25");
        formLayout_25->setContentsMargins(0, 0, 0, 0);
        label_88 = new QLabel(formLayoutWidget_16);
        label_88->setObjectName("label_88");

        formLayout_25->setWidget(0, QFormLayout::ItemRole::LabelRole, label_88);

        med_Del_2 = new QLineEdit(formLayoutWidget_16);
        med_Del_2->setObjectName("med_Del_2");

        formLayout_25->setWidget(0, QFormLayout::ItemRole::FieldRole, med_Del_2);

        med_del_push_2 = new QPushButton(formLayoutWidget_16);
        med_del_push_2->setObjectName("med_del_push_2");

        formLayout_25->setWidget(1, QFormLayout::ItemRole::FieldRole, med_del_push_2);

        department_widget->addWidget(dep_del);

        verticalLayout_12->addWidget(department_widget);

        mainTabWidget->addTab(departmentsTab, QString());
        pharmacyTab = new QWidget();
        pharmacyTab->setObjectName("pharmacyTab");
        verticalLayout_16 = new QVBoxLayout(pharmacyTab);
        verticalLayout_16->setObjectName("verticalLayout_16");
        pharmacyTabs = new QTabWidget(pharmacyTab);
        pharmacyTabs->setObjectName("pharmacyTabs");
        inventorySubTab = new QWidget();
        inventorySubTab->setObjectName("inventorySubTab");
        verticalLayout_17 = new QVBoxLayout(inventorySubTab);
        verticalLayout_17->setObjectName("verticalLayout_17");
        inventoryActionsFrame = new QFrame(inventorySubTab);
        inventoryActionsFrame->setObjectName("inventoryActionsFrame");
        inventoryActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        inventoryActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_12 = new QHBoxLayout(inventoryActionsFrame);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        addInventoryBtn = new QPushButton(inventoryActionsFrame);
        addInventoryBtn->setObjectName("addInventoryBtn");
        addInventoryBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_12->addWidget(addInventoryBtn);

        editInventoryBtn = new QPushButton(inventoryActionsFrame);
        editInventoryBtn->setObjectName("editInventoryBtn");
        editInventoryBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_12->addWidget(editInventoryBtn);

        deleteInventoryBtn = new QPushButton(inventoryActionsFrame);
        deleteInventoryBtn->setObjectName("deleteInventoryBtn");
        deleteInventoryBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_12->addWidget(deleteInventoryBtn);

        restockInventoryBtn = new QPushButton(inventoryActionsFrame);
        restockInventoryBtn->setObjectName("restockInventoryBtn");
        restockInventoryBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_12->addWidget(restockInventoryBtn);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        inventorySearchBox = new QLineEdit(inventoryActionsFrame);
        inventorySearchBox->setObjectName("inventorySearchBox");

        horizontalLayout_12->addWidget(inventorySearchBox);


        verticalLayout_17->addWidget(inventoryActionsFrame);

        med_widget = new QStackedWidget(inventorySubTab);
        med_widget->setObjectName("med_widget");
        med_table = new QWidget();
        med_table->setObjectName("med_table");
        pharmacytable = new QTableWidget(med_table);
        if (pharmacytable->columnCount() < 5)
            pharmacytable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        pharmacytable->setHorizontalHeaderItem(0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        pharmacytable->setHorizontalHeaderItem(1, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        pharmacytable->setHorizontalHeaderItem(2, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        pharmacytable->setHorizontalHeaderItem(3, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        pharmacytable->setHorizontalHeaderItem(4, __qtablewidgetitem86);
        pharmacytable->setObjectName("pharmacytable");
        pharmacytable->setGeometry(QRect(0, 6, 1192, 491));
        edit_med_push = new QPushButton(med_table);
        edit_med_push->setObjectName("edit_med_push");
        edit_med_push->setGeometry(QRect(570, 460, 114, 29));
        med_widget->addWidget(med_table);
        med_form = new QWidget();
        med_form->setObjectName("med_form");
        formLayoutWidget_8 = new QWidget(med_form);
        formLayoutWidget_8->setObjectName("formLayoutWidget_8");
        formLayoutWidget_8->setGeometry(QRect(180, 50, 801, 371));
        formLayout_18 = new QFormLayout(formLayoutWidget_8);
        formLayout_18->setObjectName("formLayout_18");
        formLayout_18->setContentsMargins(0, 0, 0, 0);
        label_76 = new QLabel(formLayoutWidget_8);
        label_76->setObjectName("label_76");

        formLayout_18->setWidget(0, QFormLayout::ItemRole::LabelRole, label_76);

        label_78 = new QLabel(formLayoutWidget_8);
        label_78->setObjectName("label_78");

        formLayout_18->setWidget(1, QFormLayout::ItemRole::LabelRole, label_78);

        label_79 = new QLabel(formLayoutWidget_8);
        label_79->setObjectName("label_79");

        formLayout_18->setWidget(4, QFormLayout::ItemRole::LabelRole, label_79);

        label_80 = new QLabel(formLayoutWidget_8);
        label_80->setObjectName("label_80");

        formLayout_18->setWidget(2, QFormLayout::ItemRole::LabelRole, label_80);

        label_81 = new QLabel(formLayoutWidget_8);
        label_81->setObjectName("label_81");

        formLayout_18->setWidget(3, QFormLayout::ItemRole::LabelRole, label_81);

        med_id = new QLineEdit(formLayoutWidget_8);
        med_id->setObjectName("med_id");

        formLayout_18->setWidget(0, QFormLayout::ItemRole::FieldRole, med_id);

        med_name = new QLineEdit(formLayoutWidget_8);
        med_name->setObjectName("med_name");

        formLayout_18->setWidget(1, QFormLayout::ItemRole::FieldRole, med_name);

        med_com = new QLineEdit(formLayoutWidget_8);
        med_com->setObjectName("med_com");

        formLayout_18->setWidget(2, QFormLayout::ItemRole::FieldRole, med_com);

        med_price = new QLineEdit(formLayoutWidget_8);
        med_price->setObjectName("med_price");

        formLayout_18->setWidget(3, QFormLayout::ItemRole::FieldRole, med_price);

        med_stock = new QLineEdit(formLayoutWidget_8);
        med_stock->setObjectName("med_stock");

        formLayout_18->setWidget(4, QFormLayout::ItemRole::FieldRole, med_stock);

        push_stock = new QPushButton(formLayoutWidget_8);
        push_stock->setObjectName("push_stock");

        formLayout_18->setWidget(5, QFormLayout::ItemRole::FieldRole, push_stock);

        med_widget->addWidget(med_form);
        med_del = new QWidget();
        med_del->setObjectName("med_del");
        formLayoutWidget_9 = new QWidget(med_del);
        formLayoutWidget_9->setObjectName("formLayoutWidget_9");
        formLayoutWidget_9->setGeometry(QRect(320, 120, 581, 281));
        formLayout_19 = new QFormLayout(formLayoutWidget_9);
        formLayout_19->setObjectName("formLayout_19");
        formLayout_19->setContentsMargins(0, 0, 0, 0);
        label_82 = new QLabel(formLayoutWidget_9);
        label_82->setObjectName("label_82");

        formLayout_19->setWidget(0, QFormLayout::ItemRole::LabelRole, label_82);

        med_Del = new QLineEdit(formLayoutWidget_9);
        med_Del->setObjectName("med_Del");

        formLayout_19->setWidget(0, QFormLayout::ItemRole::FieldRole, med_Del);

        med_del_push = new QPushButton(formLayoutWidget_9);
        med_del_push->setObjectName("med_del_push");

        formLayout_19->setWidget(1, QFormLayout::ItemRole::FieldRole, med_del_push);

        med_widget->addWidget(med_del);
        med_restock = new QWidget();
        med_restock->setObjectName("med_restock");
        formLayoutWidget_10 = new QWidget(med_restock);
        formLayoutWidget_10->setObjectName("formLayoutWidget_10");
        formLayoutWidget_10->setGeometry(QRect(280, 80, 561, 301));
        formLayout_20 = new QFormLayout(formLayoutWidget_10);
        formLayout_20->setObjectName("formLayout_20");
        formLayout_20->setContentsMargins(0, 0, 0, 0);
        label_83 = new QLabel(formLayoutWidget_10);
        label_83->setObjectName("label_83");

        formLayout_20->setWidget(0, QFormLayout::ItemRole::LabelRole, label_83);

        label_84 = new QLabel(formLayoutWidget_10);
        label_84->setObjectName("label_84");

        formLayout_20->setWidget(1, QFormLayout::ItemRole::LabelRole, label_84);

        med_id_restock = new QLineEdit(formLayoutWidget_10);
        med_id_restock->setObjectName("med_id_restock");

        formLayout_20->setWidget(0, QFormLayout::ItemRole::FieldRole, med_id_restock);

        med_name_restock = new QLineEdit(formLayoutWidget_10);
        med_name_restock->setObjectName("med_name_restock");

        formLayout_20->setWidget(1, QFormLayout::ItemRole::FieldRole, med_name_restock);

        med_quan_restock = new QLineEdit(formLayoutWidget_10);
        med_quan_restock->setObjectName("med_quan_restock");

        formLayout_20->setWidget(2, QFormLayout::ItemRole::FieldRole, med_quan_restock);

        label_85 = new QLabel(formLayoutWidget_10);
        label_85->setObjectName("label_85");

        formLayout_20->setWidget(2, QFormLayout::ItemRole::LabelRole, label_85);

        med_restock_push = new QPushButton(formLayoutWidget_10);
        med_restock_push->setObjectName("med_restock_push");

        formLayout_20->setWidget(3, QFormLayout::ItemRole::FieldRole, med_restock_push);

        med_widget->addWidget(med_restock);

        verticalLayout_17->addWidget(med_widget);

        pharmacyTabs->addTab(inventorySubTab, QString());

        verticalLayout_16->addWidget(pharmacyTabs);

        mainTabWidget->addTab(pharmacyTab, QString());
        billingTab = new QWidget();
        billingTab->setObjectName("billingTab");
        verticalLayout_19 = new QVBoxLayout(billingTab);
        verticalLayout_19->setObjectName("verticalLayout_19");
        billingActionsFrame = new QFrame(billingTab);
        billingActionsFrame->setObjectName("billingActionsFrame");
        billingActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        billingActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_14 = new QHBoxLayout(billingActionsFrame);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        generateBillBtn = new QPushButton(billingActionsFrame);
        generateBillBtn->setObjectName("generateBillBtn");
        generateBillBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_14->addWidget(generateBillBtn);

        viewBillBtn = new QPushButton(billingActionsFrame);
        viewBillBtn->setObjectName("viewBillBtn");
        viewBillBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_14->addWidget(viewBillBtn);

        processPaymentBtn = new QPushButton(billingActionsFrame);
        processPaymentBtn->setObjectName("processPaymentBtn");
        processPaymentBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_14->addWidget(processPaymentBtn);

        applyInsuranceBtn = new QPushButton(billingActionsFrame);
        applyInsuranceBtn->setObjectName("applyInsuranceBtn");
        applyInsuranceBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_14->addWidget(applyInsuranceBtn);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        billingSearchBox = new QLineEdit(billingActionsFrame);
        billingSearchBox->setObjectName("billingSearchBox");

        horizontalLayout_14->addWidget(billingSearchBox);


        verticalLayout_19->addWidget(billingActionsFrame);

        billsTable = new QTableWidget(billingTab);
        if (billsTable->columnCount() < 7)
            billsTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        billsTable->setHorizontalHeaderItem(0, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        billsTable->setHorizontalHeaderItem(1, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        billsTable->setHorizontalHeaderItem(2, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        billsTable->setHorizontalHeaderItem(3, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        billsTable->setHorizontalHeaderItem(4, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        billsTable->setHorizontalHeaderItem(5, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        billsTable->setHorizontalHeaderItem(6, __qtablewidgetitem93);
        billsTable->setObjectName("billsTable");

        verticalLayout_19->addWidget(billsTable);

        paymentDetailsGroup = new QGroupBox(billingTab);
        paymentDetailsGroup->setObjectName("paymentDetailsGroup");
        horizontalLayout_15 = new QHBoxLayout(paymentDetailsGroup);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        totalAmountLabel = new QLabel(paymentDetailsGroup);
        totalAmountLabel->setObjectName("totalAmountLabel");

        horizontalLayout_15->addWidget(totalAmountLabel);

        paidAmountLabel = new QLabel(paymentDetailsGroup);
        paidAmountLabel->setObjectName("paidAmountLabel");

        horizontalLayout_15->addWidget(paidAmountLabel);

        balanceLabel = new QLabel(paymentDetailsGroup);
        balanceLabel->setObjectName("balanceLabel");

        horizontalLayout_15->addWidget(balanceLabel);

        insuranceLabel = new QLabel(paymentDetailsGroup);
        insuranceLabel->setObjectName("insuranceLabel");

        horizontalLayout_15->addWidget(insuranceLabel);


        verticalLayout_19->addWidget(paymentDetailsGroup);

        mainTabWidget->addTab(billingTab, QString());
        labsTab = new QWidget();
        labsTab->setObjectName("labsTab");
        verticalLayout_20 = new QVBoxLayout(labsTab);
        verticalLayout_20->setObjectName("verticalLayout_20");
        labTabs = new QTabWidget(labsTab);
        labTabs->setObjectName("labTabs");
        test_book = new QWidget();
        test_book->setObjectName("test_book");
        verticalLayout_21 = new QVBoxLayout(test_book);
        verticalLayout_21->setObjectName("verticalLayout_21");
        testActionsFrame = new QFrame(test_book);
        testActionsFrame->setObjectName("testActionsFrame");
        testActionsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        testActionsFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_16 = new QHBoxLayout(testActionsFrame);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        scheduleTestBtn = new QPushButton(testActionsFrame);
        scheduleTestBtn->setObjectName("scheduleTestBtn");
        scheduleTestBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_16->addWidget(scheduleTestBtn);

        editTestBtn = new QPushButton(testActionsFrame);
        editTestBtn->setObjectName("editTestBtn");
        editTestBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_16->addWidget(editTestBtn);

        cancelTestBtn = new QPushButton(testActionsFrame);
        cancelTestBtn->setObjectName("cancelTestBtn");
        cancelTestBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_16->addWidget(cancelTestBtn);

        completeTestBtn = new QPushButton(testActionsFrame);
        completeTestBtn->setObjectName("completeTestBtn");
        completeTestBtn->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_16->addWidget(completeTestBtn);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_13);

        testSearchBox = new QLineEdit(testActionsFrame);
        testSearchBox->setObjectName("testSearchBox");

        horizontalLayout_16->addWidget(testSearchBox);


        verticalLayout_21->addWidget(testActionsFrame);

        lab_widget = new QStackedWidget(test_book);
        lab_widget->setObjectName("lab_widget");
        table_lab = new QWidget();
        table_lab->setObjectName("table_lab");
        testsTable = new QTableWidget(table_lab);
        if (testsTable->columnCount() < 7)
            testsTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        testsTable->setHorizontalHeaderItem(0, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        testsTable->setHorizontalHeaderItem(1, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        testsTable->setHorizontalHeaderItem(2, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        testsTable->setHorizontalHeaderItem(3, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        testsTable->setHorizontalHeaderItem(4, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        testsTable->setHorizontalHeaderItem(5, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        testsTable->setHorizontalHeaderItem(6, __qtablewidgetitem100);
        testsTable->setObjectName("testsTable");
        testsTable->setGeometry(QRect(0, 0, 1192, 751));
        laboraty_push_button = new QPushButton(table_lab);
        laboraty_push_button->setObjectName("laboraty_push_button");
        laboraty_push_button->setGeometry(QRect(0, 460, 1192, 38));
        lab_widget->addWidget(table_lab);
        lab_form = new QWidget();
        lab_form->setObjectName("lab_form");
        formLayoutWidget_11 = new QWidget(lab_form);
        formLayoutWidget_11->setObjectName("formLayoutWidget_11");
        formLayoutWidget_11->setGeometry(QRect(280, 110, 581, 281));
        formLayout_21 = new QFormLayout(formLayoutWidget_11);
        formLayout_21->setObjectName("formLayout_21");
        formLayout_21->setContentsMargins(0, 0, 0, 0);
        label_86 = new QLabel(formLayoutWidget_11);
        label_86->setObjectName("label_86");

        formLayout_21->setWidget(0, QFormLayout::ItemRole::LabelRole, label_86);

        lab_Del = new QLineEdit(formLayoutWidget_11);
        lab_Del->setObjectName("lab_Del");

        formLayout_21->setWidget(0, QFormLayout::ItemRole::FieldRole, lab_Del);

        lab_del_push_2 = new QPushButton(formLayoutWidget_11);
        lab_del_push_2->setObjectName("lab_del_push_2");

        formLayout_21->setWidget(1, QFormLayout::ItemRole::FieldRole, lab_del_push_2);

        lab_widget->addWidget(lab_form);
        lab_test_sche = new QWidget();
        lab_test_sche->setObjectName("lab_test_sche");
        formLayoutWidget_13 = new QWidget(lab_test_sche);
        formLayoutWidget_13->setObjectName("formLayoutWidget_13");
        formLayoutWidget_13->setGeometry(QRect(80, 50, 801, 371));
        formLayout_22 = new QFormLayout(formLayoutWidget_13);
        formLayout_22->setObjectName("formLayout_22");
        formLayout_22->setContentsMargins(0, 0, 0, 0);
        label_89 = new QLabel(formLayoutWidget_13);
        label_89->setObjectName("label_89");

        formLayout_22->setWidget(1, QFormLayout::ItemRole::LabelRole, label_89);

        tetst_id = new QLineEdit(formLayoutWidget_13);
        tetst_id->setObjectName("tetst_id");

        formLayout_22->setWidget(1, QFormLayout::ItemRole::FieldRole, tetst_id);

        label_90 = new QLabel(formLayoutWidget_13);
        label_90->setObjectName("label_90");

        formLayout_22->setWidget(2, QFormLayout::ItemRole::LabelRole, label_90);

        tets_name = new QLineEdit(formLayoutWidget_13);
        tets_name->setObjectName("tets_name");

        formLayout_22->setWidget(2, QFormLayout::ItemRole::FieldRole, tets_name);

        patient_test_sche = new QLabel(formLayoutWidget_13);
        patient_test_sche->setObjectName("patient_test_sche");

        formLayout_22->setWidget(3, QFormLayout::ItemRole::LabelRole, patient_test_sche);

        patientIDLineEdit_tets = new QLineEdit(formLayoutWidget_13);
        patientIDLineEdit_tets->setObjectName("patientIDLineEdit_tets");

        formLayout_22->setWidget(3, QFormLayout::ItemRole::FieldRole, patientIDLineEdit_tets);

        test_book_push = new QPushButton(formLayoutWidget_13);
        test_book_push->setObjectName("test_book_push");

        formLayout_22->setWidget(4, QFormLayout::ItemRole::FieldRole, test_book_push);

        test_booking_id = new QLabel(formLayoutWidget_13);
        test_booking_id->setObjectName("test_booking_id");

        formLayout_22->setWidget(0, QFormLayout::ItemRole::LabelRole, test_booking_id);

        tbLineEdit = new QLineEdit(formLayoutWidget_13);
        tbLineEdit->setObjectName("tbLineEdit");

        formLayout_22->setWidget(0, QFormLayout::ItemRole::FieldRole, tbLineEdit);

        lab_widget->addWidget(lab_test_sche);
        labcomplete = new QWidget();
        labcomplete->setObjectName("labcomplete");
        formLayoutWidget_12 = new QWidget(labcomplete);
        formLayoutWidget_12->setObjectName("formLayoutWidget_12");
        formLayoutWidget_12->setGeometry(QRect(220, 130, 561, 241));
        lab_test_com_form = new QFormLayout(formLayoutWidget_12);
        lab_test_com_form->setObjectName("lab_test_com_form");
        lab_test_com_form->setContentsMargins(0, 0, 0, 0);
        label_87 = new QLabel(formLayoutWidget_12);
        label_87->setObjectName("label_87");

        lab_test_com_form->setWidget(0, QFormLayout::ItemRole::LabelRole, label_87);

        lab_book_id = new QLineEdit(formLayoutWidget_12);
        lab_book_id->setObjectName("lab_book_id");

        lab_test_com_form->setWidget(0, QFormLayout::ItemRole::FieldRole, lab_book_id);

        lab_complet_push = new QPushButton(formLayoutWidget_12);
        lab_complet_push->setObjectName("lab_complet_push");

        lab_test_com_form->setWidget(1, QFormLayout::ItemRole::FieldRole, lab_complet_push);

        lab_widget->addWidget(labcomplete);

        verticalLayout_21->addWidget(lab_widget);

        labTabs->addTab(test_book, QString());
        test_tab = new QWidget();
        test_tab->setObjectName("test_tab");
        testActionsFrame_2 = new QFrame(test_tab);
        testActionsFrame_2->setObjectName("testActionsFrame_2");
        testActionsFrame_2->setGeometry(QRect(0, 0, 1192, 70));
        testActionsFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        testActionsFrame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_17 = new QHBoxLayout(testActionsFrame_2);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        scheduleTestBtn_2 = new QPushButton(testActionsFrame_2);
        scheduleTestBtn_2->setObjectName("scheduleTestBtn_2");
        scheduleTestBtn_2->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_17->addWidget(scheduleTestBtn_2);

        editTestBtn_2 = new QPushButton(testActionsFrame_2);
        editTestBtn_2->setObjectName("editTestBtn_2");
        editTestBtn_2->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_17->addWidget(editTestBtn_2);

        cancelTestBtn_2 = new QPushButton(testActionsFrame_2);
        cancelTestBtn_2->setObjectName("cancelTestBtn_2");
        cancelTestBtn_2->setStyleSheet(QString::fromUtf8("padding: 8px 16px;"));

        horizontalLayout_17->addWidget(cancelTestBtn_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_14);

        testSearchBox_2 = new QLineEdit(testActionsFrame_2);
        testSearchBox_2->setObjectName("testSearchBox_2");

        horizontalLayout_17->addWidget(testSearchBox_2);

        test_data_widget = new QStackedWidget(test_tab);
        test_data_widget->setObjectName("test_data_widget");
        test_data_widget->setGeometry(QRect(0, 70, 1271, 771));
        tt = new QWidget();
        tt->setObjectName("tt");
        testsdataTable = new QTableWidget(tt);
        if (testsdataTable->columnCount() < 4)
            testsdataTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        testsdataTable->setHorizontalHeaderItem(0, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        testsdataTable->setHorizontalHeaderItem(1, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        testsdataTable->setHorizontalHeaderItem(2, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        testsdataTable->setHorizontalHeaderItem(3, __qtablewidgetitem104);
        testsdataTable->setObjectName("testsdataTable");
        testsdataTable->setGeometry(QRect(0, 10, 1192, 751));
        testdata_pushbutton = new QPushButton(tt);
        testdata_pushbutton->setObjectName("testdata_pushbutton");
        testdata_pushbutton->setGeometry(QRect(540, 490, 114, 41));
        test_data_widget->addWidget(tt);
        test_add = new QWidget();
        test_add->setObjectName("test_add");
        formLayoutWidget_14 = new QWidget(test_add);
        formLayoutWidget_14->setObjectName("formLayoutWidget_14");
        formLayoutWidget_14->setGeometry(QRect(110, 70, 801, 371));
        formLayout_23 = new QFormLayout(formLayoutWidget_14);
        formLayout_23->setObjectName("formLayout_23");
        formLayout_23->setContentsMargins(0, 0, 0, 0);
        label_91 = new QLabel(formLayoutWidget_14);
        label_91->setObjectName("label_91");

        formLayout_23->setWidget(0, QFormLayout::ItemRole::LabelRole, label_91);

        test_data_id = new QLineEdit(formLayoutWidget_14);
        test_data_id->setObjectName("test_data_id");

        formLayout_23->setWidget(0, QFormLayout::ItemRole::FieldRole, test_data_id);

        label_92 = new QLabel(formLayoutWidget_14);
        label_92->setObjectName("label_92");

        formLayout_23->setWidget(1, QFormLayout::ItemRole::LabelRole, label_92);

        test_data_name = new QLineEdit(formLayoutWidget_14);
        test_data_name->setObjectName("test_data_name");

        formLayout_23->setWidget(1, QFormLayout::ItemRole::FieldRole, test_data_name);

        label_95 = new QLabel(formLayoutWidget_14);
        label_95->setObjectName("label_95");

        formLayout_23->setWidget(2, QFormLayout::ItemRole::LabelRole, label_95);

        test_data_price = new QLineEdit(formLayoutWidget_14);
        test_data_price->setObjectName("test_data_price");

        formLayout_23->setWidget(2, QFormLayout::ItemRole::FieldRole, test_data_price);

        test_add_push = new QPushButton(formLayoutWidget_14);
        test_add_push->setObjectName("test_add_push");

        formLayout_23->setWidget(3, QFormLayout::ItemRole::FieldRole, test_add_push);

        test_data_widget->addWidget(test_add);
        test_del_2 = new QWidget();
        test_del_2->setObjectName("test_del_2");
        formLayoutWidget_15 = new QWidget(test_del_2);
        formLayoutWidget_15->setObjectName("formLayoutWidget_15");
        formLayoutWidget_15->setGeometry(QRect(230, 100, 581, 281));
        formLayout_24 = new QFormLayout(formLayoutWidget_15);
        formLayout_24->setObjectName("formLayout_24");
        formLayout_24->setContentsMargins(0, 0, 0, 0);
        label_93 = new QLabel(formLayoutWidget_15);
        label_93->setObjectName("label_93");

        formLayout_24->setWidget(0, QFormLayout::ItemRole::LabelRole, label_93);

        test_del = new QLineEdit(formLayoutWidget_15);
        test_del->setObjectName("test_del");

        formLayout_24->setWidget(0, QFormLayout::ItemRole::FieldRole, test_del);

        test_del_push = new QPushButton(formLayoutWidget_15);
        test_del_push->setObjectName("test_del_push");

        formLayout_24->setWidget(1, QFormLayout::ItemRole::FieldRole, test_del_push);

        test_data_widget->addWidget(test_del_2);
        labTabs->addTab(test_tab, QString());

        verticalLayout_20->addWidget(labTabs);

        mainTabWidget->addTab(labsTab, QString());

        verticalLayout->addWidget(mainTabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1294, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionPreferences);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        mainTabWidget->setCurrentIndex(5);
        patient_stack->setCurrentIndex(2);
        stackedWidget->setCurrentIndex(1);
        appointstack->setCurrentIndex(2);
        staffTypeTabs->setCurrentIndex(1);
        wardRoomTabs->setCurrentIndex(2);
        room_widget->setCurrentIndex(1);
        pharmacyTabs->setCurrentIndex(0);
        labTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hospital Management System", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "Hospital Management System", nullptr));
        totalPatientsLabel->setText(QCoreApplication::translate("MainWindow", "Total Patients: 0", nullptr));
        totalDoctorsLabel->setText(QCoreApplication::translate("MainWindow", "Total Doctors: 0", nullptr));
        activeAppointmentsLabel->setText(QCoreApplication::translate("MainWindow", "Active Appointments: 0", nullptr));
        availableRoomsLabel->setText(QCoreApplication::translate("MainWindow", "Available Rooms: 0", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(dashboardTab), QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        addPatientBtn->setText(QCoreApplication::translate("MainWindow", "Add Patient", nullptr));
        editPatientBtn->setText(QCoreApplication::translate("MainWindow", "Edit Patient", nullptr));
        deletePatientBtn->setText(QCoreApplication::translate("MainWindow", "Delete Patient", nullptr));
        viewPatientBtn->setText(QCoreApplication::translate("MainWindow", "View Details", nullptr));
        patientSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search patients...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = patientsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Patient ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = patientsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = patientsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = patientsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = patientsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = patientsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = patientsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Disease", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = patientsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = patientsTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Assigned Doctor", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = patientsTable->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Doctor ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = patientsTable->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Dept.ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = patientsTable->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Ward ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = patientsTable->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Room ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = patientsTable->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Bed ID", nullptr));
        edit_button->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Patient Row: ", nullptr));
        pushdelpatient->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        gender_2->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        gender_2->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        gender_2->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_22->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Patient Id", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Disease", nullptr));
        comboBox_disease->setItemText(0, QCoreApplication::translate("MainWindow", "Heart Attack", nullptr));
        comboBox_disease->setItemText(1, QCoreApplication::translate("MainWindow", "Brain Tumour", nullptr));
        comboBox_disease->setItemText(2, QCoreApplication::translate("MainWindow", "Keera", nullptr));

        label_26->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        comboBox_status->setItemText(0, QCoreApplication::translate("MainWindow", "Admit", nullptr));
        comboBox_status->setItemText(1, QCoreApplication::translate("MainWindow", "Walk In", nullptr));

        label_28->setText(QCoreApplication::translate("MainWindow", "Assigned Doctor", nullptr));
        departmentLabel_pat->setText(QCoreApplication::translate("MainWindow", "Department", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Ward", nullptr));
        roomNoLabel_pat->setText(QCoreApplication::translate("MainWindow", "Room no:", nullptr));
        bedNoLabel_pat->setText(QCoreApplication::translate("MainWindow", "Bed no:", nullptr));
        pushButton_patient->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(patientsTab), QCoreApplication::translate("MainWindow", "Patients", nullptr));
        addDoctorBtn->setText(QCoreApplication::translate("MainWindow", "Add Doctor", nullptr));
        editDoctorBtn->setText(QCoreApplication::translate("MainWindow", "Edit Doctor", nullptr));
        deleteDoctorBtn->setText(QCoreApplication::translate("MainWindow", "Delete Doctor", nullptr));
        viewDoctorBtn->setText(QCoreApplication::translate("MainWindow", "View Details", nullptr));
        doctorSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search doctors...", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        comboBox_gender->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Availabilty", nullptr));
        slot_button->setText(QCoreApplication::translate("MainWindow", "Add Slot", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Specialization", nullptr));
        comboBox_special->setItemText(0, QCoreApplication::translate("MainWindow", "Heart Attack", nullptr));
        comboBox_special->setItemText(1, QCoreApplication::translate("MainWindow", "Brain Tumour", nullptr));
        comboBox_special->setItemText(2, QCoreApplication::translate("MainWindow", "Keera", nullptr));

        label_15->setText(QCoreApplication::translate("MainWindow", "Department ID:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Experience", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Doctor Id", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = doctorsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = doctorsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = doctorsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = doctorsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = doctorsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = doctorsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Doctor Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = doctorsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Department ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = doctorsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Specialization", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = doctorsTable->horizontalHeaderItem(8);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Experience", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = doctorsTable->horizontalHeaderItem(9);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Availabilty", nullptr));
        doctor_editpushbutton->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Doctor No:", nullptr));
        deletepush->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(doctorsTab), QCoreApplication::translate("MainWindow", "Doctors", nullptr));
        addAppointmentBtn->setText(QCoreApplication::translate("MainWindow", "Add Appointment", nullptr));
        editAppointmentBtn->setText(QCoreApplication::translate("MainWindow", "Edit Appointment", nullptr));
        deleteAppointmentBtn->setText(QCoreApplication::translate("MainWindow", "Delete Appointment", nullptr));
        completeAppointmentBtn->setText(QCoreApplication::translate("MainWindow", "Mark Complete", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = appointtable->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Appointment ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = appointtable->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Patient ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = appointtable->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Patient ", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = appointtable->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "Doctor ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = appointtable->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "Doctor", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = appointtable->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "Date/Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = appointtable->horizontalHeaderItem(6);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = appointtable->horizontalHeaderItem(7);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "Purpose", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = appointtable->horizontalHeaderItem(8);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "Prescriptions", nullptr));
        appointeditbutton->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Enter Appointment Row:", nullptr));
        appointmentdeletepushbutton->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Pateint Name", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Pateint ID", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Req. Spec:", nullptr));
        cb_spec->setItemText(0, QCoreApplication::translate("MainWindow", "Cardiologist", nullptr));
        cb_spec->setItemText(1, QCoreApplication::translate("MainWindow", "Neurologist", nullptr));
        cb_spec->setItemText(2, QCoreApplication::translate("MainWindow", "Orthopedist", nullptr));
        cb_spec->setItemText(3, QCoreApplication::translate("MainWindow", "Pediatrician", nullptr));
        cb_spec->setItemText(4, QCoreApplication::translate("MainWindow", "Nephrologist", nullptr));
        cb_spec->setItemText(5, QString());

        label_32->setText(QCoreApplication::translate("MainWindow", "Avail. Dcotors: ", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Aval. Time: ", nullptr));
        button_bookappoint->setText(QCoreApplication::translate("MainWindow", "Book Appointment", nullptr));
        pushButton_appointmentcompleted->setText(QCoreApplication::translate("MainWindow", "Completed", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Appointment ID:", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(appointmentsTab), QCoreApplication::translate("MainWindow", "Appointments", nullptr));
        addNurseBtn->setText(QCoreApplication::translate("MainWindow", "Add Nurse", nullptr));
        editNurseBtn->setText(QCoreApplication::translate("MainWindow", "Edit Nurse", nullptr));
        deleteNurseBtn->setText(QCoreApplication::translate("MainWindow", "Delete Nurse", nullptr));
        nurseSearchBox->setText(QString());
        nurseSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search nurses...", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = nursesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = nursesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "Dob", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = nursesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = nursesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = nursesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = nursesTable->horizontalHeaderItem(5);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = nursesTable->horizontalHeaderItem(6);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "Specialization", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = nursesTable->horizontalHeaderItem(7);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "Availabilty", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = nursesTable->horizontalHeaderItem(8);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "Experience", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        comboBox_gender_2->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_2->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_2->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_42->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Availabilty", nullptr));
        comboBox_gender_3->setItemText(0, QCoreApplication::translate("MainWindow", "Morning", nullptr));
        comboBox_gender_3->setItemText(1, QCoreApplication::translate("MainWindow", "Evening", nullptr));
        comboBox_gender_3->setItemText(2, QCoreApplication::translate("MainWindow", "Night", nullptr));

        label_44->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Specialization", nullptr));
        comboBox_special_2->setItemText(0, QCoreApplication::translate("MainWindow", "Heart Attack", nullptr));
        comboBox_special_2->setItemText(1, QCoreApplication::translate("MainWindow", "ENT(Ears Nose Throat)", nullptr));
        comboBox_special_2->setItemText(2, QCoreApplication::translate("MainWindow", "Brain Tumour", nullptr));
        comboBox_special_2->setItemText(3, QCoreApplication::translate("MainWindow", "Keera", nullptr));

        label_48->setText(QCoreApplication::translate("MainWindow", "Experience", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "Nurse Id", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        nurseIDLabel->setText(QCoreApplication::translate("MainWindow", "Nurse ID:", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        staffTypeTabs->setTabText(staffTypeTabs->indexOf(nursesTab), QCoreApplication::translate("MainWindow", "Nurses", nullptr));
        addReceptionistBtn->setText(QCoreApplication::translate("MainWindow", "Add Receptionist", nullptr));
        editReceptionistBtn->setText(QCoreApplication::translate("MainWindow", "Edit Receptionist", nullptr));
        deleteReceptionistBtn->setText(QCoreApplication::translate("MainWindow", "Delete Receptionist", nullptr));
        receptionistSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search receptionists...", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = receptionistsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = receptionistsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = receptionistsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = receptionistsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "DOB", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = receptionistsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = receptionistsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = receptionistsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", "Salary", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = receptionistsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "Avalability", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        comboBox_gender_4->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_4->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_4->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_51->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "Availabilty", nullptr));
        comboBox_gender_5->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_5->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_5->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_53->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "Receptionist Id   ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        nurseIDLabel_3->setText(QCoreApplication::translate("MainWindow", "Reception ID:", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        staffTypeTabs->setTabText(staffTypeTabs->indexOf(receptionistsTab), QCoreApplication::translate("MainWindow", "Receptionists", nullptr));
        addAdminBtn->setText(QCoreApplication::translate("MainWindow", "Add Admin", nullptr));
        editAdminBtn->setText(QCoreApplication::translate("MainWindow", "Edit Admin", nullptr));
        deleteAdminBtn->setText(QCoreApplication::translate("MainWindow", "Delete Admin", nullptr));
        adminSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search admins...", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = adminsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = adminsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("MainWindow", "DOB", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = adminsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = adminsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = adminsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = adminsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("MainWindow", "Position", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = adminsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = adminsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        comboBox_gender_6->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_6->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_6->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_58->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "Availabilty", nullptr));
        comboBox_gender_7->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_7->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_7->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_60->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "Receptionist Id   ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        comboBox_gender_8->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_8->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_8->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_62->setText(QCoreApplication::translate("MainWindow", "Position: ", nullptr));
        nurseIDLabel_2->setText(QCoreApplication::translate("MainWindow", "Admin ID:", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        staffTypeTabs->setTabText(staffTypeTabs->indexOf(adminsTab), QCoreApplication::translate("MainWindow", "Administrators", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(staffTab), QCoreApplication::translate("MainWindow", "Staff", nullptr));
        addWardBtn->setText(QCoreApplication::translate("MainWindow", "Add Ward", nullptr));
        editWardBtn->setText(QCoreApplication::translate("MainWindow", "Edit Ward", nullptr));
        deleteWardBtn->setText(QCoreApplication::translate("MainWindow", "Delete Ward", nullptr));
        wardSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search wards...", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = wardsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("MainWindow", "Ward ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = wardsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("MainWindow", "Department ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = wardsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("MainWindow", "Ward Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = wardsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("MainWindow", "Head Nurse", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = wardsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("MainWindow", "# of Rooms", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = wardsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("MainWindow", "# of Beds", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = wardsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("MainWindow", "# of Nurses", nullptr));
        label_63->setText(QCoreApplication::translate("MainWindow", "Ward ID: ", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "Name: ", nullptr));
        label_65->setText(QCoreApplication::translate("MainWindow", "Department: ", nullptr));
        cb_w_dep->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        cb_w_dep->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        cb_w_dep->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        label_66->setText(QCoreApplication::translate("MainWindow", "Head Nurse: ", nullptr));
        cb_w_hd->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        cb_w_hd->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        cb_w_hd->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        noOfRoomsLabel->setText(QCoreApplication::translate("MainWindow", "No.of Rooms", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        noofbeds_w->setText(QCoreApplication::translate("MainWindow", "noofbeds", nullptr));
        noofnurse_w->setText(QCoreApplication::translate("MainWindow", "noofnurse", nullptr));
        nurseIDLabel_6->setText(QCoreApplication::translate("MainWindow", "Ward ID:", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        wardRoomTabs->setTabText(wardRoomTabs->indexOf(wardsSubTab), QCoreApplication::translate("MainWindow", "Wards", nullptr));
        addRoomBtn->setText(QCoreApplication::translate("MainWindow", "Add Room", nullptr));
        editRoomBtn->setText(QCoreApplication::translate("MainWindow", "Edit Room", nullptr));
        deleteRoomBtn->setText(QCoreApplication::translate("MainWindow", "Delete Room", nullptr));
        roomSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search rooms...", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = roomsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("MainWindow", "Room ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = roomsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("MainWindow", "Ward ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = roomsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("MainWindow", "Assigned Nurse", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = roomsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem68->setText(QCoreApplication::translate("MainWindow", "Assigned Nurse ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = roomsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem69->setText(QCoreApplication::translate("MainWindow", "# of Beds", nullptr));
        label_68->setText(QCoreApplication::translate("MainWindow", "Room ID: ", nullptr));
        label_70->setText(QCoreApplication::translate("MainWindow", "Department: ", nullptr));
        room_dep->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        room_dep->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        room_dep->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        wardLabel->setText(QCoreApplication::translate("MainWindow", "Ward: ", nullptr));
        label_71->setText(QCoreApplication::translate("MainWindow", "No.of Beds:", nullptr));
        room_add_bttn->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        assnurse_name->setText(QCoreApplication::translate("MainWindow", "assnurse", nullptr));
        assnurseComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "213", nullptr));

        nurseIDLabel_4->setText(QCoreApplication::translate("MainWindow", "Room ID:", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        wardRoomTabs->setTabText(wardRoomTabs->indexOf(roomsSubTab), QCoreApplication::translate("MainWindow", "Rooms", nullptr));
        addRoomBtn_2->setText(QCoreApplication::translate("MainWindow", "Add Bed", nullptr));
        editRoomBtn_2->setText(QCoreApplication::translate("MainWindow", "Edit Bed", nullptr));
        deleteRoomBtn_2->setText(QCoreApplication::translate("MainWindow", "Delete Bed", nullptr));
        roomSearchBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search beds..", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = bedsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem70->setText(QCoreApplication::translate("MainWindow", "Bed ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = bedsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem71->setText(QCoreApplication::translate("MainWindow", "Room ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = bedsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem72->setText(QCoreApplication::translate("MainWindow", "Ass. Patient Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = bedsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem73->setText(QCoreApplication::translate("MainWindow", "Ass. Patient ID", nullptr));
        label_69->setText(QCoreApplication::translate("MainWindow", "Bed ID: ", nullptr));
        label_72->setText(QCoreApplication::translate("MainWindow", "Department: ", nullptr));
        comboBox_gender_11->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_11->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_11->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        wardLabel_2->setText(QCoreApplication::translate("MainWindow", "Ward: ", nullptr));
        label_73->setText(QCoreApplication::translate("MainWindow", "Room: ", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        nurseIDLabel_5->setText(QCoreApplication::translate("MainWindow", "Bed ID:", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        wardRoomTabs->setTabText(wardRoomTabs->indexOf(tab), QCoreApplication::translate("MainWindow", "Beds", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(wardsTab), QCoreApplication::translate("MainWindow", "Wards & Rooms", nullptr));
        addDepartmentBtn->setText(QCoreApplication::translate("MainWindow", "Add Department", nullptr));
        editDepartmentBtn->setText(QCoreApplication::translate("MainWindow", "Edit Department", nullptr));
        deleteDepartmentBtn->setText(QCoreApplication::translate("MainWindow", "Delete Department", nullptr));
        departmentSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search departments...", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = departmentsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem74->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = departmentsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem75->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = departmentsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem76->setText(QCoreApplication::translate("MainWindow", "Head Doctor", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = departmentsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem77->setText(QCoreApplication::translate("MainWindow", "# of Wards", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = departmentsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem78->setText(QCoreApplication::translate("MainWindow", "# of Doctors", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = departmentsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem79->setText(QCoreApplication::translate("MainWindow", "# of Rooms", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = departmentsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem80->setText(QCoreApplication::translate("MainWindow", "# of Beds", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = departmentsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem81->setText(QCoreApplication::translate("MainWindow", "Services", nullptr));
        label_74->setText(QCoreApplication::translate("MainWindow", "Department ID: ", nullptr));
        label_75->setText(QCoreApplication::translate("MainWindow", "Name: ", nullptr));
        label_77->setText(QCoreApplication::translate("MainWindow", "Head Doctor: ", nullptr));
        comboBox_gender_14->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox_gender_14->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));
        comboBox_gender_14->setItemText(2, QCoreApplication::translate("MainWindow", "Transgender", nullptr));

        noOfRoomsLabel_4->setText(QCoreApplication::translate("MainWindow", "No.of Wards:  ", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_88->setText(QCoreApplication::translate("MainWindow", "Department ID;", nullptr));
        med_del_push_2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(departmentsTab), QCoreApplication::translate("MainWindow", "Departments", nullptr));
        addInventoryBtn->setText(QCoreApplication::translate("MainWindow", "Add Medicine", nullptr));
        editInventoryBtn->setText(QCoreApplication::translate("MainWindow", "Edit Medicine", nullptr));
        deleteInventoryBtn->setText(QCoreApplication::translate("MainWindow", "Delete Medicine", nullptr));
        restockInventoryBtn->setText(QCoreApplication::translate("MainWindow", "Restock", nullptr));
        inventorySearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search inventory...", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = pharmacytable->horizontalHeaderItem(0);
        ___qtablewidgetitem82->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = pharmacytable->horizontalHeaderItem(1);
        ___qtablewidgetitem83->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = pharmacytable->horizontalHeaderItem(2);
        ___qtablewidgetitem84->setText(QCoreApplication::translate("MainWindow", "Company", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = pharmacytable->horizontalHeaderItem(3);
        ___qtablewidgetitem85->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = pharmacytable->horizontalHeaderItem(4);
        ___qtablewidgetitem86->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        edit_med_push->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_76->setText(QCoreApplication::translate("MainWindow", "Medicine ID:", nullptr));
        label_78->setText(QCoreApplication::translate("MainWindow", "Medicine Name:", nullptr));
        label_79->setText(QCoreApplication::translate("MainWindow", "Quantity: ", nullptr));
        label_80->setText(QCoreApplication::translate("MainWindow", "Company:", nullptr));
        label_81->setText(QCoreApplication::translate("MainWindow", "Unit Price:", nullptr));
        push_stock->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_82->setText(QCoreApplication::translate("MainWindow", "Medicine ID;", nullptr));
        med_del_push->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_83->setText(QCoreApplication::translate("MainWindow", "Medicine ID:", nullptr));
        label_84->setText(QCoreApplication::translate("MainWindow", "Medicine Name:", nullptr));
        label_85->setText(QCoreApplication::translate("MainWindow", "Restock Quantity:", nullptr));
        med_restock_push->setText(QCoreApplication::translate("MainWindow", "Restock", nullptr));
        pharmacyTabs->setTabText(pharmacyTabs->indexOf(inventorySubTab), QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(pharmacyTab), QCoreApplication::translate("MainWindow", "Pharmacy", nullptr));
        generateBillBtn->setText(QCoreApplication::translate("MainWindow", "Generate Bill", nullptr));
        viewBillBtn->setText(QCoreApplication::translate("MainWindow", "View Bill", nullptr));
        processPaymentBtn->setText(QCoreApplication::translate("MainWindow", "Process Payment", nullptr));
        applyInsuranceBtn->setText(QCoreApplication::translate("MainWindow", "Apply Insurance", nullptr));
        billingSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search bills...", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = billsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem87->setText(QCoreApplication::translate("MainWindow", "Bill ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem88 = billsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem88->setText(QCoreApplication::translate("MainWindow", "Patient", nullptr));
        QTableWidgetItem *___qtablewidgetitem89 = billsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem89->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem90 = billsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem90->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem91 = billsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem91->setText(QCoreApplication::translate("MainWindow", "Paid", nullptr));
        QTableWidgetItem *___qtablewidgetitem92 = billsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem92->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
        QTableWidgetItem *___qtablewidgetitem93 = billsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem93->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        paymentDetailsGroup->setTitle(QCoreApplication::translate("MainWindow", "Payment Details", nullptr));
        totalAmountLabel->setText(QCoreApplication::translate("MainWindow", "Total Amount: $0.00", nullptr));
        paidAmountLabel->setText(QCoreApplication::translate("MainWindow", "Paid: $0.00", nullptr));
        balanceLabel->setText(QCoreApplication::translate("MainWindow", "Balance: $0.00", nullptr));
        insuranceLabel->setText(QCoreApplication::translate("MainWindow", "Insurance: None", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(billingTab), QCoreApplication::translate("MainWindow", "Billing", nullptr));
        scheduleTestBtn->setText(QCoreApplication::translate("MainWindow", "Schedule Test", nullptr));
        editTestBtn->setText(QCoreApplication::translate("MainWindow", "Edit Booking", nullptr));
        cancelTestBtn->setText(QCoreApplication::translate("MainWindow", "Delete Booking", nullptr));
        completeTestBtn->setText(QCoreApplication::translate("MainWindow", "Complete Booking", nullptr));
        testSearchBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search tests...", nullptr));
        QTableWidgetItem *___qtablewidgetitem94 = testsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem94->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem95 = testsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem95->setText(QCoreApplication::translate("MainWindow", "Test ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem96 = testsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem96->setText(QCoreApplication::translate("MainWindow", "Test Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem97 = testsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem97->setText(QCoreApplication::translate("MainWindow", "Patient ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem98 = testsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem98->setText(QCoreApplication::translate("MainWindow", "Req Doctor ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem99 = testsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem99->setText(QCoreApplication::translate("MainWindow", "Date Requested", nullptr));
        QTableWidgetItem *___qtablewidgetitem100 = testsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem100->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        laboraty_push_button->setText(QCoreApplication::translate("MainWindow", "okay", nullptr));
        label_86->setText(QCoreApplication::translate("MainWindow", "Booking ID;", nullptr));
        lab_del_push_2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_89->setText(QCoreApplication::translate("MainWindow", "Test ID:", nullptr));
        label_90->setText(QCoreApplication::translate("MainWindow", "Test Name:", nullptr));
        patient_test_sche->setText(QCoreApplication::translate("MainWindow", "Patient ID", nullptr));
        test_book_push->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        test_booking_id->setText(QCoreApplication::translate("MainWindow", "Booking ID:", nullptr));
        label_87->setText(QCoreApplication::translate("MainWindow", "Booking ID:", nullptr));
        lab_complet_push->setText(QCoreApplication::translate("MainWindow", "Complete", nullptr));
        labTabs->setTabText(labTabs->indexOf(test_book), QCoreApplication::translate("MainWindow", "Tests Editing", nullptr));
        scheduleTestBtn_2->setText(QCoreApplication::translate("MainWindow", "Add Test", nullptr));
        editTestBtn_2->setText(QCoreApplication::translate("MainWindow", "Edit Test", nullptr));
        cancelTestBtn_2->setText(QCoreApplication::translate("MainWindow", "Delete Test", nullptr));
        testSearchBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search tests...", nullptr));
        QTableWidgetItem *___qtablewidgetitem101 = testsdataTable->horizontalHeaderItem(0);
        ___qtablewidgetitem101->setText(QCoreApplication::translate("MainWindow", "Test ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem102 = testsdataTable->horizontalHeaderItem(1);
        ___qtablewidgetitem102->setText(QCoreApplication::translate("MainWindow", "Test Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem103 = testsdataTable->horizontalHeaderItem(2);
        ___qtablewidgetitem103->setText(QCoreApplication::translate("MainWindow", "Test Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem104 = testsdataTable->horizontalHeaderItem(3);
        ___qtablewidgetitem104->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        testdata_pushbutton->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_91->setText(QCoreApplication::translate("MainWindow", "Test ID:", nullptr));
        label_92->setText(QCoreApplication::translate("MainWindow", "Test Name:", nullptr));
        label_95->setText(QCoreApplication::translate("MainWindow", "Test Price:", nullptr));
        test_add_push->setText(QCoreApplication::translate("MainWindow", "Okay", nullptr));
        label_93->setText(QCoreApplication::translate("MainWindow", "Test ID;", nullptr));
        test_del_push->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        labTabs->setTabText(labTabs->indexOf(test_tab), QCoreApplication::translate("MainWindow", "Available Tests", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(labsTab), QCoreApplication::translate("MainWindow", "Laboratory", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
