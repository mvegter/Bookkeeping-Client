=begin
#ALICE Bookkeeping

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 0.0.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::LogOrigin
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'LogOrigin' do
  before do
    # run before each test
    @instance = OpenapiClient::LogOrigin.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of LogOrigin' do
    it 'should create an instance of LogOrigin' do
      expect(@instance).to be_instance_of(OpenapiClient::LogOrigin)
    end
  end
end