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
 * OAIArrayOfLogsResponseMeta.h
 *
 * The metadata related to an array of logs response.
 */

#ifndef OAIArrayOfLogsResponseMeta_H
#define OAIArrayOfLogsResponseMeta_H

#include <QJsonObject>

#include "OAIPaginationMeta.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIArrayOfLogsResponseMeta : public OAIObject {
public:
    OAIArrayOfLogsResponseMeta();
    OAIArrayOfLogsResponseMeta(QString json);
    ~OAIArrayOfLogsResponseMeta() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPaginationMeta getPage() const;
    void setPage(const OAIPaginationMeta &page);
    bool is_page_Set() const;
    bool is_page_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIPaginationMeta page;
    bool m_page_isSet;
    bool m_page_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIArrayOfLogsResponseMeta)

#endif // OAIArrayOfLogsResponseMeta_H