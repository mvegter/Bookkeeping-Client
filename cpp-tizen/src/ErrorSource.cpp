#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ErrorSource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ErrorSource::ErrorSource()
{
	//__init();
}

ErrorSource::~ErrorSource()
{
	//__cleanup();
}

void
ErrorSource::__init()
{
	//pointer = std::string();
}

void
ErrorSource::__cleanup()
{
	//if(pointer != NULL) {
	//
	//delete pointer;
	//pointer = NULL;
	//}
	//
}

void
ErrorSource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *pointerKey = "pointer";
	node = json_object_get_member(pJsonObject, pointerKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&pointer, node, "std::string", "");
		} else {
			
		}
	}
}

ErrorSource::ErrorSource(char* json)
{
	this->fromJson(json);
}

char*
ErrorSource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getPointer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *pointerKey = "pointer";
	json_object_set_member(pJsonObject, pointerKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ErrorSource::getPointer()
{
	return pointer;
}

void
ErrorSource::setPointer(std::string  pointer)
{
	this->pointer = pointer;
}


