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
	//parentLog = long(0);
	//rootLog = long(0);
	//tag = new FilterLogsTagOptions();
}

void
FilterLogsOptions::__cleanup()
{
	//if(origin != NULL) {
	//
	//delete origin;
	//origin = NULL;
	//}
	//if(parentLog != NULL) {
	//
	//delete parentLog;
	//parentLog = NULL;
	//}
	//if(rootLog != NULL) {
	//
	//delete rootLog;
	//rootLog = NULL;
	//}
	//if(tag != NULL) {
	//
	//delete tag;
	//tag = NULL;
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
	const gchar *parentLogKey = "parentLog";
	node = json_object_get_member(pJsonObject, parentLogKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&parentLog, node, "long long", "");
		} else {
			
		}
	}
	const gchar *rootLogKey = "rootLog";
	node = json_object_get_member(pJsonObject, rootLogKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&rootLog, node, "long long", "");
		} else {
			
		}
	}
	const gchar *tagKey = "tag";
	node = json_object_get_member(pJsonObject, tagKey);
	if (node !=NULL) {
	

		if (isprimitive("FilterLogsTagOptions")) {
			jsonToValue(&tag, node, "FilterLogsTagOptions", "FilterLogsTagOptions");
		} else {
			
			FilterLogsTagOptions* obj = static_cast<FilterLogsTagOptions*> (&tag);
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
	if (isprimitive("long long")) {
		long long obj = getParentLog();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *parentLogKey = "parentLog";
	json_object_set_member(pJsonObject, parentLogKey, node);
	if (isprimitive("long long")) {
		long long obj = getRootLog();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *rootLogKey = "rootLog";
	json_object_set_member(pJsonObject, rootLogKey, node);
	if (isprimitive("FilterLogsTagOptions")) {
		FilterLogsTagOptions obj = getTag();
		node = converttoJson(&obj, "FilterLogsTagOptions", "");
	}
	else {
		
		FilterLogsTagOptions obj = static_cast<FilterLogsTagOptions> (getTag());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *tagKey = "tag";
	json_object_set_member(pJsonObject, tagKey, node);
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

long long
FilterLogsOptions::getParentLog()
{
	return parentLog;
}

void
FilterLogsOptions::setParentLog(long long  parentLog)
{
	this->parentLog = parentLog;
}

long long
FilterLogsOptions::getRootLog()
{
	return rootLog;
}

void
FilterLogsOptions::setRootLog(long long  rootLog)
{
	this->rootLog = rootLog;
}

FilterLogsTagOptions
FilterLogsOptions::getTag()
{
	return tag;
}

void
FilterLogsOptions::setTag(FilterLogsTagOptions  tag)
{
	this->tag = tag;
}


