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

#ifndef OAI_OAILogApi_H
#define OAI_OAILogApi_H

#include "OAIHttpRequest.h"

#include "OAIArrayOfLogsResponse.h"
#include "OAIArrayOfTagsResponse.h"
#include "OAICreateLog.h"
#include "OAIErrors.h"
#include "OAIFilterLogsOptions.h"
#include "OAILogResponse.h"
#include "OAILogTreeResponse.h"
#include "OAIPaginationOptions.h"
#include "OAISortLogsOptions.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAILogApi : public QObject {
    Q_OBJECT

public:
    OAILogApi(const QString &scheme = "http", const QString &host = "localhost", int port = 0, const QString &basePath = "/api", const int timeOut = 0);
    ~OAILogApi();

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

    void createLog(const OAICreateLog &oai_create_log);
    void getLogById(const qint64 &log_id);
    void getLogTree(const qint64 &log_id);
    void listLogs(const OAIPaginationOptions &page, const OAIFilterLogsOptions &filter, const OAISortLogsOptions &sort);
    void listTagsByLogId(const qint64 &log_id);

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    int _timeOut;
    QString _workingDirectory;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void createLogCallback(OAIHttpRequestWorker *worker);
    void getLogByIdCallback(OAIHttpRequestWorker *worker);
    void getLogTreeCallback(OAIHttpRequestWorker *worker);
    void listLogsCallback(OAIHttpRequestWorker *worker);
    void listTagsByLogIdCallback(OAIHttpRequestWorker *worker);

signals:

    void createLogSignal(OAILogResponse summary);
    void getLogByIdSignal(OAILogResponse summary);
    void getLogTreeSignal(OAILogTreeResponse summary);
    void listLogsSignal(OAIArrayOfLogsResponse summary);
    void listTagsByLogIdSignal(OAIArrayOfTagsResponse summary);

    void createLogSignalFull(OAIHttpRequestWorker *worker, OAILogResponse summary);
    void getLogByIdSignalFull(OAIHttpRequestWorker *worker, OAILogResponse summary);
    void getLogTreeSignalFull(OAIHttpRequestWorker *worker, OAILogTreeResponse summary);
    void listLogsSignalFull(OAIHttpRequestWorker *worker, OAIArrayOfLogsResponse summary);
    void listTagsByLogIdSignalFull(OAIHttpRequestWorker *worker, OAIArrayOfTagsResponse summary);

    void createLogSignalE(OAILogResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLogByIdSignalE(OAILogResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLogTreeSignalE(OAILogTreeResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listLogsSignalE(OAIArrayOfLogsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listTagsByLogIdSignalE(OAIArrayOfTagsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createLogSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLogByIdSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLogTreeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listLogsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listTagsByLogIdSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
