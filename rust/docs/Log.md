# Log

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i64** | The unique identifier of this entity. | 
**author_id** | **String** | Name of the author. | 
**title** | **String** | Title of the log. | 
**text** | **String** | Body of the log. | 
**creation_time** | **i64** | Unix timestamp of the creation date time. | 
**origin** | [**crate::models::LogOrigin**](LogOrigin.md) |  | 
**subtype** | [**crate::models::LogSubtype**](LogSubtype.md) |  | 
**tags** | [**Vec<crate::models::Tag>**](Tag.md) | A list of Tag objects. | 
**root_log_id** | **i64** | The unique identifier of this entity. | 
**parent_log_id** | **i64** | The unique identifier of this entity. | 
**children** | Option<[**Vec<crate::models::Log>**](Log.md)> | A list of Log objects. | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


