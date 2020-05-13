# Org.OpenAPITools.Api.TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateTag**](TagApi.md#createtag) | **POST** /tags | Adds a new tag
[**GetLogsByTagId**](TagApi.md#getlogsbytagid) | **GET** /tags/{tagId}/logs | Gets all logs with this tag id
[**GetTagById**](TagApi.md#gettagbyid) | **GET** /tags/{tagId} | Gets a tag by Id
[**ListTags**](TagApi.md#listtags) | **GET** /tags | List all tags



## CreateTag

> TagResponse CreateTag (CreateTag createTag)

Adds a new tag

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class CreateTagExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new TagApi(Configuration.Default);
            var createTag = new CreateTag(); // CreateTag | 

            try
            {
                // Adds a new tag
                TagResponse result = apiInstance.CreateTag(createTag);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TagApi.CreateTag: " + e.Message );
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
| **201** | Expected response to a valid request. |  -  |
| **400** | Bad Request |  -  |
| **409** | Conflict |  -  |
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetLogsByTagId

> ArrayOfLogsResponse GetLogsByTagId (long tagId)

Gets all logs with this tag id

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetLogsByTagIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new TagApi(Configuration.Default);
            var tagId = 789;  // long | The id of the tag to retrieve

            try
            {
                // Gets all logs with this tag id
                ArrayOfLogsResponse result = apiInstance.GetLogsByTagId(tagId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TagApi.GetLogsByTagId: " + e.Message );
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
 **tagId** | **long**| The id of the tag to retrieve | 

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
| **404** | Not Found |  -  |
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTagById

> TagResponse GetTagById (long tagId)

Gets a tag by Id

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetTagByIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new TagApi(Configuration.Default);
            var tagId = 789;  // long | The id of the tag to retrieve

            try
            {
                // Gets a tag by Id
                TagResponse result = apiInstance.GetTagById(tagId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TagApi.GetTagById: " + e.Message );
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
 **tagId** | **long**| The id of the tag to retrieve | 

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
| **200** | Expected response to a valid request. |  -  |
| **400** | Bad Request |  -  |
| **404** | Not Found |  -  |
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListTags

> ArrayOfTagsResponse ListTags (int? pageOffset = null, int? pageLimit = null)

List all tags

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ListTagsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost/api";
            var apiInstance = new TagApi(Configuration.Default);
            var pageOffset = 56;  // int? | The number of items to skip before starting to collect the result set. (optional)  (default to 0)
            var pageLimit = 56;  // int? | The numbers of items to return. (optional)  (default to 100)

            try
            {
                // List all tags
                ArrayOfTagsResponse result = apiInstance.ListTags(pageOffset, pageLimit);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TagApi.ListTags: " + e.Message );
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
 **pageOffset** | **int?**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **pageLimit** | **int?**| The numbers of items to return. | [optional] [default to 100]

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
| **0** | Unexpected Error |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

