# \SubsystemApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateSubsystem**](SubsystemApi.md#CreateSubsystem) | **Post** /subsystems | Adds a new subsystem
[**DeleteSubsystem**](SubsystemApi.md#DeleteSubsystem) | **Delete** /subsystems/{subsystemId} | Deletes a subsystem by Id
[**GetSubsystem**](SubsystemApi.md#GetSubsystem) | **Get** /subsystems/{subsystemId} | Get a subsystem by Id
[**ListSubsystems**](SubsystemApi.md#ListSubsystems) | **Get** /subsystems | List all subsystems



## CreateSubsystem

> SubsystemResponse CreateSubsystem(ctx, createSubsystem)

Adds a new subsystem

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**createSubsystem** | [**CreateSubsystem**](CreateSubsystem.md)|  | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteSubsystem

> SubsystemResponse DeleteSubsystem(ctx, subsystemId)

Deletes a subsystem by Id

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**subsystemId** | **int64**| The id of the subsystem to retrieve | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSubsystem

> SubsystemResponse GetSubsystem(ctx, subsystemId)

Get a subsystem by Id

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**subsystemId** | **int64**| The id of the subsystem to retrieve | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListSubsystems

> ArrayOfSubsystemsResponse ListSubsystems(ctx, optional)

List all subsystems

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***ListSubsystemsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a ListSubsystemsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | [**optional.Interface of PaginationOptions**](.md)| Specifies the pagination requirements. | 

### Return type

[**ArrayOfSubsystemsResponse**](ArrayOfSubsystemsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

