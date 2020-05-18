/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ArrayOfLogsResponseMeta : The metadata related to an array of logs response.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct ArrayOfLogsResponseMeta {
    #[serde(rename = "page")]
    pub page: crate::models::PaginationMeta,
}

impl ArrayOfLogsResponseMeta {
    /// The metadata related to an array of logs response.
    pub fn new(page: crate::models::PaginationMeta) -> ArrayOfLogsResponseMeta {
        ArrayOfLogsResponseMeta {
            page,
        }
    }
}

