/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QWidget *centralWidget;
    QVBoxLayout *mainLayout;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFrame *divider;
    QHBoxLayout *roleButtonsLayout;
    QPushButton *patientButton;
    QPushButton *doctorButton;
    QFormLayout *formLayout;
    QLabel *cnicLabel;
    QLineEdit *cnicEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *footerLabel;

    void setupUi(QMainWindow *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName("AdminLogin");
        AdminLogin->resize(650, 500);
        AdminLogin->setMinimumSize(QSize(650, 500));
        AdminLogin->setStyleSheet(QString::fromUtf8("\n"
"      /* Main Window Styling */\n"
"      QMainWindow {\n"
"        background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"          stop:0 #f0f8ff, stop:1 #e6f2ff);\n"
"        font-family: \"Segoe UI\", \"Poppins\", sans-serif;\n"
"      }\n"
"      \n"
"      /* Central Widget Styling */\n"
"      QWidget#centralWidget {\n"
"        background: transparent;\n"
"      }\n"
"      \n"
"      /* Card Container Effect */\n"
"      #loginContainer {\n"
"        background: white;\n"
"        border-radius: 12px;\n"
"        border: 1px solid #dee2e6;\n"
"        padding: 30px;\n"
"      }\n"
"      \n"
"      /* Title Styling */\n"
"      QLabel#titleLabel {\n"
"        color: #000000;\n"
"        font-size: 24px;\n"
"        font-weight: 600;\n"
"        letter-spacing: 0.5px;\n"
"        qproperty-alignment: AlignCenter;\n"
"      }\n"
"      \n"
"      /* Form Labels */\n"
"      QLabel {\n"
"        color: #000000;\n"
"        font-size: 13px;\n"
"        font-weight: 500;\n"
"        padding-bottom: "
                        "5px;\n"
"      }\n"
"      \n"
"      /* Input Fields - Updated with white background */\n"
"      QLineEdit {\n"
"        border: 1px solid #007BFF;\n"
"        border-radius: 6px;\n"
"        padding: 10px 15px;\n"
"        font-size: 14px;\n"
"        min-width: 280px;\n"
"        color: #000000;\n"
"        background-color: white;\n"
"        selection-background-color: #3a86ff;\n"
"      }\n"
"      QLineEdit:focus {\n"
"        border: 2px solid #007BFF;\n"
"        box-shadow: 0 0 0 2px rgba(0, 123, 255, 0.2);\n"
"        background-color: white;\n"
"      }\n"
"      QLineEdit[echoMode=\"2\"] {\n"
"        letter-spacing: 2px;\n"
"        background-color: white;\n"
"      }\n"
"      \n"
"      /* Login Button */\n"
"      QPushButton#loginButton {\n"
"        background-color: #007BFF;\n"
"        color: white;\n"
"        border-radius: 6px;\n"
"        padding: 12px 24px;\n"
"        font-weight: 600;\n"
"        font-size: 14px;\n"
"        min-width: 280px;\n"
"        border: none;\n"
"      }\n"
""
                        "      QPushButton#loginButton:hover {\n"
"        background-color: #0056b3;\n"
"      }\n"
"      \n"
"      /* Role Buttons */\n"
"      QPushButton#patientButton {\n"
"        background-color: #007BFF;\n"
"        color: white;\n"
"        border-radius: 6px;\n"
"        padding: 10px 20px;\n"
"        font-weight: 500;\n"
"        border: none;\n"
"      }\n"
"      QPushButton#patientButton:hover {\n"
"        background-color: #0056b3;\n"
"      }\n"
"      \n"
"      QPushButton#doctorButton {\n"
"        background-color: #007BFF;\n"
"        color: white;\n"
"        border-radius: 6px;\n"
"        padding: 10px 20px;\n"
"        font-weight: 500;\n"
"        border: none;\n"
"      }\n"
"      QPushButton#doctorButton:hover {\n"
"        background-color: #0056b3;\n"
"      }\n"
"      \n"
"      /* Footer */\n"
"      QLabel#footerLabel {\n"
"        color: #000000;\n"
"        font-size: 11px;\n"
"        qproperty-alignment: AlignCenter;\n"
"      }\n"
"      \n"
"      /* Divider */\n"
"      #d"
                        "ivider {\n"
"        color: #007BFF;\n"
"      }\n"
"   "));
        centralWidget = new QWidget(AdminLogin);
        centralWidget->setObjectName("centralWidget");
        mainLayout = new QVBoxLayout(centralWidget);
        mainLayout->setObjectName("mainLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName("titleLabel");

        verticalLayout->addWidget(titleLabel);

        divider = new QFrame(centralWidget);
        divider->setObjectName("divider");
        divider->setFrameShape(QFrame::Shape::HLine);
        divider->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(divider);

        roleButtonsLayout = new QHBoxLayout();
        roleButtonsLayout->setObjectName("roleButtonsLayout");
        patientButton = new QPushButton(centralWidget);
        patientButton->setObjectName("patientButton");
        patientButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;     \n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;         \n"
"    padding: 8px 16px;             \n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3;     \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004080;    \n"
"}\n"
""));

        roleButtonsLayout->addWidget(patientButton);

        doctorButton = new QPushButton(centralWidget);
        doctorButton->setObjectName("doctorButton");
        doctorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;   \n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;         \n"
"    padding: 8px 16px;              \n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3;      \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004080;    \n"
"}\n"
""));

        roleButtonsLayout->addWidget(doctorButton);


        verticalLayout->addLayout(roleButtonsLayout);


        mainLayout->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        cnicLabel = new QLabel(centralWidget);
        cnicLabel->setObjectName("cnicLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, cnicLabel);

        cnicEdit = new QLineEdit(centralWidget);
        cnicEdit->setObjectName("cnicEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, cnicEdit);

        passwordLabel = new QLabel(centralWidget);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, passwordLabel);

        passwordEdit = new QLineEdit(centralWidget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit);


        mainLayout->addLayout(formLayout);

        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName("loginButton");
        loginButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        mainLayout->addWidget(loginButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    padding: 10px 20px;\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"    letter-spacing: 1px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3;\n"
"    border: 2px solid white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #004080;\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"}\n"
""));

        mainLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        mainLayout->addItem(horizontalSpacer);

        footerLabel = new QLabel(centralWidget);
        footerLabel->setObjectName("footerLabel");

        mainLayout->addWidget(footerLabel);

        AdminLogin->setCentralWidget(centralWidget);

        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QMainWindow *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "Bajwa Hospital Management System", nullptr));
        titleLabel->setText(QCoreApplication::translate("AdminLogin", "ADMINISTRATOR PORTAL", nullptr));
        patientButton->setText(QCoreApplication::translate("AdminLogin", "PATIENT LOGIN", nullptr));
        doctorButton->setText(QCoreApplication::translate("AdminLogin", "DOCTOR LOGIN", nullptr));
        cnicLabel->setText(QCoreApplication::translate("AdminLogin", "CNIC Number", nullptr));
#if QT_CONFIG(tooltip)
        cnicEdit->setToolTip(QCoreApplication::translate("AdminLogin", "Enter your 13-digit CNIC with hyphens", nullptr));
#endif // QT_CONFIG(tooltip)
        cnicEdit->setText(QString());
        cnicEdit->setPlaceholderText(QCoreApplication::translate("AdminLogin", "XXXXX-XXXXXXX-X", nullptr));
        passwordLabel->setText(QCoreApplication::translate("AdminLogin", "Password", nullptr));
        passwordEdit->setText(QString());
        passwordEdit->setPlaceholderText(QCoreApplication::translate("AdminLogin", "Enter your password", nullptr));
        loginButton->setText(QCoreApplication::translate("AdminLogin", "LOGIN", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminLogin", "AI ASSISTANT", nullptr));
        footerLabel->setText(QCoreApplication::translate("AdminLogin", " \302\251 2025 Bajwa Hospital Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
