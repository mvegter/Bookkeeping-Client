# OpenapiClient::Log

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Integer** | The unique identifier of this entity. | 
**title** | **String** | Body of the log. | 
**text** | **String** | Title of the log. | 
**origin** | [**LogOrigin**](LogOrigin.md) |  | 
**tags** | [**Array&lt;Tag&gt;**](Tag.md) | A list of Tag objects. | 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::Log.new(id: null,
                                 title: null,
                                 text: null,
                                 origin: null,
                                 tags: null)
```


