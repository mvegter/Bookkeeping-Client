# Org.OpenAPITools.Api.LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateLog**](LogApi.md#createlog) | **POST** /logs | Adds a new log
[**GetLogById**](LogApi.md#getlogbyid) | **GET** /logs/{logId} | Gets a log by Id
[**ListLogs**](LogApi.md#listlogs) | **GET** /logs | List all logs
[**ListTagsByLogId**](LogApi.md#listtagsbylogid) | **GET** /logs/{logId}/tags | Lists all tags associated with a log



## CreateLog

> LogResponse CreateLog (CreateLog createLog)

Adds a new log

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class CreateLogExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new LogApi(Configuration.Default);
            var createLog = new CreateLog(); // CreateLog | 

            try
            {
                // Adds a new log
                LogResponse result = apiInstance.CreateLog(createLog);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling LogApi.CreateLog: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createLog** | [**CreateLog**](CreateLog.md)|  | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **201** | Expected response to a valid request. |  -  |
| **400** | Bad Request |  -  |
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetLogById

> LogResponse GetLogById (long logId)

Gets a log by Id

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetLogByIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new LogApi(Configuration.Default);
            var logId = 789;  // long | The id of the log to retrieve

            try
            {
                // Gets a log by Id
                LogResponse result = apiInstance.GetLogById(logId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling LogApi.GetLogById: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **logId** | **long**| The id of the log to retrieve | 

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
| **200** | Expected response to a valid request. |  -  |
| **400** | Bad Request |  -  |
| **404** | Not Found |  -  |
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListLogs

> ArrayOfLogsResponse ListLogs (LogOrigin? filterOrigin = null, int? pageOffset = null, int? pageLimit = null, List<string> sort = null)

List all logs

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ListLogsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new LogApi(Configuration.Default);
            var filterOrigin = ;  // LogOrigin? | Filter logs by their origin (optional) 
            var pageOffset = 56;  // int? | The number of items to skip before starting to collect the result set. (optional)  (default to 0)
            var pageLimit = 56;  // int? | The numbers of items to return. (optional)  (default to 100)
            var sort = new List<string>(); // List<string> | The sort order of the returned items. (optional) 

            try
            {
                // List all logs
                ArrayOfLogsResponse result = apiInstance.ListLogs(filterOrigin, pageOffset, pageLimit, sort);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling LogApi.ListLogs: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterOrigin** | **LogOrigin?**| Filter logs by their origin | [optional] 
 **pageOffset** | **int?**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **pageLimit** | **int?**| The numbers of items to return. | [optional] [default to 100]
 **sort** | [**List&lt;string&gt;**](string.md)| The sort order of the returned items. | [optional] 

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
| **200** | Expected response to a valid request. |  -  |
| **400** | Bad Request |  -  |
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListTagsByLogId

> ArrayOfTagsResponse ListTagsByLogId (long logId)

Lists all tags associated with a log

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ListTagsByLogIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new LogApi(Configuration.Default);
            var logId = 789;  // long | The id of the log to retrieve

            try
            {
                // Lists all tags associated with a log
                ArrayOfTagsResponse result = apiInstance.ListTagsByLogId(logId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling LogApi.ListTagsByLogId: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **logId** | **long**| The id of the log to retrieve | 

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
| **200** | Expected response to a valid request. |  -  |
| **400** | Bad Request |  -  |
| **404** | Not Found |  -  |
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)
