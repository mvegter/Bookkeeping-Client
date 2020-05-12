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
 * OAIArrayOfTagsResponse.h
 *
 * Response containing multiple tags.
 */

#ifndef OAIArrayOfTagsResponse_H
#define OAIArrayOfTagsResponse_H

#include <QJsonObject>

#include "OAITag.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIArrayOfTagsResponse : public OAIObject {
public:
    OAIArrayOfTagsResponse();
    OAIArrayOfTagsResponse(QString json);
    ~OAIArrayOfTagsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAITag> getData() const;
    void setData(const QList<OAITag> &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAITag> data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIArrayOfTagsResponse)

#endif // OAIArrayOfTagsResponse_H