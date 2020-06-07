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

#include "OAILogTreeResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILogTreeResponse::OAILogTreeResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILogTreeResponse::OAILogTreeResponse() {
    this->initializeModel();
}

OAILogTreeResponse::~OAILogTreeResponse() {}

void OAILogTreeResponse::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;
}

void OAILogTreeResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILogTreeResponse::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::OpenAPI::fromJsonValue(data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;
}

QString OAILogTreeResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILogTreeResponse::asJsonObject() const {
    QJsonObject obj;
    if (data.isSet()) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(data));
    }
    return obj;
}

OAILogTree OAILogTreeResponse::getData() const {
    return data;
}
void OAILogTreeResponse::setData(const OAILogTree &data) {
    this->data = data;
    this->m_data_isSet = true;
}

bool OAILogTreeResponse::is_data_Set() const{
    return m_data_isSet;
}

bool OAILogTreeResponse::is_data_Valid() const{
    return m_data_isValid;
}

bool OAILogTreeResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (data.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILogTreeResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_data_isValid && true;
}

} // namespace OpenAPI