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



#include "SubsystemResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




SubsystemResponse::SubsystemResponse()
{
    m_DataIsSet = false;
}

SubsystemResponse::~SubsystemResponse()
{
}

void SubsystemResponse::validate()
{
    // TODO: implement validation
}

web::json::value SubsystemResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }

    return val;
}

bool SubsystemResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Subsystem> refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    return ok;
}

void SubsystemResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
}

bool SubsystemResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        std::shared_ptr<Subsystem> refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    return ok;
}

std::shared_ptr<Subsystem> SubsystemResponse::getData() const
{
    return m_Data;
}

void SubsystemResponse::setData(const std::shared_ptr<Subsystem>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool SubsystemResponse::dataIsSet() const
{
    return m_DataIsSet;
}

void SubsystemResponse::unsetData()
{
    m_DataIsSet = false;
}
}
}
}
}


