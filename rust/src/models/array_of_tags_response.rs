/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ArrayOfTagsResponse : Response containing multiple tags.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct ArrayOfTagsResponse {
    /// A list of Tag objects.
    #[serde(rename = "data")]
    pub data: Vec<crate::models::Tag>,
}

impl ArrayOfTagsResponse {
    /// Response containing multiple tags.
    pub fn new(data: Vec<crate::models::Tag>) -> ArrayOfTagsResponse {
        ArrayOfTagsResponse {
            data,
        }
    }
}

