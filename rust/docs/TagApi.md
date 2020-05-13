# \TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_tag**](TagApi.md#create_tag) | **Post** /tags | Adds a new tag
[**get_logs_by_tag_id**](TagApi.md#get_logs_by_tag_id) | **Get** /tags/{tagId}/logs | Gets all logs with this tag id
[**get_tag_by_id**](TagApi.md#get_tag_by_id) | **Get** /tags/{tagId} | Gets a tag by Id
[**list_tags**](TagApi.md#list_tags) | **Get** /tags | List all tags



## create_tag

> crate::models::TagResponse create_tag(create_tag)
Adds a new tag

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**create_tag** | [**CreateTag**](CreateTag.md) |  | [required] |

### Return type

[**crate::models::TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_logs_by_tag_id

> crate::models::ArrayOfLogsResponse get_logs_by_tag_id(tag_id)
Gets all logs with this tag id

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**tag_id** | **i64** | The id of the tag to retrieve | [required] |

### Return type

[**crate::models::ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_tag_by_id

> crate::models::TagResponse get_tag_by_id(tag_id)
Gets a tag by Id

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**tag_id** | **i64** | The id of the tag to retrieve | [required] |

### Return type

[**crate::models::TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## list_tags

> crate::models::ArrayOfTagsResponse list_tags(page_offset, page_limit)
List all tags

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**page_offset** | Option<**i32**> | The number of items to skip before starting to collect the result set. |  |[default to 0]
**page_limit** | Option<**i32**> | The numbers of items to return. |  |[default to 100]

### Return type

[**crate::models::ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
