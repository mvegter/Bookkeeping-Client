# AliceBookkeeping.LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createLog**](LogApi.md#createLog) | **POST** /logs | Adds a new log
[**getLogById**](LogApi.md#getLogById) | **GET** /logs/{logId} | Gets a log by Id
[**getLogTree**](LogApi.md#getLogTree) | **GET** /logs/{logId}/tree | Get the Log tree for a given Log
[**listLogs**](LogApi.md#listLogs) | **GET** /logs | List all logs
[**listTagsByLogId**](LogApi.md#listTagsByLogId) | **GET** /logs/{logId}/tags | Lists all tags associated with a log



## createLog

> LogResponse createLog(createLog)

Adds a new log

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.LogApi();
let createLog = new AliceBookkeeping.CreateLog(); // CreateLog | 
apiInstance.createLog(createLog, (error, data, response) => {
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
 **createLog** | [**CreateLog**](CreateLog.md)|  | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## getLogById

> LogResponse getLogById(logId)

Gets a log by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.LogApi();
let logId = 789; // Number | The id of the log to retrieve
apiInstance.getLogById(logId, (error, data, response) => {
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
 **logId** | **Number**| The id of the log to retrieve | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getLogTree

> LogTreeResponse getLogTree(logId)

Get the Log tree for a given Log

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.LogApi();
let logId = 789; // Number | The id of the log to retrieve
apiInstance.getLogTree(logId, (error, data, response) => {
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
 **logId** | **Number**| The id of the log to retrieve | 

### Return type

[**LogTreeResponse**](LogTreeResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## listLogs

> ArrayOfLogsResponse listLogs(opts)

List all logs

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.LogApi();
let opts = {
  'page': new AliceBookkeeping.PaginationOptions(), // PaginationOptions | Specifies the pagination requirements.
  'filter': new AliceBookkeeping.FilterLogsOptions(), // FilterLogsOptions | Specifies the filter requirements.
  'sort': new AliceBookkeeping.SortLogsOptions() // SortLogsOptions | Specifies the sorting requirements.
};
apiInstance.listLogs(opts, (error, data, response) => {
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
 **filter** | [**FilterLogsOptions**](.md)| Specifies the filter requirements. | [optional] 
 **sort** | [**SortLogsOptions**](.md)| Specifies the sorting requirements. | [optional] 

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## listTagsByLogId

> ArrayOfTagsResponse listTagsByLogId(logId)

Lists all tags associated with a log

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new AliceBookkeeping.LogApi();
let logId = 789; // Number | The id of the log to retrieve
apiInstance.listTagsByLogId(logId, (error, data, response) => {
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
 **logId** | **Number**| The id of the log to retrieve | 

### Return type

[**ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

