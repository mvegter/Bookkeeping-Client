# TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**listTagsByLogId**](TagApi.md#listTagsByLogId) | **GET** /logs/{logId}/tags | Lists all tags associated with a log


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
import org.openapitools.client.api.TagApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("http://localhost/api");

    TagApi apiInstance = new TagApi(defaultClient);
    Long logId = 56L; // Long | The id of the log to retrieve
    try {
      ArrayOfTagsResponse result = apiInstance.listTagsByLogId(logId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TagApi#listTagsByLogId");
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

