# OpenapiClient::Error

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**status** | **String** | The HTTP status code applicable to this problem. | 
**title** | **String** | A short, human-readable summary of the problem. | 
**detail** | **String** | A human-readable explanation specific to this occurrence of the problem. | [optional] 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::Error.new(status: null,
                                 title: null,
                                 detail: null)
```

