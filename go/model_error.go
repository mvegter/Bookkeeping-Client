/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 0.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// Error An Error object.
type Error struct {
	// The HTTP status code applicable to this problem.
	Status string `json:"status"`
	// A short, human-readable summary of the problem.
	Title string `json:"title"`
	// A human-readable explanation specific to this occurrence of the problem.
	Detail string `json:"detail,omitempty"`
}