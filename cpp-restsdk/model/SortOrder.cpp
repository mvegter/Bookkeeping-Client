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



#include "SortOrder.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SortOrder::SortOrder()
{
}

SortOrder::~SortOrder()
{
}

void SortOrder::validate()
{
    // TODO: implement validation
}

web::json::value SortOrder::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eSortOrder::SortOrder_ASC) val = web::json::value::string(U("asc"));
    if (m_value == eSortOrder::SortOrder_DESC) val = web::json::value::string(U("desc"));

    return val;
}

bool SortOrder::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("asc")) m_value = eSortOrder::SortOrder_ASC;
    if (s == utility::conversions::to_string_t("desc")) m_value = eSortOrder::SortOrder_DESC;
    return true;
}

void SortOrder::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eSortOrder::SortOrder_ASC) s = utility::conversions::to_string_t("asc");
    if (m_value == eSortOrder::SortOrder_DESC) s = utility::conversions::to_string_t("desc");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool SortOrder::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        eSortOrder v;

        
        if (s == utility::conversions::to_string_t("asc")) v = eSortOrder::SortOrder_ASC;
        if (s == utility::conversions::to_string_t("desc")) v = eSortOrder::SortOrder_DESC;

        setValue(v);
    }
    return ok;
}

SortOrder::eSortOrder SortOrder::getValue() const
{
   return m_value;
}

void SortOrder::setValue(SortOrder::eSortOrder const value)
{
   m_value = value;
}


}
}
}
}

