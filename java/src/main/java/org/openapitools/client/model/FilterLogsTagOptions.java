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
 * Specifies the tag related filter requirements for a request.
 */
@ApiModel(description = "Specifies the tag related filter requirements for a request.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-06-06T15:47:20.423+01:00[Europe/London]")
public class FilterLogsTagOptions {
  public static final String SERIALIZED_NAME_VALUES = "values";
  @SerializedName(SERIALIZED_NAME_VALUES)
  private String values;

  /**
   * The operation indicating the relation between the data.
   */
  @JsonAdapter(OperationEnum.Adapter.class)
  public enum OperationEnum {
    AND("and"),
    
    OR("or");

    private String value;

    OperationEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static OperationEnum fromValue(String value) {
      for (OperationEnum b : OperationEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<OperationEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final OperationEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public OperationEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return OperationEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_OPERATION = "operation";
  @SerializedName(SERIALIZED_NAME_OPERATION)
  private OperationEnum operation;


  public FilterLogsTagOptions values(String values) {
    
    this.values = values;
    return this;
  }

   /**
   * CSV style string of EntityIds.
   * @return values
  **/
  @ApiModelProperty(example = "1,2,3", required = true, value = "CSV style string of EntityIds.")

  public String getValues() {
    return values;
  }


  public void setValues(String values) {
    this.values = values;
  }


  public FilterLogsTagOptions operation(OperationEnum operation) {
    
    this.operation = operation;
    return this;
  }

   /**
   * The operation indicating the relation between the data.
   * @return operation
  **/
  @ApiModelProperty(required = true, value = "The operation indicating the relation between the data.")

  public OperationEnum getOperation() {
    return operation;
  }


  public void setOperation(OperationEnum operation) {
    this.operation = operation;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FilterLogsTagOptions filterLogsTagOptions = (FilterLogsTagOptions) o;
    return Objects.equals(this.values, filterLogsTagOptions.values) &&
        Objects.equals(this.operation, filterLogsTagOptions.operation);
  }

  @Override
  public int hashCode() {
    return Objects.hash(values, operation);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FilterLogsTagOptions {\n");
    sb.append("    values: ").append(toIndentedString(values)).append("\n");
    sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
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

