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



#include "Log.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Log::Log()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_AuthorId = utility::conversions::to_string_t("");
    m_AuthorIdIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
    m_CreationTime = 0L;
    m_CreationTimeIsSet = false;
    m_OriginIsSet = false;
    m_SubtypeIsSet = false;
    m_TagsIsSet = false;
    m_RootLogId = 0L;
    m_RootLogIdIsSet = false;
    m_ParentLogId = 0L;
    m_ParentLogIdIsSet = false;
    m_ChildrenIsSet = false;
}

Log::~Log()
{
}

void Log::validate()
{
    // TODO: implement validation
}

web::json::value Log::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_AuthorIdIsSet)
    {
        val[utility::conversions::to_string_t("authorId")] = ModelBase::toJson(m_AuthorId);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    }
    if(m_CreationTimeIsSet)
    {
        val[utility::conversions::to_string_t("creationTime")] = ModelBase::toJson(m_CreationTime);
    }
    if(m_OriginIsSet)
    {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(m_Origin);
    }
    if(m_SubtypeIsSet)
    {
        val[utility::conversions::to_string_t("subtype")] = ModelBase::toJson(m_Subtype);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(m_Tags);
    }
    if(m_RootLogIdIsSet)
    {
        val[utility::conversions::to_string_t("rootLogId")] = ModelBase::toJson(m_RootLogId);
    }
    if(m_ParentLogIdIsSet)
    {
        val[utility::conversions::to_string_t("parentLogId")] = ModelBase::toJson(m_ParentLogId);
    }
    if(m_ChildrenIsSet)
    {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(m_Children);
    }

    return val;
}

bool Log::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("authorId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_authorId;
            ok &= ModelBase::fromJson(fieldValue, refVal_authorId);
            setAuthorId(refVal_authorId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
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
    if(val.has_field(utility::conversions::to_string_t("creationTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_creationTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_creationTime);
            setCreationTime(refVal_creationTime);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("subtype")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtype"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LogSubtype> refVal_subtype;
            ok &= ModelBase::fromJson(fieldValue, refVal_subtype);
            setSubtype(refVal_subtype);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Tag>> refVal_tags;
            ok &= ModelBase::fromJson(fieldValue, refVal_tags);
            setTags(refVal_tags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rootLogId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootLogId"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_rootLogId;
            ok &= ModelBase::fromJson(fieldValue, refVal_rootLogId);
            setRootLogId(refVal_rootLogId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentLogId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentLogId"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_parentLogId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentLogId);
            setParentLogId(refVal_parentLogId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Log>> refVal_children;
            ok &= ModelBase::fromJson(fieldValue, refVal_children);
            setChildren(refVal_children);
        }
    }
    return ok;
}

void Log::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AuthorIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("authorId"), m_AuthorId));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    }
    if(m_CreationTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("creationTime"), m_CreationTime));
    }
    if(m_OriginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("origin"), m_Origin));
    }
    if(m_SubtypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subtype"), m_Subtype));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), m_Tags));
    }
    if(m_RootLogIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rootLogId"), m_RootLogId));
    }
    if(m_ParentLogIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentLogId"), m_ParentLogId));
    }
    if(m_ChildrenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("children"), m_Children));
    }
}

bool Log::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("authorId")))
    {
        utility::string_t refVal_authorId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("authorId")), refVal_authorId );
        setAuthorId(refVal_authorId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("title")), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("text")))
    {
        utility::string_t refVal_text;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("text")), refVal_text );
        setText(refVal_text);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("creationTime")))
    {
        int64_t refVal_creationTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("creationTime")), refVal_creationTime );
        setCreationTime(refVal_creationTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("origin")))
    {
        std::shared_ptr<LogOrigin> refVal_origin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("origin")), refVal_origin );
        setOrigin(refVal_origin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subtype")))
    {
        std::shared_ptr<LogSubtype> refVal_subtype;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subtype")), refVal_subtype );
        setSubtype(refVal_subtype);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tags")))
    {
        std::vector<std::shared_ptr<Tag>> refVal_tags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tags")), refVal_tags );
        setTags(refVal_tags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rootLogId")))
    {
        int64_t refVal_rootLogId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rootLogId")), refVal_rootLogId );
        setRootLogId(refVal_rootLogId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentLogId")))
    {
        int64_t refVal_parentLogId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentLogId")), refVal_parentLogId );
        setParentLogId(refVal_parentLogId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("children")))
    {
        std::vector<std::shared_ptr<Log>> refVal_children;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("children")), refVal_children );
        setChildren(refVal_children);
    }
    return ok;
}

int64_t Log::getId() const
{
    return m_Id;
}

void Log::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Log::idIsSet() const
{
    return m_IdIsSet;
}

void Log::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Log::getAuthorId() const
{
    return m_AuthorId;
}

void Log::setAuthorId(const utility::string_t& value)
{
    m_AuthorId = value;
    m_AuthorIdIsSet = true;
}

bool Log::authorIdIsSet() const
{
    return m_AuthorIdIsSet;
}

void Log::unsetAuthorId()
{
    m_AuthorIdIsSet = false;
}
utility::string_t Log::getTitle() const
{
    return m_Title;
}

void Log::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool Log::titleIsSet() const
{
    return m_TitleIsSet;
}

void Log::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t Log::getText() const
{
    return m_Text;
}

void Log::setText(const utility::string_t& value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool Log::textIsSet() const
{
    return m_TextIsSet;
}

void Log::unsetText()
{
    m_TextIsSet = false;
}
int64_t Log::getCreationTime() const
{
    return m_CreationTime;
}

void Log::setCreationTime(int64_t value)
{
    m_CreationTime = value;
    m_CreationTimeIsSet = true;
}

bool Log::creationTimeIsSet() const
{
    return m_CreationTimeIsSet;
}

void Log::unsetCreationTime()
{
    m_CreationTimeIsSet = false;
}
std::shared_ptr<LogOrigin> Log::getOrigin() const
{
    return m_Origin;
}

void Log::setOrigin(const std::shared_ptr<LogOrigin>& value)
{
    m_Origin = value;
    m_OriginIsSet = true;
}

bool Log::originIsSet() const
{
    return m_OriginIsSet;
}

void Log::unsetOrigin()
{
    m_OriginIsSet = false;
}
std::shared_ptr<LogSubtype> Log::getSubtype() const
{
    return m_Subtype;
}

void Log::setSubtype(const std::shared_ptr<LogSubtype>& value)
{
    m_Subtype = value;
    m_SubtypeIsSet = true;
}

bool Log::subtypeIsSet() const
{
    return m_SubtypeIsSet;
}

void Log::unsetSubtype()
{
    m_SubtypeIsSet = false;
}
std::vector<std::shared_ptr<Tag>>& Log::getTags()
{
    return m_Tags;
}

void Log::setTags(const std::vector<std::shared_ptr<Tag>>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool Log::tagsIsSet() const
{
    return m_TagsIsSet;
}

void Log::unsetTags()
{
    m_TagsIsSet = false;
}
int64_t Log::getRootLogId() const
{
    return m_RootLogId;
}

void Log::setRootLogId(int64_t value)
{
    m_RootLogId = value;
    m_RootLogIdIsSet = true;
}

bool Log::rootLogIdIsSet() const
{
    return m_RootLogIdIsSet;
}

void Log::unsetRootLogId()
{
    m_RootLogIdIsSet = false;
}
int64_t Log::getParentLogId() const
{
    return m_ParentLogId;
}

void Log::setParentLogId(int64_t value)
{
    m_ParentLogId = value;
    m_ParentLogIdIsSet = true;
}

bool Log::parentLogIdIsSet() const
{
    return m_ParentLogIdIsSet;
}

void Log::unsetParentLogId()
{
    m_ParentLogIdIsSet = false;
}
std::vector<std::shared_ptr<Log>>& Log::getChildren()
{
    return m_Children;
}

void Log::setChildren(const std::vector<std::shared_ptr<Log>>& value)
{
    m_Children = value;
    m_ChildrenIsSet = true;
}

bool Log::childrenIsSet() const
{
    return m_ChildrenIsSet;
}

void Log::unsetChildren()
{
    m_ChildrenIsSet = false;
}
}
}
}
}


