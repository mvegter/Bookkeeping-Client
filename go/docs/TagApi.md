# \TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ListTagsByLogId**](TagApi.md#ListTagsByLogId) | **Get** /logs/{logId}/tags | Lists all tags associated with a log



## ListTagsByLogId

> ArrayOfTagsResponse ListTagsByLogId(ctx, logId)

Lists all tags associated with a log

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**logId** | **int64**| The id of the log to retrieve | 

### Return type

[**ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

