/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAILogTree.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILogTree::OAILogTree(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILogTree::OAILogTree() {
    this->initializeModel();
}

OAILogTree::~OAILogTree() {}

void OAILogTree::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_author_id_isSet = false;
    m_author_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_creation_time_isSet = false;
    m_creation_time_isValid = false;

    m_origin_isSet = false;
    m_origin_isValid = false;

    m_subtype_isSet = false;
    m_subtype_isValid = false;

    m_tags_isSet = false;
    m_tags_isValid = false;

    m_root_log_id_isSet = false;
    m_root_log_id_isValid = false;

    m_parent_log_id_isSet = false;
    m_parent_log_id_isValid = false;

    m_children_isSet = false;
    m_children_isValid = false;
}

void OAILogTree::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILogTree::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_author_id_isValid = ::OpenAPI::fromJsonValue(author_id, json[QString("authorId")]);
    m_author_id_isSet = !json[QString("authorId")].isNull() && m_author_id_isValid;

    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_text_isValid = ::OpenAPI::fromJsonValue(text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_creation_time_isValid = ::OpenAPI::fromJsonValue(creation_time, json[QString("creationTime")]);
    m_creation_time_isSet = !json[QString("creationTime")].isNull() && m_creation_time_isValid;

    m_origin_isValid = ::OpenAPI::fromJsonValue(origin, json[QString("origin")]);
    m_origin_isSet = !json[QString("origin")].isNull() && m_origin_isValid;

    m_subtype_isValid = ::OpenAPI::fromJsonValue(subtype, json[QString("subtype")]);
    m_subtype_isSet = !json[QString("subtype")].isNull() && m_subtype_isValid;

    m_tags_isValid = ::OpenAPI::fromJsonValue(tags, json[QString("tags")]);
    m_tags_isSet = !json[QString("tags")].isNull() && m_tags_isValid;

    m_root_log_id_isValid = ::OpenAPI::fromJsonValue(root_log_id, json[QString("rootLogId")]);
    m_root_log_id_isSet = !json[QString("rootLogId")].isNull() && m_root_log_id_isValid;

    m_parent_log_id_isValid = ::OpenAPI::fromJsonValue(parent_log_id, json[QString("parentLogId")]);
    m_parent_log_id_isSet = !json[QString("parentLogId")].isNull() && m_parent_log_id_isValid;

    m_children_isValid = ::OpenAPI::fromJsonValue(children, json[QString("children")]);
    m_children_isSet = !json[QString("children")].isNull() && m_children_isValid;
}

QString OAILogTree::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILogTree::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_author_id_isSet) {
        obj.insert(QString("authorId"), ::OpenAPI::toJsonValue(author_id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::OpenAPI::toJsonValue(text));
    }
    if (m_creation_time_isSet) {
        obj.insert(QString("creationTime"), ::OpenAPI::toJsonValue(creation_time));
    }
    if (origin.isSet()) {
        obj.insert(QString("origin"), ::OpenAPI::toJsonValue(origin));
    }
    if (subtype.isSet()) {
        obj.insert(QString("subtype"), ::OpenAPI::toJsonValue(subtype));
    }
    if (tags.size() > 0) {
        obj.insert(QString("tags"), ::OpenAPI::toJsonValue(tags));
    }
    if (m_root_log_id_isSet) {
        obj.insert(QString("rootLogId"), ::OpenAPI::toJsonValue(root_log_id));
    }
    if (m_parent_log_id_isSet) {
        obj.insert(QString("parentLogId"), ::OpenAPI::toJsonValue(parent_log_id));
    }
    if (children.size() > 0) {
        obj.insert(QString("children"), ::OpenAPI::toJsonValue(children));
    }
    return obj;
}

qint64 OAILogTree::getId() const {
    return id;
}
void OAILogTree::setId(const qint64 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAILogTree::is_id_Set() const{
    return m_id_isSet;
}

bool OAILogTree::is_id_Valid() const{
    return m_id_isValid;
}

QString OAILogTree::getAuthorId() const {
    return author_id;
}
void OAILogTree::setAuthorId(const QString &author_id) {
    this->author_id = author_id;
    this->m_author_id_isSet = true;
}

bool OAILogTree::is_author_id_Set() const{
    return m_author_id_isSet;
}

bool OAILogTree::is_author_id_Valid() const{
    return m_author_id_isValid;
}

QString OAILogTree::getTitle() const {
    return title;
}
void OAILogTree::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool OAILogTree::is_title_Set() const{
    return m_title_isSet;
}

bool OAILogTree::is_title_Valid() const{
    return m_title_isValid;
}

QString OAILogTree::getText() const {
    return text;
}
void OAILogTree::setText(const QString &text) {
    this->text = text;
    this->m_text_isSet = true;
}

bool OAILogTree::is_text_Set() const{
    return m_text_isSet;
}

bool OAILogTree::is_text_Valid() const{
    return m_text_isValid;
}

qint64 OAILogTree::getCreationTime() const {
    return creation_time;
}
void OAILogTree::setCreationTime(const qint64 &creation_time) {
    this->creation_time = creation_time;
    this->m_creation_time_isSet = true;
}

bool OAILogTree::is_creation_time_Set() const{
    return m_creation_time_isSet;
}

bool OAILogTree::is_creation_time_Valid() const{
    return m_creation_time_isValid;
}

OAILogOrigin OAILogTree::getOrigin() const {
    return origin;
}
void OAILogTree::setOrigin(const OAILogOrigin &origin) {
    this->origin = origin;
    this->m_origin_isSet = true;
}

bool OAILogTree::is_origin_Set() const{
    return m_origin_isSet;
}

bool OAILogTree::is_origin_Valid() const{
    return m_origin_isValid;
}

OAILogSubtype OAILogTree::getSubtype() const {
    return subtype;
}
void OAILogTree::setSubtype(const OAILogSubtype &subtype) {
    this->subtype = subtype;
    this->m_subtype_isSet = true;
}

bool OAILogTree::is_subtype_Set() const{
    return m_subtype_isSet;
}

bool OAILogTree::is_subtype_Valid() const{
    return m_subtype_isValid;
}

QList<OAITag> OAILogTree::getTags() const {
    return tags;
}
void OAILogTree::setTags(const QList<OAITag> &tags) {
    this->tags = tags;
    this->m_tags_isSet = true;
}

bool OAILogTree::is_tags_Set() const{
    return m_tags_isSet;
}

bool OAILogTree::is_tags_Valid() const{
    return m_tags_isValid;
}

qint64 OAILogTree::getRootLogId() const {
    return root_log_id;
}
void OAILogTree::setRootLogId(const qint64 &root_log_id) {
    this->root_log_id = root_log_id;
    this->m_root_log_id_isSet = true;
}

bool OAILogTree::is_root_log_id_Set() const{
    return m_root_log_id_isSet;
}

bool OAILogTree::is_root_log_id_Valid() const{
    return m_root_log_id_isValid;
}

qint64 OAILogTree::getParentLogId() const {
    return parent_log_id;
}
void OAILogTree::setParentLogId(const qint64 &parent_log_id) {
    this->parent_log_id = parent_log_id;
    this->m_parent_log_id_isSet = true;
}

bool OAILogTree::is_parent_log_id_Set() const{
    return m_parent_log_id_isSet;
}

bool OAILogTree::is_parent_log_id_Valid() const{
    return m_parent_log_id_isValid;
}

QList<OAILogTree> OAILogTree::getChildren() const {
    return children;
}
void OAILogTree::setChildren(const QList<OAILogTree> &children) {
    this->children = children;
    this->m_children_isSet = true;
}

bool OAILogTree::is_children_Set() const{
    return m_children_isSet;
}

bool OAILogTree::is_children_Valid() const{
    return m_children_isValid;
}

bool OAILogTree::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creation_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (origin.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (subtype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_root_log_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_log_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (children.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILogTree::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_author_id_isValid && m_title_isValid && m_text_isValid && m_creation_time_isValid && m_origin_isValid && m_subtype_isValid && m_tags_isValid && m_root_log_id_isValid && m_parent_log_id_isValid && m_children_isValid && true;
}

} // namespace OpenAPI