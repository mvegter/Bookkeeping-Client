#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "TagManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


TagManager::TagManager()
{

}

TagManager::~TagManager()
{

}

static gboolean __TagManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __TagManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__TagManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createTagProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(TagResponse, Error, void* )
	= reinterpret_cast<void(*)(TagResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	TagResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("TagResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "TagResponse", "TagResponse");
			json_node_free(pJson);

			if ("TagResponse" == "std::string") {
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

static bool createTagHelper(char * accessToken,
	
	void(* handler)(TagResponse, Error, void* )
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

	string url("/tags");
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
		NetClient::easycurl(TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createTagProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createTagProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TagManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TagManager::createTagAsync(char * accessToken,
	
	void(* handler)(TagResponse, Error, void* )
	, void* userData)
{
	return createTagHelper(accessToken,
	
	handler, userData, true);
}

bool TagManager::createTagSync(char * accessToken,
	
	void(* handler)(TagResponse, Error, void* )
	, void* userData)
{
	return createTagHelper(accessToken,
	
	handler, userData, false);
}

static bool getLogsByTagIdProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool getLogsByTagIdHelper(char * accessToken,
	long long tagId, 
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
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tags/{tagId}/logs");
	int pos;

	string s_tagId("{");
	s_tagId.append("tagId");
	s_tagId.append("}");
	pos = url.find(s_tagId);
	url.erase(pos, s_tagId.length());
	url.insert(pos, stringify(&tagId, "long long"));

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
		NetClient::easycurl(TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getLogsByTagIdProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getLogsByTagIdProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TagManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TagManager::getLogsByTagIdAsync(char * accessToken,
	long long tagId, 
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	, void* userData)
{
	return getLogsByTagIdHelper(accessToken,
	tagId, 
	handler, userData, true);
}

bool TagManager::getLogsByTagIdSync(char * accessToken,
	long long tagId, 
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	, void* userData)
{
	return getLogsByTagIdHelper(accessToken,
	tagId, 
	handler, userData, false);
}

static bool getTagByIdProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(TagResponse, Error, void* )
	= reinterpret_cast<void(*)(TagResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	TagResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("TagResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "TagResponse", "TagResponse");
			json_node_free(pJson);

			if ("TagResponse" == "std::string") {
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

static bool getTagByIdHelper(char * accessToken,
	long long tagId, 
	void(* handler)(TagResponse, Error, void* )
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

	string url("/tags/{tagId}");
	int pos;

	string s_tagId("{");
	s_tagId.append("tagId");
	s_tagId.append("}");
	pos = url.find(s_tagId);
	url.erase(pos, s_tagId.length());
	url.insert(pos, stringify(&tagId, "long long"));

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
		NetClient::easycurl(TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getTagByIdProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getTagByIdProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TagManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TagManager::getTagByIdAsync(char * accessToken,
	long long tagId, 
	void(* handler)(TagResponse, Error, void* )
	, void* userData)
{
	return getTagByIdHelper(accessToken,
	tagId, 
	handler, userData, true);
}

bool TagManager::getTagByIdSync(char * accessToken,
	long long tagId, 
	void(* handler)(TagResponse, Error, void* )
	, void* userData)
{
	return getTagByIdHelper(accessToken,
	tagId, 
	handler, userData, false);
}

static bool listTagsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool listTagsHelper(char * accessToken,
	int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, 
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

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tags");
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
		NetClient::easycurl(TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = listTagsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), listTagsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TagManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TagManager::listTagsAsync(char * accessToken,
	int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData)
{
	return listTagsHelper(accessToken,
	pageLeft_Square_BracketoffsetRight_Square_Bracket, pageLeft_Square_BracketlimitRight_Square_Bracket, 
	handler, userData, true);
}

bool TagManager::listTagsSync(char * accessToken,
	int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData)
{
	return listTagsHelper(accessToken,
	pageLeft_Square_BracketoffsetRight_Square_Bracket, pageLeft_Square_BracketlimitRight_Square_Bracket, 
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
		NetClient::easycurl(TagManager::getBasePath(), url, myhttpmethod, queryParams,
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

		requestInfo = new(nothrow) RequestInfo (TagManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), listTagsByLogIdProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TagManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TagManager::listTagsByLogIdAsync(char * accessToken,
	long long logId, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData)
{
	return listTagsByLogIdHelper(accessToken,
	logId, 
	handler, userData, true);
}

bool TagManager::listTagsByLogIdSync(char * accessToken,
	long long logId, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData)
{
	return listTagsByLogIdHelper(accessToken,
	logId, 
	handler, userData, false);
}

