# OpenapiClient::DefaultApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_deploy_information**](DefaultApi.md#get_deploy_information) | **GET** /status | Get deploy information
[**get_server_information**](DefaultApi.md#get_server_information) | **GET** / | Get server information



## get_deploy_information

> DeployInformation get_deploy_information

Get deploy information

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: ApiKeyAuth
  config.api_key['token'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['token'] = 'Bearer'
end

api_instance = OpenapiClient::DefaultApi.new

begin
  #Get deploy information
  result = api_instance.get_deploy_information
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling DefaultApi->get_deploy_information: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**DeployInformation**](DeployInformation.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_server_information

> ApiInformation get_server_information

Get server information

### Example

```ruby
# load the gem
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: ApiKeyAuth
  config.api_key['token'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['token'] = 'Bearer'
end

api_instance = OpenapiClient::DefaultApi.new

begin
  #Get server information
  result = api_instance.get_server_information
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling DefaultApi->get_server_information: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ApiInformation**](ApiInformation.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

