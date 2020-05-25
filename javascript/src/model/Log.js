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
import LogOrigin from './LogOrigin';
import LogSubtype from './LogSubtype';
import Tag from './Tag';

/**
 * The Log model module.
 * @module model/Log
 * @version 0.0.0
 */
class Log {
    /**
     * Constructs a new <code>Log</code>.
     * Describes an intervention or an event that happened.
     * @alias module:model/Log
     * @param id {Number} The unique identifier of this entity.
     * @param authorId {String} Name of the author.
     * @param title {String} Title of the log.
     * @param text {String} Body of the log.
     * @param creationTime {Number} Unix timestamp of the creation date time.
     * @param origin {module:model/LogOrigin} 
     * @param subtype {module:model/LogSubtype} 
     * @param tags {Array.<module:model/Tag>} A list of Tag objects.
     * @param rootLogId {Number} The unique identifier of this entity.
     * @param parentLogId {Number} The unique identifier of this entity.
     */
    constructor(id, authorId, title, text, creationTime, origin, subtype, tags, rootLogId, parentLogId) { 
        
        Log.initialize(this, id, authorId, title, text, creationTime, origin, subtype, tags, rootLogId, parentLogId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, authorId, title, text, creationTime, origin, subtype, tags, rootLogId, parentLogId) { 
        obj['id'] = id;
        obj['authorId'] = authorId;
        obj['title'] = title;
        obj['text'] = text;
        obj['creationTime'] = creationTime;
        obj['origin'] = origin;
        obj['subtype'] = subtype;
        obj['tags'] = tags;
        obj['rootLogId'] = rootLogId;
        obj['parentLogId'] = parentLogId;
    }

    /**
     * Constructs a <code>Log</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Log} obj Optional instance to populate.
     * @return {module:model/Log} The populated <code>Log</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Log();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('authorId')) {
                obj['authorId'] = ApiClient.convertToType(data['authorId'], 'String');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('text')) {
                obj['text'] = ApiClient.convertToType(data['text'], 'String');
            }
            if (data.hasOwnProperty('creationTime')) {
                obj['creationTime'] = ApiClient.convertToType(data['creationTime'], 'Number');
            }
            if (data.hasOwnProperty('origin')) {
                obj['origin'] = LogOrigin.constructFromObject(data['origin']);
            }
            if (data.hasOwnProperty('subtype')) {
                obj['subtype'] = LogSubtype.constructFromObject(data['subtype']);
            }
            if (data.hasOwnProperty('tags')) {
                obj['tags'] = ApiClient.convertToType(data['tags'], [Tag]);
            }
            if (data.hasOwnProperty('rootLogId')) {
                obj['rootLogId'] = ApiClient.convertToType(data['rootLogId'], 'Number');
            }
            if (data.hasOwnProperty('parentLogId')) {
                obj['parentLogId'] = ApiClient.convertToType(data['parentLogId'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * The unique identifier of this entity.
 * @member {Number} id
 */
Log.prototype['id'] = undefined;

/**
 * Name of the author.
 * @member {String} authorId
 */
Log.prototype['authorId'] = undefined;

/**
 * Title of the log.
 * @member {String} title
 */
Log.prototype['title'] = undefined;

/**
 * Body of the log.
 * @member {String} text
 */
Log.prototype['text'] = undefined;

/**
 * Unix timestamp of the creation date time.
 * @member {Number} creationTime
 */
Log.prototype['creationTime'] = undefined;

/**
 * @member {module:model/LogOrigin} origin
 */
Log.prototype['origin'] = undefined;

/**
 * @member {module:model/LogSubtype} subtype
 */
Log.prototype['subtype'] = undefined;

/**
 * A list of Tag objects.
 * @member {Array.<module:model/Tag>} tags
 */
Log.prototype['tags'] = undefined;

/**
 * The unique identifier of this entity.
 * @member {Number} rootLogId
 */
Log.prototype['rootLogId'] = undefined;

/**
 * The unique identifier of this entity.
 * @member {Number} parentLogId
 */
Log.prototype['parentLogId'] = undefined;






export default Log;

