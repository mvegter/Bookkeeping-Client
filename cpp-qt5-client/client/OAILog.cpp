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

#include "OAILog.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILog::OAILog(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILog::OAILog() {
    this->initializeModel();
}

OAILog::~OAILog() {}

void OAILog::initializeModel() {

    m_entry_id_isSet = false;
    m_entry_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_origin_isSet = false;
    m_origin_isValid = false;

    m_tags_isSet = false;
    m_tags_isValid = false;
}

void OAILog::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILog::fromJsonObject(QJsonObject json) {

    m_entry_id_isValid = ::OpenAPI::fromJsonValue(entry_id, json[QString("entryId")]);
    m_entry_id_isSet = !json[QString("entryId")].isNull() && m_entry_id_isValid;

    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_origin_isValid = ::OpenAPI::fromJsonValue(origin, json[QString("origin")]);
    m_origin_isSet = !json[QString("origin")].isNull() && m_origin_isValid;

    m_tags_isValid = ::OpenAPI::fromJsonValue(tags, json[QString("tags")]);
    m_tags_isSet = !json[QString("tags")].isNull() && m_tags_isValid;
}

QString OAILog::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILog::asJsonObject() const {
    QJsonObject obj;
    if (m_entry_id_isSet) {
        obj.insert(QString("entryId"), ::OpenAPI::toJsonValue(entry_id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
    if (m_origin_isSet) {
        obj.insert(QString("origin"), ::OpenAPI::toJsonValue(origin));
    }
    if (tags.size() > 0) {
        obj.insert(QString("tags"), ::OpenAPI::toJsonValue(tags));
    }
    return obj;
}

qint64 OAILog::getEntryId() const {
    return entry_id;
}
void OAILog::setEntryId(const qint64 &entry_id) {
    this->entry_id = entry_id;
    this->m_entry_id_isSet = true;
}

bool OAILog::is_entry_id_Set() const{
    return m_entry_id_isSet;
}

bool OAILog::is_entry_id_Valid() const{
    return m_entry_id_isValid;
}

QString OAILog::getTitle() const {
    return title;
}
void OAILog::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool OAILog::is_title_Set() const{
    return m_title_isSet;
}

bool OAILog::is_title_Valid() const{
    return m_title_isValid;
}

QString OAILog::getOrigin() const {
    return origin;
}
void OAILog::setOrigin(const QString &origin) {
    this->origin = origin;
    this->m_origin_isSet = true;
}

bool OAILog::is_origin_Set() const{
    return m_origin_isSet;
}

bool OAILog::is_origin_Valid() const{
    return m_origin_isValid;
}

QList<QString> OAILog::getTags() const {
    return tags;
}
void OAILog::setTags(const QList<QString> &tags) {
    this->tags = tags;
    this->m_tags_isSet = true;
}

bool OAILog::is_tags_Set() const{
    return m_tags_isSet;
}

bool OAILog::is_tags_Valid() const{
    return m_tags_isValid;
}

bool OAILog::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_entry_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_origin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILog::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_entry_id_isValid && m_title_isValid && m_origin_isValid && m_tags_isValid && true;
}

} // namespace OpenAPI
