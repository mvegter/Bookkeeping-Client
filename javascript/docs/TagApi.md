# AliceBookkeeping.TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTag**](TagApi.md#createTag) | **POST** /tags | Adds a new tag
[**getLogsByTagId**](TagApi.md#getLogsByTagId) | **GET** /tags/{tagId}/logs | Gets all logs with this tag id
[**getTagById**](TagApi.md#getTagById) | **GET** /tags/{tagId} | Gets a tag by Id
[**listTags**](TagApi.md#listTags) | **GET** /tags | List all tags
[**listTagsByLogId**](TagApi.md#listTagsByLogId) | **GET** /logs/{logId}/tags | Lists all tags associated with a log



## createTag

> TagResponse createTag()

Adds a new tag

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.TagApi();
apiInstance.createTag((error, data, response) => {
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

[**TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getLogsByTagId

> ArrayOfLogsResponse getLogsByTagId(tagId)

Gets all logs with this tag id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.TagApi();
let tagId = 789; // Number | The id of the tag to retrieve
apiInstance.getLogsByTagId(tagId, (error, data, response) => {
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
 **tagId** | **Number**| The id of the tag to retrieve | 

### Return type

[**ArrayOfLogsResponse**](ArrayOfLogsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getTagById

> TagResponse getTagById(tagId)

Gets a tag by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.TagApi();
let tagId = 789; // Number | The id of the tag to retrieve
apiInstance.getTagById(tagId, (error, data, response) => {
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
 **tagId** | **Number**| The id of the tag to retrieve | 

### Return type

[**TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


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

