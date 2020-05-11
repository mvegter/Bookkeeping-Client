# openapi_client.LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_log**](LogApi.md#create_log) | **POST** /logs | Adds a new log
[**get_log_by_id**](LogApi.md#get_log_by_id) | **GET** /logs/{logId} | Gets a log by Id
[**list_logs**](LogApi.md#list_logs) | **GET** /logs | List all logs
[**list_tags_by_log_id**](LogApi.md#list_tags_by_log_id) | **GET** /logs/{logId}/tags | Lists all tags associated with a log


# **create_log**
> LogResponse create_log()

Adds a new log

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
    api_instance = openapi_client.LogApi(api_client)
    
    try:
        # Adds a new log
        api_response = api_instance.create_log()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling LogApi->create_log: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**LogResponse**](LogResponse.md)

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
**0** | Unexpected Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_log_by_id**
> LogResponse get_log_by_id(log_id)

Gets a log by Id

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
    api_instance = openapi_client.LogApi(api_client)
    log_id = 56 # int | The id of the log to retrieve

    try:
        # Gets a log by Id
        api_response = api_instance.get_log_by_id(log_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling LogApi->get_log_by_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **log_id** | **int**| The id of the log to retrieve | 

### Return type

[**LogResponse**](LogResponse.md)

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

# **list_logs**
> ArrayOfLogsResponse list_logs(filter_origin=filter_origin, page_offset=page_offset, page_limit=page_limit, sort=sort)

List all logs

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
    api_instance = openapi_client.LogApi(api_client)
    filter_origin = 'filter_origin_example' # str | Filter logs by their origin (optional)
page_offset = 0 # int | The number of items to skip before starting to collect the result set. (optional) (default to 0)
page_limit = 100 # int | The numbers of items to return. (optional) (default to 100)
sort = ["-id"] # list[str] | The sort order of the returned items. (optional) (default to ["-id"])

    try:
        # List all logs
        api_response = api_instance.list_logs(filter_origin=filter_origin, page_offset=page_offset, page_limit=page_limit, sort=sort)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling LogApi->list_logs: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filter_origin** | **str**| Filter logs by their origin | [optional] 
 **page_offset** | **int**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **page_limit** | **int**| The numbers of items to return. | [optional] [default to 100]
 **sort** | [**list[str]**](str.md)| The sort order of the returned items. | [optional] [default to [&quot;-id&quot;]]

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
    api_instance = openapi_client.LogApi(api_client)
    log_id = 56 # int | The id of the log to retrieve

    try:
        # Lists all tags associated with a log
        api_response = api_instance.list_tags_by_log_id(log_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling LogApi->list_tags_by_log_id: %s\n" % e)
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

