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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.AliceBookkeeping);
  }
}(this, function(expect, AliceBookkeeping) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new AliceBookkeeping.FilterLogsOptions();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('FilterLogsOptions', function() {
    it('should create an instance of FilterLogsOptions', function() {
      // uncomment below and update the code to test FilterLogsOptions
      //var instane = new AliceBookkeeping.FilterLogsOptions();
      //expect(instance).to.be.a(AliceBookkeeping.FilterLogsOptions);
    });

    it('should have the property origin (base name: "origin")', function() {
      // uncomment below and update the code to test the property origin
      //var instane = new AliceBookkeeping.FilterLogsOptions();
      //expect(instance).to.be();
    });

    it('should have the property parentLog (base name: "parentLog")', function() {
      // uncomment below and update the code to test the property parentLog
      //var instane = new AliceBookkeeping.FilterLogsOptions();
      //expect(instance).to.be();
    });

    it('should have the property rootLog (base name: "rootLog")', function() {
      // uncomment below and update the code to test the property rootLog
      //var instane = new AliceBookkeeping.FilterLogsOptions();
      //expect(instance).to.be();
    });

    it('should have the property tag (base name: "tag")', function() {
      // uncomment below and update the code to test the property tag
      //var instane = new AliceBookkeeping.FilterLogsOptions();
      //expect(instance).to.be();
    });

  });

}));
