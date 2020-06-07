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

/**
 * A label attached to something for the purpose of identification.
 */
@ApiModel(description = "A label attached to something for the purpose of identification.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-06-07T12:27:51.952+01:00[Europe/London]")
public class Subsystem {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Long id;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_CREATED_AT = "createdAt";
  @SerializedName(SERIALIZED_NAME_CREATED_AT)
  private String createdAt;

  public static final String SERIALIZED_NAME_UPDATE_AT = "updateAt";
  @SerializedName(SERIALIZED_NAME_UPDATE_AT)
  private String updateAt;


  public Subsystem id(Long id) {
    
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


  public Subsystem name(String name) {
    
    this.name = name;
    return this;
  }

   /**
   * The label value of the subsystem.
   * @return name
  **/
  @ApiModelProperty(required = true, value = "The label value of the subsystem.")

  public String getName() {
    return name;
  }


  public void setName(String name) {
    this.name = name;
  }


  public Subsystem createdAt(String createdAt) {
    
    this.createdAt = createdAt;
    return this;
  }

   /**
   * Date when the subsystem was created.
   * @return createdAt
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Date when the subsystem was created.")

  public String getCreatedAt() {
    return createdAt;
  }


  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }


  public Subsystem updateAt(String updateAt) {
    
    this.updateAt = updateAt;
    return this;
  }

   /**
   * Date when the subsystem was last updated.
   * @return updateAt
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Date when the subsystem was last updated.")

  public String getUpdateAt() {
    return updateAt;
  }


  public void setUpdateAt(String updateAt) {
    this.updateAt = updateAt;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Subsystem subsystem = (Subsystem) o;
    return Objects.equals(this.id, subsystem.id) &&
        Objects.equals(this.name, subsystem.name) &&
        Objects.equals(this.createdAt, subsystem.createdAt) &&
        Objects.equals(this.updateAt, subsystem.updateAt);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, createdAt, updateAt);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Subsystem {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    updateAt: ").append(toIndentedString(updateAt)).append("\n");
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
