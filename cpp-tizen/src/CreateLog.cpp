#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateLog.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateLog::CreateLog()
{
	//__init();
}

CreateLog::~CreateLog()
{
	//__cleanup();
}

void
CreateLog::__init()
{
	//title = std::string();
	//text = std::string();
	//parentLogId = long(0);
}

void
CreateLog::__cleanup()
{
	//if(title != NULL) {
	//
	//delete title;
	//title = NULL;
	//}
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(parentLogId != NULL) {
	//
	//delete parentLogId;
	//parentLogId = NULL;
	//}
	//
}

void
CreateLog::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *titleKey = "title";
	node = json_object_get_member(pJsonObject, titleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&title, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *parentLogIdKey = "parentLogId";
	node = json_object_get_member(pJsonObject, parentLogIdKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&parentLogId, node, "long long", "");
		} else {
			
		}
	}
}

CreateLog::CreateLog(char* json)
{
	this->fromJson(json);
}

char*
CreateLog::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *titleKey = "title";
	json_object_set_member(pJsonObject, titleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("long long")) {
		long long obj = getParentLogId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *parentLogIdKey = "parentLogId";
	json_object_set_member(pJsonObject, parentLogIdKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CreateLog::getTitle()
{
	return title;
}

void
CreateLog::setTitle(std::string  title)
{
	this->title = title;
}

std::string
CreateLog::getText()
{
	return text;
}

void
CreateLog::setText(std::string  text)
{
	this->text = text;
}

long long
CreateLog::getParentLogId()
{
	return parentLogId;
}

void
CreateLog::setParentLogId(long long  parentLogId)
{
	this->parentLogId = parentLogId;
}


