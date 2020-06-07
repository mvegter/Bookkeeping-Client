/*
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.LogOrigin;
import org.openapitools.client.model.LogSubtype;
import org.openapitools.client.model.Tag;

/**
 * Describes an intervention or an event that happened.
 */
@ApiModel(description = "Describes an intervention or an event that happened.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-06-07T12:27:51.952+01:00[Europe/London]")
public class LogTree {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Long id;

  public static final String SERIALIZED_NAME_AUTHOR_ID = "authorId";
  @SerializedName(SERIALIZED_NAME_AUTHOR_ID)
  private String authorId;

  public static final String SERIALIZED_NAME_TITLE = "title";
  @SerializedName(SERIALIZED_NAME_TITLE)
  private String title;

  public static final String SERIALIZED_NAME_TEXT = "text";
  @SerializedName(SERIALIZED_NAME_TEXT)
  private String text;

  public static final String SERIALIZED_NAME_CREATION_TIME = "creationTime";
  @SerializedName(SERIALIZED_NAME_CREATION_TIME)
  private Long creationTime;

  public static final String SERIALIZED_NAME_ORIGIN = "origin";
  @SerializedName(SERIALIZED_NAME_ORIGIN)
  private LogOrigin origin;

  public static final String SERIALIZED_NAME_SUBTYPE = "subtype";
  @SerializedName(SERIALIZED_NAME_SUBTYPE)
  private LogSubtype subtype;

  public static final String SERIALIZED_NAME_TAGS = "tags";
  @SerializedName(SERIALIZED_NAME_TAGS)
  private List<Tag> tags = new ArrayList<Tag>();

  public static final String SERIALIZED_NAME_ROOT_LOG_ID = "rootLogId";
  @SerializedName(SERIALIZED_NAME_ROOT_LOG_ID)
  private Long rootLogId;

  public static final String SERIALIZED_NAME_PARENT_LOG_ID = "parentLogId";
  @SerializedName(SERIALIZED_NAME_PARENT_LOG_ID)
  private Long parentLogId;

  public static final String SERIALIZED_NAME_CHILDREN = "children";
  @SerializedName(SERIALIZED_NAME_CHILDREN)
  private List<LogTree> children = new ArrayList<LogTree>();


  public LogTree id(Long id) {
    
    this.id = id;
    return this;
  }

   /**
   * The unique identifier of this entity.
   * minimum: 1
   * @return id
  **/
  @ApiModelProperty(required = true, value = "The unique identifier of this entity.")

  public Long getId() {
    return id;
  }


  public void setId(Long id) {
    this.id = id;
  }


  public LogTree authorId(String authorId) {
    
    this.authorId = authorId;
    return this;
  }

   /**
   * Name of the author.
   * @return authorId
  **/
  @ApiModelProperty(required = true, value = "Name of the author.")

  public String getAuthorId() {
    return authorId;
  }


  public void setAuthorId(String authorId) {
    this.authorId = authorId;
  }


  public LogTree title(String title) {
    
    this.title = title;
    return this;
  }

   /**
   * Title of the log.
   * @return title
  **/
  @ApiModelProperty(required = true, value = "Title of the log.")

  public String getTitle() {
    return title;
  }


  public void setTitle(String title) {
    this.title = title;
  }


  public LogTree text(String text) {
    
    this.text = text;
    return this;
  }

   /**
   * Body of the log.
   * @return text
  **/
  @ApiModelProperty(required = true, value = "Body of the log.")

  public String getText() {
    return text;
  }


  public void setText(String text) {
    this.text = text;
  }


  public LogTree creationTime(Long creationTime) {
    
    this.creationTime = creationTime;
    return this;
  }

   /**
   * Unix timestamp of the creation date time.
   * @return creationTime
  **/
  @ApiModelProperty(required = true, value = "Unix timestamp of the creation date time.")

  public Long getCreationTime() {
    return creationTime;
  }


  public void setCreationTime(Long creationTime) {
    this.creationTime = creationTime;
  }


  public LogTree origin(LogOrigin origin) {
    
    this.origin = origin;
    return this;
  }

   /**
   * Get origin
   * @return origin
  **/
  @ApiModelProperty(required = true, value = "")

  public LogOrigin getOrigin() {
    return origin;
  }


  public void setOrigin(LogOrigin origin) {
    this.origin = origin;
  }


  public LogTree subtype(LogSubtype subtype) {
    
    this.subtype = subtype;
    return this;
  }

   /**
   * Get subtype
   * @return subtype
  **/
  @ApiModelProperty(required = true, value = "")

  public LogSubtype getSubtype() {
    return subtype;
  }


  public void setSubtype(LogSubtype subtype) {
    this.subtype = subtype;
  }


  public LogTree tags(List<Tag> tags) {
    
    this.tags = tags;
    return this;
  }

  public LogTree addTagsItem(Tag tagsItem) {
    this.tags.add(tagsItem);
    return this;
  }

   /**
   * A list of Tag objects.
   * @return tags
  **/
  @ApiModelProperty(required = true, value = "A list of Tag objects.")

  public List<Tag> getTags() {
    return tags;
  }


  public void setTags(List<Tag> tags) {
    this.tags = tags;
  }


  public LogTree rootLogId(Long rootLogId) {
    
    this.rootLogId = rootLogId;
    return this;
  }

   /**
   * The unique identifier of this entity.
   * minimum: 1
   * @return rootLogId
  **/
  @ApiModelProperty(required = true, value = "The unique identifier of this entity.")

  public Long getRootLogId() {
    return rootLogId;
  }


  public void setRootLogId(Long rootLogId) {
    this.rootLogId = rootLogId;
  }


  public LogTree parentLogId(Long parentLogId) {
    
    this.parentLogId = parentLogId;
    return this;
  }

   /**
   * The unique identifier of this entity.
   * minimum: 1
   * @return parentLogId
  **/
  @ApiModelProperty(required = true, value = "The unique identifier of this entity.")

  public Long getParentLogId() {
    return parentLogId;
  }


  public void setParentLogId(Long parentLogId) {
    this.parentLogId = parentLogId;
  }


  public LogTree children(List<LogTree> children) {
    
    this.children = children;
    return this;
  }

  public LogTree addChildrenItem(LogTree childrenItem) {
    this.children.add(childrenItem);
    return this;
  }

   /**
   * A list of Log tree objects.
   * @return children
  **/
  @ApiModelProperty(required = true, value = "A list of Log tree objects.")

  public List<LogTree> getChildren() {
    return children;
  }


  public void setChildren(List<LogTree> children) {
    this.children = children;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LogTree logTree = (LogTree) o;
    return Objects.equals(this.id, logTree.id) &&
        Objects.equals(this.authorId, logTree.authorId) &&
        Objects.equals(this.title, logTree.title) &&
        Objects.equals(this.text, logTree.text) &&
        Objects.equals(this.creationTime, logTree.creationTime) &&
        Objects.equals(this.origin, logTree.origin) &&
        Objects.equals(this.subtype, logTree.subtype) &&
        Objects.equals(this.tags, logTree.tags) &&
        Objects.equals(this.rootLogId, logTree.rootLogId) &&
        Objects.equals(this.parentLogId, logTree.parentLogId) &&
        Objects.equals(this.children, logTree.children);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, authorId, title, text, creationTime, origin, subtype, tags, rootLogId, parentLogId, children);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LogTree {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    authorId: ").append(toIndentedString(authorId)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    creationTime: ").append(toIndentedString(creationTime)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    subtype: ").append(toIndentedString(subtype)).append("\n");
    sb.append("    tags: ").append(toIndentedString(tags)).append("\n");
    sb.append("    rootLogId: ").append(toIndentedString(rootLogId)).append("\n");
    sb.append("    parentLogId: ").append(toIndentedString(parentLogId)).append("\n");
    sb.append("    children: ").append(toIndentedString(children)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}
