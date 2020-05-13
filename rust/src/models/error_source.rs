/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ErrorSource : An object containing references to the source of the error.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct ErrorSource {
    /// A pointer to the associated entity in the request document.
    #[serde(rename = "pointer", skip_serializing_if = "Option::is_none")]
    pub pointer: Option<String>,
}

impl ErrorSource {
    /// An object containing references to the source of the error.
    pub fn new() -> ErrorSource {
        ErrorSource {
            pointer: None,
        }
    }
}


