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
 * CreateLog.h
 *
 * Describes an intervention or an event that happened.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CreateLog_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CreateLog_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Describes an intervention or an event that happened.
/// </summary>
class  CreateLog
    : public ModelBase
{
public:
    CreateLog();
    virtual ~CreateLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateLog members

    /// <summary>
    /// Title of the log.
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// Body of the log.
    /// </summary>
    utility::string_t getText() const;
    bool textIsSet() const;
    void unsetText();

    void setText(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of this entity.
    /// </summary>
    int64_t getRootLogId() const;
    bool rootLogIdIsSet() const;
    void unsetRootLogId();

    void setRootLogId(int64_t value);

    /// <summary>
    /// The unique identifier of this entity.
    /// </summary>
    int64_t getParentLogId() const;
    bool parentLogIdIsSet() const;
    void unsetParentLogId();

    void setParentLogId(int64_t value);


protected:
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Text;
    bool m_TextIsSet;
    int64_t m_RootLogId;
    bool m_RootLogIdIsSet;
    int64_t m_ParentLogId;
    bool m_ParentLogIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CreateLog_H_ */
