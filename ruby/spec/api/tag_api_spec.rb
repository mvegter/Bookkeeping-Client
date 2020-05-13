=begin
#ALICE Bookkeeping

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 0.0.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::TagApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'TagApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::TagApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of TagApi' do
    it 'should create an instance of TagApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::TagApi)
    end
  end

  # unit tests for create_tag
  # Adds a new tag
  # @param create_tag 
  # @param [Hash] opts the optional parameters
  # @return [TagResponse]
  describe 'create_tag test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for get_logs_by_tag_id
  # Gets all logs with this tag id
  # @param tag_id The id of the tag to retrieve
  # @param [Hash] opts the optional parameters
  # @return [ArrayOfLogsResponse]
  describe 'get_logs_by_tag_id test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for get_tag_by_id
  # Gets a tag by Id
  # @param tag_id The id of the tag to retrieve
  # @param [Hash] opts the optional parameters
  # @return [TagResponse]
  describe 'get_tag_by_id test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for list_tags
  # List all tags
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :page_offset The number of items to skip before starting to collect the result set.
  # @option opts [Integer] :page_limit The numbers of items to return.
  # @return [ArrayOfTagsResponse]
  describe 'list_tags test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end