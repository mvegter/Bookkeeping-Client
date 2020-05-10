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
*getLogByIdSync* | *GET* /logs/{id} | Gets a log by Id.
*getLogByIdASync* | *GET* /logs/{id} | Gets a log by Id.
*listLogsSync* | *GET* /logs | List all logs.
*listLogsASync* | *GET* /logs | List all logs.


## What are the Model files for the data structures/objects?
Class | Description
------------- | -------------
 *ApiInformation* | API information
 *ArrayOfLogsResponse* | Response containing multiple logs.
 *DeployInformation* | Deploy information
 *Error* | An Error object.
 *Errors* | A list of Error objects.
 *Log* | Describes an intervention or an event that happened.
 *LogResponse* | Response containing a single log.

