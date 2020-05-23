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
	Id int64 `json:"id"`
	// Name of the author.
	AuthorId string `json:"authorId"`
	// Title of the log.
	Title string `json:"title"`
	// Body of the log.
	Text string `json:"text"`
	// Unix timestamp of the creation date time.
	CreationTime int64 `json:"creationTime"`
	Origin LogOrigin `json:"origin"`
	Subtype LogSubtype `json:"subtype"`
	// A list of Tag objects.
	Tags []Tag `json:"tags"`
	// The unique identifier of this entity.
	RootLogId int64 `json:"rootLogId"`
	// The unique identifier of this entity.
	ParentLogId int64 `json:"parentLogId"`
	// A list of Log objects.
	Children []Log `json:"children,omitempty"`
}
