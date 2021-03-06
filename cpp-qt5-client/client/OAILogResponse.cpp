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

#include "OAILogResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILogResponse::OAILogResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILogResponse::OAILogResponse() {
    this->initializeModel();
}

OAILogResponse::~OAILogResponse() {}

void OAILogResponse::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;
}

void OAILogResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILogResponse::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::OpenAPI::fromJsonValue(data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;
}

QString OAILogResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILogResponse::asJsonObject() const {
    QJsonObject obj;
    if (data.isSet()) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(data));
    }
    return obj;
}

OAILog OAILogResponse::getData() const {
    return data;
}
void OAILogResponse::setData(const OAILog &data) {
    this->data = data;
    this->m_data_isSet = true;
}

bool OAILogResponse::is_data_Set() const{
    return m_data_isSet;
}

bool OAILogResponse::is_data_Valid() const{
    return m_data_isValid;
}

bool OAILogResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (data.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILogResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_data_isValid && true;
}

} // namespace OpenAPI
