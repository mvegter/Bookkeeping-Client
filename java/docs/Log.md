

# Log

Describes an intervention or an event that happened.
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**entryId** | **Long** | Id of the log. | 
**title** | **String** | Title of the log. | 
**origin** | [**OriginEnum**](#OriginEnum) | Type of creator. | 
**tags** | **List&lt;String&gt;** | A list of Tag objects. | 



## Enum: OriginEnum

Name | Value
---- | -----
HUMAN | &quot;human&quot;
PROCESS | &quot;process&quot;



