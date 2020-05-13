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
    /// Type of creator.
    /// </summary>
    /// <value>Type of creator.</value>
    
    [JsonConverter(typeof(StringEnumConverter))]
    
    public enum LogOrigin
    {
        /// <summary>
        /// Enum Human for value: human
        /// </summary>
        [EnumMember(Value = "human")]
        Human = 1,

        /// <summary>
        /// Enum Process for value: process
        /// </summary>
        [EnumMember(Value = "process")]
        Process = 2

    }

}