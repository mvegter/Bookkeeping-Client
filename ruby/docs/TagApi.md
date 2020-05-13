# OpenapiClient::TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_tag**](TagApi.md#create_tag) | **POST** /tags | Adds a new tag
[**get_logs_by_tag_id**](TagApi.md#get_logs_by_tag_id) | **GET** /tags/{tagId}/logs | Gets all logs with this tag id
[**get_tag_by_id**](TagApi.md#get_tag_by_id) | **GET** /tags/{tagId} | Gets a tag by Id
[**list_tags**](TagApi.md#list_tags) | **GET** /tags | List all tags



## create_tag

> TagResponse create_tag(create_tag)

Adds a new tag

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::TagApi.new
create_tag = OpenapiClient::CreateTag.new # CreateTag | 

begin
  #Adds a new tag
  result = api_instance.create_tag(create_tag)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling TagApi->create_tag: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **create_tag** | [**CreateTag**](CreateTag.md)|  | 

### Return type

[**TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## get_logs_by_tag_id

> ArrayOfLogsResponse get_logs_by_tag_id(tag_id)

Gets all logs with this tag id

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::TagApi.new
tag_id = 56 # Integer | The id of the tag to retrieve

begin
  #Gets all logs with this tag id
  result = api_instance.get_logs_by_tag_id(tag_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling TagApi->get_logs_by_tag_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tag_id** | **Integer**| The id of the tag to retrieve | 

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## get_tag_by_id

> TagResponse get_tag_by_id(tag_id)

Gets a tag by Id

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::TagApi.new
tag_id = 56 # Integer | The id of the tag to retrieve

begin
  #Gets a tag by Id
  result = api_instance.get_tag_by_id(tag_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling TagApi->get_tag_by_id: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tag_id** | **Integer**| The id of the tag to retrieve | 

### Return type

[**TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## list_tags

> ArrayOfTagsResponse list_tags(opts)

List all tags

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::TagApi.new
opts = {
  page_offset: 0, # Integer | The number of items to skip before starting to collect the result set.
  page_limit: 100 # Integer | The numbers of items to return.
}

begin
  #List all tags
  result = api_instance.list_tags(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling TagApi->list_tags: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page_offset** | **Integer**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **page_limit** | **Integer**| The numbers of items to return. | [optional] [default to 100]

### Return type

[**ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

