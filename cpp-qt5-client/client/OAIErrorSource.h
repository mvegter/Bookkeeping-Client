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
 * OAIErrorSource.h
 *
 * An object containing references to the source of the error.
 */

#ifndef OAIErrorSource_H
#define OAIErrorSource_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIErrorSource : public OAIObject {
public:
    OAIErrorSource();
    OAIErrorSource(QString json);
    ~OAIErrorSource() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPointer() const;
    void setPointer(const QString &pointer);
    bool is_pointer_Set() const;
    bool is_pointer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString pointer;
    bool m_pointer_isSet;
    bool m_pointer_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIErrorSource)

#endif // OAIErrorSource_H
