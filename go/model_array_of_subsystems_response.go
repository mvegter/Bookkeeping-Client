/*
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 0.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// ArrayOfSubsystemsResponse Response containing multiple subsystems.
type ArrayOfSubsystemsResponse struct {
	Meta ArrayOfSubsystemsResponseMeta `json:"meta,omitempty"`
	// A list of Subsystem objects.
	Data []Subsystem `json:"data"`
}
