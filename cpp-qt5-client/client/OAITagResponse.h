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
 * OAITagResponse.h
 *
 * Response containing a single tag.
 */

#ifndef OAITagResponse_H
#define OAITagResponse_H

#include <QJsonObject>

#include "OAITag.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITagResponse : public OAIObject {
public:
    OAITagResponse();
    OAITagResponse(QString json);
    ~OAITagResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAITag getData() const;
    void setData(const OAITag &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAITag data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITagResponse)

#endif // OAITagResponse_H