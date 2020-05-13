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

#ifndef OAI_OAITagApi_H
#define OAI_OAITagApi_H

#include "OAIHttpRequest.h"

#include "OAIArrayOfLogsResponse.h"
#include "OAIArrayOfTagsResponse.h"
#include "OAICreateTag.h"
#include "OAIErrors.h"
#include "OAITagResponse.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAITagApi : public QObject {
    Q_OBJECT

public:
    OAITagApi(const QString &scheme = "http", const QString &host = "localhost", int port = 0, const QString &basePath = "/api", const int timeOut = 0);
    ~OAITagApi();

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

    void createTag(const OAICreateTag &oai_create_tag);
    void getLogsByTagId(const qint64 &tag_id);
    void getTagById(const qint64 &tag_id);
    void listTags(const qint32 &page_offset, const qint32 &page_limit);

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    int _timeOut;
    QString _workingDirectory;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void createTagCallback(OAIHttpRequestWorker *worker);
    void getLogsByTagIdCallback(OAIHttpRequestWorker *worker);
    void getTagByIdCallback(OAIHttpRequestWorker *worker);
    void listTagsCallback(OAIHttpRequestWorker *worker);

signals:

    void createTagSignal(OAITagResponse summary);
    void getLogsByTagIdSignal(OAIArrayOfLogsResponse summary);
    void getTagByIdSignal(OAITagResponse summary);
    void listTagsSignal(OAIArrayOfTagsResponse summary);

    void createTagSignalFull(OAIHttpRequestWorker *worker, OAITagResponse summary);
    void getLogsByTagIdSignalFull(OAIHttpRequestWorker *worker, OAIArrayOfLogsResponse summary);
    void getTagByIdSignalFull(OAIHttpRequestWorker *worker, OAITagResponse summary);
    void listTagsSignalFull(OAIHttpRequestWorker *worker, OAIArrayOfTagsResponse summary);

    void createTagSignalE(OAITagResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLogsByTagIdSignalE(OAIArrayOfLogsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getTagByIdSignalE(OAITagResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listTagsSignalE(OAIArrayOfTagsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createTagSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLogsByTagIdSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getTagByIdSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listTagsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
