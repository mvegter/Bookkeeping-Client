# OpenapiClient::SubsystemApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_subsystem**](SubsystemApi.md#create_subsystem) | **POST** /subsystems | Adds a new subsystem
[**delete_subsystem**](SubsystemApi.md#delete_subsystem) | **DELETE** /subsystems/{subsystemId} | Deletes a subsystem by Id
[**get_subsystem**](SubsystemApi.md#get_subsystem) | **GET** /subsystems/{subsystemId} | Get a subsystem by Id
[**list_subsystems**](SubsystemApi.md#list_subsystems) | **GET** /subsystems | List all subsystems



## create_subsystem

> SubsystemResponse create_subsystem(create_subsystem)

Adds a new subsystem

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

api_instance = OpenapiClient::SubsystemApi.new
create_subsystem = OpenapiClient::CreateSubsystem.new # CreateSubsystem | 

begin
  #Adds a new subsystem
  result = api_instance.create_subsystem(create_subsystem)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling SubsystemApi->create_subsystem: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **create_subsystem** | [**CreateSubsystem**](CreateSubsystem.md)|  | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## delete_subsystem

> SubsystemResponse delete_subsystem(subsystem_id)

Deletes a subsystem by Id

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

api_instance = OpenapiClient::SubsystemApi.new
subsystem_id = 56 # Integer | The id of the subsystem to retrieve

begin
  #Deletes a subsystem by Id
  result = api_instance.delete_subsystem(subsystem_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling SubsystemApi->delete_subsystem: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subsystem_id** | **Integer**| The id of the subsystem to retrieve | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_subsystem

> SubsystemResponse get_subsystem(subsystem_id)

Get a subsystem by Id

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

api_instance = OpenapiClient::SubsystemApi.new
subsystem_id = 56 # Integer | The id of the subsystem to retrieve

begin
  #Get a subsystem by Id
  result = api_instance.get_subsystem(subsystem_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling SubsystemApi->get_subsystem: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subsystem_id** | **Integer**| The id of the subsystem to retrieve | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## list_subsystems

> ArrayOfSubsystemsResponse list_subsystems(opts)

List all subsystems

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

api_instance = OpenapiClient::SubsystemApi.new
opts = {
  page: OpenapiClient::PaginationOptions.new # PaginationOptions | Specifies the pagination requirements.
}

begin
  #List all subsystems
  result = api_instance.list_subsystems(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling SubsystemApi->list_subsystems: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | [**PaginationOptions**](.md)| Specifies the pagination requirements. | [optional] 

### Return type

[**ArrayOfSubsystemsResponse**](ArrayOfSubsystemsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

