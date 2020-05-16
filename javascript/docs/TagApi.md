# AliceBookkeeping.TagApi

All URIs are relative to *http://localhost/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTag**](TagApi.md#createTag) | **POST** /tags | Adds a new tag
[**deleteTagById**](TagApi.md#deleteTagById) | **DELETE** /tags/{tagId} | Deletes a tag by Id
[**getLogsByTagId**](TagApi.md#getLogsByTagId) | **GET** /tags/{tagId}/logs | Gets all logs with this tag id
[**getTagById**](TagApi.md#getTagById) | **GET** /tags/{tagId} | Gets a tag by Id
[**listTags**](TagApi.md#listTags) | **GET** /tags | List all tags



## createTag

> TagResponse createTag(createTag)

Adds a new tag

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.TagApi();
let createTag = new AliceBookkeeping.CreateTag(); // CreateTag | 
apiInstance.createTag(createTag, (error, data, response) => {
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
 **createTag** | [**CreateTag**](CreateTag.md)|  | 

### Return type

[**TagResponse**](TagResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## deleteTagById

> TagResponse deleteTagById(tagId)

Deletes a tag by Id

### Example

```javascript
import AliceBookkeeping from 'alice_bookkeeping';

let apiInstance = new AliceBookkeeping.TagApi();
let tagId = 789; // Number | The id of the tag to retrieve
apiInstance.deleteTagById(tagId, (error, data, response) => {
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
  'page': new AliceBookkeeping.PaginationOptions() // PaginationOptions | Specifies the pagination requirements.
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
 **page** | [**PaginationOptions**](.md)| Specifies the pagination requirements. | [optional] 

### Return type

[**ArrayOfTagsResponse**](ArrayOfTagsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

