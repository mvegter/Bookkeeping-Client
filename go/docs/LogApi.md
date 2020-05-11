# \LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateLog**](LogApi.md#CreateLog) | **Post** /logs | Adds a new log
[**GetLogById**](LogApi.md#GetLogById) | **Get** /logs/{id} | Gets a log by Id
[**ListLogs**](LogApi.md#ListLogs) | **Get** /logs | List all logs



## CreateLog

> LogResponse CreateLog(ctx, )

Adds a new log

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetLogById

> LogResponse GetLogById(ctx, id)

Gets a log by Id

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **int64**| The id of the log to retrieve | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListLogs

> ArrayOfLogsResponse ListLogs(ctx, optional)

List all logs

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***ListLogsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ListLogsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterOrigin** | **optional.String**| Filter logs by their origin | 
 **pageOffset** | **optional.Int32**| The number of items to skip before starting to collect the result set. | [default to 0]
 **pageLimit** | **optional.Int32**| The numbers of items to return. | [default to 100]
 **sort** | [**optional.Interface of []string**](string.md)| The sort order of the returned items. | [default to [&quot;-id&quot;]]

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

