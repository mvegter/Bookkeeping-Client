/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 0.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// ArrayOfLogsResponse Response containing multiple logs.
type ArrayOfLogsResponse struct {
	// A list of Log objects.
	Data []Log `json:"data"`
}
