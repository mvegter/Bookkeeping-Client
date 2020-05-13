# Rust API client for openapi

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

## Overview

This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project.  By using the [openapi-spec](https://openapis.org) from a remote server, you can easily generate an API client.

- API version: 0.0.0
- Package version: 1.0.0
- Build package: org.openapitools.codegen.languages.RustClientCodegen

## Installation

Put the package under your project folder and add the following to `Cargo.toml` under `[dependencies]`:

```
    openapi = { path = "./generated" }
```

## Documentation for API Endpoints

All URIs are relative to *http://localhost/api*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*DefaultApi* | [**get_deploy_information**](docs/DefaultApi.md#get_deploy_information) | **Get** /status | Get deploy information
*DefaultApi* | [**get_server_information**](docs/DefaultApi.md#get_server_information) | **Get** / | Get server information
*LogApi* | [**create_log**](docs/LogApi.md#create_log) | **Post** /logs | Adds a new log
*LogApi* | [**get_log_by_id**](docs/LogApi.md#get_log_by_id) | **Get** /logs/{logId} | Gets a log by Id
*LogApi* | [**list_logs**](docs/LogApi.md#list_logs) | **Get** /logs | List all logs
*LogApi* | [**list_tags_by_log_id**](docs/LogApi.md#list_tags_by_log_id) | **Get** /logs/{logId}/tags | Lists all tags associated with a log
*TagApi* | [**create_tag**](docs/TagApi.md#create_tag) | **Post** /tags | Adds a new tag
*TagApi* | [**get_logs_by_tag_id**](docs/TagApi.md#get_logs_by_tag_id) | **Get** /tags/{tagId}/logs | Gets all logs with this tag id
*TagApi* | [**get_tag_by_id**](docs/TagApi.md#get_tag_by_id) | **Get** /tags/{tagId} | Gets a tag by Id
*TagApi* | [**list_tags**](docs/TagApi.md#list_tags) | **Get** /tags | List all tags


## Documentation For Models

 - [ApiInformation](docs/ApiInformation.md)
 - [ArrayOfLogsResponse](docs/ArrayOfLogsResponse.md)
 - [ArrayOfTagsResponse](docs/ArrayOfTagsResponse.md)
 - [CreateLog](docs/CreateLog.md)
 - [CreateTag](docs/CreateTag.md)
 - [DeployInformation](docs/DeployInformation.md)
 - [Error](docs/Error.md)
 - [Errors](docs/Errors.md)
 - [Log](docs/Log.md)
 - [LogOrigin](docs/LogOrigin.md)
 - [LogResponse](docs/LogResponse.md)
 - [Tag](docs/Tag.md)
 - [TagResponse](docs/TagResponse.md)


To get access to the crate's generated documentation, use:

```
cargo doc --open
```

## Author


