/* 
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Response containing multiple subsystems.
    /// </summary>
    [DataContract]
    public partial class ArrayOfSubsystemsResponse :  IEquatable<ArrayOfSubsystemsResponse>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ArrayOfSubsystemsResponse" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ArrayOfSubsystemsResponse() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ArrayOfSubsystemsResponse" /> class.
        /// </summary>
        /// <param name="meta">meta.</param>
        /// <param name="data">A list of Subsystem objects. (required).</param>
        public ArrayOfSubsystemsResponse(ArrayOfSubsystemsResponseMeta meta = default(ArrayOfSubsystemsResponseMeta), List<Subsystem> data = default(List<Subsystem>))
        {
            // to ensure "data" is required (not null)
            if (data == null)
            {
                throw new InvalidDataException("data is a required property for ArrayOfSubsystemsResponse and cannot be null");
            }
            else
            {
                this.Data = data;
            }
            
            this.Meta = meta;
        }
        
        /// <summary>
        /// Gets or Sets Meta
        /// </summary>
        [DataMember(Name="meta", EmitDefaultValue=false)]
        public ArrayOfSubsystemsResponseMeta Meta { get; set; }

        /// <summary>
        /// A list of Subsystem objects.
        /// </summary>
        /// <value>A list of Subsystem objects.</value>
        [DataMember(Name="data", EmitDefaultValue=true)]
        public List<Subsystem> Data { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ArrayOfSubsystemsResponse {\n");
            sb.Append("  Meta: ").Append(Meta).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as ArrayOfSubsystemsResponse);
        }

        /// <summary>
        /// Returns true if ArrayOfSubsystemsResponse instances are equal
        /// </summary>
        /// <param name="input">Instance of ArrayOfSubsystemsResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ArrayOfSubsystemsResponse input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Meta == input.Meta ||
                    (this.Meta != null &&
                    this.Meta.Equals(input.Meta))
                ) && 
                (
                    this.Data == input.Data ||
                    this.Data != null &&
                    input.Data != null &&
                    this.Data.SequenceEqual(input.Data)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Meta != null)
                    hashCode = hashCode * 59 + this.Meta.GetHashCode();
                if (this.Data != null)
                    hashCode = hashCode * 59 + this.Data.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
