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

/**
 * The FilterLogsTagOptions model module.
 * @module model/FilterLogsTagOptions
 * @version 0.0.0
 */
class FilterLogsTagOptions {
    /**
     * Constructs a new <code>FilterLogsTagOptions</code>.
     * Specifies the tag related filter requirements for a request.
     * @alias module:model/FilterLogsTagOptions
     * @param values {String} CSV style string of EntityIds.
     * @param operation {module:model/FilterLogsTagOptions.OperationEnum} The operation indicating the relation between the data.
     */
    constructor(values, operation) { 
        
        FilterLogsTagOptions.initialize(this, values, operation);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, values, operation) { 
        obj['values'] = values;
        obj['operation'] = operation;
    }

    /**
     * Constructs a <code>FilterLogsTagOptions</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/FilterLogsTagOptions} obj Optional instance to populate.
     * @return {module:model/FilterLogsTagOptions} The populated <code>FilterLogsTagOptions</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new FilterLogsTagOptions();

            if (data.hasOwnProperty('values')) {
                obj['values'] = ApiClient.convertToType(data['values'], 'String');
            }
            if (data.hasOwnProperty('operation')) {
                obj['operation'] = ApiClient.convertToType(data['operation'], 'String');
            }
        }
        return obj;
    }


}

/**
 * CSV style string of EntityIds.
 * @member {String} values
 */
FilterLogsTagOptions.prototype['values'] = undefined;

/**
 * The operation indicating the relation between the data.
 * @member {module:model/FilterLogsTagOptions.OperationEnum} operation
 */
FilterLogsTagOptions.prototype['operation'] = undefined;





/**
 * Allowed values for the <code>operation</code> property.
 * @enum {String}
 * @readonly
 */
FilterLogsTagOptions['OperationEnum'] = {

    /**
     * value: "and"
     * @const
     */
    "and": "and",

    /**
     * value: "or"
     * @const
     */
    "or": "or"
};



export default FilterLogsTagOptions;

