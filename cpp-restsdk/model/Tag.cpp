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



#include "Tag.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Tag::Tag()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
    m_CreatedAt = utility::conversions::to_string_t("");
    m_CreatedAtIsSet = false;
    m_UpdateAt = utility::conversions::to_string_t("");
    m_UpdateAtIsSet = false;
}

Tag::~Tag()
{
}

void Tag::validate()
{
    // TODO: implement validation
}

web::json::value Tag::toJson() const
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
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UpdateAtIsSet)
    {
        val[utility::conversions::to_string_t("updateAt")] = ModelBase::toJson(m_UpdateAt);
    }

    return val;
}

bool Tag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_text;
            ok &= ModelBase::fromJson(fieldValue, refVal_text);
            setText(refVal_text);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_createdAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAt);
            setCreatedAt(refVal_createdAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateAt"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_updateAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_updateAt);
            setUpdateAt(refVal_updateAt);
        }
    }
    return ok;
}

void Tag::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    }
    if(m_UpdateAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updateAt"), m_UpdateAt));
    }
}

bool Tag::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        int64_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("text")))
    {
        utility::string_t refVal_text;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("text")), refVal_text );
        setText(refVal_text);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdAt")))
    {
        utility::string_t refVal_createdAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt")), refVal_createdAt );
        setCreatedAt(refVal_createdAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updateAt")))
    {
        utility::string_t refVal_updateAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("updateAt")), refVal_updateAt );
        setUpdateAt(refVal_updateAt);
    }
    return ok;
}

int64_t Tag::getId() const
{
    return m_Id;
}

void Tag::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Tag::idIsSet() const
{
    return m_IdIsSet;
}

void Tag::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Tag::getText() const
{
    return m_Text;
}

void Tag::setText(const utility::string_t& value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool Tag::textIsSet() const
{
    return m_TextIsSet;
}

void Tag::unsetText()
{
    m_TextIsSet = false;
}
utility::string_t Tag::getCreatedAt() const
{
    return m_CreatedAt;
}

void Tag::setCreatedAt(const utility::string_t& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool Tag::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Tag::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t Tag::getUpdateAt() const
{
    return m_UpdateAt;
}

void Tag::setUpdateAt(const utility::string_t& value)
{
    m_UpdateAt = value;
    m_UpdateAtIsSet = true;
}

bool Tag::updateAtIsSet() const
{
    return m_UpdateAtIsSet;
}

void Tag::unsetUpdateAt()
{
    m_UpdateAtIsSet = false;
}
}
}
}
}


