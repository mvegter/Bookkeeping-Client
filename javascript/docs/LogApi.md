# AliceBookkeeping.LogApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createLog**](LogApi.md#createLog) | **POST** /logs | Adds a new log
[**getLogById**](LogApi.md#getLogById) | **GET** /logs/{id} | Gets a log by Id
[**listLogs**](LogApi.md#listLogs) | **GET** /logs | List all logs



## createLog

> LogResponse createLog()

Adds a new log

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.LogApi();
apiInstance.createLog((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getLogById

> LogResponse getLogById(id)

Gets a log by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.LogApi();
let id = 789; // Number | The id of the log to retrieve
apiInstance.getLogById(id, (error, data, response) => {
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
 **id** | **Number**| The id of the log to retrieve | 

### Return type

[**LogResponse**](LogResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## listLogs

> ArrayOfLogsResponse listLogs()

List all logs

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.LogApi();
apiInstance.listLogs((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

