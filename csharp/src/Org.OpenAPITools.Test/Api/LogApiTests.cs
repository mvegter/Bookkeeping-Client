/* 
 * ALICE Bookkeeping
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Test
{
    /// <summary>
    ///  Class for testing LogApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class LogApiTests
    {
        private LogApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new LogApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of LogApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' LogApi
            //Assert.IsInstanceOf(typeof(LogApi), instance);
        }

        
        /// <summary>
        /// Test CreateLog
        /// </summary>
        [Test]
        public void CreateLogTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //CreateLog createLog = null;
            //var response = instance.CreateLog(createLog);
            //Assert.IsInstanceOf(typeof(LogResponse), response, "response is LogResponse");
        }
        
        /// <summary>
        /// Test GetLogById
        /// </summary>
        [Test]
        public void GetLogByIdTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //long logId = null;
            //var response = instance.GetLogById(logId);
            //Assert.IsInstanceOf(typeof(LogResponse), response, "response is LogResponse");
        }
        
        /// <summary>
        /// Test GetLogTree
        /// </summary>
        [Test]
        public void GetLogTreeTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //long logId = null;
            //var response = instance.GetLogTree(logId);
            //Assert.IsInstanceOf(typeof(LogTreeResponse), response, "response is LogTreeResponse");
        }
        
        /// <summary>
        /// Test ListLogs
        /// </summary>
        [Test]
        public void ListLogsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //PaginationOptions page = null;
            //FilterLogsOptions filter = null;
            //SortLogsOptions sort = null;
            //var response = instance.ListLogs(page, filter, sort);
            //Assert.IsInstanceOf(typeof(ArrayOfLogsResponse), response, "response is ArrayOfLogsResponse");
        }
        
        /// <summary>
        /// Test ListTagsByLogId
        /// </summary>
        [Test]
        public void ListTagsByLogIdTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //long logId = null;
            //var response = instance.ListTagsByLogId(logId);
            //Assert.IsInstanceOf(typeof(ArrayOfTagsResponse), response, "response is ArrayOfTagsResponse");
        }
        
    }

}
