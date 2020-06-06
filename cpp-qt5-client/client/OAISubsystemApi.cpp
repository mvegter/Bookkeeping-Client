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

#include "OAISubsystemApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAISubsystemApi::OAISubsystemApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
    : _scheme(scheme),
      _host(host),
      _port(port),
      _basePath(basePath),
      _timeOut(timeOut),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {}

OAISubsystemApi::~OAISubsystemApi() {
}

void OAISubsystemApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAISubsystemApi::setHost(const QString &host) {
    _host = host;
}

void OAISubsystemApi::setPort(int port) {
    _port = port;
}

void OAISubsystemApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAISubsystemApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAISubsystemApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAISubsystemApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAISubsystemApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAISubsystemApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAISubsystemApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAISubsystemApi::createSubsystem(const OAICreateSubsystem &oai_create_subsystem) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/subsystems");

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    QString output = oai_create_subsystem.asJson();
    input.request_body.append(output);

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAISubsystemApi::createSubsystemCallback);
    connect(this, &OAISubsystemApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAISubsystemApi::createSubsystemCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAISubsystemResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit createSubsystemSignal(output);
        emit createSubsystemSignalFull(worker, output);
    } else {
        emit createSubsystemSignalE(output, error_type, error_str);
        emit createSubsystemSignalEFull(worker, error_type, error_str);
    }
}

void OAISubsystemApi::deleteSubsystem(const qint64 &subsystem_id) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/subsystems/{subsystemId}");
    QString subsystem_idPathParam("{");
    subsystem_idPathParam.append("subsystemId").append("}");
    fullPath.replace(subsystem_idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(subsystem_id)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAISubsystemApi::deleteSubsystemCallback);
    connect(this, &OAISubsystemApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAISubsystemApi::deleteSubsystemCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAISubsystemResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit deleteSubsystemSignal(output);
        emit deleteSubsystemSignalFull(worker, output);
    } else {
        emit deleteSubsystemSignalE(output, error_type, error_str);
        emit deleteSubsystemSignalEFull(worker, error_type, error_str);
    }
}

void OAISubsystemApi::getSubsystem(const qint64 &subsystem_id) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/subsystems/{subsystemId}");
    QString subsystem_idPathParam("{");
    subsystem_idPathParam.append("subsystemId").append("}");
    fullPath.replace(subsystem_idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(subsystem_id)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAISubsystemApi::getSubsystemCallback);
    connect(this, &OAISubsystemApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAISubsystemApi::getSubsystemCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAISubsystemResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getSubsystemSignal(output);
        emit getSubsystemSignalFull(worker, output);
    } else {
        emit getSubsystemSignalE(output, error_type, error_str);
        emit getSubsystemSignalEFull(worker, error_type, error_str);
    }
}

void OAISubsystemApi::listSubsystems(const OAIPaginationOptions &page) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/subsystems");

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(page)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAISubsystemApi::listSubsystemsCallback);
    connect(this, &OAISubsystemApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAISubsystemApi::listSubsystemsCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIArrayOfSubsystemsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit listSubsystemsSignal(output);
        emit listSubsystemsSignalFull(worker, output);
    } else {
        emit listSubsystemsSignalE(output, error_type, error_str);
        emit listSubsystemsSignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
