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

#include "OAISortOrder.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISortOrder::OAISortOrder(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISortOrder::OAISortOrder() {
    this->initializeModel();
}

OAISortOrder::~OAISortOrder() {}

void OAISortOrder::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAISortOrder::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAISortOrder::fromJson(QString jsonString) {
    
    if ( jsonString.compare("asc", Qt::CaseInsensitive) == 0) {
        m_value = eOAISortOrder::ASC;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("desc", Qt::CaseInsensitive) == 0) {
        m_value = eOAISortOrder::DESC;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAISortOrder::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAISortOrder::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAISortOrder::ASC:
            val = "asc";
            break;
        case eOAISortOrder::DESC:
            val = "desc";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAISortOrder::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAISortOrder::eOAISortOrder OAISortOrder::getValue() const {
    return m_value;
}

void OAISortOrder::setValue(const OAISortOrder::eOAISortOrder& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAISortOrder::isSet() const {
    
    return m_value_isSet;
}

bool OAISortOrder::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
