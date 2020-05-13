/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CreateLog : Describes an intervention or an event that happened.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct CreateLog {
    /// Title of the log.
    #[serde(rename = "title")]
    pub title: String,
}

impl CreateLog {
    /// Describes an intervention or an event that happened.
    pub fn new(title: String) -> CreateLog {
        CreateLog {
            title,
        }
    }
}

