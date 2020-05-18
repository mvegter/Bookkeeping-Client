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



#include "PaginationMeta.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PaginationMeta::PaginationMeta()
{
    m_Total = 0;
    m_TotalIsSet = false;
}

PaginationMeta::~PaginationMeta()
{
}

void PaginationMeta::validate()
{
    // TODO: implement validation
}

web::json::value PaginationMeta::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(m_Total);
    }

    return val;
}

bool PaginationMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_total;
            ok &= ModelBase::fromJson(fieldValue, refVal_total);
            setTotal(refVal_total);
        }
    }
    return ok;
}

void PaginationMeta::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("total"), m_Total));
    }
}

bool PaginationMeta::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("total")))
    {
        int32_t refVal_total;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("total")), refVal_total );
        setTotal(refVal_total);
    }
    return ok;
}

int32_t PaginationMeta::getTotal() const
{
    return m_Total;
}

void PaginationMeta::setTotal(int32_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool PaginationMeta::totalIsSet() const
{
    return m_TotalIsSet;
}

void PaginationMeta::unsetTotal()
{
    m_TotalIsSet = false;
}
}
}
}
}


