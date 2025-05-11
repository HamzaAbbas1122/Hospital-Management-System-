#ifndef AICHATWINDOW_H
#define AICHATWINDOW_H

#include <QMainWindow>
#include <QStatusBar>  // Add this include
#include "deepseekhandler.h"

// Forward declaration
namespace Ui {
class AIChatWindow;
}

class AIChatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AIChatWindow(QWidget *parent = nullptr);
    ~AIChatWindow();

private slots:
    void onSendButtonClicked();
    void onClearButtonClicked();
    void onSettingsClicked();
    void onResponseReceived(const QString &response);
    void onNetworkError(const QString &error);
    void updateApiKeyStatus();

private:
    Ui::AIChatWindow *ui;
    DeepSeekHandler *m_deepseek;
    void setupConnections();
    void setupUI();
};

#endif // AICHATWINDOW_H
