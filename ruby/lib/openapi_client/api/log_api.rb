=begin
#ALICE Bookkeeping

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 0.0.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'cgi'

module OpenapiClient
  class LogApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Adds a new log
    # @param create_log [CreateLog] 
    # @param [Hash] opts the optional parameters
    # @return [LogResponse]
    def create_log(create_log, opts = {})
      data, _status_code, _headers = create_log_with_http_info(create_log, opts)
      data
    end

    # Adds a new log
    # @param create_log [CreateLog] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(LogResponse, Integer, Hash)>] LogResponse data, response status code and response headers
    def create_log_with_http_info(create_log, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: LogApi.create_log ...'
      end
      # verify the required parameter 'create_log' is set
      if @api_client.config.client_side_validation && create_log.nil?
        fail ArgumentError, "Missing the required parameter 'create_log' when calling LogApi.create_log"
      end
      # resource path
      local_var_path = '/logs'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(create_log) 

      # return_type
      return_type = opts[:return_type] || 'LogResponse' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKeyAuth']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: LogApi#create_log\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Gets a log by Id
    # @param log_id [Integer] The id of the log to retrieve
    # @param [Hash] opts the optional parameters
    # @return [LogResponse]
    def get_log_by_id(log_id, opts = {})
      data, _status_code, _headers = get_log_by_id_with_http_info(log_id, opts)
      data
    end

    # Gets a log by Id
    # @param log_id [Integer] The id of the log to retrieve
    # @param [Hash] opts the optional parameters
    # @return [Array<(LogResponse, Integer, Hash)>] LogResponse data, response status code and response headers
    def get_log_by_id_with_http_info(log_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: LogApi.get_log_by_id ...'
      end
      # verify the required parameter 'log_id' is set
      if @api_client.config.client_side_validation && log_id.nil?
        fail ArgumentError, "Missing the required parameter 'log_id' when calling LogApi.get_log_by_id"
      end
      if @api_client.config.client_side_validation && log_id < 1
        fail ArgumentError, 'invalid value for "log_id" when calling LogApi.get_log_by_id, must be greater than or equal to 1.'
      end

      # resource path
      local_var_path = '/logs/{logId}'.sub('{' + 'logId' + '}', CGI.escape(log_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] 

      # return_type
      return_type = opts[:return_type] || 'LogResponse' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKeyAuth']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: LogApi#get_log_by_id\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Get the Log tree for a given Log
    # @param log_id [Integer] The id of the log to retrieve
    # @param [Hash] opts the optional parameters
    # @return [LogTreeResponse]
    def get_log_tree(log_id, opts = {})
      data, _status_code, _headers = get_log_tree_with_http_info(log_id, opts)
      data
    end

    # Get the Log tree for a given Log
    # @param log_id [Integer] The id of the log to retrieve
    # @param [Hash] opts the optional parameters
    # @return [Array<(LogTreeResponse, Integer, Hash)>] LogTreeResponse data, response status code and response headers
    def get_log_tree_with_http_info(log_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: LogApi.get_log_tree ...'
      end
      # verify the required parameter 'log_id' is set
      if @api_client.config.client_side_validation && log_id.nil?
        fail ArgumentError, "Missing the required parameter 'log_id' when calling LogApi.get_log_tree"
      end
      if @api_client.config.client_side_validation && log_id < 1
        fail ArgumentError, 'invalid value for "log_id" when calling LogApi.get_log_tree, must be greater than or equal to 1.'
      end

      # resource path
      local_var_path = '/logs/{logId}/tree'.sub('{' + 'logId' + '}', CGI.escape(log_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] 

      # return_type
      return_type = opts[:return_type] || 'LogTreeResponse' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKeyAuth']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: LogApi#get_log_tree\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # List all logs
    # @param [Hash] opts the optional parameters
    # @option opts [PaginationOptions] :page Specifies the pagination requirements.
    # @option opts [FilterLogsOptions] :filter Specifies the filter requirements.
    # @option opts [SortLogsOptions] :sort Specifies the sorting requirements.
    # @return [ArrayOfLogsResponse]
    def list_logs(opts = {})
      data, _status_code, _headers = list_logs_with_http_info(opts)
      data
    end

    # List all logs
    # @param [Hash] opts the optional parameters
    # @option opts [PaginationOptions] :page Specifies the pagination requirements.
    # @option opts [FilterLogsOptions] :filter Specifies the filter requirements.
    # @option opts [SortLogsOptions] :sort Specifies the sorting requirements.
    # @return [Array<(ArrayOfLogsResponse, Integer, Hash)>] ArrayOfLogsResponse data, response status code and response headers
    def list_logs_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: LogApi.list_logs ...'
      end
      # resource path
      local_var_path = '/logs'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'page'] = opts[:'page'] if !opts[:'page'].nil?
      query_params[:'filter'] = opts[:'filter'] if !opts[:'filter'].nil?
      query_params[:'sort'] = opts[:'sort'] if !opts[:'sort'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] 

      # return_type
      return_type = opts[:return_type] || 'ArrayOfLogsResponse' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKeyAuth']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: LogApi#list_logs\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Lists all tags associated with a log
    # @param log_id [Integer] The id of the log to retrieve
    # @param [Hash] opts the optional parameters
    # @return [ArrayOfTagsResponse]
    def list_tags_by_log_id(log_id, opts = {})
      data, _status_code, _headers = list_tags_by_log_id_with_http_info(log_id, opts)
      data
    end

    # Lists all tags associated with a log
    # @param log_id [Integer] The id of the log to retrieve
    # @param [Hash] opts the optional parameters
    # @return [Array<(ArrayOfTagsResponse, Integer, Hash)>] ArrayOfTagsResponse data, response status code and response headers
    def list_tags_by_log_id_with_http_info(log_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: LogApi.list_tags_by_log_id ...'
      end
      # verify the required parameter 'log_id' is set
      if @api_client.config.client_side_validation && log_id.nil?
        fail ArgumentError, "Missing the required parameter 'log_id' when calling LogApi.list_tags_by_log_id"
      end
      if @api_client.config.client_side_validation && log_id < 1
        fail ArgumentError, 'invalid value for "log_id" when calling LogApi.list_tags_by_log_id, must be greater than or equal to 1.'
      end

      # resource path
      local_var_path = '/logs/{logId}/tags'.sub('{' + 'logId' + '}', CGI.escape(log_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] 

      # return_type
      return_type = opts[:return_type] || 'ArrayOfTagsResponse' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKeyAuth']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: LogApi#list_tags_by_log_id\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
