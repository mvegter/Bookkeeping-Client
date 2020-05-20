# AliceBookkeeping.DefaultApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getDeployInformation**](DefaultApi.md#getDeployInformation) | **GET** /status | Get deploy information
[**getServerInformation**](DefaultApi.md#getServerInformation) | **GET** / | Get server information



## getDeployInformation

> DeployInformation getDeployInformation()

Get deploy information

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

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

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getServerInformation

> ApiInformation getServerInformation()

Get server information

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';
let defaultClient = AliceBookkeeping.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

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

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

