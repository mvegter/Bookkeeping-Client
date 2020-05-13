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

#include "OAIError.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIError::OAIError(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIError::OAIError() {
    this->initializeModel();
}

OAIError::~OAIError() {}

void OAIError::initializeModel() {

    m_status_isSet = false;
    m_status_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_detail_isSet = false;
    m_detail_isValid = false;

    m_source_isSet = false;
    m_source_isValid = false;
}

void OAIError::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIError::fromJsonObject(QJsonObject json) {

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_detail_isValid = ::OpenAPI::fromJsonValue(detail, json[QString("detail")]);
    m_detail_isSet = !json[QString("detail")].isNull() && m_detail_isValid;

    m_source_isValid = ::OpenAPI::fromJsonValue(source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;
}

QString OAIError::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIError::asJsonObject() const {
    QJsonObject obj;
    if (m_status_isSet) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
    if (m_detail_isSet) {
        obj.insert(QString("detail"), ::OpenAPI::toJsonValue(detail));
    }
    if (source.isSet()) {
        obj.insert(QString("source"), ::OpenAPI::toJsonValue(source));
    }
    return obj;
}

QString OAIError::getStatus() const {
    return status;
}
void OAIError::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIError::is_status_Set() const{
    return m_status_isSet;
}

bool OAIError::is_status_Valid() const{
    return m_status_isValid;
}

QString OAIError::getTitle() const {
    return title;
}
void OAIError::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool OAIError::is_title_Set() const{
    return m_title_isSet;
}

bool OAIError::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIError::getDetail() const {
    return detail;
}
void OAIError::setDetail(const QString &detail) {
    this->detail = detail;
    this->m_detail_isSet = true;
}

bool OAIError::is_detail_Set() const{
    return m_detail_isSet;
}

bool OAIError::is_detail_Valid() const{
    return m_detail_isValid;
}

OAIErrorSource OAIError::getSource() const {
    return source;
}
void OAIError::setSource(const OAIErrorSource &source) {
    this->source = source;
    this->m_source_isSet = true;
}

bool OAIError::is_source_Set() const{
    return m_source_isSet;
}

bool OAIError::is_source_Valid() const{
    return m_source_isValid;
}

bool OAIError::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_detail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (source.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIError::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_status_isValid && m_title_isValid && true;
}

} // namespace OpenAPI
