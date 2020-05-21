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
 * An object containing references to the source of the error.
 */
@ApiModel(description = "An object containing references to the source of the error.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-05-21T22:08:01.434+01:00[Europe/London]")
public class ErrorSource {
  public static final String SERIALIZED_NAME_POINTER = "pointer";
  @SerializedName(SERIALIZED_NAME_POINTER)
  private String pointer;


  public ErrorSource pointer(String pointer) {
    
    this.pointer = pointer;
    return this;
  }

   /**
   * A pointer to the associated entity in the request document.
   * @return pointer
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "A pointer to the associated entity in the request document.")

  public String getPointer() {
    return pointer;
  }


  public void setPointer(String pointer) {
    this.pointer = pointer;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ErrorSource errorSource = (ErrorSource) o;
    return Objects.equals(this.pointer, errorSource.pointer);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pointer);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ErrorSource {\n");
    sb.append("    pointer: ").append(toIndentedString(pointer)).append("\n");
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

