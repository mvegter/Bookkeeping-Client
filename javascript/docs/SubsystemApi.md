# AliceBookkeeping.SubsystemApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createSubsystem**](SubsystemApi.md#createSubsystem) | **POST** /subsystems | Adds a new subsystem
[**deleteSubsystem**](SubsystemApi.md#deleteSubsystem) | **DELETE** /subsystems/{subsystemId} | Deletes a subsystem by Id
[**getSubsystem**](SubsystemApi.md#getSubsystem) | **GET** /subsystems/{subsystemId} | Get a subsystem by Id
[**listSubsystems**](SubsystemApi.md#listSubsystems) | **GET** /subsystems | List all subsystems



## createSubsystem

> SubsystemResponse createSubsystem(createSubsystem)

Adds a new subsystem

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.SubsystemApi();
let createSubsystem = new AliceBookkeeping.CreateSubsystem(); // CreateSubsystem | 
apiInstance.createSubsystem(createSubsystem, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createSubsystem** | [**CreateSubsystem**](CreateSubsystem.md)|  | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## deleteSubsystem

> SubsystemResponse deleteSubsystem(subsystemId)

Deletes a subsystem by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.SubsystemApi();
let subsystemId = 789; // Number | The id of the subsystem to retrieve
apiInstance.deleteSubsystem(subsystemId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subsystemId** | **Number**| The id of the subsystem to retrieve | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getSubsystem

> SubsystemResponse getSubsystem(subsystemId)

Get a subsystem by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.SubsystemApi();
let subsystemId = 789; // Number | The id of the subsystem to retrieve
apiInstance.getSubsystem(subsystemId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subsystemId** | **Number**| The id of the subsystem to retrieve | 

### Return type

[**SubsystemResponse**](SubsystemResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## listSubsystems

> ArrayOfSubsystemsResponse listSubsystems(opts)

List all subsystems

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.SubsystemApi();
let opts = {
  'page': new AliceBookkeeping.PaginationOptions() // PaginationOptions | Specifies the pagination requirements.
};
apiInstance.listSubsystems(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | [**PaginationOptions**](.md)| Specifies the pagination requirements. | [optional] 

### Return type

[**ArrayOfSubsystemsResponse**](ArrayOfSubsystemsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

