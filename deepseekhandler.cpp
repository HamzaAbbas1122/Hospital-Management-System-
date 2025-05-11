#include "deepseekhandler.h"
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QTimer>
#include <QDebug>
#include <QSslConfiguration>

DeepSeekHandler::DeepSeekHandler(QObject *parent)
    : QObject(parent)
    , m_networkManager(new QNetworkAccessManager(this))
    , m_settings("BajwaHospital", "AI_Assistant")
{
    QSslConfiguration sslConfig = QSslConfiguration::defaultConfiguration();
    sslConfig.setPeerVerifyMode(QSslSocket::VerifyPeer);
    QSslConfiguration::setDefaultConfiguration(sslConfig);

    connect(m_networkManager, &QNetworkAccessManager::finished,
            this, &DeepSeekHandler::handleNetworkReply);

    loadSettings();
}

DeepSeekHandler::~DeepSeekHandler()
{
    saveSettings();
}

void DeepSeekHandler::setApiKey(const QString &key)
{
    if (m_apiKey != key) {
        m_apiKey = key;
        saveSettings();
        emit apiKeyChanged();
    }
}

void DeepSeekHandler::sendPrompt(const QString &prompt)
{
    if (m_apiKey.isEmpty()) {
        emit errorOccurred("API key is not set");
        return;
    }

    // Check network connectivity first
    if (!isNetworkAccessible()) {
        emit errorOccurred("No network connection available");
        return;
    }

    const QUrl apiUrl("https://openrouter.ai/api/v1/chat/completions");
    if (!apiUrl.isValid()) {
        emit errorOccurred("Invalid API URL");
        return;
    }

    QNetworkRequest request(apiUrl);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("Authorization", QString("Bearer %1").arg(m_apiKey).toUtf8());
    request.setRawHeader("HTTP-Referer", "http://localhost"); // Required by OpenRouter
    request.setRawHeader("X-Title", "DeepSeek Chat App"); // Optional but recommended

    // Set connection timeout option
    request.setAttribute(QNetworkRequest::RedirectPolicyAttribute, QNetworkRequest::NoLessSafeRedirectPolicy);

    // Enable debugging
    qDebug() << "Sending request to:" << apiUrl.toString();
    qDebug() << "With headers:" << request.rawHeaderList();

    QJsonObject body = createRequestBody(prompt);
    qDebug() << "Request body:" << QJsonDocument(body).toJson();

    QNetworkReply *reply = m_networkManager->post(request, QJsonDocument(body).toJson());

    // Set timeout
    QTimer *timeoutTimer = new QTimer(reply);
    timeoutTimer->setSingleShot(true);
    QObject::connect(timeoutTimer, &QTimer::timeout, [this, reply]() {
        if (reply->isRunning()) {
            reply->abort();
            emit errorOccurred("Request timed out after 30 seconds");
        }
    });
    timeoutTimer->start(30000);

    QObject::connect(reply, &QNetworkReply::finished, this, [this, reply, timeoutTimer]() {
        timeoutTimer->deleteLater();
        handleNetworkReply(reply);
    });
}

bool DeepSeekHandler::isNetworkAccessible()
{
    return true;
}

void DeepSeekHandler::handleNetworkReply(QNetworkReply *reply)
{
    QByteArray responseData = reply->readAll();
    int httpStatus = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    // Log response information
    qDebug() << "Response status code:" << httpStatus;
    qDebug() << "Response headers:" << reply->rawHeaderPairs();

    if (reply->error() != QNetworkReply::NoError) {
        QString errorDetails = QString("Network error (%1): %2").arg(reply->error()).arg(reply->errorString());

        // Try to extract more error details from response if available
        if (!responseData.isEmpty()) {
            QJsonParseError parseError;
            QJsonDocument errorDoc = QJsonDocument::fromJson(responseData, &parseError);

            if (parseError.error == QJsonParseError::NoError && errorDoc.isObject()) {
                QJsonObject errorObj = errorDoc.object();
                if (errorObj.contains("error")) {
                    QString apiErrorMsg;
                    QJsonValue errorVal = errorObj["error"];

                    if (errorVal.isObject() && errorVal.toObject().contains("message")) {
                        apiErrorMsg = errorVal.toObject()["message"].toString();
                    } else if (errorVal.isString()) {
                        apiErrorMsg = errorVal.toString();
                    }

                    if (!apiErrorMsg.isEmpty()) {
                        errorDetails += "\nAPI error: " + apiErrorMsg;
                    }
                }
            }
        }

        qDebug() << "Error details:" << errorDetails;
        emit errorOccurred(errorDetails);
        reply->deleteLater();
        return;
    }

    QJsonParseError parseError;
    QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData, &parseError);



    const QJsonObject rootObject = jsonResponse.object();
    qDebug() << "Response JSON:" << jsonResponse;
    if (parseError.error != QJsonParseError::NoError) {
        emit errorOccurred("JSON parse error: " + parseError.errorString());
        reply->deleteLater();
        return;
    }
    if (!rootObject.contains("choices")) {
        emit errorOccurred("Invalid API response format: 'choices' field missing");
        reply->deleteLater();
        return;
    }

    const QJsonArray choices = rootObject["choices"].toArray();
    if (choices.isEmpty()) {
        emit errorOccurred("No response from API: empty choices array");
        reply->deleteLater();
        return;
    }

    const QJsonObject firstChoice = choices.first().toObject();
    if (!firstChoice.contains("message") || !firstChoice["message"].isObject() ||
        !firstChoice["message"].toObject().contains("content")) {
        emit errorOccurred("Invalid response format: message content missing");
        reply->deleteLater();
        return;
    }

    const QString responseText = firstChoice["message"].toObject()["content"].toString();
    emit responseReceived(responseText);

    reply->deleteLater();
}

QJsonObject DeepSeekHandler::createRequestBody(const QString &prompt) const
{
    return QJsonObject{
        {"model", "deepseek/deepseek-chat"},  // Correct model ID
        {"messages", QJsonArray{
                         QJsonObject{
                             {"role", "user"},
                             {"content", prompt}
                         }
                     }},
        {"temperature", 0.7},
        {"max_tokens", 2048}
    };
}

void DeepSeekHandler::loadSettings()
{
    m_apiKey = m_settings.value("apiKey").toString();
}

void DeepSeekHandler::saveSettings()
{
    m_settings.setValue("apiKey", m_apiKey);
}
