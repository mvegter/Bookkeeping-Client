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
    /// Specifies the log related filter requirements for a request.
    /// </summary>
    [DataContract]
    public partial class FilterLogsOptions :  IEquatable<FilterLogsOptions>, IValidatableObject
    {
        /// <summary>
        /// Gets or Sets Origin
        /// </summary>
        [DataMember(Name="origin", EmitDefaultValue=false)]
        public LogOrigin? Origin { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="FilterLogsOptions" /> class.
        /// </summary>
        /// <param name="origin">origin.</param>
        /// <param name="parentLog">The unique identifier of this entity..</param>
        /// <param name="rootLog">The unique identifier of this entity..</param>
        /// <param name="tag">tag.</param>
        public FilterLogsOptions(LogOrigin? origin = default(LogOrigin?), long parentLog = default(long), long rootLog = default(long), FilterLogsTagOptions tag = default(FilterLogsTagOptions))
        {
            this.Origin = origin;
            this.ParentLog = parentLog;
            this.RootLog = rootLog;
            this.Tag = tag;
        }
        

        /// <summary>
        /// The unique identifier of this entity.
        /// </summary>
        /// <value>The unique identifier of this entity.</value>
        [DataMember(Name="parentLog", EmitDefaultValue=false)]
        public long ParentLog { get; set; }

        /// <summary>
        /// The unique identifier of this entity.
        /// </summary>
        /// <value>The unique identifier of this entity.</value>
        [DataMember(Name="rootLog", EmitDefaultValue=false)]
        public long RootLog { get; set; }

        /// <summary>
        /// Gets or Sets Tag
        /// </summary>
        [DataMember(Name="tag", EmitDefaultValue=false)]
        public FilterLogsTagOptions Tag { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class FilterLogsOptions {\n");
            sb.Append("  Origin: ").Append(Origin).Append("\n");
            sb.Append("  ParentLog: ").Append(ParentLog).Append("\n");
            sb.Append("  RootLog: ").Append(RootLog).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
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
            return this.Equals(input as FilterLogsOptions);
        }

        /// <summary>
        /// Returns true if FilterLogsOptions instances are equal
        /// </summary>
        /// <param name="input">Instance of FilterLogsOptions to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(FilterLogsOptions input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Origin == input.Origin ||
                    (this.Origin != null &&
                    this.Origin.Equals(input.Origin))
                ) && 
                (
                    this.ParentLog == input.ParentLog ||
                    (this.ParentLog != null &&
                    this.ParentLog.Equals(input.ParentLog))
                ) && 
                (
                    this.RootLog == input.RootLog ||
                    (this.RootLog != null &&
                    this.RootLog.Equals(input.RootLog))
                ) && 
                (
                    this.Tag == input.Tag ||
                    (this.Tag != null &&
                    this.Tag.Equals(input.Tag))
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
                if (this.Origin != null)
                    hashCode = hashCode * 59 + this.Origin.GetHashCode();
                if (this.ParentLog != null)
                    hashCode = hashCode * 59 + this.ParentLog.GetHashCode();
                if (this.RootLog != null)
                    hashCode = hashCode * 59 + this.RootLog.GetHashCode();
                if (this.Tag != null)
                    hashCode = hashCode * 59 + this.Tag.GetHashCode();
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

            
            // ParentLog (long) minimum
            if(this.ParentLog < (long)1)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for ParentLog, must be a value greater than or equal to 1.", new [] { "ParentLog" });
            }


            
            // RootLog (long) minimum
            if(this.RootLog < (long)1)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for RootLog, must be a value greater than or equal to 1.", new [] { "RootLog" });
            }

            yield break;
        }
    }

}
