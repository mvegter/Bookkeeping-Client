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
    /// Describes an intervention or an event that happened.
    /// </summary>
    [DataContract]
    public partial class Log :  IEquatable<Log>, IValidatableObject
    {
        /// <summary>
        /// Gets or Sets Origin
        /// </summary>
        [DataMember(Name="origin", EmitDefaultValue=true)]
        public LogOrigin Origin { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="Log" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected Log() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="Log" /> class.
        /// </summary>
        /// <param name="id">The unique identifier of this entity. (required).</param>
        /// <param name="title">Body of the log. (required).</param>
        /// <param name="text">Title of the log. (required).</param>
        /// <param name="origin">origin (required).</param>
        /// <param name="tags">A list of Tag objects. (required).</param>
        /// <param name="rootLogId">The unique identifier of this entity. (required).</param>
        /// <param name="parentLogId">The unique identifier of this entity. (required).</param>
        public Log(long id = default(long), string title = default(string), string text = default(string), LogOrigin origin = default(LogOrigin), List<Tag> tags = default(List<Tag>), long rootLogId = default(long), long parentLogId = default(long))
        {
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for Log and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            
            // to ensure "title" is required (not null)
            if (title == null)
            {
                throw new InvalidDataException("title is a required property for Log and cannot be null");
            }
            else
            {
                this.Title = title;
            }
            
            // to ensure "text" is required (not null)
            if (text == null)
            {
                throw new InvalidDataException("text is a required property for Log and cannot be null");
            }
            else
            {
                this.Text = text;
            }
            
            // to ensure "origin" is required (not null)
            if (origin == null)
            {
                throw new InvalidDataException("origin is a required property for Log and cannot be null");
            }
            else
            {
                this.Origin = origin;
            }
            
            // to ensure "tags" is required (not null)
            if (tags == null)
            {
                throw new InvalidDataException("tags is a required property for Log and cannot be null");
            }
            else
            {
                this.Tags = tags;
            }
            
            // to ensure "rootLogId" is required (not null)
            if (rootLogId == null)
            {
                throw new InvalidDataException("rootLogId is a required property for Log and cannot be null");
            }
            else
            {
                this.RootLogId = rootLogId;
            }
            
            // to ensure "parentLogId" is required (not null)
            if (parentLogId == null)
            {
                throw new InvalidDataException("parentLogId is a required property for Log and cannot be null");
            }
            else
            {
                this.ParentLogId = parentLogId;
            }
            
        }
        
        /// <summary>
        /// The unique identifier of this entity.
        /// </summary>
        /// <value>The unique identifier of this entity.</value>
        [DataMember(Name="id", EmitDefaultValue=true)]
        public long Id { get; set; }

        /// <summary>
        /// Body of the log.
        /// </summary>
        /// <value>Body of the log.</value>
        [DataMember(Name="title", EmitDefaultValue=true)]
        public string Title { get; set; }

        /// <summary>
        /// Title of the log.
        /// </summary>
        /// <value>Title of the log.</value>
        [DataMember(Name="text", EmitDefaultValue=true)]
        public string Text { get; set; }


        /// <summary>
        /// A list of Tag objects.
        /// </summary>
        /// <value>A list of Tag objects.</value>
        [DataMember(Name="tags", EmitDefaultValue=true)]
        public List<Tag> Tags { get; set; }

        /// <summary>
        /// The unique identifier of this entity.
        /// </summary>
        /// <value>The unique identifier of this entity.</value>
        [DataMember(Name="rootLogId", EmitDefaultValue=true)]
        public long RootLogId { get; set; }

        /// <summary>
        /// The unique identifier of this entity.
        /// </summary>
        /// <value>The unique identifier of this entity.</value>
        [DataMember(Name="parentLogId", EmitDefaultValue=true)]
        public long ParentLogId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Log {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("  Origin: ").Append(Origin).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  RootLogId: ").Append(RootLogId).Append("\n");
            sb.Append("  ParentLogId: ").Append(ParentLogId).Append("\n");
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
            return this.Equals(input as Log);
        }

        /// <summary>
        /// Returns true if Log instances are equal
        /// </summary>
        /// <param name="input">Instance of Log to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Log input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Title == input.Title ||
                    (this.Title != null &&
                    this.Title.Equals(input.Title))
                ) && 
                (
                    this.Text == input.Text ||
                    (this.Text != null &&
                    this.Text.Equals(input.Text))
                ) && 
                (
                    this.Origin == input.Origin ||
                    (this.Origin != null &&
                    this.Origin.Equals(input.Origin))
                ) && 
                (
                    this.Tags == input.Tags ||
                    this.Tags != null &&
                    input.Tags != null &&
                    this.Tags.SequenceEqual(input.Tags)
                ) && 
                (
                    this.RootLogId == input.RootLogId ||
                    (this.RootLogId != null &&
                    this.RootLogId.Equals(input.RootLogId))
                ) && 
                (
                    this.ParentLogId == input.ParentLogId ||
                    (this.ParentLogId != null &&
                    this.ParentLogId.Equals(input.ParentLogId))
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
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.Title != null)
                    hashCode = hashCode * 59 + this.Title.GetHashCode();
                if (this.Text != null)
                    hashCode = hashCode * 59 + this.Text.GetHashCode();
                if (this.Origin != null)
                    hashCode = hashCode * 59 + this.Origin.GetHashCode();
                if (this.Tags != null)
                    hashCode = hashCode * 59 + this.Tags.GetHashCode();
                if (this.RootLogId != null)
                    hashCode = hashCode * 59 + this.RootLogId.GetHashCode();
                if (this.ParentLogId != null)
                    hashCode = hashCode * 59 + this.ParentLogId.GetHashCode();
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

            
            // Id (long) minimum
            if(this.Id < (long)1)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Id, must be a value greater than or equal to 1.", new [] { "Id" });
            }


            // Title (string) minLength
            if(this.Title != null && this.Title.Length < 3)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Title, length must be greater than 3.", new [] { "Title" });
            }
            

            // Text (string) minLength
            if(this.Text != null && this.Text.Length < 3)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Text, length must be greater than 3.", new [] { "Text" });
            }
            

            
            // RootLogId (long) minimum
            if(this.RootLogId < (long)1)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for RootLogId, must be a value greater than or equal to 1.", new [] { "RootLogId" });
            }


            
            // ParentLogId (long) minimum
            if(this.ParentLogId < (long)1)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for ParentLogId, must be a value greater than or equal to 1.", new [] { "ParentLogId" });
            }

            yield break;
        }
    }

}
