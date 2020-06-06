# \SubsystemApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_subsystem**](SubsystemApi.md#create_subsystem) | **Post** /subsystems | Adds a new subsystem
[**delete_subsystem**](SubsystemApi.md#delete_subsystem) | **Delete** /subsystems/{subsystemId} | Deletes a subsystem by Id
[**get_subsystem**](SubsystemApi.md#get_subsystem) | **Get** /subsystems/{subsystemId} | Get a subsystem by Id
[**list_subsystems**](SubsystemApi.md#list_subsystems) | **Get** /subsystems | List all subsystems



## create_subsystem

> crate::models::SubsystemResponse create_subsystem(create_subsystem)
Adds a new subsystem

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**create_subsystem** | [**CreateSubsystem**](CreateSubsystem.md) |  | [required] |

### Return type

[**crate::models::SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## delete_subsystem

> crate::models::SubsystemResponse delete_subsystem(subsystem_id)
Deletes a subsystem by Id

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**subsystem_id** | **i64** | The id of the subsystem to retrieve | [required] |

### Return type

[**crate::models::SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_subsystem

> crate::models::SubsystemResponse get_subsystem(subsystem_id)
Get a subsystem by Id

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**subsystem_id** | **i64** | The id of the subsystem to retrieve | [required] |

### Return type

[**crate::models::SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## list_subsystems

> crate::models::ArrayOfSubsystemsResponse list_subsystems(page)
List all subsystems

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**page** | Option<[**crate::models::PaginationOptions**](.md)> | Specifies the pagination requirements. |  |

### Return type

[**crate::models::ArrayOfSubsystemsResponse**](ArrayOfSubsystemsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

