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
 * OAIPaginationOptions.h
 *
 * Specifies the pagination requirements of a request.
 */

#ifndef OAIPaginationOptions_H
#define OAIPaginationOptions_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPaginationOptions : public OAIObject {
public:
    OAIPaginationOptions();
    OAIPaginationOptions(QString json);
    ~OAIPaginationOptions() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getLimit() const;
    void setLimit(const qint32 &limit);
    bool is_limit_Set() const;
    bool is_limit_Valid() const;

    qint32 getOffset() const;
    void setOffset(const qint32 &offset);
    bool is_offset_Set() const;
    bool is_offset_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 limit;
    bool m_limit_isSet;
    bool m_limit_isValid;

    qint32 offset;
    bool m_offset_isSet;
    bool m_offset_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPaginationOptions)

#endif // OAIPaginationOptions_H