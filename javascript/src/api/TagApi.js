/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from "../ApiClient";
import ArrayOfLogsResponse from '../model/ArrayOfLogsResponse';
import ArrayOfTagsResponse from '../model/ArrayOfTagsResponse';
import CreateTag from '../model/CreateTag';
import Errors from '../model/Errors';
import PaginationOptions from '../model/PaginationOptions';
import TagResponse from '../model/TagResponse';

/**
* Tag service.
* @module api/TagApi
* @version 0.0.0
*/
export default class TagApi {

    /**
    * Constructs a new TagApi. 
    * @alias module:api/TagApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the createTag operation.
     * @callback module:api/TagApi~createTagCallback
     * @param {String} error Error message, if any.
     * @param {module:model/TagResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Adds a new tag
     * @param {module:model/CreateTag} createTag 
     * @param {module:api/TagApi~createTagCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/TagResponse}
     */
    createTag(createTag, callback) {
      let postBody = createTag;
      // verify the required parameter 'createTag' is set
      if (createTag === undefined || createTag === null) {
        throw new Error("Missing the required parameter 'createTag' when calling createTag");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKeyAuth'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = TagResponse;
      return this.apiClient.callApi(
        '/tags', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the deleteTagById operation.
     * @callback module:api/TagApi~deleteTagByIdCallback
     * @param {String} error Error message, if any.
     * @param {module:model/TagResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Deletes a tag by Id
     * @param {Number} tagId The id of the tag to retrieve
     * @param {module:api/TagApi~deleteTagByIdCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/TagResponse}
     */
    deleteTagById(tagId, callback) {
      let postBody = null;
      // verify the required parameter 'tagId' is set
      if (tagId === undefined || tagId === null) {
        throw new Error("Missing the required parameter 'tagId' when calling deleteTagById");
      }

      let pathParams = {
        'tagId': tagId
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKeyAuth'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = TagResponse;
      return this.apiClient.callApi(
        '/tags/{tagId}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getLogsByTagId operation.
     * @callback module:api/TagApi~getLogsByTagIdCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ArrayOfLogsResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Gets all logs with this tag id
     * @param {Number} tagId The id of the tag to retrieve
     * @param {module:api/TagApi~getLogsByTagIdCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ArrayOfLogsResponse}
     */
    getLogsByTagId(tagId, callback) {
      let postBody = null;
      // verify the required parameter 'tagId' is set
      if (tagId === undefined || tagId === null) {
        throw new Error("Missing the required parameter 'tagId' when calling getLogsByTagId");
      }

      let pathParams = {
        'tagId': tagId
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKeyAuth'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ArrayOfLogsResponse;
      return this.apiClient.callApi(
        '/tags/{tagId}/logs', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getTagById operation.
     * @callback module:api/TagApi~getTagByIdCallback
     * @param {String} error Error message, if any.
     * @param {module:model/TagResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Gets a tag by Id
     * @param {Number} tagId The id of the tag to retrieve
     * @param {module:api/TagApi~getTagByIdCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/TagResponse}
     */
    getTagById(tagId, callback) {
      let postBody = null;
      // verify the required parameter 'tagId' is set
      if (tagId === undefined || tagId === null) {
        throw new Error("Missing the required parameter 'tagId' when calling getTagById");
      }

      let pathParams = {
        'tagId': tagId
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKeyAuth'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = TagResponse;
      return this.apiClient.callApi(
        '/tags/{tagId}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the listTags operation.
     * @callback module:api/TagApi~listTagsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ArrayOfTagsResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * List all tags
     * @param {Object} opts Optional parameters
     * @param {module:model/PaginationOptions} opts.page Specifies the pagination requirements.
     * @param {module:api/TagApi~listTagsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ArrayOfTagsResponse}
     */
    listTags(opts, callback) {
      opts = opts || {};
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
        'page': opts['page']
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKeyAuth'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ArrayOfTagsResponse;
      return this.apiClient.callApi(
        '/tags', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
