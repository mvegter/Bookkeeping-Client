/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * FilterLogsOptions.h
 *
 * Specifies the log related filter requirements for a request.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_FilterLogsOptions_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_FilterLogsOptions_H_


#include "../ModelBase.h"

#include "LogOrigin.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Specifies the log related filter requirements for a request.
/// </summary>
class  FilterLogsOptions
    : public ModelBase
{
public:
    FilterLogsOptions();
    virtual ~FilterLogsOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FilterLogsOptions members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<LogOrigin> getOrigin() const;
    bool originIsSet() const;
    void unsetOrigin();

    void setOrigin(const std::shared_ptr<LogOrigin>& value);


protected:
    std::shared_ptr<LogOrigin> m_Origin;
    bool m_OriginIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_FilterLogsOptions_H_ */
