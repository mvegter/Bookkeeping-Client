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
* Enum class LogSubtype.
* @enum {}
* @readonly
*/
export default class LogSubtype {
    
        /**
         * value: "run"
         * @const
         */
        "run" = "run";

    
        /**
         * value: "subsystem"
         * @const
         */
        "subsystem" = "subsystem";

    
        /**
         * value: "announcement"
         * @const
         */
        "announcement" = "announcement";

    
        /**
         * value: "intervention"
         * @const
         */
        "intervention" = "intervention";

    
        /**
         * value: "comment"
         * @const
         */
        "comment" = "comment";

    

    /**
    * Returns a <code>LogSubtype</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/LogSubtype} The enum <code>LogSubtype</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}
