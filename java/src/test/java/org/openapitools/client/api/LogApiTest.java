/*
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.ArrayOfLogsResponse;
import org.openapitools.client.model.ArrayOfTagsResponse;
import org.openapitools.client.model.CreateLog;
import org.openapitools.client.model.Errors;
import org.openapitools.client.model.FilterLogsOptions;
import org.openapitools.client.model.LogResponse;
import org.openapitools.client.model.LogTreeResponse;
import org.openapitools.client.model.PaginationOptions;
import org.openapitools.client.model.SortLogsOptions;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for LogApi
 */
@Ignore
public class LogApiTest {

    private final LogApi api = new LogApi();

    
    /**
     * Adds a new log
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void createLogTest() throws ApiException {
        CreateLog createLog = null;
        LogResponse response = api.createLog(createLog);

        // TODO: test validations
    }
    
    /**
     * Gets a log by Id
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getLogByIdTest() throws ApiException {
        Long logId = null;
        LogResponse response = api.getLogById(logId);

        // TODO: test validations
    }
    
    /**
     * Get the Log tree for a given Log
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getLogTreeTest() throws ApiException {
        Long logId = null;
        LogTreeResponse response = api.getLogTree(logId);

        // TODO: test validations
    }
    
    /**
     * List all logs
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void listLogsTest() throws ApiException {
        PaginationOptions page = null;
        FilterLogsOptions filter = null;
        SortLogsOptions sort = null;
        ArrayOfLogsResponse response = api.listLogs(page, filter, sort);

        // TODO: test validations
    }
    
    /**
     * Lists all tags associated with a log
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void listTagsByLogIdTest() throws ApiException {
        Long logId = null;
        ArrayOfTagsResponse response = api.listTagsByLogId(logId);

        // TODO: test validations
    }
    
}
