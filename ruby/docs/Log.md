# OpenapiClient::Log

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Integer** | The unique identifier of this entity. | 
**title** | **String** | Title of the log. | 
**text** | **String** | Body of the log. | 
**origin** | [**LogOrigin**](LogOrigin.md) |  | 
**tags** | [**Array&lt;Tag&gt;**](Tag.md) | A list of Tag objects. | 
**root_log_id** | **Integer** | The unique identifier of this entity. | 
**parent_log_id** | **Integer** | The unique identifier of this entity. | 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::Log.new(id: null,
                                 title: null,
                                 text: null,
                                 origin: null,
                                 tags: null,
                                 root_log_id: null,
                                 parent_log_id: null)
```


