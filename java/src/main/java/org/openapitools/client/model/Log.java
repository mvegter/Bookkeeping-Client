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
import org.openapitools.client.model.Tag;

/**
 * Describes an intervention or an event that happened.
 */
@ApiModel(description = "Describes an intervention or an event that happened.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-05-20T10:42:03.827+01:00[Europe/London]")
public class Log {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Long id;

  public static final String SERIALIZED_NAME_TITLE = "title";
  @SerializedName(SERIALIZED_NAME_TITLE)
  private String title;

  public static final String SERIALIZED_NAME_TEXT = "text";
  @SerializedName(SERIALIZED_NAME_TEXT)
  private String text;

  public static final String SERIALIZED_NAME_ORIGIN = "origin";
  @SerializedName(SERIALIZED_NAME_ORIGIN)
  private LogOrigin origin;

  public static final String SERIALIZED_NAME_TAGS = "tags";
  @SerializedName(SERIALIZED_NAME_TAGS)
  private List<Tag> tags = new ArrayList<Tag>();


  public Log id(Long id) {
    
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


  public Log title(String title) {
    
    this.title = title;
    return this;
  }

   /**
   * Body of the log.
   * @return title
  **/
  @ApiModelProperty(required = true, value = "Body of the log.")

  public String getTitle() {
    return title;
  }


  public void setTitle(String title) {
    this.title = title;
  }


  public Log text(String text) {
    
    this.text = text;
    return this;
  }

   /**
   * Title of the log.
   * @return text
  **/
  @ApiModelProperty(required = true, value = "Title of the log.")

  public String getText() {
    return text;
  }


  public void setText(String text) {
    this.text = text;
  }


  public Log origin(LogOrigin origin) {
    
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


  public Log tags(List<Tag> tags) {
    
    this.tags = tags;
    return this;
  }

  public Log addTagsItem(Tag tagsItem) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Log log = (Log) o;
    return Objects.equals(this.id, log.id) &&
        Objects.equals(this.title, log.title) &&
        Objects.equals(this.text, log.text) &&
        Objects.equals(this.origin, log.origin) &&
        Objects.equals(this.tags, log.tags);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, title, text, origin, tags);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Log {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    tags: ").append(toIndentedString(tags)).append("\n");
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

