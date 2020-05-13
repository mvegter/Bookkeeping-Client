/*
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiCallback;
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.ApiResponse;
import org.openapitools.client.Configuration;
import org.openapitools.client.Pair;
import org.openapitools.client.ProgressRequestBody;
import org.openapitools.client.ProgressResponseBody;

import com.google.gson.reflect.TypeToken;

import java.io.IOException;


import org.openapitools.client.model.ArrayOfLogsResponse;
import org.openapitools.client.model.ArrayOfTagsResponse;
import org.openapitools.client.model.CreateTag;
import org.openapitools.client.model.Errors;
import org.openapitools.client.model.PaginationOptions;
import org.openapitools.client.model.TagResponse;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class TagApi {
    private ApiClient localVarApiClient;

    public TagApi() {
        this(Configuration.getDefaultApiClient());
    }

    public TagApi(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return localVarApiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.localVarApiClient = apiClient;
    }

    /**
     * Build call for createTag
     * @param createTag  (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 201 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 409 </td><td> Conflict </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call createTagCall(CreateTag createTag, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = createTag;

        // create path and map variables
        String localVarPath = "/tags";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();
        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            "application/json"
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] {  };
        return localVarApiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call createTagValidateBeforeCall(CreateTag createTag, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'createTag' is set
        if (createTag == null) {
            throw new ApiException("Missing the required parameter 'createTag' when calling createTag(Async)");
        }
        

        okhttp3.Call localVarCall = createTagCall(createTag, _callback);
        return localVarCall;

    }

    /**
     * Adds a new tag
     * 
     * @param createTag  (required)
     * @return TagResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 201 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 409 </td><td> Conflict </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public TagResponse createTag(CreateTag createTag) throws ApiException {
        ApiResponse<TagResponse> localVarResp = createTagWithHttpInfo(createTag);
        return localVarResp.getData();
    }

    /**
     * Adds a new tag
     * 
     * @param createTag  (required)
     * @return ApiResponse&lt;TagResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 201 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 409 </td><td> Conflict </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<TagResponse> createTagWithHttpInfo(CreateTag createTag) throws ApiException {
        okhttp3.Call localVarCall = createTagValidateBeforeCall(createTag, null);
        Type localVarReturnType = new TypeToken<TagResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Adds a new tag (asynchronously)
     * 
     * @param createTag  (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 201 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 409 </td><td> Conflict </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call createTagAsync(CreateTag createTag, final ApiCallback<TagResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = createTagValidateBeforeCall(createTag, _callback);
        Type localVarReturnType = new TypeToken<TagResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for getLogsByTagId
     * @param tagId The id of the tag to retrieve (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call getLogsByTagIdCall(Long tagId, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/tags/{tagId}/logs"
            .replaceAll("\\{" + "tagId" + "\\}", localVarApiClient.escapeString(tagId.toString()));

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();
        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] {  };
        return localVarApiClient.buildCall(localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call getLogsByTagIdValidateBeforeCall(Long tagId, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'tagId' is set
        if (tagId == null) {
            throw new ApiException("Missing the required parameter 'tagId' when calling getLogsByTagId(Async)");
        }
        

        okhttp3.Call localVarCall = getLogsByTagIdCall(tagId, _callback);
        return localVarCall;

    }

    /**
     * Gets all logs with this tag id
     * 
     * @param tagId The id of the tag to retrieve (required)
     * @return ArrayOfLogsResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public ArrayOfLogsResponse getLogsByTagId(Long tagId) throws ApiException {
        ApiResponse<ArrayOfLogsResponse> localVarResp = getLogsByTagIdWithHttpInfo(tagId);
        return localVarResp.getData();
    }

    /**
     * Gets all logs with this tag id
     * 
     * @param tagId The id of the tag to retrieve (required)
     * @return ApiResponse&lt;ArrayOfLogsResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<ArrayOfLogsResponse> getLogsByTagIdWithHttpInfo(Long tagId) throws ApiException {
        okhttp3.Call localVarCall = getLogsByTagIdValidateBeforeCall(tagId, null);
        Type localVarReturnType = new TypeToken<ArrayOfLogsResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Gets all logs with this tag id (asynchronously)
     * 
     * @param tagId The id of the tag to retrieve (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call getLogsByTagIdAsync(Long tagId, final ApiCallback<ArrayOfLogsResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = getLogsByTagIdValidateBeforeCall(tagId, _callback);
        Type localVarReturnType = new TypeToken<ArrayOfLogsResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for getTagById
     * @param tagId The id of the tag to retrieve (required)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call getTagByIdCall(Long tagId, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/tags/{tagId}"
            .replaceAll("\\{" + "tagId" + "\\}", localVarApiClient.escapeString(tagId.toString()));

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();
        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] {  };
        return localVarApiClient.buildCall(localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call getTagByIdValidateBeforeCall(Long tagId, final ApiCallback _callback) throws ApiException {
        
        // verify the required parameter 'tagId' is set
        if (tagId == null) {
            throw new ApiException("Missing the required parameter 'tagId' when calling getTagById(Async)");
        }
        

        okhttp3.Call localVarCall = getTagByIdCall(tagId, _callback);
        return localVarCall;

    }

    /**
     * Gets a tag by Id
     * 
     * @param tagId The id of the tag to retrieve (required)
     * @return TagResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public TagResponse getTagById(Long tagId) throws ApiException {
        ApiResponse<TagResponse> localVarResp = getTagByIdWithHttpInfo(tagId);
        return localVarResp.getData();
    }

    /**
     * Gets a tag by Id
     * 
     * @param tagId The id of the tag to retrieve (required)
     * @return ApiResponse&lt;TagResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<TagResponse> getTagByIdWithHttpInfo(Long tagId) throws ApiException {
        okhttp3.Call localVarCall = getTagByIdValidateBeforeCall(tagId, null);
        Type localVarReturnType = new TypeToken<TagResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * Gets a tag by Id (asynchronously)
     * 
     * @param tagId The id of the tag to retrieve (required)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 404 </td><td> Not Found </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call getTagByIdAsync(Long tagId, final ApiCallback<TagResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = getTagByIdValidateBeforeCall(tagId, _callback);
        Type localVarReturnType = new TypeToken<TagResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
    /**
     * Build call for listTags
     * @param page Specifies the pagination requirements. (optional)
     * @param _callback Callback for upload/download progress
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call listTagsCall(PaginationOptions page, final ApiCallback _callback) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/tags";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        if (page != null) {
            localVarQueryParams.addAll(localVarApiClient.parameterToPair("page", page));
        }

        Map<String, String> localVarHeaderParams = new HashMap<String, String>();
        Map<String, String> localVarCookieParams = new HashMap<String, String>();
        Map<String, Object> localVarFormParams = new HashMap<String, Object>();
        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = localVarApiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) {
            localVarHeaderParams.put("Accept", localVarAccept);
        }

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = localVarApiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        String[] localVarAuthNames = new String[] {  };
        return localVarApiClient.buildCall(localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarCookieParams, localVarFormParams, localVarAuthNames, _callback);
    }

    @SuppressWarnings("rawtypes")
    private okhttp3.Call listTagsValidateBeforeCall(PaginationOptions page, final ApiCallback _callback) throws ApiException {
        

        okhttp3.Call localVarCall = listTagsCall(page, _callback);
        return localVarCall;

    }

    /**
     * List all tags
     * 
     * @param page Specifies the pagination requirements. (optional)
     * @return ArrayOfTagsResponse
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public ArrayOfTagsResponse listTags(PaginationOptions page) throws ApiException {
        ApiResponse<ArrayOfTagsResponse> localVarResp = listTagsWithHttpInfo(page);
        return localVarResp.getData();
    }

    /**
     * List all tags
     * 
     * @param page Specifies the pagination requirements. (optional)
     * @return ApiResponse&lt;ArrayOfTagsResponse&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public ApiResponse<ArrayOfTagsResponse> listTagsWithHttpInfo(PaginationOptions page) throws ApiException {
        okhttp3.Call localVarCall = listTagsValidateBeforeCall(page, null);
        Type localVarReturnType = new TypeToken<ArrayOfTagsResponse>(){}.getType();
        return localVarApiClient.execute(localVarCall, localVarReturnType);
    }

    /**
     * List all tags (asynchronously)
     * 
     * @param page Specifies the pagination requirements. (optional)
     * @param _callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     * @http.response.details
     <table summary="Response Details" border="1">
        <tr><td> Status Code </td><td> Description </td><td> Response Headers </td></tr>
        <tr><td> 200 </td><td> Expected response to a valid request. </td><td>  -  </td></tr>
        <tr><td> 400 </td><td> Bad Request </td><td>  -  </td></tr>
        <tr><td> 0 </td><td> Unexpected Error </td><td>  -  </td></tr>
     </table>
     */
    public okhttp3.Call listTagsAsync(PaginationOptions page, final ApiCallback<ArrayOfTagsResponse> _callback) throws ApiException {

        okhttp3.Call localVarCall = listTagsValidateBeforeCall(page, _callback);
        Type localVarReturnType = new TypeToken<ArrayOfTagsResponse>(){}.getType();
        localVarApiClient.executeAsync(localVarCall, localVarReturnType, _callback);
        return localVarCall;
    }
}
