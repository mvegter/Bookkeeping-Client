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


import ApiClient from './ApiClient';
import ApiInformation from './model/ApiInformation';
import ArrayOfLogsResponse from './model/ArrayOfLogsResponse';
import ArrayOfTagsResponse from './model/ArrayOfTagsResponse';
import CreateLog from './model/CreateLog';
import CreateTag from './model/CreateTag';
import DeployInformation from './model/DeployInformation';
import Error from './model/Error';
import ErrorSource from './model/ErrorSource';
import Errors from './model/Errors';
import FilterLogsOptions from './model/FilterLogsOptions';
import Log from './model/Log';
import LogOrigin from './model/LogOrigin';
import LogResponse from './model/LogResponse';
import PaginationOptions from './model/PaginationOptions';
import SortLogsOptions from './model/SortLogsOptions';
import SortOrder from './model/SortOrder';
import Tag from './model/Tag';
import TagResponse from './model/TagResponse';
import DefaultApi from './api/DefaultApi';
import LogApi from './api/LogApi';
import TagApi from './api/TagApi';


/**
* JS API client generated by OpenAPI Generator.<br>
* The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
* <p>
* An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
* <pre>
* var AliceBookkeeping = require('index'); // See note below*.
* var xxxSvc = new AliceBookkeeping.XxxApi(); // Allocate the API class we're going to use.
* var yyyModel = new AliceBookkeeping.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
* and put the application logic within the callback function.</em>
* </p>
* <p>
* A non-AMD browser application (discouraged) might do something like this:
* <pre>
* var xxxSvc = new AliceBookkeeping.XxxApi(); // Allocate the API class we're going to use.
* var yyy = new AliceBookkeeping.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* </p>
* @module index
* @version 0.0.0
*/
export {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient,

    /**
     * The ApiInformation model constructor.
     * @property {module:model/ApiInformation}
     */
    ApiInformation,

    /**
     * The ArrayOfLogsResponse model constructor.
     * @property {module:model/ArrayOfLogsResponse}
     */
    ArrayOfLogsResponse,

    /**
     * The ArrayOfTagsResponse model constructor.
     * @property {module:model/ArrayOfTagsResponse}
     */
    ArrayOfTagsResponse,

    /**
     * The CreateLog model constructor.
     * @property {module:model/CreateLog}
     */
    CreateLog,

    /**
     * The CreateTag model constructor.
     * @property {module:model/CreateTag}
     */
    CreateTag,

    /**
     * The DeployInformation model constructor.
     * @property {module:model/DeployInformation}
     */
    DeployInformation,

    /**
     * The Error model constructor.
     * @property {module:model/Error}
     */
    Error,

    /**
     * The ErrorSource model constructor.
     * @property {module:model/ErrorSource}
     */
    ErrorSource,

    /**
     * The Errors model constructor.
     * @property {module:model/Errors}
     */
    Errors,

    /**
     * The FilterLogsOptions model constructor.
     * @property {module:model/FilterLogsOptions}
     */
    FilterLogsOptions,

    /**
     * The Log model constructor.
     * @property {module:model/Log}
     */
    Log,

    /**
     * The LogOrigin model constructor.
     * @property {module:model/LogOrigin}
     */
    LogOrigin,

    /**
     * The LogResponse model constructor.
     * @property {module:model/LogResponse}
     */
    LogResponse,

    /**
     * The PaginationOptions model constructor.
     * @property {module:model/PaginationOptions}
     */
    PaginationOptions,

    /**
     * The SortLogsOptions model constructor.
     * @property {module:model/SortLogsOptions}
     */
    SortLogsOptions,

    /**
     * The SortOrder model constructor.
     * @property {module:model/SortOrder}
     */
    SortOrder,

    /**
     * The Tag model constructor.
     * @property {module:model/Tag}
     */
    Tag,

    /**
     * The TagResponse model constructor.
     * @property {module:model/TagResponse}
     */
    TagResponse,

    /**
    * The DefaultApi service constructor.
    * @property {module:api/DefaultApi}
    */
    DefaultApi,

    /**
    * The LogApi service constructor.
    * @property {module:api/LogApi}
    */
    LogApi,

    /**
    * The TagApi service constructor.
    * @property {module:api/TagApi}
    */
    TagApi
};
