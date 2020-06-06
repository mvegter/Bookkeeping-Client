# Documentation for ALICE Bookkeeping 0.0.0 Tizen Client SDK

## How do I get the doc files?
First generate source code by running `openapi-generator`
Then run `doc/generateDocumentation.sh` from the output folder. It will generate all the doc files and put them in the `doc/SDK` directory.
To successfully generate documentation it needs `Doxygen` installed in the path.
*Note* - Before generating the documentation, put the logo of the project as the file `doc/logo.png` before running `doxygen`.


## How do I use this?
This is the structure of the doc folder:

```
.
├── logo.png                  \\Logo of the project
├── Doxyfile                  \\Doxygen config files
├── generateDocumentation.sh  \\Script to run to generate documentation
├── README.md                 \\This file
├── SDK                       \\Documentation for all classes in ALICE Bookkeeping Tizen Client SDK. See ./html/index.html
│   └── html

```

## *tl;dr* run this:

```
doc/generateDocumentation.sh
```

The above SDK folder will be generated. See the index.html inside the SDK folder.


## What's Doxygen?
Doxygen is the de facto standard tool for generating/extracting documentation from annotated/unannotated C++ sources, but it also supports other popular programming languages such as C, Objective-C, C#, PHP, Java, Python, IDL (Corba, Microsoft, and UNO/OpenOffice flavors), Fortran, VHDL, Tcl, and to some extent D.

Check out [Doxygen](https://www.doxygen.org/) for additional information about the Doxygen project.

## I Don't want to run Doxygen. What are the API files for accessing the REST endpoints?
All URIs are relative to http://localhosthttp://localhost/api

### DefaultManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getDeployInformationSync* | *GET* /status | Get deploy information.
*getDeployInformationASync* | *GET* /status | Get deploy information.
*getServerInformationSync* | *GET* / | Get server information.
*getServerInformationASync* | *GET* / | Get server information.

### LogManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createLogSync* | *POST* /logs | Adds a new log.
*createLogASync* | *POST* /logs | Adds a new log.
*getLogByIdSync* | *GET* /logs/{logId} | Gets a log by Id.
*getLogByIdASync* | *GET* /logs/{logId} | Gets a log by Id.
*getLogTreeSync* | *GET* /logs/{logId}/tree | Get the Log tree for a given Log.
*getLogTreeASync* | *GET* /logs/{logId}/tree | Get the Log tree for a given Log.
*listLogsSync* | *GET* /logs | List all logs.
*listLogsASync* | *GET* /logs | List all logs.
*listTagsByLogIdSync* | *GET* /logs/{logId}/tags | Lists all tags associated with a log.
*listTagsByLogIdASync* | *GET* /logs/{logId}/tags | Lists all tags associated with a log.

### TagManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createTagSync* | *POST* /tags | Adds a new tag.
*createTagASync* | *POST* /tags | Adds a new tag.
*deleteTagByIdSync* | *DELETE* /tags/{tagId} | Deletes a tag by Id.
*deleteTagByIdASync* | *DELETE* /tags/{tagId} | Deletes a tag by Id.
*getLogsByTagIdSync* | *GET* /tags/{tagId}/logs | Gets all logs with this tag id.
*getLogsByTagIdASync* | *GET* /tags/{tagId}/logs | Gets all logs with this tag id.
*getTagByIdSync* | *GET* /tags/{tagId} | Gets a tag by Id.
*getTagByIdASync* | *GET* /tags/{tagId} | Gets a tag by Id.
*listTagsSync* | *GET* /tags | List all tags.
*listTagsASync* | *GET* /tags | List all tags.


## What are the Model files for the data structures/objects?
Class | Description
------------- | -------------
 *ApiInformation* | API information
 *ArrayOfLogsResponse* | Response containing multiple logs.
 *ArrayOfLogsResponseMeta* | The metadata related to an array of logs response.
 *ArrayOfTagsResponse* | Response containing multiple tags.
 *CreateLog* | Describes an intervention or an event that happened.
 *CreateTag* | A label attached to something for the purpose of identification.
 *DeployInformation* | Deploy information
 *Error* | An Error object.
 *ErrorSource* | An object containing references to the source of the error.
 *Errors* | A list of Error objects.
 *FilterLogsOptions* | Specifies the log related filter requirements for a request.
 *FilterLogsTagOptions* | Specifies the tag related filter requirements for a request.
 *Log* | Describes an intervention or an event that happened.
 *LogOrigin* | Type of creator.
 *LogResponse* | Response containing a single log.
 *LogSubtype* | The subtype of a Log.
 *LogTree* | Describes an intervention or an event that happened.
 *LogTreeResponse* | Response containing a single log tree.
 *PaginationMeta* | The metadata related to pagination.
 *PaginationOptions* | Specifies the pagination requirements of a request.
 *SortLogsOptions* | Specifies the sorting requirements of a request.
 *SortOrder* | Specifies the sorting direction of a sorting option.
 *Tag* | A label attached to something for the purpose of identification.
 *TagResponse* | Response containing a single tag.

