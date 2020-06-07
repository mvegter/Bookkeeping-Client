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
import ArrayOfSubsystemsResponseMeta from './ArrayOfSubsystemsResponseMeta';
import Subsystem from './Subsystem';

/**
 * The ArrayOfSubsystemsResponse model module.
 * @module model/ArrayOfSubsystemsResponse
 * @version 0.0.0
 */
class ArrayOfSubsystemsResponse {
    /**
     * Constructs a new <code>ArrayOfSubsystemsResponse</code>.
     * Response containing multiple subsystems.
     * @alias module:model/ArrayOfSubsystemsResponse
     * @param data {Array.<module:model/Subsystem>} A list of Subsystem objects.
     */
    constructor(data) { 
        
        ArrayOfSubsystemsResponse.initialize(this, data);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, data) { 
        obj['data'] = data;
    }

    /**
     * Constructs a <code>ArrayOfSubsystemsResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ArrayOfSubsystemsResponse} obj Optional instance to populate.
     * @return {module:model/ArrayOfSubsystemsResponse} The populated <code>ArrayOfSubsystemsResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ArrayOfSubsystemsResponse();

            if (data.hasOwnProperty('meta')) {
                obj['meta'] = ArrayOfSubsystemsResponseMeta.constructFromObject(data['meta']);
            }
            if (data.hasOwnProperty('data')) {
                obj['data'] = ApiClient.convertToType(data['data'], [Subsystem]);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ArrayOfSubsystemsResponseMeta} meta
 */
ArrayOfSubsystemsResponse.prototype['meta'] = undefined;

/**
 * A list of Subsystem objects.
 * @member {Array.<module:model/Subsystem>} data
 */
ArrayOfSubsystemsResponse.prototype['data'] = undefined;






export default ArrayOfSubsystemsResponse;
