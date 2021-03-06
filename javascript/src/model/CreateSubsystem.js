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
 * The CreateSubsystem model module.
 * @module model/CreateSubsystem
 * @version 0.0.0
 */
class CreateSubsystem {
    /**
     * Constructs a new <code>CreateSubsystem</code>.
     * A label attached to something for the purpose of identification.
     * @alias module:model/CreateSubsystem
     * @param text {String} The label value of the subsystem.
     */
    constructor(text) { 
        
        CreateSubsystem.initialize(this, text);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, text) { 
        obj['text'] = text;
    }

    /**
     * Constructs a <code>CreateSubsystem</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CreateSubsystem} obj Optional instance to populate.
     * @return {module:model/CreateSubsystem} The populated <code>CreateSubsystem</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CreateSubsystem();

            if (data.hasOwnProperty('text')) {
                obj['text'] = ApiClient.convertToType(data['text'], 'String');
            }
        }
        return obj;
    }


}

/**
 * The label value of the subsystem.
 * @member {String} text
 */
CreateSubsystem.prototype['text'] = undefined;






export default CreateSubsystem;

