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
 * OAISubsystemResponse.h
 *
 * Response containing a single subsystem.
 */

#ifndef OAISubsystemResponse_H
#define OAISubsystemResponse_H

#include <QJsonObject>

#include "OAISubsystem.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISubsystemResponse : public OAIObject {
public:
    OAISubsystemResponse();
    OAISubsystemResponse(QString json);
    ~OAISubsystemResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISubsystem getData() const;
    void setData(const OAISubsystem &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISubsystem data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISubsystemResponse)

#endif // OAISubsystemResponse_H
