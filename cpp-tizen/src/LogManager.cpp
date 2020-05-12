#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "LogManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


LogManager::LogManager()
{

}

LogManager::~LogManager()
{

}

static gboolean __LogManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __LogManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__LogManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createLogProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(LogResponse, Error, void* )
	= reinterpret_cast<void(*)(LogResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	LogResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("LogResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "LogResponse", "LogResponse");
			json_node_free(pJson);

			if ("LogResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool createLogHelper(char * accessToken,
	UNKNOWN_BASE_TYPE uNKNOWNBASETYPE, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("UNKNOWN_BASE_TYPE")) {
		node = converttoJson(&uNKNOWNBASETYPE, "UNKNOWN_BASE_TYPE", "");
	}
	
	char *jsonStr =  uNKNOWNBASETYPE.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/logs");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createLogProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createLogProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogManager::createLogAsync(char * accessToken,
	UNKNOWN_BASE_TYPE uNKNOWNBASETYPE, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData)
{
	return createLogHelper(accessToken,
	uNKNOWNBASETYPE, 
	handler, userData, true);
}

bool LogManager::createLogSync(char * accessToken,
	UNKNOWN_BASE_TYPE uNKNOWNBASETYPE, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData)
{
	return createLogHelper(accessToken,
	uNKNOWNBASETYPE, 
	handler, userData, false);
}

static bool getLogByIdProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(LogResponse, Error, void* )
	= reinterpret_cast<void(*)(LogResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	LogResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("LogResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "LogResponse", "LogResponse");
			json_node_free(pJson);

			if ("LogResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getLogByIdHelper(char * accessToken,
	long long logId, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/logs/{logId}");
	int pos;

	string s_logId("{");
	s_logId.append("logId");
	s_logId.append("}");
	pos = url.find(s_logId);
	url.erase(pos, s_logId.length());
	url.insert(pos, stringify(&logId, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getLogByIdProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getLogByIdProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogManager::getLogByIdAsync(char * accessToken,
	long long logId, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData)
{
	return getLogByIdHelper(accessToken,
	logId, 
	handler, userData, true);
}

bool LogManager::getLogByIdSync(char * accessToken,
	long long logId, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData)
{
	return getLogByIdHelper(accessToken,
	logId, 
	handler, userData, false);
}

static bool listLogsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	= reinterpret_cast<void(*)(ArrayOfLogsResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ArrayOfLogsResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ArrayOfLogsResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ArrayOfLogsResponse", "ArrayOfLogsResponse");
			json_node_free(pJson);

			if ("ArrayOfLogsResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool listLogsHelper(char * accessToken,
	std::string filterLeft_Square_BracketoriginRight_Square_Bracket, int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, std::list<std::string> sort, 
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&filterLeft_Square_BracketoriginRight_Square_Bracket, "std::string");
	queryParams.insert(pair<string, string>("filter[origin]", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter[origin]");
	}


	itemAtq = stringify(&pageLeft_Square_BracketoffsetRight_Square_Bracket, "int");
	queryParams.insert(pair<string, string>("page[offset]", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page[offset]");
	}


	itemAtq = stringify(&pageLeft_Square_BracketlimitRight_Square_Bracket, "int");
	queryParams.insert(pair<string, string>("page[limit]", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page[limit]");
	}

	for (std::list
	<std::string>::iterator queryIter = sort.begin(); queryIter != sort.end(); ++queryIter) {
		string itemAt = stringify(&(*queryIter), "std::string");
		if( itemAt.empty()){
			continue;
		}
		queryParams.insert(pair<string, string>("sort", itemAt));
	}
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/logs");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = listLogsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), listLogsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogManager::listLogsAsync(char * accessToken,
	std::string filterLeft_Square_BracketoriginRight_Square_Bracket, int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, std::list<std::string> sort, 
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	, void* userData)
{
	return listLogsHelper(accessToken,
	filterLeft_Square_BracketoriginRight_Square_Bracket, pageLeft_Square_BracketoffsetRight_Square_Bracket, pageLeft_Square_BracketlimitRight_Square_Bracket, sort, 
	handler, userData, true);
}

bool LogManager::listLogsSync(char * accessToken,
	std::string filterLeft_Square_BracketoriginRight_Square_Bracket, int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, std::list<std::string> sort, 
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	, void* userData)
{
	return listLogsHelper(accessToken,
	filterLeft_Square_BracketoriginRight_Square_Bracket, pageLeft_Square_BracketoffsetRight_Square_Bracket, pageLeft_Square_BracketlimitRight_Square_Bracket, sort, 
	handler, userData, false);
}

static bool listTagsByLogIdProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	= reinterpret_cast<void(*)(ArrayOfTagsResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ArrayOfTagsResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ArrayOfTagsResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ArrayOfTagsResponse", "ArrayOfTagsResponse");
			json_node_free(pJson);

			if ("ArrayOfTagsResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool listTagsByLogIdHelper(char * accessToken,
	long long logId, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/logs/{logId}/tags");
	int pos;

	string s_logId("{");
	s_logId.append("logId");
	s_logId.append("}");
	pos = url.find(s_logId);
	url.erase(pos, s_logId.length());
	url.insert(pos, stringify(&logId, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = listTagsByLogIdProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (LogManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), listTagsByLogIdProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogManager::listTagsByLogIdAsync(char * accessToken,
	long long logId, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData)
{
	return listTagsByLogIdHelper(accessToken,
	logId, 
	handler, userData, true);
}

bool LogManager::listTagsByLogIdSync(char * accessToken,
	long long logId, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData)
{
	return listTagsByLogIdHelper(accessToken,
	logId, 
	handler, userData, false);
}

