/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SubsystemResponse : Response containing a single subsystem.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct SubsystemResponse {
    #[serde(rename = "data")]
    pub data: crate::models::Subsystem,
}

impl SubsystemResponse {
    /// Response containing a single subsystem.
    pub fn new(data: crate::models::Subsystem) -> SubsystemResponse {
        SubsystemResponse {
            data,
        }
    }
}


