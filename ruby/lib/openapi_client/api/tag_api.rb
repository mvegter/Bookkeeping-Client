=begin
#ALICE Bookkeeping

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 0.0.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'cgi'

module OpenapiClient
  class TagApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Adds a new tag
    # @param create_tag [CreateTag] 
    # @param [Hash] opts the optional parameters
    # @return [TagResponse]
    def create_tag(create_tag, opts = {})
      data, _status_code, _headers = create_tag_with_http_info(create_tag, opts)
      data
    end

    # Adds a new tag
    # @param create_tag [CreateTag] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(TagResponse, Integer, Hash)>] TagResponse data, response status code and response headers
    def create_tag_with_http_info(create_tag, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: TagApi.create_tag ...'
      end
      # verify the required parameter 'create_tag' is set
      if @api_client.config.client_side_validation && create_tag.nil?
        fail ArgumentError, "Missing the required parameter 'create_tag' when calling TagApi.create_tag"
      end
      # resource path
      local_var_path = '/tags'

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
      post_body = opts[:body] || @api_client.object_to_http_body(create_tag) 

      # return_type
      return_type = opts[:return_type] || 'TagResponse' 

      # auth_names
      auth_names = opts[:auth_names] || []

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
        @api_client.config.logger.debug "API called: TagApi#create_tag\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Gets all logs with this tag id
    # @param tag_id [Integer] The id of the tag to retrieve
    # @param [Hash] opts the optional parameters
    # @return [ArrayOfLogsResponse]
    def get_logs_by_tag_id(tag_id, opts = {})
      data, _status_code, _headers = get_logs_by_tag_id_with_http_info(tag_id, opts)
      data
    end

    # Gets all logs with this tag id
    # @param tag_id [Integer] The id of the tag to retrieve
    # @param [Hash] opts the optional parameters
    # @return [Array<(ArrayOfLogsResponse, Integer, Hash)>] ArrayOfLogsResponse data, response status code and response headers
    def get_logs_by_tag_id_with_http_info(tag_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: TagApi.get_logs_by_tag_id ...'
      end
      # verify the required parameter 'tag_id' is set
      if @api_client.config.client_side_validation && tag_id.nil?
        fail ArgumentError, "Missing the required parameter 'tag_id' when calling TagApi.get_logs_by_tag_id"
      end
      # resource path
      local_var_path = '/tags/{tagId}/logs'.sub('{' + 'tagId' + '}', CGI.escape(tag_id.to_s))

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
      return_type = opts[:return_type] || 'ArrayOfLogsResponse' 

      # auth_names
      auth_names = opts[:auth_names] || []

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
        @api_client.config.logger.debug "API called: TagApi#get_logs_by_tag_id\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Gets a tag by Id
    # @param tag_id [Integer] The id of the tag to retrieve
    # @param [Hash] opts the optional parameters
    # @return [TagResponse]
    def get_tag_by_id(tag_id, opts = {})
      data, _status_code, _headers = get_tag_by_id_with_http_info(tag_id, opts)
      data
    end

    # Gets a tag by Id
    # @param tag_id [Integer] The id of the tag to retrieve
    # @param [Hash] opts the optional parameters
    # @return [Array<(TagResponse, Integer, Hash)>] TagResponse data, response status code and response headers
    def get_tag_by_id_with_http_info(tag_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: TagApi.get_tag_by_id ...'
      end
      # verify the required parameter 'tag_id' is set
      if @api_client.config.client_side_validation && tag_id.nil?
        fail ArgumentError, "Missing the required parameter 'tag_id' when calling TagApi.get_tag_by_id"
      end
      # resource path
      local_var_path = '/tags/{tagId}'.sub('{' + 'tagId' + '}', CGI.escape(tag_id.to_s))

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
      return_type = opts[:return_type] || 'TagResponse' 

      # auth_names
      auth_names = opts[:auth_names] || []

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
        @api_client.config.logger.debug "API called: TagApi#get_tag_by_id\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # List all tags
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :page_offset The number of items to skip before starting to collect the result set. (default to 0)
    # @option opts [Integer] :page_limit The numbers of items to return. (default to 100)
    # @return [ArrayOfTagsResponse]
    def list_tags(opts = {})
      data, _status_code, _headers = list_tags_with_http_info(opts)
      data
    end

    # List all tags
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :page_offset The number of items to skip before starting to collect the result set.
    # @option opts [Integer] :page_limit The numbers of items to return.
    # @return [Array<(ArrayOfTagsResponse, Integer, Hash)>] ArrayOfTagsResponse data, response status code and response headers
    def list_tags_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: TagApi.list_tags ...'
      end
      if @api_client.config.client_side_validation && !opts[:'page_offset'].nil? && opts[:'page_offset'] < 0
        fail ArgumentError, 'invalid value for "opts[:"page_offset"]" when calling TagApi.list_tags, must be greater than or equal to 0.'
      end

      if @api_client.config.client_side_validation && !opts[:'page_limit'].nil? && opts[:'page_limit'] > 100
        fail ArgumentError, 'invalid value for "opts[:"page_limit"]" when calling TagApi.list_tags, must be smaller than or equal to 100.'
      end

      if @api_client.config.client_side_validation && !opts[:'page_limit'].nil? && opts[:'page_limit'] < 1
        fail ArgumentError, 'invalid value for "opts[:"page_limit"]" when calling TagApi.list_tags, must be greater than or equal to 1.'
      end

      # resource path
      local_var_path = '/tags'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'page[offset]'] = opts[:'page_offset'] if !opts[:'page_offset'].nil?
      query_params[:'page[limit]'] = opts[:'page_limit'] if !opts[:'page_limit'].nil?

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
      auth_names = opts[:auth_names] || []

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
        @api_client.config.logger.debug "API called: TagApi#list_tags\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
