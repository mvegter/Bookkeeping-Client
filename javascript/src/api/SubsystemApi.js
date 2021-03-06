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
import ArrayOfSubsystemsResponse from '../model/ArrayOfSubsystemsResponse';
import CreateSubsystem from '../model/CreateSubsystem';
import Errors from '../model/Errors';
import PaginationOptions from '../model/PaginationOptions';
import SubsystemResponse from '../model/SubsystemResponse';

/**
* Subsystem service.
* @module api/SubsystemApi
* @version 0.0.0
*/
export default class SubsystemApi {

    /**
    * Constructs a new SubsystemApi. 
    * @alias module:api/SubsystemApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the createSubsystem operation.
     * @callback module:api/SubsystemApi~createSubsystemCallback
     * @param {String} error Error message, if any.
     * @param {module:model/SubsystemResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Adds a new subsystem
     * @param {module:model/CreateSubsystem} createSubsystem 
     * @param {module:api/SubsystemApi~createSubsystemCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/SubsystemResponse}
     */
    createSubsystem(createSubsystem, callback) {
      let postBody = createSubsystem;
      // verify the required parameter 'createSubsystem' is set
      if (createSubsystem === undefined || createSubsystem === null) {
        throw new Error("Missing the required parameter 'createSubsystem' when calling createSubsystem");
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
      let returnType = SubsystemResponse;
      return this.apiClient.callApi(
        '/subsystems', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the deleteSubsystem operation.
     * @callback module:api/SubsystemApi~deleteSubsystemCallback
     * @param {String} error Error message, if any.
     * @param {module:model/SubsystemResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Deletes a subsystem by Id
     * @param {Number} subsystemId The id of the subsystem to retrieve
     * @param {module:api/SubsystemApi~deleteSubsystemCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/SubsystemResponse}
     */
    deleteSubsystem(subsystemId, callback) {
      let postBody = null;
      // verify the required parameter 'subsystemId' is set
      if (subsystemId === undefined || subsystemId === null) {
        throw new Error("Missing the required parameter 'subsystemId' when calling deleteSubsystem");
      }

      let pathParams = {
        'subsystemId': subsystemId
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
      let returnType = SubsystemResponse;
      return this.apiClient.callApi(
        '/subsystems/{subsystemId}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getSubsystem operation.
     * @callback module:api/SubsystemApi~getSubsystemCallback
     * @param {String} error Error message, if any.
     * @param {module:model/SubsystemResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a subsystem by Id
     * @param {Number} subsystemId The id of the subsystem to retrieve
     * @param {module:api/SubsystemApi~getSubsystemCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/SubsystemResponse}
     */
    getSubsystem(subsystemId, callback) {
      let postBody = null;
      // verify the required parameter 'subsystemId' is set
      if (subsystemId === undefined || subsystemId === null) {
        throw new Error("Missing the required parameter 'subsystemId' when calling getSubsystem");
      }

      let pathParams = {
        'subsystemId': subsystemId
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
      let returnType = SubsystemResponse;
      return this.apiClient.callApi(
        '/subsystems/{subsystemId}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the listSubsystems operation.
     * @callback module:api/SubsystemApi~listSubsystemsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ArrayOfSubsystemsResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * List all subsystems
     * @param {Object} opts Optional parameters
     * @param {module:model/PaginationOptions} opts.page Specifies the pagination requirements.
     * @param {module:api/SubsystemApi~listSubsystemsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ArrayOfSubsystemsResponse}
     */
    listSubsystems(opts, callback) {
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
      let returnType = ArrayOfSubsystemsResponse;
      return this.apiClient.callApi(
        '/subsystems', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
