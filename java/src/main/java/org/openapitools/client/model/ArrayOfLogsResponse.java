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
import org.openapitools.client.model.Log;

/**
 * Response containing multiple logs.
 */
@ApiModel(description = "Response containing multiple logs.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-05-10T22:06:45.373+01:00[Europe/London]")
public class ArrayOfLogsResponse {
  public static final String SERIALIZED_NAME_DATA = "data";
  @SerializedName(SERIALIZED_NAME_DATA)
  private List<Log> data = new ArrayList<Log>();


  public ArrayOfLogsResponse data(List<Log> data) {
    
    this.data = data;
    return this;
  }

  public ArrayOfLogsResponse addDataItem(Log dataItem) {
    this.data.add(dataItem);
    return this;
  }

   /**
   * A list of Log objects.
   * @return data
  **/
  @ApiModelProperty(required = true, value = "A list of Log objects.")

  public List<Log> getData() {
    return data;
  }


  public void setData(List<Log> data) {
    this.data = data;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ArrayOfLogsResponse arrayOfLogsResponse = (ArrayOfLogsResponse) o;
    return Objects.equals(this.data, arrayOfLogsResponse.data);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ArrayOfLogsResponse {\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
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

