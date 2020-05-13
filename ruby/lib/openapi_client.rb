=begin
#ALICE Bookkeeping

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 0.0.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

# Common files
require 'openapi_client/api_client'
require 'openapi_client/api_error'
require 'openapi_client/version'
require 'openapi_client/configuration'

# Models
require 'openapi_client/models/api_information'
require 'openapi_client/models/array_of_logs_response'
require 'openapi_client/models/array_of_tags_response'
require 'openapi_client/models/create_log'
require 'openapi_client/models/create_tag'
require 'openapi_client/models/deploy_information'
require 'openapi_client/models/error'
require 'openapi_client/models/errors'
require 'openapi_client/models/log'
require 'openapi_client/models/log_origin'
require 'openapi_client/models/log_response'
require 'openapi_client/models/tag'
require 'openapi_client/models/tag_response'

# APIs
require 'openapi_client/api/default_api'
require 'openapi_client/api/log_api'
require 'openapi_client/api/tag_api'

module OpenapiClient
  class << self
    # Customize default settings for the SDK using block.
    #   OpenapiClient.configure do |config|
    #     config.username = "xxx"
    #     config.password = "xxx"
    #   end
    # If no block given, return the default Configuration object.
    def configure
      if block_given?
        yield(Configuration.default)
      else
        Configuration.default
      end
    end
  end
end
