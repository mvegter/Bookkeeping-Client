# \LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_log**](LogApi.md#create_log) | **Post** /logs | Adds a new log
[**get_log_by_id**](LogApi.md#get_log_by_id) | **Get** /logs/{logId} | Gets a log by Id
[**get_log_tree**](LogApi.md#get_log_tree) | **Get** /logs/{logId}/tree | Get the Log tree for a given Log
[**list_logs**](LogApi.md#list_logs) | **Get** /logs | List all logs
[**list_tags_by_log_id**](LogApi.md#list_tags_by_log_id) | **Get** /logs/{logId}/tags | Lists all tags associated with a log



## create_log

> crate::models::LogResponse create_log(create_log)
Adds a new log

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**create_log** | [**CreateLog**](CreateLog.md) |  | [required] |

### Return type

[**crate::models::LogResponse**](LogResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_log_by_id

> crate::models::LogResponse get_log_by_id(log_id)
Gets a log by Id

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**log_id** | **i64** | The id of the log to retrieve | [required] |

### Return type

[**crate::models::LogResponse**](LogResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_log_tree

> crate::models::LogTreeResponse get_log_tree(log_id)
Get the Log tree for a given Log

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**log_id** | **i64** | The id of the log to retrieve | [required] |

### Return type

[**crate::models::LogTreeResponse**](LogTreeResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## list_logs

> crate::models::ArrayOfLogsResponse list_logs(page, filter, sort)
List all logs

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**page** | Option<[**crate::models::PaginationOptions**](.md)> | Specifies the pagination requirements. |  |
**filter** | Option<[**crate::models::FilterLogsOptions**](.md)> | Specifies the filter requirements. |  |
**sort** | Option<[**crate::models::SortLogsOptions**](.md)> | Specifies the sorting requirements. |  |

### Return type

[**crate::models::ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## list_tags_by_log_id

> crate::models::ArrayOfTagsResponse list_tags_by_log_id(log_id)
Lists all tags associated with a log

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**log_id** | **i64** | The id of the log to retrieve | [required] |

### Return type

[**crate::models::ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

