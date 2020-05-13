# TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTag**](TagApi.md#createTag) | **POST** /tags | Adds a new tag
[**getLogsByTagId**](TagApi.md#getLogsByTagId) | **GET** /tags/{tagId}/logs | Gets all logs with this tag id
[**getTagById**](TagApi.md#getTagById) | **GET** /tags/{tagId} | Gets a tag by Id
[**listTags**](TagApi.md#listTags) | **GET** /tags | List all tags


<a name="createTag"></a>
# **createTag**
> TagResponse createTag(createTag)

Adds a new tag

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
    CreateTag createTag = new CreateTag(); // CreateTag | 
    try {
      TagResponse result = apiInstance.createTag(createTag);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TagApi#createTag");
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
 **createTag** | [**CreateTag**](CreateTag.md)|  |

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

<a name="getLogsByTagId"></a>
# **getLogsByTagId**
> ArrayOfLogsResponse getLogsByTagId(tagId)

Gets all logs with this tag id

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
    Long tagId = 56L; // Long | The id of the tag to retrieve
    try {
      ArrayOfLogsResponse result = apiInstance.getLogsByTagId(tagId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TagApi#getLogsByTagId");
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
 **tagId** | **Long**| The id of the tag to retrieve |

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

<a name="getTagById"></a>
# **getTagById**
> TagResponse getTagById(tagId)

Gets a tag by Id

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
    Long tagId = 56L; // Long | The id of the tag to retrieve
    try {
      TagResponse result = apiInstance.getTagById(tagId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TagApi#getTagById");
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
 **tagId** | **Long**| The id of the tag to retrieve |

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

<a name="listTags"></a>
# **listTags**
> ArrayOfTagsResponse listTags(page)

List all tags

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
    PaginationOptions page = new PaginationOptions(); // PaginationOptions | Specifies the pagination requirements.
    try {
      ArrayOfTagsResponse result = apiInstance.listTags(page);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TagApi#listTags");
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

