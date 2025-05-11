

// #endif // DEEPSEEKHANDLER_H
#ifndef DEEPSEEKHANDLER_H
#define DEEPSEEKHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QSettings>

class DeepSeekHandler : public QObject
{
    Q_OBJECT

public:
    explicit DeepSeekHandler(QObject *parent = nullptr);
    ~DeepSeekHandler();

    void setApiKey(const QString &key);
    QString apiKey() const { return m_apiKey; }
    void sendPrompt(const QString &prompt);
    bool isNetworkAccessible();

signals:
    void responseReceived(const QString &response);
    void errorOccurred(const QString &error);
    void apiKeyChanged();

private slots:
    void handleNetworkReply(QNetworkReply *reply);

private:
    QNetworkAccessManager *m_networkManager;
    QString m_apiKey;
    QSettings m_settings;

    void loadSettings();
    void saveSettings();
    QJsonObject createRequestBody(const QString &prompt) const;
};

#endif // DEEPSEEKHANDLER_H
