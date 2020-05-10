# AliceBookkeeping.DefaultApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createLog**](DefaultApi.md#createLog) | **POST** /logs | Adds a new log
[**getDeployInformation**](DefaultApi.md#getDeployInformation) | **GET** /status | Get deploy information
[**getLogById**](DefaultApi.md#getLogById) | **GET** /logs/{id} | Gets a log by Id
[**getServerInformation**](DefaultApi.md#getServerInformation) | **GET** / | Get server information



## createLog

> DataResponse createLog()

Adds a new log

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.DefaultApi();
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

[**DataResponse**](DataResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getDeployInformation

> DeployInformation getDeployInformation()

Get deploy information

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.DefaultApi();
apiInstance.getDeployInformation((error, data, response) => {
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

[**DeployInformation**](DeployInformation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getLogById

> DataResponse getLogById(id)

Gets a log by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.DefaultApi();
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

[**DataResponse**](DataResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getServerInformation

> ApiInformation getServerInformation()

Get server information

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.DefaultApi();
apiInstance.getServerInformation((error, data, response) => {
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

[**ApiInformation**](ApiInformation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

