/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *welcomeLabel;
    QLabel *sloganLabel;
    QPushButton *enterButton;
    QLabel *hospitalLabel;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1303, 603);
        Form->setStyleSheet(QString::fromUtf8("background-color: #0a2463;"));
        welcomeLabel = new QLabel(Form);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(170, 80, 1086, 72));
        welcomeLabel->setStyleSheet(QString::fromUtf8("color: #d7f9ff;\n"
"       font: 500 36pt \"Poppins\";\n"
"       letter-spacing: 5px;"));
        welcomeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sloganLabel = new QLabel(Form);
        sloganLabel->setObjectName("sloganLabel");
        sloganLabel->setGeometry(QRect(150, 340, 1086, 36));
        sloganLabel->setStyleSheet(QString::fromUtf8("color: #d7f9ff;\n"
"       font: 300 18pt \"Poppins\";\n"
"       letter-spacing: 2px;"));
        sloganLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        enterButton = new QPushButton(Form);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(140, 530, 1086, 62));
        enterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"           background-color: transparent;\n"
"           color: #3e92cc;\n"
"           border: 2px solid #3e92cc;\n"
"           border-radius: 25px;\n"
"           padding: 15px 30px;\n"
"           font: bold 14pt \"Poppins\";\n"
"           min-width: 200px;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: rgba(62, 146, 204, 0.2);\n"
"       }\n"
"       QPushButton:pressed {\n"
"           background-color: rgba(62, 146, 204, 0.4);\n"
"       }"));
        hospitalLabel = new QLabel(Form);
        hospitalLabel->setObjectName("hospitalLabel");
        hospitalLabel->setGeometry(QRect(190, 170, 1086, 185));
        hospitalLabel->setStyleSheet(QString::fromUtf8("color: #3e92cc;\n"
"       font: 700 72pt \"Poppins\";\n"
"       margin: 20px 0;"));
        hospitalLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Form", "WELCOME TO", nullptr));
        sloganLabel->setText(QCoreApplication::translate("Form", "Advanced Healthcare Solutions", nullptr));
        enterButton->setText(QCoreApplication::translate("Form", "ENTER SYSTEM", nullptr));
        hospitalLabel->setText(QCoreApplication::translate("Form", "BAJWA HOSPITAL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
