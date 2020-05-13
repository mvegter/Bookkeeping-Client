# OpenapiClient::PaginationOptions

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**limit** | **Integer** | The numbers of items to return. | [optional] [default to 100]
**offset** | **Integer** | The number of items to skip before starting to collect the result set. | [optional] [default to 0]

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::PaginationOptions.new(limit: null,
                                 offset: null)
```


