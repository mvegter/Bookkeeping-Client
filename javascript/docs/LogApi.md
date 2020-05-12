# AliceBookkeeping.LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createLog**](LogApi.md#createLog) | **POST** /logs | Adds a new log
[**getLogById**](LogApi.md#getLogById) | **GET** /logs/{logId} | Gets a log by Id
[**listLogs**](LogApi.md#listLogs) | **GET** /logs | List all logs
[**listTagsByLogId**](LogApi.md#listTagsByLogId) | **GET** /logs/{logId}/tags | Lists all tags associated with a log



## createLog

> LogResponse createLog(UNKNOWN_BASE_TYPE)

Adds a new log

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.LogApi();
let UNKNOWN_BASE_TYPE = new AliceBookkeeping.UNKNOWN_BASE_TYPE(); // UNKNOWN_BASE_TYPE | 
apiInstance.createLog(UNKNOWN_BASE_TYPE, (error, data, response) => {
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
 **UNKNOWN_BASE_TYPE** | [**UNKNOWN_BASE_TYPE**](UNKNOWN_BASE_TYPE.md)|  | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## getLogById

> LogResponse getLogById(logId)

Gets a log by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

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

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## listLogs

> ArrayOfLogsResponse listLogs(opts)

List all logs

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.LogApi();
let opts = {
  'filterOrigin': "filterOrigin_example", // String | Filter logs by their origin
  'pageOffset': 0, // Number | The number of items to skip before starting to collect the result set.
  'pageLimit': 100, // Number | The numbers of items to return.
  'sort': ["null"] // [String] | The sort order of the returned items.
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
 **filterOrigin** | **String**| Filter logs by their origin | [optional] 
 **pageOffset** | **Number**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **pageLimit** | **Number**| The numbers of items to return. | [optional] [default to 100]
 **sort** | [**[String]**](String.md)| The sort order of the returned items. | [optional] 

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## listTagsByLogId

> ArrayOfTagsResponse listTagsByLogId(logId)

Lists all tags associated with a log

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

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

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

