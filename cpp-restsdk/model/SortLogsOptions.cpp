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



#include "SortLogsOptions.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




SortLogsOptions::SortLogsOptions()
{
    m_IdIsSet = false;
    m_TextIsSet = false;
}

SortLogsOptions::~SortLogsOptions()
{
}

void SortLogsOptions::validate()
{
    // TODO: implement validation
}

web::json::value SortLogsOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    }

    return val;
}

bool SortLogsOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SortOrder> refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SortOrder> refVal_text;
            ok &= ModelBase::fromJson(fieldValue, refVal_text);
            setText(refVal_text);
        }
    }
    return ok;
}

void SortLogsOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    }
}

bool SortLogsOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        std::shared_ptr<SortOrder> refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("text")))
    {
        std::shared_ptr<SortOrder> refVal_text;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("text")), refVal_text );
        setText(refVal_text);
    }
    return ok;
}

std::shared_ptr<SortOrder> SortLogsOptions::getId() const
{
    return m_Id;
}

void SortLogsOptions::setId(const std::shared_ptr<SortOrder>& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SortLogsOptions::idIsSet() const
{
    return m_IdIsSet;
}

void SortLogsOptions::unsetId()
{
    m_IdIsSet = false;
}
std::shared_ptr<SortOrder> SortLogsOptions::getText() const
{
    return m_Text;
}

void SortLogsOptions::setText(const std::shared_ptr<SortOrder>& value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool SortLogsOptions::textIsSet() const
{
    return m_TextIsSet;
}

void SortLogsOptions::unsetText()
{
    m_TextIsSet = false;
}
}
}
}
}


