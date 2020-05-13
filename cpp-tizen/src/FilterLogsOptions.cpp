#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FilterLogsOptions.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FilterLogsOptions::FilterLogsOptions()
{
	//__init();
}

FilterLogsOptions::~FilterLogsOptions()
{
	//__cleanup();
}

void
FilterLogsOptions::__init()
{
	//origin = new LogOrigin();
}

void
FilterLogsOptions::__cleanup()
{
	//if(origin != NULL) {
	//
	//delete origin;
	//origin = NULL;
	//}
	//
}

void
FilterLogsOptions::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *originKey = "origin";
	node = json_object_get_member(pJsonObject, originKey);
	if (node !=NULL) {
	

		if (isprimitive("LogOrigin")) {
			jsonToValue(&origin, node, "LogOrigin", "LogOrigin");
		} else {
			
			LogOrigin* obj = static_cast<LogOrigin*> (&origin);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

FilterLogsOptions::FilterLogsOptions(char* json)
{
	this->fromJson(json);
}

char*
FilterLogsOptions::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LogOrigin")) {
		LogOrigin obj = getOrigin();
		node = converttoJson(&obj, "LogOrigin", "");
	}
	else {
		
		LogOrigin obj = static_cast<LogOrigin> (getOrigin());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *originKey = "origin";
	json_object_set_member(pJsonObject, originKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

LogOrigin
FilterLogsOptions::getOrigin()
{
	return origin;
}

void
FilterLogsOptions::setOrigin(LogOrigin  origin)
{
	this->origin = origin;
}


