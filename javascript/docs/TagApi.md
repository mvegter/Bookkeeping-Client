# AliceBookkeeping.TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**listTags**](TagApi.md#listTags) | **GET** /tags | List all tags
[**listTagsByLogId**](TagApi.md#listTagsByLogId) | **GET** /logs/{logId}/tags | Lists all tags associated with a log



## listTags

> ArrayOfTagsResponse listTags(opts)

List all tags

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.TagApi();
let opts = {
  'pageOffset': 0, // Number | The number of items to skip before starting to collect the result set.
  'pageLimit': 100 // Number | The numbers of items to return.
};
apiInstance.listTags(opts, (error, data, response) => {
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
 **pageOffset** | **Number**| The number of items to skip before starting to collect the result set. | [optional] [default to 0]
 **pageLimit** | **Number**| The numbers of items to return. | [optional] [default to 100]

### Return type

[**ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

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

let apiInstance = new AliceBookkeeping.TagApi();
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

