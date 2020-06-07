/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// LogTreeResponse : Response containing a single log tree.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct LogTreeResponse {
    #[serde(rename = "data")]
    pub data: crate::models::LogTree,
}

impl LogTreeResponse {
    /// Response containing a single log tree.
    pub fn new(data: crate::models::LogTree) -> LogTreeResponse {
        LogTreeResponse {
            data,
        }
    }
}

