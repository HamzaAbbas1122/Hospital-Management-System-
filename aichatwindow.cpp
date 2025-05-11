#include "aichatwindow.h"
#include "ui_aichatwindow.h"
#include <QMessageBox>
#include <QDateTime>
#include <QScrollBar>
#include <QDialog>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QApplication>

AIChatWindow::AIChatWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AIChatWindow)
    , m_deepseek(new DeepSeekHandler(this))
{
    ui->setupUi(this);
    setupUI();
    setupConnections();
    updateApiKeyStatus();
}

AIChatWindow::~AIChatWindow()
{
    delete ui;
}

void AIChatWindow::setupUI()
{
    setWindowTitle(tr("Bajwa Hospital AI Assistant - %1").arg(qApp->applicationVersion()));
    statusBar()->showMessage(tr("Ready"));

    ui->promptEdit->setPlaceholderText(tr("Ask me anything about hospital management..."));
    ui->responseEdit->setPlaceholderText(tr("AI response will appear here..."));

    QFont font("Segoe UI");
    font.setStyleHint(QFont::SansSerif);
    ui->responseEdit->setFont(font);

    ui->promptEdit->setMaximumHeight(100);
    ui->responseEdit->setMinimumHeight(200);
}

void AIChatWindow::setupConnections()
{
    connect(ui->sendButton, &QPushButton::clicked, this, &AIChatWindow::onSendButtonClicked);
    connect(ui->clearButton, &QPushButton::clicked, this, &AIChatWindow::onClearButtonClicked);
    connect(ui->actionSettings, &QAction::triggered, this, &AIChatWindow::onSettingsClicked);
    connect(m_deepseek, &DeepSeekHandler::responseReceived, this, &AIChatWindow::onResponseReceived);
    connect(m_deepseek, &DeepSeekHandler::errorOccurred, this, &AIChatWindow::onNetworkError);
    connect(m_deepseek, &DeepSeekHandler::apiKeyChanged, this, &AIChatWindow::updateApiKeyStatus);
}

void AIChatWindow::onSendButtonClicked()
{
    const QString prompt = ui->promptEdit->toPlainText().trimmed();

    if (prompt.isEmpty()) {
        QMessageBox::warning(this, tr("Empty Prompt"),
                             tr("Please enter your question about hospital management."));
        return;
    }

    ui->sendButton->setEnabled(false);
    ui->statusbar->showMessage(tr("Consulting hospital AI assistant..."));
    m_deepseek->sendPrompt(prompt);
}

void AIChatWindow::onClearButtonClicked()
{
    ui->promptEdit->clear();
    ui->responseEdit->clear();
}

void AIChatWindow::onSettingsClicked()
{
    QDialog dialog(this);
    dialog.setWindowTitle(tr("AI Assistant Settings"));
    dialog.setFixedSize(400, 150);

    QFormLayout layout(&dialog);

    QLineEdit *apiKeyEdit = new QLineEdit(&dialog);
    apiKeyEdit->setText(m_deepseek->apiKey());
    apiKeyEdit->setPlaceholderText(tr("Enter your DeepSeek API key"));
    apiKeyEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

    QPushButton *saveButton = new QPushButton(tr("Save Settings"), &dialog);

    connect(saveButton, &QPushButton::clicked, [&]() {
        m_deepseek->setApiKey(apiKeyEdit->text());
        dialog.close();
    });

    layout.addRow(tr("API Key:"), apiKeyEdit);
    layout.addRow(saveButton);
    dialog.exec();
}

void AIChatWindow::onResponseReceived(const QString &response)
{
    ui->sendButton->setEnabled(true);
    ui->responseEdit->setPlainText(response);
    statusBar()->showMessage(tr("Response received at %1").arg(QDateTime::currentDateTime().toString()));

    QScrollBar *scrollbar = ui->responseEdit->verticalScrollBar();
    scrollbar->setValue(scrollbar->maximum());
}

void AIChatWindow::onNetworkError(const QString &error)
{
    ui->sendButton->setEnabled(true);
    statusBar()->showMessage(tr("Error occurred"), 5000);

    QString displayError;

    if (error.contains("network", Qt::CaseInsensitive)) {
        displayError = tr("Network error: Please check your internet connection.");
    }
    else if (error.contains("key", Qt::CaseInsensitive)) {
        displayError = tr("API key error: Please configure valid credentials in Settings.");
    }
    // else if (error.contains("JSON", Qt::CaseInsensitive)) {
    //     displayError = tr("Data format error: The AI response could not be processed.\n\n"
    //                       "Technical details: %1").arg(error);
    // }
    else {
        displayError = tr("An unexpected error occurred: %1").arg(error);
    }

    QMessageBox::critical(this, tr("AI Assistant Error"), displayError);
}

void AIChatWindow::updateApiKeyStatus()
{
    if (m_deepseek->apiKey().isEmpty()) {
        statusBar()->showMessage(tr("API key not configured - some features may be limited"), 5000);
    } else {
        statusBar()->showMessage(tr("Connected to AI assistant service"), 3000);
    }
}
