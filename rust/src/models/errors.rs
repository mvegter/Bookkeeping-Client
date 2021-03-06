/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// Errors : A list of Error objects.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct Errors {
    /// A list of Error objects.
    #[serde(rename = "errors")]
    pub errors: Vec<crate::models::Error>,
}

impl Errors {
    /// A list of Error objects.
    pub fn new(errors: Vec<crate::models::Error>) -> Errors {
        Errors {
            errors,
        }
    }
}


