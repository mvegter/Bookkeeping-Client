/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAISubsystemApi_H
#define OAI_OAISubsystemApi_H

#include "OAIHttpRequest.h"

#include "OAIArrayOfSubsystemsResponse.h"
#include "OAICreateSubsystem.h"
#include "OAIErrors.h"
#include "OAIPaginationOptions.h"
#include "OAISubsystemResponse.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAISubsystemApi : public QObject {
    Q_OBJECT

public:
    OAISubsystemApi(const QString &scheme = "http", const QString &host = "localhost", int port = 0, const QString &basePath = "/api", const int timeOut = 0);
    ~OAISubsystemApi();

    void setScheme(const QString &scheme);
    void setHost(const QString &host);
    void setPort(int port);
    void setBasePath(const QString &basePath);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();

    void createSubsystem(const OAICreateSubsystem &oai_create_subsystem);
    void deleteSubsystem(const qint64 &subsystem_id);
    void getSubsystem(const qint64 &subsystem_id);
    void listSubsystems(const OAIPaginationOptions &page);

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    int _timeOut;
    QString _workingDirectory;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void createSubsystemCallback(OAIHttpRequestWorker *worker);
    void deleteSubsystemCallback(OAIHttpRequestWorker *worker);
    void getSubsystemCallback(OAIHttpRequestWorker *worker);
    void listSubsystemsCallback(OAIHttpRequestWorker *worker);

signals:

    void createSubsystemSignal(OAISubsystemResponse summary);
    void deleteSubsystemSignal(OAISubsystemResponse summary);
    void getSubsystemSignal(OAISubsystemResponse summary);
    void listSubsystemsSignal(OAIArrayOfSubsystemsResponse summary);

    void createSubsystemSignalFull(OAIHttpRequestWorker *worker, OAISubsystemResponse summary);
    void deleteSubsystemSignalFull(OAIHttpRequestWorker *worker, OAISubsystemResponse summary);
    void getSubsystemSignalFull(OAIHttpRequestWorker *worker, OAISubsystemResponse summary);
    void listSubsystemsSignalFull(OAIHttpRequestWorker *worker, OAIArrayOfSubsystemsResponse summary);

    void createSubsystemSignalE(OAISubsystemResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteSubsystemSignalE(OAISubsystemResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSubsystemSignalE(OAISubsystemResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listSubsystemsSignalE(OAIArrayOfSubsystemsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createSubsystemSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteSubsystemSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSubsystemSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listSubsystemsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
