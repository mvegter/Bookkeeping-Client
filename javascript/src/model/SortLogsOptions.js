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

import ApiClient from '../ApiClient';
import SortOrder from './SortOrder';

/**
 * The SortLogsOptions model module.
 * @module model/SortLogsOptions
 * @version 0.0.0
 */
class SortLogsOptions {
    /**
     * Constructs a new <code>SortLogsOptions</code>.
     * Specifies the sorting requirements of a request.
     * @alias module:model/SortLogsOptions
     */
    constructor() { 
        
        SortLogsOptions.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SortLogsOptions</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SortLogsOptions} obj Optional instance to populate.
     * @return {module:model/SortLogsOptions} The populated <code>SortLogsOptions</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SortLogsOptions();

            if (data.hasOwnProperty('id')) {
                obj['id'] = SortOrder.constructFromObject(data['id']);
            }
            if (data.hasOwnProperty('text')) {
                obj['text'] = SortOrder.constructFromObject(data['text']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/SortOrder} id
 */
SortLogsOptions.prototype['id'] = undefined;

/**
 * @member {module:model/SortOrder} text
 */
SortLogsOptions.prototype['text'] = undefined;






export default SortLogsOptions;

