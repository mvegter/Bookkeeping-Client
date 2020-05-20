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
import java.math.BigDecimal;

/**
 * Deploy information
 */
@ApiModel(description = "Deploy information")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-05-20T16:22:25.784+01:00[Europe/London]")
public class DeployInformation {
  public static final String SERIALIZED_NAME_AGE = "age";
  @SerializedName(SERIALIZED_NAME_AGE)
  private BigDecimal age;

  public static final String SERIALIZED_NAME_START = "start";
  @SerializedName(SERIALIZED_NAME_START)
  private BigDecimal start;


  public DeployInformation age(BigDecimal age) {
    
    this.age = age;
    return this;
  }

   /**
   * The number of seconds that the server is online.
   * @return age
  **/
  @ApiModelProperty(required = true, value = "The number of seconds that the server is online.")

  public BigDecimal getAge() {
    return age;
  }


  public void setAge(BigDecimal age) {
    this.age = age;
  }


  public DeployInformation start(BigDecimal start) {
    
    this.start = start;
    return this;
  }

   /**
   * The unix timestamp of the moment that the the server went online.
   * @return start
  **/
  @ApiModelProperty(required = true, value = "The unix timestamp of the moment that the the server went online.")

  public BigDecimal getStart() {
    return start;
  }


  public void setStart(BigDecimal start) {
    this.start = start;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DeployInformation deployInformation = (DeployInformation) o;
    return Objects.equals(this.age, deployInformation.age) &&
        Objects.equals(this.start, deployInformation.start);
  }

  @Override
  public int hashCode() {
    return Objects.hash(age, start);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DeployInformation {\n");
    sb.append("    age: ").append(toIndentedString(age)).append("\n");
    sb.append("    start: ").append(toIndentedString(start)).append("\n");
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

