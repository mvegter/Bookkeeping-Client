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
 * OAIArrayOfLogsResponse.h
 *
 * Response containing multiple logs.
 */

#ifndef OAIArrayOfLogsResponse_H
#define OAIArrayOfLogsResponse_H

#include <QJsonObject>

#include "OAIArrayOfLogsResponseMeta.h"
#include "OAILog.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIArrayOfLogsResponse : public OAIObject {
public:
    OAIArrayOfLogsResponse();
    OAIArrayOfLogsResponse(QString json);
    ~OAIArrayOfLogsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIArrayOfLogsResponseMeta getMeta() const;
    void setMeta(const OAIArrayOfLogsResponseMeta &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QList<OAILog> getData() const;
    void setData(const QList<OAILog> &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIArrayOfLogsResponseMeta meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QList<OAILog> data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIArrayOfLogsResponse)

#endif // OAIArrayOfLogsResponse_H
