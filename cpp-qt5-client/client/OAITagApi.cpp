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

#include "OAITagApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAITagApi::OAITagApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
    : _scheme(scheme),
      _host(host),
      _port(port),
      _basePath(basePath),
      _timeOut(timeOut),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {}

OAITagApi::~OAITagApi() {
}

void OAITagApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAITagApi::setHost(const QString &host) {
    _host = host;
}

void OAITagApi::setPort(int port) {
    _port = port;
}

void OAITagApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAITagApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAITagApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAITagApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAITagApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAITagApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAITagApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAITagApi::listTags(const qint32 &page_offset, const qint32 &page_limit) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/tags");

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page[offset]")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(page_offset)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page[limit]")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(page_limit)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAITagApi::listTagsCallback);
    connect(this, &OAITagApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAITagApi::listTagsCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIArrayOfTagsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit listTagsSignal(output);
        emit listTagsSignalFull(worker, output);
    } else {
        emit listTagsSignalE(output, error_type, error_str);
        emit listTagsSignalEFull(worker, error_type, error_str);
    }
}

void OAITagApi::listTagsByLogId(const qint64 &log_id) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/logs/{logId}/tags");
    QString log_idPathParam("{");
    log_idPathParam.append("logId").append("}");
    fullPath.replace(log_idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(log_id)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAITagApi::listTagsByLogIdCallback);
    connect(this, &OAITagApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAITagApi::listTagsByLogIdCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIArrayOfTagsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit listTagsByLogIdSignal(output);
        emit listTagsByLogIdSignalFull(worker, output);
    } else {
        emit listTagsByLogIdSignalE(output, error_type, error_str);
        emit listTagsByLogIdSignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
