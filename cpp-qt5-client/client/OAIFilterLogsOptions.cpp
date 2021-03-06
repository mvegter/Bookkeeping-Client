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

#include "OAIFilterLogsOptions.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFilterLogsOptions::OAIFilterLogsOptions(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFilterLogsOptions::OAIFilterLogsOptions() {
    this->initializeModel();
}

OAIFilterLogsOptions::~OAIFilterLogsOptions() {}

void OAIFilterLogsOptions::initializeModel() {

    m_origin_isSet = false;
    m_origin_isValid = false;

    m_parent_log_isSet = false;
    m_parent_log_isValid = false;

    m_root_log_isSet = false;
    m_root_log_isValid = false;

    m_tag_isSet = false;
    m_tag_isValid = false;
}

void OAIFilterLogsOptions::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFilterLogsOptions::fromJsonObject(QJsonObject json) {

    m_origin_isValid = ::OpenAPI::fromJsonValue(origin, json[QString("origin")]);
    m_origin_isSet = !json[QString("origin")].isNull() && m_origin_isValid;

    m_parent_log_isValid = ::OpenAPI::fromJsonValue(parent_log, json[QString("parentLog")]);
    m_parent_log_isSet = !json[QString("parentLog")].isNull() && m_parent_log_isValid;

    m_root_log_isValid = ::OpenAPI::fromJsonValue(root_log, json[QString("rootLog")]);
    m_root_log_isSet = !json[QString("rootLog")].isNull() && m_root_log_isValid;

    m_tag_isValid = ::OpenAPI::fromJsonValue(tag, json[QString("tag")]);
    m_tag_isSet = !json[QString("tag")].isNull() && m_tag_isValid;
}

QString OAIFilterLogsOptions::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFilterLogsOptions::asJsonObject() const {
    QJsonObject obj;
    if (origin.isSet()) {
        obj.insert(QString("origin"), ::OpenAPI::toJsonValue(origin));
    }
    if (m_parent_log_isSet) {
        obj.insert(QString("parentLog"), ::OpenAPI::toJsonValue(parent_log));
    }
    if (m_root_log_isSet) {
        obj.insert(QString("rootLog"), ::OpenAPI::toJsonValue(root_log));
    }
    if (tag.isSet()) {
        obj.insert(QString("tag"), ::OpenAPI::toJsonValue(tag));
    }
    return obj;
}

OAILogOrigin OAIFilterLogsOptions::getOrigin() const {
    return origin;
}
void OAIFilterLogsOptions::setOrigin(const OAILogOrigin &origin) {
    this->origin = origin;
    this->m_origin_isSet = true;
}

bool OAIFilterLogsOptions::is_origin_Set() const{
    return m_origin_isSet;
}

bool OAIFilterLogsOptions::is_origin_Valid() const{
    return m_origin_isValid;
}

qint64 OAIFilterLogsOptions::getParentLog() const {
    return parent_log;
}
void OAIFilterLogsOptions::setParentLog(const qint64 &parent_log) {
    this->parent_log = parent_log;
    this->m_parent_log_isSet = true;
}

bool OAIFilterLogsOptions::is_parent_log_Set() const{
    return m_parent_log_isSet;
}

bool OAIFilterLogsOptions::is_parent_log_Valid() const{
    return m_parent_log_isValid;
}

qint64 OAIFilterLogsOptions::getRootLog() const {
    return root_log;
}
void OAIFilterLogsOptions::setRootLog(const qint64 &root_log) {
    this->root_log = root_log;
    this->m_root_log_isSet = true;
}

bool OAIFilterLogsOptions::is_root_log_Set() const{
    return m_root_log_isSet;
}

bool OAIFilterLogsOptions::is_root_log_Valid() const{
    return m_root_log_isValid;
}

OAIFilterLogsTagOptions OAIFilterLogsOptions::getTag() const {
    return tag;
}
void OAIFilterLogsOptions::setTag(const OAIFilterLogsTagOptions &tag) {
    this->tag = tag;
    this->m_tag_isSet = true;
}

bool OAIFilterLogsOptions::is_tag_Set() const{
    return m_tag_isSet;
}

bool OAIFilterLogsOptions::is_tag_Valid() const{
    return m_tag_isValid;
}

bool OAIFilterLogsOptions::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (origin.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_log_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_root_log_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (tag.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFilterLogsOptions::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
