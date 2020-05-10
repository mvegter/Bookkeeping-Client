#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LogResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LogResponse::LogResponse()
{
	//__init();
}

LogResponse::~LogResponse()
{
	//__cleanup();
}

void
LogResponse::__init()
{
	//data = new Log();
}

void
LogResponse::__cleanup()
{
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//
}

void
LogResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("Log")) {
			jsonToValue(&data, node, "Log", "Log");
		} else {
			
			Log* obj = static_cast<Log*> (&data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

LogResponse::LogResponse(char* json)
{
	this->fromJson(json);
}

char*
LogResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Log")) {
		Log obj = getData();
		node = converttoJson(&obj, "Log", "");
	}
	else {
		
		Log obj = static_cast<Log> (getData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Log
LogResponse::getData()
{
	return data;
}

void
LogResponse::setData(Log  data)
{
	this->data = data;
}


