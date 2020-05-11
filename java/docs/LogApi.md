# LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createLog**](LogApi.md#createLog) | **POST** /logs | Adds a new log
[**getLogById**](LogApi.md#getLogById) | **GET** /logs/{logId} | Gets a log by Id
[**listLogs**](LogApi.md#listLogs) | **GET** /logs | List all logs
[**listTagsByLogId**](LogApi.md#listTagsByLogId) | **GET** /logs/{logId}/tags | Lists all tags associated with a log


<a name="createLog"></a>
# **createLog**
> LogResponse createLog()

Adds a new log

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.LogApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("http://localhost/api");

    LogApi apiInstance = new LogApi(defaultClient);
    try {
      LogResponse result = apiInstance.createLog();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling LogApi#createLog");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
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

<a name="getLogById"></a>
# **getLogById**
> LogResponse getLogById(logId)

Gets a log by Id

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.LogApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("http://localhost/api");

    LogApi apiInstance = new LogApi(defaultClient);
    Long logId = 56L; // Long | The id of the log to retrieve
    try {
      LogResponse result = apiInstance.getLogById(logId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling LogApi#getLogById");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **logId** | **Long**| The id of the log to retrieve |

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

<a name="listLogs"></a>
# **listLogs**
> ArrayOfLogsResponse listLogs(filterOrigin, pageOffset, pageLimit, sort)

List all logs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.LogApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("http://localhost/api");

    LogApi apiInstance = new LogApi(defaultClient);
    String filterOrigin = "filterOrigin_example"; // String | Filter logs by their origin
    Integer pageOffset = 0; // Integer | The number of items to skip before starting to collect the result set.
    Integer pageLimit = 100; // Integer | The numbers of items to return.
    List<String> sort = Arrays.asList(); // List<String> | The sort order of the returned items.
    try {
      ArrayOfLogsResponse result = apiInstance.listLogs(filterOrigin, pageOffset, pageLimit, sort);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling LogApi#listLogs");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterOrigin** | **String**| Filter logs by their origin | [optional] [enum: human, process]
 **pageOffset** | **Integer**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **pageLimit** | **Integer**| The numbers of items to return. | [optional] [default to 100]
 **sort** | [**List&lt;String&gt;**](String.md)| The sort order of the returned items. | [optional]

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

<a name="listTagsByLogId"></a>
# **listTagsByLogId**
> ArrayOfTagsResponse listTagsByLogId(logId)

Lists all tags associated with a log

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.LogApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("http://localhost/api");

    LogApi apiInstance = new LogApi(defaultClient);
    Long logId = 56L; // Long | The id of the log to retrieve
    try {
      ArrayOfTagsResponse result = apiInstance.listTagsByLogId(logId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling LogApi#listTagsByLogId");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **logId** | **Long**| The id of the log to retrieve |

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

