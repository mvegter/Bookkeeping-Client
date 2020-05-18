/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 0.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// Log Describes an intervention or an event that happened.
type Log struct {
	// The unique identifier of this entity.
	EntryId int64 `json:"entryId"`
	// Body of the log.
	Title string `json:"title"`
	// Title of the log.
	Text string `json:"text"`
	Origin LogOrigin `json:"origin"`
	// A list of Tag objects.
	Tags []Tag `json:"tags"`
}
