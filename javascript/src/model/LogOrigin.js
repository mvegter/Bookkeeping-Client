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
* Enum class LogOrigin.
* @enum {}
* @readonly
*/
export default class LogOrigin {
    
        /**
         * value: "human"
         * @const
         */
        "human" = "human";

    
        /**
         * value: "process"
         * @const
         */
        "process" = "process";

    

    /**
    * Returns a <code>LogOrigin</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/LogOrigin} The enum <code>LogOrigin</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}
