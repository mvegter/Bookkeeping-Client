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

/*
 * OAISortOrder.h
 *
 * Specifies the sorting direction of a sorting option.
 */

#ifndef OAISortOrder_H
#define OAISortOrder_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISortOrder : public OAIEnum {
public:
    OAISortOrder();
    OAISortOrder(QString json);
    ~OAISortOrder() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAISortOrder {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ASC, 
        DESC
    };
    OAISortOrder::eOAISortOrder getValue() const;
    void setValue(const OAISortOrder::eOAISortOrder& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAISortOrder m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISortOrder)

#endif // OAISortOrder_H