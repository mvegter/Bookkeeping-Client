# LogTree

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int64** | The unique identifier of this entity. | 
**AuthorId** | **string** | Name of the author. | 
**Title** | **string** | Title of the log. | 
**Text** | **string** | Body of the log. | 
**CreationTime** | **int64** | Unix timestamp of the creation date time. | 
**Origin** | [**LogOrigin**](LogOrigin.md) |  | 
**Subtype** | [**LogSubtype**](LogSubtype.md) |  | 
**Tags** | [**[]Tag**](Tag.md) | A list of Tag objects. | 
**RootLogId** | **int64** | The unique identifier of this entity. | 
**ParentLogId** | **int64** | The unique identifier of this entity. | 
**Children** | [**[]LogTree**](LogTree.md) | A list of Log tree objects. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


