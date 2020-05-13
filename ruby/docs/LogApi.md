# OpenapiClient::LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_log**](LogApi.md#create_log) | **POST** /logs | Adds a new log
[**get_log_by_id**](LogApi.md#get_log_by_id) | **GET** /logs/{logId} | Gets a log by Id
[**list_logs**](LogApi.md#list_logs) | **GET** /logs | List all logs
[**list_tags_by_log_id**](LogApi.md#list_tags_by_log_id) | **GET** /logs/{logId}/tags | Lists all tags associated with a log



## create_log

> LogResponse create_log(create_log)

Adds a new log

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::LogApi.new
create_log = OpenapiClient::CreateLog.new # CreateLog | 

begin
  #Adds a new log
  result = api_instance.create_log(create_log)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling LogApi->create_log: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **create_log** | [**CreateLog**](CreateLog.md)|  | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## get_log_by_id

> LogResponse get_log_by_id(log_id)

Gets a log by Id

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::LogApi.new
log_id = 56 # Integer | The id of the log to retrieve

begin
  #Gets a log by Id
  result = api_instance.get_log_by_id(log_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling LogApi->get_log_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **log_id** | **Integer**| The id of the log to retrieve | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## list_logs

> ArrayOfLogsResponse list_logs(opts)

List all logs

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::LogApi.new
opts = {
  filter_origin: OpenapiClient::LogOrigin.new, # LogOrigin | Filter logs by their origin
  page_offset: 0, # Integer | The number of items to skip before starting to collect the result set.
  page_limit: 100, # Integer | The numbers of items to return.
  sort: ['sort_example'] # Array<String> | The sort order of the returned items.
}

begin
  #List all logs
  result = api_instance.list_logs(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling LogApi->list_logs: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filter_origin** | [**LogOrigin**](.md)| Filter logs by their origin | [optional] 
 **page_offset** | **Integer**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **page_limit** | **Integer**| The numbers of items to return. | [optional] [default to 100]
 **sort** | [**Array&lt;String&gt;**](String.md)| The sort order of the returned items. | [optional] 

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## list_tags_by_log_id

> ArrayOfTagsResponse list_tags_by_log_id(log_id)

Lists all tags associated with a log

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::LogApi.new
log_id = 56 # Integer | The id of the log to retrieve

begin
  #Lists all tags associated with a log
  result = api_instance.list_tags_by_log_id(log_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling LogApi->list_tags_by_log_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **log_id** | **Integer**| The id of the log to retrieve | 

### Return type

[**ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

