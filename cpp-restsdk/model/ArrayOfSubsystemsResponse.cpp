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



#include "ArrayOfSubsystemsResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ArrayOfSubsystemsResponse::ArrayOfSubsystemsResponse()
{
    m_MetaIsSet = false;
    m_DataIsSet = false;
}

ArrayOfSubsystemsResponse::~ArrayOfSubsystemsResponse()
{
}

void ArrayOfSubsystemsResponse::validate()
{
    // TODO: implement validation
}

web::json::value ArrayOfSubsystemsResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MetaIsSet)
    {
        val[utility::conversions::to_string_t("meta")] = ModelBase::toJson(m_Meta);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }

    return val;
}

bool ArrayOfSubsystemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("meta")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ArrayOfSubsystemsResponseMeta> refVal_meta;
            ok &= ModelBase::fromJson(fieldValue, refVal_meta);
            setMeta(refVal_meta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Subsystem>> refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    return ok;
}

void ArrayOfSubsystemsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MetaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("meta"), m_Meta));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
}

bool ArrayOfSubsystemsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("meta")))
    {
        std::shared_ptr<ArrayOfSubsystemsResponseMeta> refVal_meta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("meta")), refVal_meta );
        setMeta(refVal_meta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        std::vector<std::shared_ptr<Subsystem>> refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    return ok;
}

std::shared_ptr<ArrayOfSubsystemsResponseMeta> ArrayOfSubsystemsResponse::getMeta() const
{
    return m_Meta;
}

void ArrayOfSubsystemsResponse::setMeta(const std::shared_ptr<ArrayOfSubsystemsResponseMeta>& value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}

bool ArrayOfSubsystemsResponse::metaIsSet() const
{
    return m_MetaIsSet;
}

void ArrayOfSubsystemsResponse::unsetMeta()
{
    m_MetaIsSet = false;
}
std::vector<std::shared_ptr<Subsystem>>& ArrayOfSubsystemsResponse::getData()
{
    return m_Data;
}

void ArrayOfSubsystemsResponse::setData(const std::vector<std::shared_ptr<Subsystem>>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool ArrayOfSubsystemsResponse::dataIsSet() const
{
    return m_DataIsSet;
}

void ArrayOfSubsystemsResponse::unsetData()
{
    m_DataIsSet = false;
}
}
}
}
}


