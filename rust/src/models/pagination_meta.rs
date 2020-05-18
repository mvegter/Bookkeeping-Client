/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PaginationMeta : The metadata related to pagination.



#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct PaginationMeta {
    /// The number of pages which contain data.
    #[serde(rename = "total")]
    pub total: i32,
}

impl PaginationMeta {
    /// The metadata related to pagination.
    pub fn new(total: i32) -> PaginationMeta {
        PaginationMeta {
            total,
        }
    }
}


