/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 0.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// FilterLogsTagOptions Specifies the tag related filter requirements for a request.
type FilterLogsTagOptions struct {
	// CSV style string of EntityIds.
	Values string `json:"values"`
	// The operation indicating the relation between the data.
	Operation string `json:"operation"`
}
