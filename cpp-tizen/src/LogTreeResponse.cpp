#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LogTreeResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LogTreeResponse::LogTreeResponse()
{
	//__init();
}

LogTreeResponse::~LogTreeResponse()
{
	//__cleanup();
}

void
LogTreeResponse::__init()
{
	//data = new LogTree();
}

void
LogTreeResponse::__cleanup()
{
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//
}

void
LogTreeResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("LogTree")) {
			jsonToValue(&data, node, "LogTree", "LogTree");
		} else {
			
			LogTree* obj = static_cast<LogTree*> (&data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

LogTreeResponse::LogTreeResponse(char* json)
{
	this->fromJson(json);
}

char*
LogTreeResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LogTree")) {
		LogTree obj = getData();
		node = converttoJson(&obj, "LogTree", "");
	}
	else {
		
		LogTree obj = static_cast<LogTree> (getData());
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

LogTree
LogTreeResponse::getData()
{
	return data;
}

void
LogTreeResponse::setData(LogTree  data)
{
	this->data = data;
}


