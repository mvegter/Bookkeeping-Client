# openapi_client.TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_tag**](TagApi.md#create_tag) | **POST** /tags | Adds a new tag
[**get_logs_by_tag_id**](TagApi.md#get_logs_by_tag_id) | **GET** /tags/{tagId}/logs | Gets all logs with this tag id
[**get_tag_by_id**](TagApi.md#get_tag_by_id) | **GET** /tags/{tagId} | Gets a tag by Id
[**list_tags**](TagApi.md#list_tags) | **GET** /tags | List all tags
[**list_tags_by_log_id**](TagApi.md#list_tags_by_log_id) | **GET** /logs/{logId}/tags | Lists all tags associated with a log


# **create_tag**
> TagResponse create_tag()

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
    
    try:
        # Adds a new tag
        api_response = api_instance.create_tag()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TagApi->create_tag: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

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
> ArrayOfTagsResponse list_tags(page_offset=page_offset, page_limit=page_limit)

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
    page_offset = 0 # int | The number of items to skip before starting to collect the result set. (optional) (default to 0)
page_limit = 100 # int | The numbers of items to return. (optional) (default to 100)

    try:
        # List all tags
        api_response = api_instance.list_tags(page_offset=page_offset, page_limit=page_limit)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TagApi->list_tags: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page_offset** | **int**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **page_limit** | **int**| The numbers of items to return. | [optional] [default to 100]

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

# **list_tags_by_log_id**
> ArrayOfTagsResponse list_tags_by_log_id(log_id)

Lists all tags associated with a log

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
    log_id = 56 # int | The id of the log to retrieve

    try:
        # Lists all tags associated with a log
        api_response = api_instance.list_tags_by_log_id(log_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TagApi->list_tags_by_log_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **log_id** | **int**| The id of the log to retrieve | 

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
**404** | Not Found |  -  |
**0** | Unexpected Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

