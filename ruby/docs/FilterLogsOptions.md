# OpenapiClient::FilterLogsOptions

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**origin** | [**LogOrigin**](LogOrigin.md) |  | [optional] 
**parent_log** | **Integer** | The unique identifier of this entity. | [optional] 
**root_log** | **Integer** | The unique identifier of this entity. | [optional] 
**tag** | [**FilterLogsTagOptions**](FilterLogsTagOptions.md) |  | [optional] 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::FilterLogsOptions.new(origin: null,
                                 parent_log: null,
                                 root_log: null,
                                 tag: null)
```


