

# Log

Describes an intervention or an event that happened.
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Long** | The unique identifier of this entity. | 
**authorId** | **String** | Name of the author. | 
**title** | **String** | Title of the log. | 
**text** | **String** | Body of the log. | 
**creationTime** | **Long** | Unix timestamp of the creation date time. | 
**origin** | [**LogOrigin**](LogOrigin.md) |  | 
**subtype** | [**LogSubtype**](LogSubtype.md) |  | 
**tags** | [**List&lt;Tag&gt;**](Tag.md) | A list of Tag objects. | 
**rootLogId** | **Long** | The unique identifier of this entity. | 
**parentLogId** | **Long** | The unique identifier of this entity. | 



