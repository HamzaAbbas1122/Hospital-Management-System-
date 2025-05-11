/********************************************************************************
** Form generated from reading UI file 'aichatwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AICHATWINDOW_H
#define UI_AICHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AIChatWindow
{
public:
    QAction *actionSettings;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *logoLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *promptEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *responseEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *AIChatWindow)
    {
        if (AIChatWindow->objectName().isEmpty())
            AIChatWindow->setObjectName("AIChatWindow");
        AIChatWindow->resize(800, 600);
        AIChatWindow->setStyleSheet(QString::fromUtf8("\n"
"/* Main Window - Professional Medical Style */\n"
"QMainWindow {\n"
"    background-color: #ffffff;\n"
"    font-family: 'Segoe UI', Arial, sans-serif;\n"
"}\n"
"\n"
"/* All Text Elements - Pure Black */\n"
"* {\n"
"    color: #000000;\n"
"}\n"
"\n"
"/* Header Styling */\n"
"#logoLabel {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    padding: 15px 0;\n"
"    color: #000000;\n"
"}\n"
"\n"
"/* Group Boxes - Clean White with Subtle Border */\n"
"QGroupBox {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #e0e0e0;\n"
"    border-radius: 6px;\n"
"    margin-top: 10px;\n"
"    padding-top: 20px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 8px;\n"
"    font-weight: bold;\n"
"    color: #000000;\n"
"}\n"
"\n"
"/* Text Input Areas - White Background */\n"
"QTextEdit {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #e0e0e0;\n"
"    border-radius: 4px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    color:"
                        " #000000;\n"
"    selection-background-color: #1e90ff;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 1px solid #1e90ff;\n"
"}\n"
"\n"
"/* Professional Blue Buttons */\n"
"QPushButton {\n"
"    background-color: #1e90ff;\n"
"    color: white;\n"
"    border-radius: 4px;\n"
"    padding: 8px 16px;\n"
"    font-weight: 600;\n"
"    min-width: 100px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #187bcd;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1565a7;\n"
"}\n"
"\n"
"/* Clear Button - Secondary Style */\n"
"QPushButton#clearButton {\n"
"    background-color: #f5f5f5;\n"
"    color: #000000;\n"
"    border: 1px solid #e0e0e0;\n"
"}\n"
"\n"
"QPushButton#clearButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}\n"
"\n"
"/* Status Bar - Visible and Professional */\n"
"QStatusBar {\n"
"    background-color: #f8f9fa;\n"
"    border-top: 1px solid #e0e0e0;\n"
"    font-size: 12px;\n"
"    color: #000"
                        "000;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"/* Menu Bar - Visible and Clean */\n"
"QMenuBar {\n"
"    background-color: #ffffff;\n"
"    padding: 4px;\n"
"    border-bottom: 1px solid #e0e0e0;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 4px 10px;\n"
"    background-color: transparent;\n"
"    color: #000000;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #e0e0e0;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background-color: #d0d0d0;\n"
"}\n"
"\n"
"/* Toolbar - Visible and Minimal */\n"
"QToolBar {\n"
"    background-color: #ffffff;\n"
"    border-bottom: 1px solid #e0e0e0;\n"
"    padding: 2px;\n"
"    spacing: 3px;\n"
"}\n"
"\n"
"/* Placeholder Text - Subtle Gray */\n"
"QTextEdit[placeholderText] {\n"
"    color: #95a5a6;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"/* Menu Styling */\n"
"QMenu {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #e0e0e0;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 6px 24px 6px 20px;\n"
"}\n"
"\n"
"QMenu::item:selecte"
                        "d {\n"
"    background-color: #1e90ff;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 1px;\n"
"    background-color: #e0e0e0;\n"
"    margin: 4px 0;\n"
"}\n"
"   "));
        actionSettings = new QAction(AIChatWindow);
        actionSettings->setObjectName("actionSettings");
        actionSettings->setMenuRole(QAction::MenuRole::PreferencesRole);
        actionExit = new QAction(AIChatWindow);
        actionExit->setObjectName("actionExit");
        actionExit->setMenuRole(QAction::MenuRole::QuitRole);
        actionAbout = new QAction(AIChatWindow);
        actionAbout->setObjectName("actionAbout");
        actionAbout->setMenuRole(QAction::MenuRole::AboutRole);
        centralwidget = new QWidget(AIChatWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        logoLabel = new QLabel(centralwidget);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(logoLabel);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        promptEdit = new QTextEdit(groupBox);
        promptEdit->setObjectName("promptEdit");
        promptEdit->setAcceptRichText(false);

        verticalLayout_2->addWidget(promptEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        sendButton = new QPushButton(groupBox);
        sendButton->setObjectName("sendButton");

        horizontalLayout->addWidget(sendButton);

        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName("clearButton");

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        responseEdit = new QTextEdit(groupBox_2);
        responseEdit->setObjectName("responseEdit");
        responseEdit->setReadOnly(true);

        verticalLayout_3->addWidget(responseEdit);


        verticalLayout->addWidget(groupBox_2);

        AIChatWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AIChatWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 32));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        AIChatWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AIChatWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setProperty("currentIndex", QVariant(-1));
        AIChatWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(AIChatWindow);
        toolBar->setObjectName("toolBar");
        AIChatWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addAction(actionAbout);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionAbout);

        retranslateUi(AIChatWindow);

        QMetaObject::connectSlotsByName(AIChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AIChatWindow)
    {
        AIChatWindow->setWindowTitle(QCoreApplication::translate("AIChatWindow", "Bajwa Hospital AI Assistant", nullptr));
        actionSettings->setText(QCoreApplication::translate("AIChatWindow", "&Settings", nullptr));
#if QT_CONFIG(tooltip)
        actionSettings->setToolTip(QCoreApplication::translate("AIChatWindow", "Configure assistant settings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("AIChatWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("AIChatWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("AIChatWindow", "&About", nullptr));
        logoLabel->setText(QCoreApplication::translate("AIChatWindow", "Bajwa Hospital AI Assistant", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AIChatWindow", "Hospital Inquiry", nullptr));
        promptEdit->setPlaceholderText(QCoreApplication::translate("AIChatWindow", "Type your question about patient records, appointments, or hospital operations...", nullptr));
        sendButton->setText(QCoreApplication::translate("AIChatWindow", "&Ask Assistant", nullptr));
#if QT_CONFIG(shortcut)
        sendButton->setShortcut(QCoreApplication::translate("AIChatWindow", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        clearButton->setText(QCoreApplication::translate("AIChatWindow", "&Clear", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AIChatWindow", "AI Assistant Response", nullptr));
        responseEdit->setPlaceholderText(QCoreApplication::translate("AIChatWindow", "Response will appear here...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("AIChatWindow", "&Assistant", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("AIChatWindow", "&Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("AIChatWindow", "Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AIChatWindow: public Ui_AIChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AICHATWINDOW_H
