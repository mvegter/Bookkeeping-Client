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
 * ArrayOfLogsResponseMeta.h
 *
 * The metadata related to an array of logs response.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ArrayOfLogsResponseMeta_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ArrayOfLogsResponseMeta_H_


#include "../ModelBase.h"

#include "PaginationMeta.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// The metadata related to an array of logs response.
/// </summary>
class  ArrayOfLogsResponseMeta
    : public ModelBase
{
public:
    ArrayOfLogsResponseMeta();
    virtual ~ArrayOfLogsResponseMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ArrayOfLogsResponseMeta members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PaginationMeta> getPage() const;
    bool pageIsSet() const;
    void unsetPage();

    void setPage(const std::shared_ptr<PaginationMeta>& value);


protected:
    std::shared_ptr<PaginationMeta> m_Page;
    bool m_PageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ArrayOfLogsResponseMeta_H_ */
