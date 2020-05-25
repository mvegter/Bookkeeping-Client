# OpenapiClient::LogTree

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Integer** | The unique identifier of this entity. | 
**author_id** | **String** | Name of the author. | 
**title** | **String** | Title of the log. | 
**text** | **String** | Body of the log. | 
**creation_time** | **Integer** | Unix timestamp of the creation date time. | 
**origin** | [**LogOrigin**](LogOrigin.md) |  | 
**subtype** | [**LogSubtype**](LogSubtype.md) |  | 
**tags** | [**Array&lt;Tag&gt;**](Tag.md) | A list of Tag objects. | 
**root_log_id** | **Integer** | The unique identifier of this entity. | 
**parent_log_id** | **Integer** | The unique identifier of this entity. | 
**children** | [**Array&lt;LogTree&gt;**](LogTree.md) | A list of Log tree objects. | 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::LogTree.new(id: null,
                                 author_id: null,
                                 title: null,
                                 text: null,
                                 creation_time: null,
                                 origin: null,
                                 subtype: null,
                                 tags: null,
                                 root_log_id: null,
                                 parent_log_id: null,
                                 children: null)
```


