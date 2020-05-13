# openapi_client.TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_tag**](TagApi.md#create_tag) | **POST** /tags | Adds a new tag
[**get_logs_by_tag_id**](TagApi.md#get_logs_by_tag_id) | **GET** /tags/{tagId}/logs | Gets all logs with this tag id
[**get_tag_by_id**](TagApi.md#get_tag_by_id) | **GET** /tags/{tagId} | Gets a tag by Id
[**list_tags**](TagApi.md#list_tags) | **GET** /tags | List all tags


# **create_tag**
> TagResponse create_tag(create_tag)

Adds a new tag

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.TagApi(api_client)
    create_tag = openapi_client.CreateTag() # CreateTag | 

    try:
        # Adds a new tag
        api_response = api_instance.create_tag(create_tag)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TagApi->create_tag: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** | Expected response to a valid request. |  -  |
**400** | Bad Request |  -  |
**409** | Conflict |  -  |
**0** | Unexpected Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_logs_by_tag_id**
> ArrayOfLogsResponse get_logs_by_tag_id(tag_id)

Gets all logs with this tag id

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.TagApi(api_client)
    tag_id = 56 # int | The id of the tag to retrieve

    try:
        # Gets all logs with this tag id
        api_response = api_instance.get_logs_by_tag_id(tag_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TagApi->get_logs_by_tag_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tag_id** | **int**| The id of the tag to retrieve | 

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Expected response to a valid request. |  -  |
**400** | Bad Request |  -  |
**404** | Not Found |  -  |
**0** | Unexpected Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_tag_by_id**
> TagResponse get_tag_by_id(tag_id)

Gets a tag by Id

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.TagApi(api_client)
    tag_id = 56 # int | The id of the tag to retrieve

    try:
        # Gets a tag by Id
        api_response = api_instance.get_tag_by_id(tag_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TagApi->get_tag_by_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tag_id** | **int**| The id of the tag to retrieve | 

### Return type

[**TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Expected response to a valid request. |  -  |
**400** | Bad Request |  -  |
**404** | Not Found |  -  |
**0** | Unexpected Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_tags**
> ArrayOfTagsResponse list_tags(page=page)

List all tags

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.TagApi(api_client)
    page = openapi_client.PaginationOptions() # PaginationOptions | Specifies the pagination requirements. (optional)

    try:
        # List all tags
        api_response = api_instance.list_tags(page=page)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TagApi->list_tags: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | [**PaginationOptions**](.md)| Specifies the pagination requirements. | [optional] 

### Return type

[**ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Expected response to a valid request. |  -  |
**400** | Bad Request |  -  |
**0** | Unexpected Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

