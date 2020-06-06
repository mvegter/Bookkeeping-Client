# OpenapiClient::CreateLog

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**title** | **String** | Title of the log. | 
**text** | **String** | Body of the log. | 
**root_log_id** | **Integer** | The unique identifier of this entity. | [optional] 
**parent_log_id** | **Integer** | The unique identifier of this entity. | [optional] 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::CreateLog.new(title: null,
                                 text: null,
                                 root_log_id: null,
                                 parent_log_id: null)
```


