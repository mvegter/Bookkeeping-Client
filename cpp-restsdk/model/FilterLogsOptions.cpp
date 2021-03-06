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



#include "FilterLogsOptions.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




FilterLogsOptions::FilterLogsOptions()
{
    m_OriginIsSet = false;
    m_ParentLog = 0L;
    m_ParentLogIsSet = false;
    m_RootLog = 0L;
    m_RootLogIsSet = false;
    m_TagIsSet = false;
}

FilterLogsOptions::~FilterLogsOptions()
{
}

void FilterLogsOptions::validate()
{
    // TODO: implement validation
}

web::json::value FilterLogsOptions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_OriginIsSet)
    {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(m_Origin);
    }
    if(m_ParentLogIsSet)
    {
        val[utility::conversions::to_string_t("parentLog")] = ModelBase::toJson(m_ParentLog);
    }
    if(m_RootLogIsSet)
    {
        val[utility::conversions::to_string_t("rootLog")] = ModelBase::toJson(m_RootLog);
    }
    if(m_TagIsSet)
    {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(m_Tag);
    }

    return val;
}

bool FilterLogsOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LogOrigin> refVal_origin;
            ok &= ModelBase::fromJson(fieldValue, refVal_origin);
            setOrigin(refVal_origin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentLog")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentLog"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_parentLog;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentLog);
            setParentLog(refVal_parentLog);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rootLog")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootLog"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_rootLog;
            ok &= ModelBase::fromJson(fieldValue, refVal_rootLog);
            setRootLog(refVal_rootLog);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FilterLogsTagOptions> refVal_tag;
            ok &= ModelBase::fromJson(fieldValue, refVal_tag);
            setTag(refVal_tag);
        }
    }
    return ok;
}

void FilterLogsOptions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_OriginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("origin"), m_Origin));
    }
    if(m_ParentLogIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentLog"), m_ParentLog));
    }
    if(m_RootLogIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rootLog"), m_RootLog));
    }
    if(m_TagIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tag"), m_Tag));
    }
}

bool FilterLogsOptions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("origin")))
    {
        std::shared_ptr<LogOrigin> refVal_origin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("origin")), refVal_origin );
        setOrigin(refVal_origin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentLog")))
    {
        int64_t refVal_parentLog;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentLog")), refVal_parentLog );
        setParentLog(refVal_parentLog);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rootLog")))
    {
        int64_t refVal_rootLog;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rootLog")), refVal_rootLog );
        setRootLog(refVal_rootLog);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tag")))
    {
        std::shared_ptr<FilterLogsTagOptions> refVal_tag;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tag")), refVal_tag );
        setTag(refVal_tag);
    }
    return ok;
}

std::shared_ptr<LogOrigin> FilterLogsOptions::getOrigin() const
{
    return m_Origin;
}

void FilterLogsOptions::setOrigin(const std::shared_ptr<LogOrigin>& value)
{
    m_Origin = value;
    m_OriginIsSet = true;
}

bool FilterLogsOptions::originIsSet() const
{
    return m_OriginIsSet;
}

void FilterLogsOptions::unsetOrigin()
{
    m_OriginIsSet = false;
}
int64_t FilterLogsOptions::getParentLog() const
{
    return m_ParentLog;
}

void FilterLogsOptions::setParentLog(int64_t value)
{
    m_ParentLog = value;
    m_ParentLogIsSet = true;
}

bool FilterLogsOptions::parentLogIsSet() const
{
    return m_ParentLogIsSet;
}

void FilterLogsOptions::unsetParentLog()
{
    m_ParentLogIsSet = false;
}
int64_t FilterLogsOptions::getRootLog() const
{
    return m_RootLog;
}

void FilterLogsOptions::setRootLog(int64_t value)
{
    m_RootLog = value;
    m_RootLogIsSet = true;
}

bool FilterLogsOptions::rootLogIsSet() const
{
    return m_RootLogIsSet;
}

void FilterLogsOptions::unsetRootLog()
{
    m_RootLogIsSet = false;
}
std::shared_ptr<FilterLogsTagOptions> FilterLogsOptions::getTag() const
{
    return m_Tag;
}

void FilterLogsOptions::setTag(const std::shared_ptr<FilterLogsTagOptions>& value)
{
    m_Tag = value;
    m_TagIsSet = true;
}

bool FilterLogsOptions::tagIsSet() const
{
    return m_TagIsSet;
}

void FilterLogsOptions::unsetTag()
{
    m_TagIsSet = false;
}
}
}
}
}


